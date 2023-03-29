#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_raid.h"
#include "battle_setup.h"
#include "data.h"
#include "event_data.h"
#include "malloc.h"
#include "pokemon.h"
#include "constants/items.h"
#include "constants/moves.h"

// Settings for each Raid Type.
const struct RaidType gRaidTypes[NUM_RAID_TYPES] = {
    [MAX_RAID] = {
        .shield = RAID_GEN_8,
        .shockwave = RAID_GEN_8,
        .rules = RAID_GEN_8,
        .gimmick = GIMMICK_DYNAMAX,
    },
    [TERA_RAID] = {
        .shield = RAID_GEN_9,
        .shockwave = RAID_GEN_9,
        .rules = RAID_GEN_9,
        .gimmick = GIMMICK_TERA,
    },
};

EWRAM_DATA struct RaidData* gRaidData = NULL;

bool32 InitRaidData(void) {
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

bool32 InitCustomRaidData(void) {
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

bool32 IsRaidBoss(u16 battlerId) {
    return (gBattleTypeFlags & BATTLE_TYPE_RAID) && GetBattlerPosition(battlerId) == B_POSITION_OPPONENT_LEFT;
}
