#include "global.h"
#include "generational_changes.h"
#include "malloc.h"
#include "constants/generational_changes.h"

#if TESTING
EWRAM_INIT struct GenerationalChanges gGenerationalChanges =
#else
const struct GenerationalChanges gGenerationalChanges =
#endif
{
    .galeWingsFullHealth = B_GALE_WINGS >= GEN_7,
};

u32 GetGenConfig(enum GenConfigTag configTag)
{
    switch (configTag)
    {
    case GEN_CONFIG_GALE_WINGS: return gGenerationalChanges.galeWingsFullHealth ? GEN_7 : GEN_6;
    default:                    return GEN_LATEST;
    }
}

void SetGenConfig(enum GenConfigTag configTag, u32 value)
{
#if TESTING
    switch (configTag)
    {
    case GEN_CONFIG_GALE_WINGS: gGenerationalChanges.galeWingsFullHealth = (value >= GEN_7);
    }
#else
#endif
}
