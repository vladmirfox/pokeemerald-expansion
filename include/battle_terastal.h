#ifndef GUARD_BATTLE_TERASTAL_H
#define GUARD_BATTLE_TERASTAL_H

bool32 CanTerastallize(u32 battlerId);
u32 GetTeraType(u32 battlerId);
bool32 IsTerastallized(u32 battlerId);
u32 GetTeraMultiplier(u32 battlerId, u32 type);

#endif