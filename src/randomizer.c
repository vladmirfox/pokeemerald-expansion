#include "randomizer.h"
#include "new_game.h"
#include "pokemon.h"

struct Sfc32State GetRandomizerSeed(enum RandomizerReason reason, u32 data1, u16 data2)
{
    struct Sfc32State state;
    u32 i;
    state.a = GetTrainerId(gSaveBlock2Ptr->playerTrainerId);
    state.b = ((u32)reason << 16) | data2;
    state.c = data1;
    state.ctr = RANDOMIZER_STREAM;

    for (i = 0; i < 8; i++)
    {
        _SFC32_Next_Stream(&state, RANDOMIZER_STREAM);
    }

    return state;
}

u16 RandomizerRand(enum RandomizerReason reason, u32 data1, u16 data2)
{
    struct Sfc32State state;
    state = GetRandomizerSeed(reason, data1, data2);
    return RandomizerNext(&state) >> 16;
}

// Types for tables

#define RBST_STAT_CALC(value, total) ((u8)max((((value)/(total)+1)/2),1))
struct RandomizerBaseStats GenerateRandomBaseStats(u16 species, u16 statsTotal) {
    u32 randomTotal, i, startPoint;
    u32 statRandoms[6];
    struct RandomizerBaseStats result;
    u16 adjustedBst;
    const bool8 isShedinja = species == SPECIES_SHEDINJA;
    struct Sfc32State state;

    state = GetRandomizerSeed(RZR_BASE_STATS, species, 0);

    if (isShedinja)
    {
        adjustedBst = statsTotal - 51;
        startPoint = 1;
    }
    else
    {
        adjustedBst = statsTotal - 70;
        startPoint = 0;
    }

    // This makes rounding easier later.
    adjustedBst *= 2;

    randomTotal = 0;
    for(i = startPoint; i < 6; i++)
    {
        u32 statRandom;
        statRandom = RandomizerNext(&state);
        randomTotal += statRandom;
        statRandoms[i] = statRandom * adjustedBst;
    }

    if(isShedinja)
        result.baseHP = 1;
    else
        result.baseHP = RBST_STAT_CALC(statRandoms[0], randomTotal) + 20;
    result.baseAttack = RBST_STAT_CALC(statRandoms[1], randomTotal) + 10;
    result.baseDefense = RBST_STAT_CALC(statRandoms[2], randomTotal) + 10;
    result.baseSpeed = RBST_STAT_CALC(statRandoms[3], randomTotal) + 10;
    result.baseSpAttack = RBST_STAT_CALC(statRandoms[4], randomTotal) + 10;
    result.baseSpDefense = RBST_STAT_CALC(statRandoms[5], randomTotal) + 10;

}
#undef RBST_STAT_CALC

struct SpeciesGroup {
    u16 species;
    u16 group;
};

enum SpeciesRandMode gSpeciesRandMode;

#define RANDOMIZER_SPECIES  (FORMS_START-1)

struct SpeciesTable {
    u16 speciesIndex[RANDOMIZER_SPECIES];
    struct SpeciesGroup speciesGroup[RANDOMIZER_SPECIES];
};

static void GetGroupStartEndPoints(struct SpeciesTable *table, u16 minGroup, u16 maxGroup, u32 *start, u32 *end)
{
    u32 index, leftBound, minRightBound, maxRightBound;
    leftBound = 0;
    minRightBound = RANDOMIZER_SPECIES;
    maxRightBound = RANDOMIZER_SPECIES;
    // Do leftmost binary search to find the lower limit.
    while (leftBound < minRightBound) {
        u16 idxGroup;
        index = (leftBound + minRightBound) / 2;
        idxGroup = table->speciesGroup[index].group;
        if (table->speciesGroup[index].group < minGroup)
            leftBound = index + 1;
        else
        {
            if (idxGroup > maxGroup)
                maxRightBound = index;
            minRightBound = index;
        }
    }
    *start = leftBound;

    // Do rightmost binary search to find the upper limit.
    while (leftBound < maxRightBound)
    {
        index = (leftBound + maxRightBound / 2);
        if (table->speciesGroup[index].group > maxGroup)
            maxRightBound = index;
        else
            leftBound = index + 1;
    }
    *end = maxRightBound - 1;
}

static void GetMinMaxGroup(u16 group, u16 *min, u16 *max)
{
    if (gSpeciesRandMode == MODE_SIMILAR_BST)
    {
        // 12.5% window on either side
        const u32 scaled = group * 8;
        *min = (scaled - group) / 8;
        *max = (scaled + group) / 8;

    }
    else
    {
        *min = group;
        *max = group;
    }
}

 u16 GetRandomSpecies(struct SpeciesTable *table, enum RandomizerReason reason, u32 seed, u16 species)
 {
    u32 start, end;
    u16 minGroup, maxGroup, speciesIndex;
    const u16 speciesGroup = table->speciesGroup[table->speciesIndex[species]].group;

    GetMinMaxGroup(speciesGroup, &minGroup, &maxGroup);
    GetGroupStartEndPoints(table, minGroup, maxGroup, &start, &end);
    speciesIndex = RandomizerRandRange(reason, seed, species, (end - start)+1) + start;
    return table->speciesGroup[speciesIndex].species;
 }