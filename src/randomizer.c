#include "randomizer.h"

#if RZ_ENABLE == TRUE
#include "new_game.h"
#include "item.h"
#include "event_data.h"
#include "field_control_avatar.h"
#include "pokemon.h"
#include "script.h"
#include "data.h"

bool8 RandomizerFeatureEnabled(enum RandomizerFeature feature)
{
    switch(feature)
    {
        case RZ_WILD_MON:
            return FlagGet(RZ_FLAG_WILD_MON);
        case RZ_FIELD_ITEMS:
            return FlagGet(RZ_FLAG_FIELD_ITEMS);
        case RZ_TRAINER_MON:
            return FlagGet(RZ_FLAG_TRAINER_MON);
        case RZ_FIXED_MON:
            return FlagGet(RZ_FLAG_FIXED_MON);
        case RZ_STARTERS:
            return FlagGet(RZ_FLAG_STARTERS);
        default:
            return FALSE;
    }
}

u32 GetRandomizerSeed(void)
{
    #if RZ_TRAINER_ID_IS_SEED == TRUE
        return GetTrainerId(gSaveBlock2Ptr->playerTrainerId);
    #else
        u32 result;
        result = ((u32)VarGet(RZ_VAR_SEED_H) << 16) | VarGet(RZ_VAR_SEED_L);
        return result;
    #endif
}

bool8 SetRandomizerSeed(u32 newSeed)
{
    #if RZ_TRAINER_ID_IS_SEED == TRUE
        // It isn't possible to set the randomizer seed in this case.
        return FALSE;
    #else
        VarSet(RZ_VAR_SEED_L, (u16)newSeed);
        VarSet(RZ_VAR_SEED_H, (u16)(newSeed >> 16));
        return TRUE;
    #endif
}

u16 GetRandomizerOption(enum RandomizerOption option)
{
    switch(option) {
        case RZO_SPECIES_MODE:
            return VarGet(RZ_VAR_SPECIES_MODE);
        default:
            return 0;
    }
}

struct Sfc32State RandomizerRandSeed(enum RandomizerReason reason, u32 data1, u16 data2)
{
    struct Sfc32State state;
    u32 i;
    state.a = GetRandomizerSeed();
    state.b = ((u32)reason << 16) | data2;
    state.c = data1;
    state.ctr = RANDOMIZER_STREAM;

    for (i = 0; i < 10; i++)
    {
        _SFC32_Next_Stream(&state, RANDOMIZER_STREAM);
    }

    return state;
}


// This uses a debiased multiplication technique sometimes known as
// Lemire's method. It usually does not need to do a division.
u16 RandomizerNextRange(struct Sfc32State* state, u16 range)
{
    u16 lower;
    u32 scaled;

    if (range < 2)
        return 0;

    scaled = (u32)RandomizerNext(state) * (u32)range;
    lower = (u16)scaled;

    if (lower < range)
    {
        u16 adjusted_range;
        adjusted_range = (u16)((UINT16_MAX + 1u) % range);
        while (lower < adjusted_range)
        {
            scaled = (u32)RandomizerNext(state) * (u32)range;
            lower = (u16)scaled;
        }
    }

    return scaled >> 16;
}

// Functions for producing single seeded random numbers.
u16 RandomizerRand(enum RandomizerReason reason, u32 data1, u16 data2)
{
    struct Sfc32State state;
    state = RandomizerRandSeed(reason, data1, data2);
    return RandomizerNext(&state);
}

u16 RandomizerRandRange(enum RandomizerReason reason, u32 data1, u16 data2, u16 range)
{
    struct Sfc32State state;
    state = RandomizerRandSeed(reason, data1, data2);
    return RandomizerNextRange(&state, range);
}

// Utility functions for the field item randomizer.
static inline bool8 IsItemTMHM(u16 itemId)
{
    return ItemId_GetPocket(itemId) == POCKET_TM_HM;
}

static inline bool8 IsItemHM(u16 itemId)
{
    return itemId >= ITEM_HM01 && IsItemTMHM(itemId);
}

static inline bool8 IsKeyItem(u16 itemId)
{
    return ItemId_GetPocket(itemId) == POCKET_KEY_ITEMS;
}

static inline bool8 ShouldRandomizeItem(u16 itemId)
{
    return !(IsItemHM(itemId) || IsKeyItem(itemId) || itemId == ITEM_NONE);
}

//#include "data/randomizer/randomizer_misc_item_list.h"

u16 RandomizeFoundItem(u16 itemId, u8 mapNum, u8 mapGroup, u8 localId)
{
    struct Sfc32State state;
    u16 result;
    u32 mapSeed;

    // Don't randomize HMs or key items, that can make the game unwinnable.
    if (!ShouldRandomizeItem(itemId))
        return itemId;

    mapSeed = ((u32)mapGroup) << 16;
    mapSeed |= ((u32)mapNum) << 8;
    mapSeed |= localId;

    state = RandomizerRandSeed(RZR_FIELD_ITEM, mapSeed, itemId);

    // Randomize TMs to TMs. Because HMs shouldn't be randomized, we can assume
    // this is a TM.
    if (IsItemTMHM(itemId))
        return RandomizerNextRange(&state, RZ_MAX_TM - ITEM_TM01 + 1) + ITEM_TM01;

    // Randomize everything else to everything else.
    do {
        // 1 is added so that ITEM_NONE is never returned.
        result = RandomizerNextRange(&state, ITEMS_COUNT) + 1;
    } while(!ShouldRandomizeItem(result) || IsItemTMHM(result));

    return result;

}

// Takes a SpecialVar as an argument to simplify handling separate scripts.
static inline void RandomizeFoundItemScript(u16 *scriptVar)
{
    if (RandomizerFeatureEnabled(RZ_FIELD_ITEMS))
    {
        u8 objEvent = gSelectedObjectEvent;
        *scriptVar = RandomizeFoundItem(
            *scriptVar,
            gObjectEvents[objEvent].mapGroup,
            gObjectEvents[objEvent].mapNum,
            gObjectEvents[objEvent].localId);
    }
}

// These functions are invoked by the scripts that handle found items.
void FindItemRandomize_NativeCall(struct ScriptContext *ctx)
{
    RandomizeFoundItemScript(&gSpecialVar_0x8000);
}

void FindHiddenItemRandomize_NativeCall(struct ScriptContext *ctx)
{
    RandomizeFoundItemScript(&gSpecialVar_0x8005);
}

static inline bool32 IsRandomizerLegendary(u16 species)
{
    return gSpeciesInfo[species].isLegendary || gSpeciesInfo[species].isMythical;
}

EWRAM_DATA static u16 sRandomizerLegendaryCount = 0;
void RandomizerCountLegendarySpecies(void)
{
    u32 i;
    u16 count;
    count = 0;
    for (i = 1; i < RANDOMIZER_MAX_MON; i++)
    {
        if(IsRandomizerLegendary(i))
            count++;
    }
    sRandomizerLegendaryCount = count;
}


u16 RandomizeMon(enum RandomizerReason reason, enum RandomizerSpeciesMode mode, u32 seed, u16 species)
{
    switch(mode) {
        case MON_RANDOM_LEGEND_AWARE:
            if (IsRandomizerLegendary(species) && sRandomizerLegendaryCount > 0)
            {
                u16 i;
                u16 legendCount;
                u16 target = RandomizerRandRange(reason, seed, species,
                    sRandomizerLegendaryCount);
                legendCount = 0;
                for (i = 1; i < RANDOMIZER_MAX_MON; i++)
                {
                    if(IsRandomizerLegendary(i))
                    {
                        // RandRange returns 0 to the number of legendaries
                        // minus 1, so check before incrementing.
                        if(target == legendCount)
                            return i;
                        legendCount++;
                    }
                }
                // Failsafe. This shouldn't happen, though...
                return SPECIES_MEW;
            }
            else
            {
                u16 candidate;
                do
                {
                    candidate =
                    RandomizerRandRange(reason, seed, species, RANDOMIZER_MAX_MON) + 1;
                } while(IsRandomizerLegendary(candidate));
                return candidate;
            }
        case MON_RANDOM:
        default:
            // 1 is added so that SPECIES_NONE is never returned.
            return RandomizerRandRange(reason, seed, species, RANDOMIZER_MAX_MON) + 1;
    }

}

u16 RandomizeWildEncounter(u16 species, u8 mapNum, u8 mapGroup, enum WildArea area, u8 slot)
{
    if (RandomizerFeatureEnabled(RZ_WILD_MON))
    {
        u32 seed;
        seed = ((u32)mapGroup) << 24;
        seed |= ((u32)mapNum) << 16;
        seed |= ((u32)area) << 8;
        seed |= slot;

        return RandomizeMon(RZR_WILD_ENCOUNTER, GetRandomizerOption(RZO_SPECIES_MODE), seed, species);
    }

    return species;
}

// This is used in the Pokédex area map code.
bool8 IsRandomizationPossible(u16 tableSpecies, u16 matchSpecies)
{
    const enum RandomizerSpeciesMode mode = GetRandomizerOption(RZO_SPECIES_MODE);
    switch(mode)
    {
        case MON_RANDOM_LEGEND_AWARE:
            // Non-legendaries and legendaries can't mix.
            if(IsRandomizerLegendary(tableSpecies) != IsRandomizerLegendary(matchSpecies))
                return FALSE;
            return TRUE;
        case MON_RANDOM:
        default:
            // Anything can happen!
            return TRUE;
    }
}

u16 RandomizeTrainerMon(u16 trainerId, u8 slot, u8 totalMons, u16 species)
{
    if (RandomizerFeatureEnabled(RZ_TRAINER_MON))
    {
        u32 seed;
        seed = (u32)trainerId << 16;
        seed |= (u32)totalMons << 8;
        seed |= slot;

        return RandomizeMon(RZR_TRAINER_PARTY, GetRandomizerOption(RZO_SPECIES_MODE), seed, species);
    }

    return species;
}

u16 RandomizeFixedEncounterMon(u16 species, u8 mapNum, u8 mapGroup, u8 localId)
{
    if (RandomizerFeatureEnabled(RZ_FIXED_MON))
    {
        u32 seed;
        seed = (u32)mapNum << 16;
        seed |= (u32)mapGroup << 8;
        seed |= localId;

        return RandomizeMon(RZR_FIXED_ENCOUNTER, GetRandomizerOption(RZO_SPECIES_MODE), seed, species);
    }

    return species;
}

u16 RandomizeStarter(u16 species, u16 starterSlot)
{
    if (RandomizerFeatureEnabled(RZ_STARTERS))
    {
        return RandomizeMon(RZR_STARTER, GetRandomizerOption(RZO_SPECIES_MODE), starterSlot, species);
    }
}

#endif // RZ_ENABLE
