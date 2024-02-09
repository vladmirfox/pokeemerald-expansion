#ifndef GUARD_BATTLE_TERASTAL_H
#define GUARD_BATTLE_TERASTAL_H

void PrepareBattlerForTera(u32 battler);
u32 GetBattlerTeraType(u32 battlerId);
bool32 IsTerastallized(u32 battlerId);
bool32 IsTypeStellarBoosted(u32 battler, u32 type);
uq4_12_t GetTeraMultiplier(u32 battler, u32 type);

#endif
