#include "randomizer.h"

#if RZ_ENABLE == TRUE
#include "new_game.h"
#include "item.h"
#include "event_data.h"
#include "field_control_avatar.h"
#include "pokemon.h"
#include "script.h"

bool32 RandomizerFeatureEnabled(enum RandomizerFeature feature)
{
    return TRUE;
}

u32 GetRandomizerSeed(void)
{
    #if RZ_TRAINER_ID_IS_SEED == TRUE
        return GetTrainerId(gSaveBlock2Ptr->playerTrainerId);
    #else
        #error Separate randomizer seeds not yet implemented.
    #endif
}

struct Sfc32State RandomizerRandSeed(enum RandomizerReason reason, u32 data1, u16 data2)
{
    struct Sfc32State state;
    u32 i;
    state.a = GetRandomizerSeed();
    state.b = ((u32)reason << 16) | data2;
    state.c = data1;
    state.ctr = RANDOMIZER_STREAM;

    for (i = 0; i < 8; i++)
    {
        _SFC32_Next_Stream(&state, RANDOMIZER_STREAM);
    }

    return state;
}

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
        result = RandomizerNextRange(&state, ITEMS_COUNT) + 1;
    } while(!ShouldRandomizeItem(result) || IsItemTMHM(result));

    return result;

}

void FindItemRandomize_NativeCall(struct ScriptContext *ctx)
{
    if (RandomizerFeatureEnabled(RZ_FIELD_ITEMS))
    {
        u8 objEvent = gSelectedObjectEvent;
        gSpecialVar_0x8000 = RandomizeFoundItem(
            gSpecialVar_0x8000,
            gObjectEvents[objEvent].mapGroup,
            gObjectEvents[objEvent].mapNum,
            gObjectEvents[objEvent].localId);
    }
}

u16 RandomizeMon(enum RandomizerReason reason, enum MonRandomMode mode, u32 seed, u16 species)
{
    return 1 + RandomizerRandRange(reason, seed, species, FORMS_START-1);
}

u16 RandomizeWildEncounter(u16 species, u8 mapNum, u8 mapGroup, u8 wildArea, u8 slot)
{
    if (RandomizerFeatureEnabled(RZ_WILD_MON))
    {
        u32 seed;
        seed = ((u32)mapGroup) << 24;
        seed |= ((u32)mapNum) << 16;
        seed |= ((u32)wildArea) << 8;
        seed |= slot;

        return RandomizeMon(RZR_WILD_ENCOUNTER, MON_RANDOM, seed, species);
    }

    return species;
}

#endif // RZ_ENABLE
