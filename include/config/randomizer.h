#ifndef GUARD_CONFIG_RANDOMIZER_H
#define GUARD_CONFIG_RANDOMIZER_H

// Global control. If FALSE, no randomizer functionality will be enabled.
#define RZ_ENABLE                   TRUE

#if RZ_ENABLE == TRUE

// RZ_SPECIES_RAM_MODE does not require the randomizer table generator, but
// consumes more memory at runtime (about 6*NUM_SPECIES bytes of EWRAM) and
// requires you to be able to write C to define new species randomization
// modes.
#define RZ_SPECIES_RAM_MODE                 FALSE

#endif // RZ_ENABLE

#endif // GUARD_CONFIG_RANDOMIZER_H