#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_terastal.h"
#include "event_data.h"
#include "palette.h"
#include "pokemon.h"
#include "sprite.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/hold_effects.h"
#include "constants/rgb.h"

// Sets flags and variables upon a battler's Terastallization.
void PrepareBattlerForTera(u32 battler)
{
    u32 side = GetBattlerSide(battler);
    // struct Pokemon *party = GetBattlerParty(battler);
    u32 index = gBattlerPartyIndexes[battler];

    // Update TeraData fields.
    gBattleStruct->tera.isTerastallized[side] |= gBitTable[index];
    gBattleStruct->tera.alreadyTerastallized[battler] = TRUE;

    // Remove Tera Orb charge.
#if B_FLAG_TERA_ORB_CHARGE != 0    
    if (side == B_SIDE_PLAYER
        && !(gBattleTypeFlags & BATTLE_TYPE_DOUBLE && !IsPartnerMonFromSameTrainer(battler)))
    {
        FlagClear(B_FLAG_TERA_ORB_CHARGE);
    }
#endif

    // TODO: Show indicator and do palette blend.
    // UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], &party[index], HEALTHBOX_ALL);
    // BlendPalette(OBJ_PLTT_ID(battler), 16, 8, GetTeraTypeRGB(GetTeraType(battler)));
    // CpuCopy32(gPlttBufferFaded + OBJ_PLTT_ID(battler), gPlttBufferUnfaded + OBJ_PLTT_ID(battler), PLTT_SIZEOF(16));
}

// Returns a battler's Tera type.
u32 GetBattlerTeraType(u32 battler)
{
    struct Pokemon *mon = &GetBattlerParty(battler)[gBattlerPartyIndexes[battler]];
    return GetMonData(mon, MON_DATA_TERA_TYPE);
}

// Returns whether a battler is terastallized.
bool32 IsTerastallized(u32 battler)
{
    u32 side = GetBattlerSide(battler);
    return gBattleStruct->tera.isTerastallized[side] & gBitTable[gBattlerPartyIndexes[battler]];
}


// Uses up a type's Stellar boost.
void ExpendTypeStellarBoost(u32 battler, u32 type)
{
    u32 side = GetBattlerSide(battler);
    if (type < 32) // avoid OOB access
        gBattleStruct->tera.stellarBoostFlags[side] |= gBitTable[type];
}

// Checks whether a type's Stellar boost has been expended.
bool32 IsTypeStellarBoosted(u32 battler, u32 type)
{
    u32 side = GetBattlerSide(battler);
    if (type < 32) // avoid OOB access
        return !(gBattleStruct->tera.stellarBoostFlags[side] & gBitTable[type]);
    else
        return FALSE;
}

// Returns the STAB power multiplier to use when Terastallized.
// Power multipliers from Smogon Research thread.
uq4_12_t GetTeraMultiplier(u32 battler, u32 type)
{
    u32 teraType = GetBattlerTeraType(battler);
    bool32 hasAdaptability = (GetBattlerAbility(battler) == ABILITY_ADAPTABILITY);

    // Safety check.
    if (!IsTerastallized(battler))
        return UQ_4_12(1.0);
    
    // Stellar-type checks.
    if (teraType == TYPE_STELLAR)
    {
        bool32 shouldBoost = IsTypeStellarBoosted(battler, type);
        if (IS_BATTLER_OF_BASE_TYPE(battler, type))
        {
            if (shouldBoost)
                return UQ_4_12(2.0);
            else
                return UQ_4_12(1.5);
        }
        else if (shouldBoost)
            return UQ_4_12(1.2);
        else
            return UQ_4_12(1.0);
    }
    // Base and Tera type.
    if (type == teraType && IS_BATTLER_OF_BASE_TYPE(battler, type))
    {
        if (hasAdaptability)
            return UQ_4_12(2.25);
        else
            return UQ_4_12(2.0);
    }
    // Base or Tera type only.
    else if ((type == teraType && !IS_BATTLER_OF_BASE_TYPE(battler, type))
             || (type != teraType && IS_BATTLER_OF_BASE_TYPE(battler, type)))
    {
        if (hasAdaptability)
            return UQ_4_12(2.0);
        else
            return UQ_4_12(1.5);
    }
    // Neither base or Tera type.
    else
    {
        return UQ_4_12(1.0);
    }
}
