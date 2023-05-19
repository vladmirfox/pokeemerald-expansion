#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_terastal.h"
#include "event_data.h"
#include "pokemon.h"
#include "sprite.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/hold_effects.h"

// Sets flags and variables upon a battler's Terastallization.
void PrepareBattlerForTerastallization(u32 battlerId)
{
    u32 side = GetBattlerSide(battlerId);

    // Update TeraData fields.
    gBattleStruct->tera.isTerastallized[side] |= gBitTable[gBattlerPartyIndexes[battlerId]];
    gBattleStruct->tera.alreadyTerastallized[battlerId] = TRUE;

    // Remove Tera Orb charge.
#if B_FLAG_TERA_ORB_CHARGE != 0    
    if (side == B_SIDE_PLAYER
        && !(gBattleTypeFlags & BATTLE_TYPE_DOUBLE && !IsPartnerMonFromSameTrainer(battlerId)))
    {
        FlagClear(B_FLAG_TERA_ORB_CHARGE);
    }
#endif
}

// Returns whether a battler can Terastallize.
bool32 CanTerastallize(u32 battlerId)
{
    u32 side = GetBattlerSide(battlerId);
    u32 holdEffect = GetBattlerHoldEffect(battlerId, FALSE);

    // Check if Player has Tera Orb and has charge.
#if B_FLAG_TERA_ORB_CHARGE != 0
    if ((battlerId == B_POSITION_PLAYER_LEFT || (!(gBattleTypeFlags & BATTLE_TYPE_MULTI) && battlerId == B_POSITION_PLAYER_RIGHT))
        && !(CheckBagHasItem(ITEM_TERA_ORB, 1) && FlagGet(B_FLAG_TERA_ORB_CHARGE)))
#endif
        return FALSE;

    // Check if Trainer has already Terastallized.
    if (gBattleStruct->tera.alreadyTerastallized[battlerId])
    {
        return FALSE;
    }

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE
        && IsPartnerMonFromSameTrainer(battlerId)
        && (gBattleStruct->tera.alreadyTerastallized[BATTLE_PARTNER(battlerId)]
        || (gBattleStruct->tera.toTera & gBitTable[BATTLE_PARTNER(battlerId)])))
    {
        return FALSE;
    }

    // Check if battler is holding a Z-Crystal or Mega Stone.
    if (holdEffect == HOLD_EFFECT_Z_CRYSTAL || holdEffect == HOLD_EFFECT_MEGA_STONE)
    {
        return FALSE;
    }

    // Every check passed!
    return TRUE;
}

// Returns a battler's Tera type.
u32 GetTeraType(u32 battlerId)
{
    struct Pokemon *mon = &GetBattlerParty(battlerId)[gBattlerPartyIndexes[battlerId]];
    return GetMonData(mon, MON_DATA_TERA_TYPE);
}

// Returns whether a battler is terastallized.
bool32 IsTerastallized(u32 battlerId)
{
    u32 side = GetBattlerSide(battlerId);
    return gBattleStruct->tera.isTerastallized[side] & gBitTable[gBattlerPartyIndexes[battlerId]];
}

// Returns the STAB power multiplier to use when Terastallized.
u32 GetTeraMultiplier(u32 battlerId, u32 type)
{
    u32 teraType = GetTeraType(battlerId);
    bool32 hasAdaptability = (GetBattlerAbility(battlerId) == ABILITY_ADAPTABILITY);

    // Safety check.
    if (!IsTerastallized(battlerId))
        return UQ_4_12(1.0);

    // Power multipliers from Smogon Research thread.
    if (type == teraType && IS_BATTLER_OF_TYPE(battlerId, type))
    {
        if (hasAdaptability)
            return UQ_4_12(2.25);
        else
            return UQ_4_12(2.0);
    }
    else if ((type == teraType && !IS_BATTLER_OF_TYPE(battlerId, type))
             || (type != teraType && IS_BATTLER_OF_TYPE(battlerId, type)))
    {
        if (hasAdaptability)
            return UQ_4_12(2.0);
        else
            return UQ_4_12(1.5);
    }
    else
    {
        return UQ_4_12(1.0);
    }
}

// TERASTAL TRIGGER:
static const u8 ALIGNED(4) sTeraTriggerGfx[] = INCBIN_U8("graphics/battle_interface/tera_trigger.4bpp");
static const u16 sTeraTriggerPal[] = INCBIN_U16("graphics/battle_interface/tera_trigger.gbapal");

static const struct SpriteSheet sSpriteSheet_TeraTrigger =
{
    sTeraTriggerGfx, sizeof(sTeraTriggerGfx), TAG_TERA_TRIGGER_TILE
};
static const struct SpritePalette sSpritePalette_TeraTrigger =
{
    sTeraTriggerPal, TAG_TERA_TRIGGER_PAL
};

static const struct OamData sOamData_TeraTrigger =
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

static const union AnimCmd sSpriteAnim_TeraTriggerOff[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TeraTriggerOn[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_TeraTrigger[] =
{
    sSpriteAnim_TeraTriggerOff,
    sSpriteAnim_TeraTriggerOn,
};

static void SpriteCb_TeraTrigger(struct Sprite *sprite);
static const struct SpriteTemplate sSpriteTemplate_TeraTrigger =
{
    .tileTag = TAG_TERA_TRIGGER_TILE,
    .paletteTag = TAG_TERA_TRIGGER_PAL,
    .oam = &sOamData_TeraTrigger,
    .anims = sSpriteAnimTable_TeraTrigger,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCb_TeraTrigger
};

// Tera Evolution Trigger icon functions.
void ChangeTeraTriggerSprite(u8 spriteId, u8 animId)
{
    StartSpriteAnim(&gSprites[spriteId], animId);
}

#define SINGLES_TERA_TRIGGER_POS_X_OPTIMAL (30)
#define SINGLES_TERA_TRIGGER_POS_X_PRIORITY (31)
#define SINGLES_TERA_TRIGGER_POS_X_SLIDE (15)
#define SINGLES_TERA_TRIGGER_POS_Y_DIFF (-11)

#define DOUBLES_TERA_TRIGGER_POS_X_OPTIMAL (30)
#define DOUBLES_TERA_TRIGGER_POS_X_PRIORITY (31)
#define DOUBLES_TERA_TRIGGER_POS_X_SLIDE (15)
#define DOUBLES_TERA_TRIGGER_POS_Y_DIFF (-4)

#define tBattler    data[0]
#define tHide       data[1]

void CreateTeraTriggerSprite(u8 battlerId, u8 palId)
{
    LoadSpritePalette(&sSpritePalette_TeraTrigger);
    if (GetSpriteTileStartByTag(TAG_TERA_TRIGGER_TILE) == 0xFFFF)
        LoadSpriteSheet(&sSpriteSheet_TeraTrigger);
    if (gBattleStruct->tera.triggerSpriteId == 0xFF)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
            gBattleStruct->tera.triggerSpriteId = CreateSprite(&sSpriteTemplate_TeraTrigger,
                                                             gSprites[gHealthboxSpriteIds[battlerId]].x - DOUBLES_TERA_TRIGGER_POS_X_SLIDE,
                                                             gSprites[gHealthboxSpriteIds[battlerId]].y - DOUBLES_TERA_TRIGGER_POS_Y_DIFF, 0);
        else
            gBattleStruct->tera.triggerSpriteId = CreateSprite(&sSpriteTemplate_TeraTrigger,
                                                             gSprites[gHealthboxSpriteIds[battlerId]].x - SINGLES_TERA_TRIGGER_POS_X_SLIDE,
                                                             gSprites[gHealthboxSpriteIds[battlerId]].y - SINGLES_TERA_TRIGGER_POS_Y_DIFF, 0);
    }
    gSprites[gBattleStruct->tera.triggerSpriteId].tBattler = battlerId;
    gSprites[gBattleStruct->tera.triggerSpriteId].tHide = FALSE;

    ChangeTeraTriggerSprite(gBattleStruct->tera.triggerSpriteId, palId);
}

static void SpriteCb_TeraTrigger(struct Sprite *sprite)
{
    s32 xSlide, xPriority, xOptimal;
    s32 yDiff;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        xSlide = DOUBLES_TERA_TRIGGER_POS_X_SLIDE;
        xPriority = DOUBLES_TERA_TRIGGER_POS_X_PRIORITY;
        xOptimal = DOUBLES_TERA_TRIGGER_POS_X_OPTIMAL;
        yDiff = DOUBLES_TERA_TRIGGER_POS_Y_DIFF;
    }
    else
    {
        xSlide = SINGLES_TERA_TRIGGER_POS_X_SLIDE;
        xPriority = SINGLES_TERA_TRIGGER_POS_X_PRIORITY;
        xOptimal = SINGLES_TERA_TRIGGER_POS_X_OPTIMAL;
        yDiff = SINGLES_TERA_TRIGGER_POS_Y_DIFF;
    }

    if (sprite->tHide)
    {
        if (sprite->x != gSprites[gHealthboxSpriteIds[sprite->tBattler]].x - xSlide)
            sprite->x++;

        if (sprite->x >= gSprites[gHealthboxSpriteIds[sprite->tBattler]].x - xPriority)
            sprite->oam.priority = 2;
        else
            sprite->oam.priority = 1;

        sprite->y = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y - yDiff;
        sprite->y2 = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y2 - yDiff;
        if (sprite->x == gSprites[gHealthboxSpriteIds[sprite->tBattler]].x - xSlide)
            DestroyTeraTriggerSprite();
    }
    else
    {
        if (sprite->x != gSprites[gHealthboxSpriteIds[sprite->tBattler]].x - xOptimal)
            sprite->x--;

        if (sprite->x >= gSprites[gHealthboxSpriteIds[sprite->tBattler]].x - xPriority)
            sprite->oam.priority = 2;
        else
            sprite->oam.priority = 1;

        sprite->y = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y - yDiff;
        sprite->y2 = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y2 - yDiff;
    }
}

bool32 IsTeraTriggerSpriteActive(void)
{
    if (GetSpriteTileStartByTag(TAG_TERA_TRIGGER_TILE) == 0xFFFF)
        return FALSE;
    else if (IndexOfSpritePaletteTag(TAG_TERA_TRIGGER_PAL) != 0xFF)
        return TRUE;
    else
        return FALSE;
}

void HideTeraTriggerSprite(void)
{
    if (gBattleStruct->tera.triggerSpriteId != 0xFF)
    {
        ChangeTeraTriggerSprite(gBattleStruct->tera.triggerSpriteId, 0);
        gSprites[gBattleStruct->tera.triggerSpriteId].tHide = TRUE;
    }
}

void DestroyTeraTriggerSprite(void)
{
    FreeSpritePaletteByTag(TAG_TERA_TRIGGER_PAL);
    FreeSpriteTilesByTag(TAG_TERA_TRIGGER_TILE);
    if (gBattleStruct->tera.triggerSpriteId != 0xFF)
        DestroySprite(&gSprites[gBattleStruct->tera.triggerSpriteId]);
    gBattleStruct->tera.triggerSpriteId = 0xFF;
}

#undef tBattler
#undef tHide
