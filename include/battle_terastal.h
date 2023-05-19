#ifndef GUARD_BATTLE_TERASTAL_H
#define GUARD_BATTLE_TERASTAL_H

void PrepareBattlerForTerastallization(u32 battlerId);
bool32 CanTerastallize(u32 battlerId);
u32 GetTeraType(u32 battlerId);
bool32 IsTerastallized(u32 battlerId);
u32 GetTeraMultiplier(u32 battlerId, u32 type);

void ChangeTeraTriggerSprite(u8 spriteId, u8 animId);
void CreateTeraTriggerSprite(u8 battlerId, u8 palId);
bool32 IsTeraTriggerSpriteActive(void);
void HideTeraTriggerSprite(void);
void DestroyTeraTriggerSprite(void);

#endif