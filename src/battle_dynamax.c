#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_scripts.h"
#include "battle_script_commands.h"
#include "battle_gimmick.h"
#include "data.h"
#include "event_data.h"
#include "graphics.h"
#include "item.h"
#include "pokemon.h"
#include "random.h"
#include "sprite.h"
#include "string_util.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_string_ids.h"
#include "constants/flags.h"
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/moves.h"

static u8 GetMaxPowerTier(u32 move);

struct GMaxMove
{
    u16 species;
    u8 moveType;
    u16 gmaxMove;
};

static const struct GMaxMove sGMaxMoveTable[] =
{
    {SPECIES_VENUSAUR_GMAX,                   TYPE_GRASS,      MOVE_G_MAX_VINE_LASH},
    {SPECIES_BLASTOISE_GMAX,                  TYPE_WATER,      MOVE_G_MAX_CANNONADE},
    {SPECIES_CHARIZARD_GMAX,                  TYPE_FIRE,       MOVE_G_MAX_WILDFIRE},
    {SPECIES_BUTTERFREE_GMAX,                 TYPE_BUG,        MOVE_G_MAX_BEFUDDLE},
    {SPECIES_PIKACHU_GMAX,                    TYPE_ELECTRIC,   MOVE_G_MAX_VOLT_CRASH},
    {SPECIES_MEOWTH_GMAX,                     TYPE_NORMAL,     MOVE_G_MAX_GOLD_RUSH},
    {SPECIES_MACHAMP_GMAX,                    TYPE_FIGHTING,   MOVE_G_MAX_CHI_STRIKE},
    {SPECIES_GENGAR_GMAX,                     TYPE_GHOST,      MOVE_G_MAX_TERROR},
    {SPECIES_KINGLER_GMAX,                    TYPE_WATER,      MOVE_G_MAX_FOAM_BURST},
    {SPECIES_LAPRAS_GMAX,                     TYPE_ICE,        MOVE_G_MAX_RESONANCE},
    {SPECIES_EEVEE_GMAX,                      TYPE_NORMAL,     MOVE_G_MAX_CUDDLE},
    {SPECIES_SNORLAX_GMAX,                    TYPE_NORMAL,     MOVE_G_MAX_REPLENISH},
    {SPECIES_GARBODOR_GMAX,                   TYPE_POISON,     MOVE_G_MAX_MALODOR},
    {SPECIES_MELMETAL_GMAX,                   TYPE_STEEL,      MOVE_G_MAX_MELTDOWN},
    {SPECIES_RILLABOOM_GMAX,                  TYPE_GRASS,      MOVE_G_MAX_DRUM_SOLO},
    {SPECIES_CINDERACE_GMAX,                  TYPE_FIRE,       MOVE_G_MAX_FIREBALL},
    {SPECIES_INTELEON_GMAX,                   TYPE_WATER,      MOVE_G_MAX_HYDROSNIPE},
    {SPECIES_CORVIKNIGHT_GMAX,                TYPE_FLYING,     MOVE_G_MAX_WIND_RAGE},
    {SPECIES_ORBEETLE_GMAX,                   TYPE_PSYCHIC,    MOVE_G_MAX_GRAVITAS},
    {SPECIES_DREDNAW_GMAX,                    TYPE_WATER,      MOVE_G_MAX_STONESURGE},
    {SPECIES_COALOSSAL_GMAX,                  TYPE_ROCK,       MOVE_G_MAX_VOLCALITH},
    {SPECIES_FLAPPLE_GMAX,                    TYPE_GRASS,      MOVE_G_MAX_TARTNESS},
    {SPECIES_APPLETUN_GMAX,                   TYPE_GRASS,      MOVE_G_MAX_SWEETNESS},
    {SPECIES_SANDACONDA_GMAX,                 TYPE_GROUND,     MOVE_G_MAX_SANDBLAST},
    {SPECIES_TOXTRICITY_AMPED_GMAX,           TYPE_ELECTRIC,   MOVE_G_MAX_STUN_SHOCK},
    {SPECIES_TOXTRICITY_LOW_KEY_GMAX,         TYPE_ELECTRIC,   MOVE_G_MAX_STUN_SHOCK},
    {SPECIES_CENTISKORCH_GMAX,                TYPE_FIRE,       MOVE_G_MAX_CENTIFERNO},
    {SPECIES_HATTERENE_GMAX,                  TYPE_FAIRY,      MOVE_G_MAX_SMITE},
    {SPECIES_GRIMMSNARL_GMAX,                 TYPE_DARK,       MOVE_G_MAX_SNOOZE},
    {SPECIES_ALCREMIE_GMAX,                   TYPE_FAIRY,      MOVE_G_MAX_FINALE},
    {SPECIES_COPPERAJAH_GMAX,                 TYPE_STEEL,      MOVE_G_MAX_STEELSURGE},
    {SPECIES_DURALUDON_GMAX,                  TYPE_DRAGON,     MOVE_G_MAX_DEPLETION},
    {SPECIES_URSHIFU_SINGLE_STRIKE_GMAX,TYPE_DARK,       MOVE_G_MAX_ONE_BLOW},
    {SPECIES_URSHIFU_RAPID_STRIKE_GMAX, TYPE_WATER,      MOVE_G_MAX_RAPID_FLOW},
};

// Returns whether a battler can Dynamax.
bool32 CanDynamax(u32 battler)
{
    u16 species = gBattleMons[battler].species;
    u16 holdEffect = GetBattlerHoldEffect(battler, FALSE);

    // Prevents Zigzagoon from dynamaxing in vanilla.
    if (gBattleTypeFlags & BATTLE_TYPE_FIRST_BATTLE && GetBattlerSide(battler) == B_SIDE_OPPONENT)
        return FALSE;

    // Check if Player has a Dynamax Band.
    if (!TESTING && (GetBattlerPosition(battler) == B_POSITION_PLAYER_LEFT
        || (!(gBattleTypeFlags & BATTLE_TYPE_MULTI) && GetBattlerPosition(battler) == B_POSITION_PLAYER_RIGHT)))
    {
        if (!CheckBagHasItem(ITEM_DYNAMAX_BAND, 1))
            return FALSE;
        if (B_FLAG_DYNAMAX_BATTLE == 0 || (B_FLAG_DYNAMAX_BATTLE != 0 && !FlagGet(B_FLAG_DYNAMAX_BATTLE)))
            return FALSE;
    }

    // Check if species isn't allowed to Dynamax.
    if (GET_BASE_SPECIES_ID(species) == SPECIES_ZACIAN
        || GET_BASE_SPECIES_ID(species) == SPECIES_ZAMAZENTA
        || GET_BASE_SPECIES_ID(species) == SPECIES_ETERNATUS)
        return FALSE;

    // Check if Trainer has already Dynamaxed.
    if (HasTrainerUsedGimmick(battler, GIMMICK_DYNAMAX))
        return FALSE;

    // Check if AI battler is intended to Dynamaxed.
    if (!ShouldTrainerBattlerUseGimmick(battler, GIMMICK_DYNAMAX))
        return FALSE;

    // Check if battler has another gimmick active.
    if (GetActiveGimmick(battler) != GIMMICK_NONE)
        return FALSE;

    // Check if battler is holding a Z-Crystal or Mega Stone.
    if (!TESTING && (holdEffect == HOLD_EFFECT_Z_CRYSTAL || holdEffect == HOLD_EFFECT_MEGA_STONE))  // tests make this check already
        return FALSE;

    // TODO: Cannot Dynamax in a Max Raid if you don't have Dynamax Energy.
    // if (gBattleTypeFlags & BATTLE_TYPE_RAID && gBattleStruct->raid.dynamaxEnergy != battler)
    //    return FALSE;

    // No checks failed, all set!
    return TRUE;
}

// Returns whether a battler is transformed into a Gigantamax form.
bool32 IsGigantamaxed(u32 battler)
{
    struct Pokemon *mon = GetPartyBattlerData(battler);
    if ((gSpeciesInfo[gBattleMons[battler].species].isGigantamax) && GetMonData(mon, MON_DATA_GIGANTAMAX_FACTOR))
        return TRUE;
    return FALSE;
}

// Applies the HP Multiplier for Dynamaxed Pokemon and Raid Bosses.
void ApplyDynamaxHPMultiplier(struct Pokemon* mon)
{
    if (GetMonData(mon, MON_DATA_SPECIES) == SPECIES_SHEDINJA)
        return;
    else
    {
        uq4_12_t multiplier = GetDynamaxLevelHPMultiplier(GetMonData(mon, MON_DATA_DYNAMAX_LEVEL), FALSE);
        u32 hp = UQ_4_12_TO_INT((GetMonData(mon, MON_DATA_HP) * multiplier) + UQ_4_12_ROUND);
        u32 maxHP = UQ_4_12_TO_INT((GetMonData(mon, MON_DATA_MAX_HP) * multiplier) + UQ_4_12_ROUND);
        SetMonData(mon, MON_DATA_HP, &hp);
        SetMonData(mon, MON_DATA_MAX_HP, &maxHP);
    }
}

// Returns the non-Dynamax HP of a Pokemon.
u16 GetNonDynamaxHP(u32 battler)
{
    if (GetActiveGimmick(battler) != GIMMICK_DYNAMAX || gBattleMons[battler].species == SPECIES_SHEDINJA)
        return gBattleMons[battler].hp;
    else
    {
        struct Pokemon *mon = GetPartyBattlerData(battler);
        uq4_12_t mult = GetDynamaxLevelHPMultiplier(GetMonData(mon, MON_DATA_DYNAMAX_LEVEL), TRUE);
        u32 hp = UQ_4_12_TO_INT((gBattleMons[battler].hp * mult) + UQ_4_12_ROUND);
        return hp;
    }
}

// Returns the non-Dynamax Max HP of a Pokemon.
u16 GetNonDynamaxMaxHP(u32 battler)
{
    if (GetActiveGimmick(battler) != GIMMICK_DYNAMAX || gBattleMons[battler].species == SPECIES_SHEDINJA)
        return gBattleMons[battler].maxHP;
    else
    {
        struct Pokemon *mon = GetPartyBattlerData(battler);
        uq4_12_t mult = GetDynamaxLevelHPMultiplier(GetMonData(mon, MON_DATA_DYNAMAX_LEVEL), TRUE);
        u32 maxHP = UQ_4_12_TO_INT((gBattleMons[battler].maxHP * mult) + UQ_4_12_ROUND);
        return maxHP;
    }
}

// Sets flags used for Dynamaxing and checks Gigantamax forms.
void ActivateDynamax(u32 battler)
{
    // Set appropriate use flags.
    SetActiveGimmick(battler, GIMMICK_DYNAMAX);
    SetGimmickAsActivated(battler, GIMMICK_DYNAMAX);
    gBattleStruct->dynamax.dynamaxTurns[battler] = DYNAMAX_TURNS_COUNT;

    // Substitute is removed upon Dynamaxing.
    gBattleMons[battler].status2 &= ~STATUS2_SUBSTITUTE;
    ClearBehindSubstituteBit(battler);

    // Choiced Moves are reset upon Dynamaxing.
    gBattleStruct->choicedMove[battler] = MOVE_NONE;

    // Try Gigantamax form change.
    if (!(gBattleMons[battler].status2 & STATUS2_TRANSFORMED)) // Ditto cannot Gigantamax.
        TryBattleFormChange(battler, FORM_CHANGE_BATTLE_GIGANTAMAX);

    BattleScriptExecute(BattleScript_DynamaxBegins);
}

// Unsets the flags used for Dynamaxing and reverts max HP if needed.
void UndoDynamax(u32 battler)
{
    u8 side = GetBattlerSide(battler);
    u8 monId = gBattlerPartyIndexes[battler];

    // Revert HP if battler is still Dynamaxed.
    if (GetActiveGimmick(battler) == GIMMICK_DYNAMAX)
    {
        struct Pokemon *mon = (side == B_SIDE_PLAYER) ? &gPlayerParty[monId] : &gEnemyParty[monId];
        uq4_12_t mult = GetDynamaxLevelHPMultiplier(GetMonData(mon, MON_DATA_DYNAMAX_LEVEL), TRUE);
        gBattleMons[battler].hp = UQ_4_12_TO_INT((GetMonData(mon, MON_DATA_HP) * mult + 1) + UQ_4_12_ROUND); // round up
        SetMonData(mon, MON_DATA_HP, &gBattleMons[battler].hp);
        CalculateMonStats(mon);
    }

    // Makes sure there are no Dynamax flags set, including on switch / faint.
    SetActiveGimmick(battler, GIMMICK_NONE);
    gBattleStruct->dynamax.dynamaxTurns[battler] = 0;

    // Undo form change if needed.
    if (IsGigantamaxed(battler))
        TryBattleFormChange(battler, FORM_CHANGE_END_BATTLE);
}

// Certain moves are blocked by Max Guard that normally ignore protection.
bool32 IsMoveBlockedByMaxGuard(u32 move)
{
    switch (move)
    {
        case MOVE_BLOCK:
        case MOVE_FLOWER_SHIELD:
        case MOVE_GEAR_UP:
        case MOVE_MAGNETIC_FLUX:
        case MOVE_PHANTOM_FORCE:
        case MOVE_PSYCH_UP:
        case MOVE_SHADOW_FORCE:
        case MOVE_TEATIME:
        case MOVE_TRANSFORM:
            return TRUE;
    }
    return FALSE;
}

// Weight-based moves (and some other moves in Raids) are blocked by Dynamax.
bool32 IsMoveBlockedByDynamax(u32 move)
{
    // TODO: Certain moves are banned in raids.
    switch (GetMoveEffect(move))
    {
        case EFFECT_HEAT_CRASH:
        case EFFECT_LOW_KICK:
            return TRUE;
    }
    return FALSE;
}

static u16 GetTypeBasedMaxMove(u32 battler, u32 type)
{
    // Gigantamax check
    u32 i;
    u32 species = gBattleMons[battler].species;
    u32 targetSpecies = species;

    if (!gSpeciesInfo[species].isGigantamax)
        targetSpecies = GetBattleFormChangeTargetSpecies(battler, FORM_CHANGE_BATTLE_GIGANTAMAX);

    if (targetSpecies != species)
        species = targetSpecies;

    if (gSpeciesInfo[species].isGigantamax)
    {
        for (i = 0; i < ARRAY_COUNT(sGMaxMoveTable); i++)
        {
            if (sGMaxMoveTable[i].species == species && sGMaxMoveTable[i].moveType == type)
                return sGMaxMoveTable[i].gmaxMove;
        }
    }

    // Regular Max Move
    if (gTypesInfo[type].maxMove == MOVE_NONE) // failsafe
        return gTypesInfo[0].maxMove;
    return gTypesInfo[type].maxMove;
}

// Returns the appropriate Max Move or G-Max Move for a battler to use.
u16 GetMaxMove(u32 battler, u32 baseMove)
{
    u32 moveType;
    SetTypeBeforeUsingMove(baseMove, battler);
    moveType = GetBattleMoveType(baseMove);

    if (baseMove == MOVE_NONE) // for move display
    {
        return MOVE_NONE;
    }
    else if (baseMove == MOVE_STRUGGLE)
    {
        return MOVE_STRUGGLE;
    }
    else if (GetMoveCategory(baseMove) == DAMAGE_CATEGORY_STATUS)
    {
        return MOVE_MAX_GUARD;
    }
    else
    {
        return GetTypeBasedMaxMove(battler, moveType);
    }
}

// First value is for Fighting, Poison and Multi-Attack. The second is for everything else.
enum
{
    MAX_POWER_TIER_1,   //  70 or 90 damage
    MAX_POWER_TIER_2,   // 75 or 100 damage
    MAX_POWER_TIER_3,   // 80 or 110 damage
    MAX_POWER_TIER_4,   // 85 or 120 damage
    MAX_POWER_TIER_5,   // 90 or 130 damage
    MAX_POWER_TIER_6,   // 95 or 140 damage
    MAX_POWER_TIER_7,   // 100 or 130 damage
    MAX_POWER_TIER_8,   // 100 or 150 damage
};

// Gets the base power of a Max Move.
u8 GetMaxMovePower(u32 move)
{
    u8 tier;
    // G-Max Drum Solo, G-Max Hydrosnipe, and G-Max Fireball always have 160 base power.
    if (GetMoveMaxEffect(GetMaxMove(gBattlerAttacker, move)) == MAX_EFFECT_FIXED_POWER)
        return 160;

    // Exceptions to all other rules below:
    switch (move)
    {
        case MOVE_TRIPLE_KICK:   return 80;
        case MOVE_GEAR_GRIND:    return 100;
        case MOVE_DUAL_WINGBEAT: return 100;
        case MOVE_TRIPLE_AXEL:   return 140;
    }

    tier = GetMaxPowerTier(move);
    u32 moveType = GetMoveType(move);
    if (moveType == TYPE_FIGHTING
     || moveType == TYPE_POISON
     || move == MOVE_MULTI_ATTACK)
    {
        switch (tier)
        {
            default:
            case MAX_POWER_TIER_1: return 70;
            case MAX_POWER_TIER_2: return 75;
            case MAX_POWER_TIER_3: return 80;
            case MAX_POWER_TIER_4: return 85;
            case MAX_POWER_TIER_5: return 90;
            case MAX_POWER_TIER_6: return 95;
            case MAX_POWER_TIER_7: return 100;
            case MAX_POWER_TIER_8: return 100;
        }
    }
    else
    {
        switch (tier)
        {
            default:
            case MAX_POWER_TIER_1: return 90;
            case MAX_POWER_TIER_2: return 100;
            case MAX_POWER_TIER_3: return 110;
            case MAX_POWER_TIER_4: return 120;
            case MAX_POWER_TIER_5: return 130;
            case MAX_POWER_TIER_6: return 140;
            case MAX_POWER_TIER_7: return 130;
            case MAX_POWER_TIER_8: return 150;
        }
    }
}

static u8 GetMaxPowerTier(u32 move)
{
    u32 strikeCount = GetMoveStrikeCount(move);
    if (strikeCount >= 2 && strikeCount <= 5)
    {
        switch(GetMovePower(move))
        {
            case 0 ... 25:  return MAX_POWER_TIER_2;
            case 26 ... 30: return MAX_POWER_TIER_3;
            case 31 ... 35: return MAX_POWER_TIER_4;
            case 36 ... 50: return MAX_POWER_TIER_5;
            default:
            case 51 ... 60: return MAX_POWER_TIER_6;
        }
    }

    switch (GetMoveEffect(move))
    {
        case EFFECT_BIDE:
        case EFFECT_SUPER_FANG:
        case EFFECT_LEVEL_DAMAGE:
        case EFFECT_PSYWAVE:
        case EFFECT_COUNTER:
        case EFFECT_PRESENT:
        case EFFECT_BEAT_UP:
        case EFFECT_WEATHER_BALL:
        case EFFECT_FLING:
        case EFFECT_ELECTRO_BALL:
        case EFFECT_METAL_BURST:
        case EFFECT_TERRAIN_PULSE:
        case EFFECT_PUNISHMENT:
        case EFFECT_TRUMP_CARD:
        case EFFECT_FIXED_DAMAGE_ARG:
        case EFFECT_SPIT_UP:
        case EFFECT_NATURAL_GIFT:
        case EFFECT_MIRROR_COAT:
        case EFFECT_FINAL_GAMBIT:
            return MAX_POWER_TIER_2;
        case EFFECT_OHKO:
        case EFFECT_RETURN:
        case EFFECT_FRUSTRATION:
        case EFFECT_HEAT_CRASH:
        case EFFECT_STORED_POWER:
        case EFFECT_GYRO_BALL:
            return MAX_POWER_TIER_5;
        case EFFECT_MAGNITUDE:
        case EFFECT_POWER_BASED_ON_TARGET_HP:
            return MAX_POWER_TIER_6;
        case EFFECT_FLAIL:
        case EFFECT_LOW_KICK:
            return MAX_POWER_TIER_7;
        case EFFECT_MULTI_HIT:
            switch(GetMovePower(move))
            {
                case 0 ... 15:    return MAX_POWER_TIER_1;
                case 16 ... 18:   return MAX_POWER_TIER_2;
                case 19 ... 20:   return MAX_POWER_TIER_4;
                default:
                case 21 ... 25:   return MAX_POWER_TIER_5;
            }
    }

    switch (GetMovePower(move))
    {
        case 0 ... 40:    return MAX_POWER_TIER_1;
        case 45 ... 50:   return MAX_POWER_TIER_2;
        case 55 ... 60:   return MAX_POWER_TIER_3;
        case 65 ... 70:   return MAX_POWER_TIER_4;
        case 75 ... 100:  return MAX_POWER_TIER_5;
        case 110 ... 140: return MAX_POWER_TIER_6;
        default:
        case 150 ... 250: return MAX_POWER_TIER_8;
    }
}

// Returns whether a move is a Max Move or not.
bool32 IsMaxMove(u32 move)
{
    return move >= FIRST_MAX_MOVE && move <= LAST_MAX_MOVE;
}

// Assigns the multistring to use for the "Damage Non- Types" G-Max effect.
void ChooseDamageNonTypesString(u8 type)
{
    switch (type)
    {
        case TYPE_GRASS:
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_TRAPPED_WITH_VINES;
            break;
        case TYPE_WATER:
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_CAUGHT_IN_VORTEX;
            break;
        case TYPE_FIRE:
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_SURROUNDED_BY_FIRE;
            break;
        case TYPE_ROCK:
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_SURROUNDED_BY_ROCKS;
            break;
    }
}

// Returns the status effect that should be applied by a G-Max Move.
static u32 GetMaxMoveStatusEffect(u32 move)
{
    u8 maxEffect = GetMoveMaxEffect(move);
    switch (maxEffect)
    {
        // Status 1
        case MAX_EFFECT_PARALYZE_FOES:
            return STATUS1_PARALYSIS;
        case MAX_EFFECT_POISON_FOES:
            return STATUS1_POISON;
        case MAX_EFFECT_POISON_PARALYZE_FOES:
        {
            static const u8 sStunShockEffects[] = {STATUS1_PARALYSIS, STATUS1_POISON};
            return RandomElement(RNG_G_MAX_STUN_SHOCK, sStunShockEffects);
        }
        case MAX_EFFECT_EFFECT_SPORE_FOES:
        {
            static const u8 sBefuddleEffects[] = {STATUS1_PARALYSIS, STATUS1_POISON, STATUS1_SLEEP};
            return RandomElement(RNG_G_MAX_BEFUDDLE, sBefuddleEffects);
        }
        // Status 2
        case MAX_EFFECT_CONFUSE_FOES:
        case MAX_EFFECT_CONFUSE_FOES_PAY_DAY:
            return STATUS2_CONFUSION;
        case MAX_EFFECT_INFATUATE_FOES:
            return STATUS2_INFATUATION;
        case MAX_EFFECT_MEAN_LOOK:
            return STATUS2_ESCAPE_PREVENTION;
        case MAX_EFFECT_TORMENT_FOES:
            return STATUS2_TORMENT;
        default:
            return STATUS1_NONE;
    }
}

// Updates Dynamax HP multipliers and healthboxes.
void BS_UpdateDynamax(void)
{
    NATIVE_ARGS();
    u32 battler = gBattleScripting.battler;
    struct Pokemon *mon = GetPartyBattlerData(battler);

    if (!IsGigantamaxed(battler)) // RecalcBattlerStats will get called on form change.
        RecalcBattlerStats(battler, mon, GetActiveGimmick(battler) == GIMMICK_DYNAMAX);

    UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], mon, HEALTHBOX_ALL);
    gBattlescriptCurrInstr = cmd->nextInstr;
}

// Sets up sharp steel on the target's side.
void BS_SetSteelsurge(void)
{
    NATIVE_ARGS(const u8 *failInstr);
    u8 targetSide = GetBattlerSide(gBattlerTarget);
    if (gSideStatuses[targetSide] & SIDE_STATUS_STEELSURGE)
    {
        gBattlescriptCurrInstr = cmd->failInstr;
    }
    else
    {
        gSideStatuses[targetSide] |= SIDE_STATUS_STEELSURGE;
        gSideTimers[targetSide].steelsurgeAmount = 1;
        gBattlescriptCurrInstr = cmd->nextInstr;
    }
}

// Applies the status1 effect associated with a given G-Max Move.
// Could be expanded to function for any move.
void BS_TrySetStatus1(void)
{
    NATIVE_ARGS(const u8 *failInstr);
    u8 effect = 0;
    u32 status1 = GetMaxMoveStatusEffect(gCurrentMove);
    switch (status1)
    {
        case STATUS1_POISON:
            if (CanBePoisoned(gBattlerAttacker, gBattlerTarget, GetBattlerAbility(gBattlerTarget)))
            {
                gBattleMons[gBattlerTarget].status1 |= STATUS1_POISON;
                gBattleCommunication[MULTISTRING_CHOOSER] = 0;
                effect++;
            }
            break;
        case STATUS1_PARALYSIS:
            if (CanBeParalyzed(gBattlerTarget, GetBattlerAbility(gBattlerTarget)))
            {
                gBattleMons[gBattlerTarget].status1 |= STATUS1_PARALYSIS;
                gBattleCommunication[MULTISTRING_CHOOSER] = 3;
                effect++;
            }
            break;
        case STATUS1_SLEEP:
            if (CanBeSlept(gBattlerTarget, GetBattlerAbility(gBattlerTarget), BLOCKED_BY_SLEEP_CLAUSE))
            {
                if (B_SLEEP_TURNS >= GEN_5)
                    gBattleMons[gBattlerTarget].status1 |=  STATUS1_SLEEP_TURN((Random() % 3) + 2);
                else
                    gBattleMons[gBattlerTarget].status1 |=  STATUS1_SLEEP_TURN((Random() % 4) + 3);

                TryActivateSleepClause(gBattlerTarget, gBattlerPartyIndexes[gBattlerTarget]);
                gBattleCommunication[MULTISTRING_CHOOSER] = 4;
                effect++;
            }
            break;
    }
    if (effect)
    {
        gEffectBattler = gBattlerTarget;
        BtlController_EmitSetMonData(gBattlerTarget, BUFFER_A, REQUEST_STATUS_BATTLE, 0, sizeof(gBattleMons[gBattlerTarget].status1), &gBattleMons[gBattlerTarget].status1);
        MarkBattlerForControllerExec(gBattlerTarget);
        gBattlescriptCurrInstr = cmd->nextInstr;
    }
    else
    {
        gBattlescriptCurrInstr = cmd->failInstr;
    }
}

// Applies the status2 effect associated with a given G-Max Move.
void BS_TrySetStatus2(void)
{
    NATIVE_ARGS(const u8 *failInstr);
    u8 effect = 0;
    u32 status2 = GetMaxMoveStatusEffect(gCurrentMove);
    switch (status2)
    {
        case STATUS2_CONFUSION:
            if (CanBeConfused(gBattlerTarget))
            {
                gBattleMons[gBattlerTarget].status2 |= STATUS2_CONFUSION_TURN(((Random()) % 4) + 2);
                gBattleCommunication[MULTISTRING_CHOOSER] = 0;
                gBattleCommunication[MULTIUSE_STATE] = 1;
                effect++;
            }
            break;
        case STATUS2_INFATUATION:
        {
            u8 atkGender = GetGenderFromSpeciesAndPersonality(gBattleMons[gBattlerAttacker].species, gBattleMons[gBattlerAttacker].personality);
            u8 defGender = GetGenderFromSpeciesAndPersonality(gBattleMons[gBattlerTarget].species, gBattleMons[gBattlerTarget].personality);
            if (!(gBattleMons[gBattlerTarget].status2 & STATUS2_INFATUATION)
                && gBattleMons[gBattlerTarget].ability != ABILITY_OBLIVIOUS
                && !IsAbilityOnSide(gBattlerTarget, ABILITY_AROMA_VEIL)
                && atkGender != defGender
                && atkGender != MON_GENDERLESS
                && defGender != MON_GENDERLESS)
            {
                gBattleMons[gBattlerTarget].status2 |= STATUS2_INFATUATED_WITH(gBattlerAttacker);
                gBattleCommunication[MULTISTRING_CHOOSER] = 1;
                gBattleCommunication[MULTIUSE_STATE] = 2;
                effect++;
            }
            break;
        }
        case STATUS2_ESCAPE_PREVENTION:
            if (!(gBattleMons[gBattlerTarget].status2 & STATUS2_ESCAPE_PREVENTION))
            {
                gBattleMons[gBattlerTarget].status2 |= STATUS2_ESCAPE_PREVENTION;
                gDisableStructs[gBattlerTarget].battlerPreventingEscape = gBattlerAttacker;
                gBattleCommunication[MULTISTRING_CHOOSER] = 2;
                effect++;
            }
            break;
        case STATUS2_TORMENT:
            if (!(gBattleMons[gBattlerTarget].status2 & STATUS2_TORMENT)
                && !IsAbilityOnSide(gBattlerTarget, ABILITY_AROMA_VEIL))
            {
                gBattleMons[gBattlerTarget].status2 |= STATUS2_TORMENT;
                gDisableStructs[gBattlerTarget].tormentTimer = 3; // 3 turns excluding current turn
                gBattleCommunication[MULTISTRING_CHOOSER] = 3;
                effect++;
            }
            break;
    }
    if (effect)
    {
        gEffectBattler = gBattlerTarget;
        gBattlescriptCurrInstr = cmd->nextInstr;
    }
    else
    {
        gBattlescriptCurrInstr = cmd->failInstr;
    }
}

// Heals one-sixth of the target's HP, including for Dynamaxed targets.
void BS_HealOneSixth(void)
{
    NATIVE_ARGS(const u8* failInstr);
    gBattleStruct->moveDamage[gBattlerTarget] = gBattleMons[gBattlerTarget].maxHP / 6;
    if (gBattleStruct->moveDamage[gBattlerTarget] == 0)
        gBattleStruct->moveDamage[gBattlerTarget] = 1;
    gBattleStruct->moveDamage[gBattlerTarget] *= -1;

    if (gBattleMons[gBattlerTarget].hp == gBattleMons[gBattlerTarget].maxHP)
        gBattlescriptCurrInstr = cmd->failInstr;    // fail
    else
        gBattlescriptCurrInstr = cmd->nextInstr;    // can heal
}

// Recycles the target's item if it is specifically holding a berry.
void BS_TryRecycleBerry(void)
{
    NATIVE_ARGS(const u8 *failInstr);
    u16* usedHeldItem = &gBattleStruct->usedHeldItems[gBattlerPartyIndexes[gBattlerTarget]][GetBattlerSide(gBattlerTarget)];
    if (gBattleMons[gBattlerTarget].item == ITEM_NONE
        && gBattleStruct->changedItems[gBattlerTarget] == ITEM_NONE   // Will not inherit an item
        && ItemId_GetPocket(*usedHeldItem) == POCKET_BERRIES)
    {
        gLastUsedItem = *usedHeldItem;
        *usedHeldItem = ITEM_NONE;
        gBattleMons[gBattlerTarget].item = gLastUsedItem;

        BtlController_EmitSetMonData(gBattlerTarget, BUFFER_A, REQUEST_HELDITEM_BATTLE, 0, sizeof(gBattleMons[gBattlerTarget].item), &gBattleMons[gBattlerTarget].item);
        MarkBattlerForControllerExec(gBattlerTarget);

        gBattlescriptCurrInstr = cmd->nextInstr;
    }
    else
    {
        gBattlescriptCurrInstr = cmd->failInstr;
    }
}

// Goes to the jump instruction if the target is Dynamaxed.
void BS_JumpIfDynamaxed(void)
{
    NATIVE_ARGS(const u8 *jumpInstr);
    if ((GetActiveGimmick(gBattlerTarget) == GIMMICK_DYNAMAX))
        gBattlescriptCurrInstr = cmd->jumpInstr;
    else
        gBattlescriptCurrInstr = cmd->nextInstr;
}
