#ifndef GUARD_CONSTANTS_REGIONS_H
#define GUARD_CONSTANTS_REGIONS_H

// Core-series regions
enum Region
{
    REGION_KANTO,
    REGION_JOHTO,
    REGION_HOENN,
    REGION_SINNOH,
    REGION_UNOVA,
    REGION_KALOS,
    REGION_ALOLA,
    REGION_GALAR,
    REGION_HISUI,
    REGION_PALDEA,
    REGION_COUNT,
};

// TODO: Since there's no current multi-region support, we have this constant for the purposes of regional form comparisons.
#define REGION_CURRENT  REGION_HOENN

#endif  // GUARD_CONSTANTS_REGIONS_H
