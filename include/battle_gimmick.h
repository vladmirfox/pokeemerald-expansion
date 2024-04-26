#ifndef GUARD_BATTLE_GIMMICK_H
#define GUARD_BATTLE_GIMMICK_H

enum Gimmick
{
    GIMMICK_NONE,
    GIMMICK_MEGA,
    GIMMICK_Z_MOVE,
    GIMMICK_ULTRA_BURST,
    GIMMICK_DYNAMAX,
    GIMMICK_TERA,
    GIMMICKS_COUNT,
};

struct GimmickInfo
{
    const struct SpritePalette * triggerPal;        // trigger gfx data
    const struct SpriteSheet * triggerSheet;
    const struct SpriteTemplate * triggerTemplate;
    bool32 (*CanActivate)(u32 battler);
    void (*ActivateGimmick)(u32 battler);
};

void AssignUsableGimmicks(void);
bool32 CanActivateGimmick(u32 battler, enum Gimmick gimmick);
bool32 IsGimmickSelected(u32 battler, enum Gimmick gimmick);
void SetActiveGimmick(u32 battler, enum Gimmick gimmick);
enum Gimmick GetActiveGimmick(u32 battler);
bool32 ShouldTrainerBattlerUseGimmick(u32 battler, enum Gimmick gimmick);
bool32 HasTrainerUsedGimmick(u32 battler, enum Gimmick gimmick);
void SetGimmickAsActivated(u32 battler, enum Gimmick gimmick);

void ChangeGimmickTriggerSprite(u32 spriteId, u32 animId);
void CreateGimmickTriggerSprite(u32 battler);
bool32 IsGimmickTriggerSpriteActive(void);
void HideGimmickTriggerSprite(void);
void DestroyGimmickTriggerSprite(void);

extern const struct GimmickInfo gGimmicksInfo[];

#endif
