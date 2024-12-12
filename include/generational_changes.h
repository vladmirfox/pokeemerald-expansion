#ifndef GUARD_GENERATIONAL_CHANGES_H
#define GUARD_GENERATIONAL_CHANGES_H

#include "constants/generational_changes.h"

u32 GetGenConfig(enum GenConfigTag configTag);
void SetGenConfig(enum GenConfigTag configTag, u32 value);

#endif // GUARD_GENERATIONAL_CHANGES_H
