#ifndef GUARD_RANDOMIZER_H
#define GUARD_RANDOMIZER_H

#include "config/randomizer.h"
#if RZ_ENABLE == TRUE

#include "global.h"
#include "random.h"
#include "script.h"
#include "wild_encounter.h"
//#include "constants/moves.h"

#define RANDOMIZER_STREAM 17

enum RandomizerFeature {
    RZ_WILD_MON,
    RZ_TRAINER_MON,
    RZ_FIELD_ITEMS,
    RZ_BASE_STATS,
    RZ_MON_TYPES,
    RZ_LEARNSET
};

enum RandomizerReason {
    RZR_WILD_ENCOUNTER,
    RZR_FIXED_ENCOUNTER,
    RZR_TRAINER_PARTY,
    RZR_BASE_STATS,
    RZR_SPECIES_TYPE,
    RZR_LEARNSET,
    RZR_FIELD_ITEM
};

enum MonRandomMode {
    MON_RANDOM
};

#if RZ_SPECIES_RANDOM_ONLY == FALSE
#error Only full randomization of species is currently supported.
#endif

u32 GetRandomizerSeed(void);
bool32 RandomizerFeatureEnabled(enum RandomizerFeature feature);

struct Sfc32State RandomizerRandSeed(enum RandomizerReason reason, u32 data1, u16 data2);

static inline u16 RandomizerNext(struct Sfc32State* state)
{
    return _SFC32_Next_Stream(state, RANDOMIZER_STREAM) >> 16;
}
u16 RandomizerNextRange(struct Sfc32State* state, u16 range);

u16 RandomizerRand(enum RandomizerReason reason, u32 data1, u16 data2);
u16 RandomizerRandRange(enum RandomizerReason reason, u32 data1, u16 data2, u16 range);

static inline u8 RandomizeMonType(u16 species, u8 typeNum)
{
    return (u8)RandomizerRandRange(RZR_SPECIES_TYPE, species, typeNum, NUMBER_OF_MON_TYPES);
}

u16 RandomizeFoundItem(u16 itemId, u8 mapNum, u8 mapGroup, u8 localId);
void FindItemRandomize_NativeCall(struct ScriptContext *ctx);
void FindHiddenItemRandomize_NativeCall(struct ScriptContext *ctx);

u16 RandomizeMon(enum RandomizerReason reason, enum MonRandomMode mode, u32 seed, u16 species);
u16 RandomizeWildEncounter(u16 species, u8 mapNum, u8 mapGroup, enum WildArea area, u8 slot);


#endif // RZ_ENABLE

#endif // GUARD_RANDOMIZER_H
