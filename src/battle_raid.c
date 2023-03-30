#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_raid.h"
#include "battle_scripts.h"
#include "battle_setup.h"
#include "data.h"
#include "event_data.h"
#include "malloc.h"
#include "pokemon.h"
#include "constants/battle_raid.h"
#include "constants/battle_string_ids.h"
#include "constants/items.h"
#include "constants/moves.h"

// Settings for each Raid Type.
const struct RaidType gRaidTypes[NUM_RAID_TYPES] = {
    [RAID_TYPE_MAX] = {
        .shield = RAID_GEN_8,
        .shockwave = RAID_GEN_8,
        .rules = RAID_GEN_8,
        .gimmick = GIMMICK_DYNAMAX,
    },
    [RAID_TYPE_TERA] = {
        .shield = RAID_GEN_9,
        .shockwave = RAID_GEN_9,
        .rules = RAID_GEN_9,
        .gimmick = GIMMICK_TERA,
    },
    [RAID_TYPE_MEGA] = {
        .shield = RAID_GEN_8,
        .shockwave = RAID_GEN_8,
        .rules = RAID_GEN_8,
        .gimmick = GIMMICK_MEGA,
    },
};

// Rank-based HP Multipliers
static const u16 sGen8RaidHPMultipliers[] = {
    [RAID_RANK_1] = UQ_4_12(1.4),
    [RAID_RANK_2] = UQ_4_12(1.6),
    [RAID_RANK_3] = UQ_4_12(1.9),
    [RAID_RANK_4] = UQ_4_12(2.5),
    [RAID_RANK_5] = UQ_4_12(3.0),
    [RAID_RANK_6] = UQ_4_12(3.0),
    [RAID_RANK_7] = UQ_4_12(3.0),
};

static const u16 sGen9RaidHPMultipliers[] = {
    [RAID_RANK_1] = UQ_4_12(5.0),
    [RAID_RANK_2] = UQ_4_12(5.0),
    [RAID_RANK_3] = UQ_4_12(8.0),
    [RAID_RANK_4] = UQ_4_12(12.0),
    [RAID_RANK_5] = UQ_4_12(20.0),
    [RAID_RANK_6] = UQ_4_12(25.0),
    [RAID_RANK_7] = UQ_4_12(30.0),
};

EWRAM_DATA struct RaidData* gRaidData = NULL;

bool32 InitRaidData(void)
{
    // Initialize fields if needed.
    if (gRaidData == NULL)
        gRaidData = AllocZeroed(sizeof(struct RaidData));
    if (gRaidData->mon == NULL)
        gRaidData->mon = AllocZeroed(sizeof(struct Pokemon));
    if (gRaidData->partners == NULL) // TODO: use numPartners or set it here
        gRaidData->partners = AllocZeroed(3 * sizeof(struct Trainer));

    // TODO: Generate the Pokemon, rank, and partners based on a seed.
    //       The above would be selected from a list based off map sections.
    gRaidData->rank = 6;
    CreateMon(gRaidData->mon, SPECIES_SALAMENCE, 50, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);

    return TRUE;
}

bool32 InitCustomRaidData(void)
{
    // Initialize fields if needed.
    if (gRaidData == NULL)
        gRaidData = AllocZeroed(sizeof(struct RaidData));
    if (gRaidData->mon == NULL)
        gRaidData->mon = AllocZeroed(sizeof(struct Pokemon));
    if (gRaidData->partners == NULL) // TODO: use numPartners or set it here
        gRaidData->partners = AllocZeroed(3 * sizeof(struct Trainer));

    gRaidData->raidType = gSpecialVar_0x8001;
    gRaidData->rank = gSpecialVar_0x8002;
    CreateMon(&gEnemyParty[0], gSpecialVar_0x8003, 50, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
    gRaidData->mon = &gEnemyParty[0];

    return TRUE;
}

void InitRaidBattleData(void)
{
    u8 i;

    gBattleStruct->raid.shield = 0;
    gBattleStruct->raid.shieldsRemaining = 0;
    gBattleStruct->raid.state |= RAID_INTRO_COMPLETE;
	gBattleStruct->raid.energy = B_POSITION_PLAYER_LEFT;

    // Zeroes sprite IDs for Gen 8-style shield.
    for (i = 0; i < MAX_SHIELD_COUNT; i++)
    {
        gBattleStruct->raid.shieldSpriteIds[i] = MAX_SPRITES;
    }

    // Update HP Multiplier.
    RecalcBattlerStats(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), &gEnemyParty[0]);
}

bool32 IsRaidBoss(u16 battlerId)
{
    return (gBattleTypeFlags & BATTLE_TYPE_RAID) && GetBattlerPosition(battlerId) == B_POSITION_OPPONENT_LEFT;
}

// Applies the HP multiplier for Raid Bosses.
void ApplyRaidHPMultiplier(u16 battlerId, struct Pokemon* mon)
{
    u16 mult;
    if (gRaidTypes[gRaidData->raidType].shield == RAID_GEN_8)
        mult = sGen8RaidHPMultipliers[gRaidData->rank];
    else
        mult = sGen9RaidHPMultipliers[gRaidData->rank];

    if (GetMonData(mon, MON_DATA_SPECIES) != SPECIES_SHEDINJA) {
        u16 hp = UQ_4_12_TO_INT((GetMonData(mon, MON_DATA_HP) * mult) + UQ_4_12_ROUND);
        u16 maxHP = UQ_4_12_TO_INT((GetMonData(mon, MON_DATA_MAX_HP) * mult) + UQ_4_12_ROUND);
        SetMonData(mon, MON_DATA_HP, &hp);
        SetMonData(mon, MON_DATA_MAX_HP, &maxHP);
    }
}

// Updates Raid Storm state and returns whether battle should end.
bool32 ShouldRaidKickPlayer(void)
{
    // Gen 8-style raids are capped at 10 turns.
    if (gRaidTypes[gRaidData->raidType].rules == RAID_GEN_8)
    {
        switch (gBattleResults.battleTurnCounter)
        {
            case RAID_STORM_TURNS_LEVEL_1:
                gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_GETTING_STRONGER;
                BattleScriptExecute(BattleScript_MaxRaidStormBrews);
                break;
            case RAID_STORM_TURNS_LEVEL_2:
                gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_GETTING_STRONGER;
                BattleScriptExecute(BattleScript_MaxRaidStormBrews);
                break;
            case RAID_STORM_TURNS_LEVEL_3:
                gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_GETTING_EVEN_STRONGER;
                BattleScriptExecute(BattleScript_MaxRaidStormBrews);
                break;
            case RAID_STORM_TURNS_MAX:
                gBattleCommunication[MULTIUSE_STATE] = RAID_GEN_8;
                gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_GETTING_TOO_STRONG;
                BattleScriptExecute(BattleScript_RaidDefeat);
                return TRUE;
        }
    }
    // Gen 9-style raids are capped at 7.5 minutes.
    else if (gBattleStruct->battleTimer >= RAID_STORM_TIMER_MAX)
    {
        gBattleCommunication[MULTIUSE_STATE] = RAID_GEN_9;
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_PKMN_RELEASED_ENERGY;
        BattleScriptExecute(BattleScript_RaidDefeat);
        return TRUE;
    }
    else if (gBattleStruct->battleTimer >= RAID_STORM_TIMER_WARNING)
    {
        BattleScriptExecute(BattleScript_TeraRaidTimerLow);
    }
    return FALSE;
}
