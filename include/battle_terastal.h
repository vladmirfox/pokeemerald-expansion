#ifndef GUARD_BATTLE_TERASTAL_H
#define GUARD_BATTLE_TERASTAL_H

void PrepareBattlerForTerastallization(u32 battlerId);
bool32 CanTerastallize(u32 battlerId);
u32 GetTeraType(u32 battlerId);
bool32 IsTerastallized(u32 battlerId);
u32 GetTeraMultiplier(u32 battlerId, u32 type);
u16 GetTeraTypeRGB(u32 type);

void ChangeTeraTriggerSprite(u8 spriteId, u8 animId);
void CreateTeraTriggerSprite(u8 battlerId, u8 palId);
bool32 IsTeraTriggerSpriteActive(void);
void HideTeraTriggerSprite(void);
void DestroyTeraTriggerSprite(void);

void TeraIndicator_LoadSpriteGfx(void);
bool32 TeraIndicator_ShouldBeInvisible(u32 battlerId);
u8 TeraIndicator_GetSpriteId(u32 healthboxSpriteId);
void TeraIndicator_SetVisibilities(u32 healthboxId, bool32 invisible);
void TeraIndicator_UpdateOamPriorities(u32 healthboxId, u32 oamPriority);
void TeraIndicator_UpdateLevel(u32 healthboxId, u32 level);
void TeraIndicator_CreateSprite(u32 battlerId, u32 healthboxSpriteId);
void TeraIndicator_DestroySprite(u32 healthboxSpriteId);
void TeraIndicator_UpdateType(u32 battlerId, u32 healthboxSpriteId);

#endif