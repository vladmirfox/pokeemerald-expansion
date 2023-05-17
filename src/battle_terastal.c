#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_terastal.h"
#include "pokemon.h"
#include "util.h"
#include "constants/abilities.h"

// Returns whether a battler can Terastallize.
bool32 CanTerastallize(u32 battlerId)
{
    return TRUE;
}

// Returns a battler's Tera type.
u32 GetTeraType(u32 battlerId)
{
    struct Pokemon *mon = &GetBattlerParty(battlerId)[gBattlerPartyIndexes[battlerId]];
    return GetMonData(mon, MON_DATA_TERA_TYPE);
}

// Returns whether a battler is terastallized.
bool32 IsTerastallized(u32 battlerId)
{
    u32 side = GetBattlerSide(battlerId);
    return gBattleStruct->tera.isTerastallized[side] & gBitTable[gBattlerPartyIndexes[battlerId]];
}

// Returns the STAB power multiplier to use when Terastallized.
u32 GetTeraMultiplier(u32 battlerId, u32 type)
{
    u32 teraType = GetTeraType(battlerId);
    bool32 hasAdaptability = (GetBattlerAbility(battlerId) == ABILITY_ADAPTABILITY);

    // Safety check.
    if (!IsTerastallized(battlerId))
        return UQ_4_12(1.0);

    // Power multipliers from Smogon Research thread.
    if (type == teraType && IS_BATTLER_OF_TYPE(battlerId, type))
    {
        if (hasAdaptability)
            return UQ_4_12(2.25);
        else
            return UQ_4_12(2.0);
    }
    else if ((type == teraType && !IS_BATTLER_OF_TYPE(battlerId, type))
             || (type != teraType && IS_BATTLER_OF_TYPE(battlerId, type)))
    {
        if (hasAdaptability)
            return UQ_4_12(2.0);
        else
            return UQ_4_12(1.5);
    }
    else
    {
        return UQ_4_12(1.0);
    }
}
