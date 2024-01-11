#ifndef GUARD_RANDOMIZER_H
#define GUARD_RANDOMIZER_H

#include "global.h"
#include "random.h"

#define RANDOMIZER_FEATURE_ITEMS    1
#define RANDOMIZER_FEATURE_BST      2

#define RANDOMIZER_STREAM 17

enum RandomizerReason {
    RZR_WILD_ENCOUNTER,
    RZR_FIXED_ENCOUNTER,
    RZR_TRAINER_PARTY,
    RZR_BASE_STATS,
    RZR_TYPES,
    RZR_MOVES,
    RZR_FIELD_ITEM
};

enum SpeciesRandMode {
    // Ch species completely randomly.
    MODE_RANDOM,
    // Change species randomly, except legendaries will not be exchanged for non-legendaries.
    MODE_RANDOM_LEGEND_AWARE,
    MODE_SAME_STAGES,
    MODE_SIMILAR_BST
};

struct Sfc32State GetRandomizerSeed(enum RandomizerReason reason, u32 data1, u16 data2);

static inline u16 RandomizerNext(struct Sfc32State *state)
{
    return _SFC32_Next_Stream(state, RANDOMIZER_STREAM) >> 16;
}
u16 RandomizerNextRange(struct Sfc32State *state, u16 range);

u16 RandomizerRand(enum RandomizerReason reason, u32 data1, u16 data2);
u16 RandomizerRandRange(enum RandomizerReason reason, u32 data1, u16 data2, u16 range);

struct RandomizerBaseStats {
    u8 baseHP;
    u8 baseAttack;
    u8 baseDefense;
    u8 baseSpeed;
    u8 baseSpAttack;
    u8 baseSpDefense;
};

#endif // GUARD_RANDOMIZER_H