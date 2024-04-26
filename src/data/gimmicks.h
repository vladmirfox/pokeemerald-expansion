// General trigger data

static const struct OamData sOamData_GimmickTrigger =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = ST_OAM_SQUARE,
    .x = 0,
    .matrixNum = 0,
    .size = 2,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_GimmickTriggerOff[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_GimmickTriggerOn[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_GimmickTrigger[] =
{
    sSpriteAnim_GimmickTriggerOff,
    sSpriteAnim_GimmickTriggerOn,
};

static const struct SpriteTemplate sSpriteTemplate_GimmickTrigger =
{
    .tileTag = TAG_GIMMICK_TRIGGER_TILE,
    .paletteTag = TAG_GIMMICK_TRIGGER_PAL,
    .oam = &sOamData_GimmickTrigger,
    .anims = sSpriteAnimTable_GimmickTrigger,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCb_GimmickTrigger,
};

// Mega trigger data
static const u8 ALIGNED(4) sMegaTriggerGfx[] = INCBIN_U8("graphics/battle_interface/mega_trigger.4bpp");
static const u16 sMegaTriggerPal[] = INCBIN_U16("graphics/battle_interface/mega_trigger.gbapal");

static const struct SpriteSheet sSpriteSheet_MegaTrigger =
{
    sMegaTriggerGfx, sizeof(sMegaTriggerGfx), TAG_GIMMICK_TRIGGER_TILE
};
static const struct SpritePalette sSpritePalette_MegaTrigger =
{
    sMegaTriggerPal, TAG_GIMMICK_TRIGGER_TILE
};

// Ultra Burst trigger data
static const u8 ALIGNED(4) sBurstTriggerGfx[] = INCBIN_U8("graphics/battle_interface/burst_trigger.4bpp");
static const u16 sBurstTriggerPal[] = INCBIN_U16("graphics/battle_interface/burst_trigger.gbapal");

static const struct SpriteSheet sSpriteSheet_BurstTrigger =
{
    sBurstTriggerGfx, sizeof(sBurstTriggerGfx), TAG_GIMMICK_TRIGGER_TILE
};
static const struct SpritePalette sSpritePalette_BurstTrigger =
{
    sBurstTriggerPal, TAG_GIMMICK_TRIGGER_TILE
};

// Dynamax trigger data

static const u8 ALIGNED(4) sDynamaxTriggerGfx[] = INCBIN_U8("graphics/battle_interface/dynamax_trigger.4bpp");
static const u16 sDynamaxTriggerPal[] = INCBIN_U16("graphics/battle_interface/dynamax_trigger.gbapal");

static const struct SpriteSheet sSpriteSheet_DynamaxTrigger =
{
    sDynamaxTriggerGfx, sizeof(sDynamaxTriggerGfx), TAG_GIMMICK_TRIGGER_TILE
};
static const struct SpritePalette sSpritePalette_DynamaxTrigger =
{
    sDynamaxTriggerPal, TAG_GIMMICK_TRIGGER_PAL
};

// Tera trigger data
static const u8 ALIGNED(4) sTeraTriggerGfx[] = INCBIN_U8("graphics/battle_interface/tera_trigger.4bpp");
static const u16 sTeraTriggerPal[] = INCBIN_U16("graphics/battle_interface/tera_trigger.gbapal");

static const struct SpriteSheet sSpriteSheet_TeraTrigger =
{
    sTeraTriggerGfx, sizeof(sTeraTriggerGfx), TAG_GIMMICK_TRIGGER_TILE
};
static const struct SpritePalette sSpritePalette_TeraTrigger =
{
    sTeraTriggerPal, TAG_GIMMICK_TRIGGER_TILE
};

// Gimmick data

const struct GimmickInfo gGimmicksInfo[GIMMICKS_COUNT] =
{
    [GIMMICK_NONE] = {0},
    [GIMMICK_MEGA] = 
    {
        .triggerSheet = &sSpriteSheet_MegaTrigger,
        .triggerPal = &sSpritePalette_MegaTrigger,
        .triggerTemplate = &sSpriteTemplate_GimmickTrigger,
        .CanActivate = CanMegaEvolve,
        .ActivateGimmick = ActivateMegaEvolution,
    },
    [GIMMICK_Z_MOVE] = 
    {
        .triggerSheet = &sSpriteSheet_DynamaxTrigger,
        .triggerPal = &sSpritePalette_DynamaxTrigger,
        .triggerTemplate = &sSpriteTemplate_GimmickTrigger,
        .CanActivate = NULL,
    },
    [GIMMICK_ULTRA_BURST] = 
    {
        .triggerSheet = &sSpriteSheet_BurstTrigger,
        .triggerPal = &sSpritePalette_BurstTrigger,
        .triggerTemplate = &sSpriteTemplate_GimmickTrigger,
        .CanActivate = CanUltraBurst,
        .ActivateGimmick = ActivateUltraBurst,
    },
    [GIMMICK_DYNAMAX] = 
    {
        .triggerSheet = &sSpriteSheet_DynamaxTrigger,
        .triggerPal = &sSpritePalette_DynamaxTrigger,
        .triggerTemplate = &sSpriteTemplate_GimmickTrigger,
        .CanActivate = CanDynamax,
        .ActivateGimmick = ActivateDynamax,
    },
    [GIMMICK_TERA] =
    {
        .triggerSheet = &sSpriteSheet_TeraTrigger,
        .triggerPal = &sSpritePalette_TeraTrigger,
        .triggerTemplate = &sSpriteTemplate_GimmickTrigger,
        .CanActivate = CanTerastallize,
        .ActivateGimmick = ActivateTera,
    }
};
