#ifndef GUARD_CONFIG_RANDOMIZER_H
#define GUARD_CONFIG_RANDOMIZER_H
#include "item.h"

// Global control. If FALSE, no randomizer functionality will be enabled.
#define RZ_ENABLE                   TRUE

#if RZ_ENABLE == TRUE

// If TRUE, the trainer ID (including secret ID) will be the randomizer seed.
#define RZ_TRAINER_ID_IS_SEED       TRUE

// If TRUE, the only option for species randomization is completely random.
#define RZ_SPECIES_RANDOM_ONLY      TRUE

#define RZ_MAX_TM   ITEM_TM50

#endif // RZ_ENABLE

#endif // GUARD_CONFIG_RANDOMIZER_H