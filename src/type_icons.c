#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_arena.h"
#include "battle_controllers.h"
#include "battle_dome.h"
#include "battle_interface.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tv.h"
#include "battle_z_move.h"
#include "battle_gimmick.h"
#include "bg.h"
#include "data.h"
#include "item.h"
#include "item_menu.h"
#include "link.h"
#include "main.h"
#include "m4a.h"
#include "palette.h"
#include "party_menu.h"
#include "pokeball.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "reshow_battle_screen.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "test_runner.h"
#include "text.h"
#include "util.h"
#include "window.h"
#include "constants/battle_anim.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_partner.h"
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/rgb.h"
#include "level_caps.h"
#include "menu.h"
#include "pokemon_summary_screen.h"
#include "sprite.h"
#include "graphics.h"

static void SpriteCB_CamomonsTypeIcon(struct Sprite* sprite);
static bool8 ShouldHideTypeIconSprite(u8 bank);
static void DestroyTypeIcon(struct Sprite* sprite);

#define TYPE_ICON_TAG 0x2720
#define TYPE_ICON_TAG_2 0x2721
#define BATTLER_ALIVE(bank) (gBattleMons[bank].hp > 0)
#define IS_DOUBLE_BATTLE (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
#define IS_SINGLE_BATTLE !IS_DOUBLE_BATTLE
#define SIDE(bank) GetBattlerSide(bank)

static const struct SpritePalette sTypeIconPalTemplate = {battleIconsPal, TYPE_ICON_TAG};
static const struct SpritePalette sTypeIconPalTemplate2 = {battleIcons2Pal, TYPE_ICON_TAG_2};

struct Pokemon* GetBankPartyData(u8 bank)
{
	u8 index = gBattlerPartyIndexes[bank];
	return (SIDE(bank) == B_SIDE_OPPONENT) ? &gEnemyParty[index] : &gPlayerParty[index];
}

u8 GetMonType(struct Pokemon* mon, u8 typeId)
{
	u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);

	if (typeId == 0)
		return gSpeciesInfo[species].types[0];
	else
		return gSpeciesInfo[species].types[1];
}

static const struct Coords16 sTypeIconPositions[][/*IS_SINGLE_BATTLE*/2] =
{
	[B_POSITION_PLAYER_LEFT] =
	{
		[TRUE] = {221, 86}, 	//Single Battle
		[FALSE] = {144, 70},	//Double Battle
	},
	[B_POSITION_OPPONENT_LEFT] =
	{
		[TRUE] = {20, 26}, 		//Single Battle
		[FALSE] = {97, 14},		//Double Battle
	},
	[B_POSITION_PLAYER_RIGHT] =
	{
		[FALSE] = {156, 96},	//Double Battle
	},
	[B_POSITION_OPPONENT_RIGHT] =
	{
		[FALSE] = {85, 39},		//Double Battle
	},
};

static void DestroyTypeIcon(struct Sprite* sprite)
{
	u32 i;
	DestroySprite(sprite);

	//Check if any more type icons are still on the screen
	for (i = 0; i < MAX_SPRITES; ++i)
	{
		if (gSprites[i].inUse && gSprites[i].template->paletteTag == TYPE_ICON_TAG)
			return;
	}

	//Free palette if no type icons are left
	FreeSpritePaletteByTag(TYPE_ICON_TAG);
	FreeSpritePaletteByTag(TYPE_ICON_TAG_2);
}

static bool8 ShouldHideTypeIconSprite(u8 bank)
{
	return gBattlerControllerFuncs[bank] != PlayerHandleChooseMove
		&& gBattlerControllerFuncs[bank] != HandleInputChooseMove
		&& gBattlerControllerFuncs[bank] != HandleChooseMoveAfterDma3
		&& gBattlerControllerFuncs[bank] != HandleInputChooseMove
		&& gBattlerControllerFuncs[bank] != HandleInputChooseTarget
		&& gBattlerControllerFuncs[bank] != HandleMoveSwitching
		&& gBattlerControllerFuncs[bank] != HandleInputChooseMove;
}

static void SpriteCB_CamomonsTypeIcon(struct Sprite* sprite)
{
	u8 position = sprite->data[0];
	u8 bank = sprite->data[1];

	if (sprite->data[2] == 10)
	{
		DestroyTypeIcon(sprite);
		return;
	}

	//Type icons should prepare to destroy themselves if the Player is not choosing an action
	if (ShouldHideTypeIconSprite(bank))
	{
		if (IS_SINGLE_BATTLE)
		{
			switch (position) {
				case B_POSITION_PLAYER_LEFT:
					sprite->x -= 1;
					break;
				case B_POSITION_OPPONENT_LEFT:
					sprite->x += 1;
					break;
			}
		}
		else //Double Battle
		{
			switch (position) {
				case B_POSITION_PLAYER_LEFT:
				case B_POSITION_PLAYER_RIGHT:
					sprite->x += 1;
					break;
				case B_POSITION_OPPONENT_LEFT:
				case B_POSITION_OPPONENT_RIGHT:
					sprite->x -= 1;
					break;
			}
		}

		++sprite->data[2];
		return;
	}

	if (IS_SINGLE_BATTLE)
	{
		switch (position) {
			case B_POSITION_PLAYER_LEFT:
				if (sprite->x < sTypeIconPositions[position][TRUE].x + 10)
					sprite->x += 1;
				break;
			case B_POSITION_OPPONENT_LEFT:
				if (sprite->x > sTypeIconPositions[position][TRUE].x - 10)
					sprite->x -= 1;
				break;
		}
	}
	else //Double Battle
	{
		switch (position) {
			case B_POSITION_PLAYER_LEFT:
			case B_POSITION_PLAYER_RIGHT:
				if (sprite->x > sTypeIconPositions[position][FALSE].x - 10)
					sprite->x -= 1;
				break;
			case B_POSITION_OPPONENT_LEFT:
			case B_POSITION_OPPONENT_RIGHT:
				if (sprite->x < sTypeIconPositions[position][FALSE].x + 10)
					sprite->x += 1;
				break;
		}
	}

	//Deal with bouncing player healthbox
	s16 originalY = sprite->data[3];
	struct Sprite* healthbox = &gSprites[gHealthboxSpriteIds[GetBattlerAtPosition(position)]];
	sprite->y = originalY + healthbox->y2;
}

static const struct OamData sTypeIconOAM =
{
	.affineMode = ST_OAM_AFFINE_OFF,
	.objMode = ST_OAM_OBJ_NORMAL,
	.shape = SPRITE_SHAPE(8x16),
	.size = SPRITE_SIZE(8x16),
	.priority = 1, //Same level as health bar
};

#define type_icon_frame(ptr, frame) {.data = (u8 *)ptr + (1 * 2 * frame * 32), .size = 1 * 2 * 32}
static const struct SpriteFrameImage sTypeIconPicTable[] =
{
	[TYPE_NORMAL] =		type_icon_frame(battleIcons2Tiles, TYPE_NORMAL),
	[TYPE_FIGHTING] =	type_icon_frame(battleIconsTiles, TYPE_FIGHTING),
	[TYPE_FLYING] =		type_icon_frame(battleIcons2Tiles, TYPE_FLYING),
	[TYPE_POISON] =		type_icon_frame(battleIcons2Tiles, TYPE_POISON),
	[TYPE_GROUND] =		type_icon_frame(battleIcons2Tiles, TYPE_GROUND),
	[TYPE_ROCK] =		type_icon_frame(battleIconsTiles, TYPE_ROCK),
	[TYPE_BUG] =		type_icon_frame(battleIconsTiles, TYPE_BUG),
	[TYPE_GHOST] =		type_icon_frame(battleIconsTiles, TYPE_GHOST),
	[TYPE_STEEL] =		type_icon_frame(battleIconsTiles, TYPE_STEEL),
	[TYPE_MYSTERY] =	type_icon_frame(battleIcons2Tiles, TYPE_MYSTERY),
	[TYPE_FIRE] =		type_icon_frame(battleIconsTiles, TYPE_FIRE),
	[TYPE_WATER] =		type_icon_frame(battleIconsTiles, TYPE_WATER),
	[TYPE_GRASS] =		type_icon_frame(battleIconsTiles, TYPE_GRASS),
	[TYPE_ELECTRIC] =	type_icon_frame(battleIconsTiles, TYPE_ELECTRIC),
	[TYPE_PSYCHIC] =	type_icon_frame(battleIconsTiles, TYPE_PSYCHIC),
	[TYPE_ICE] =		type_icon_frame(battleIconsTiles, TYPE_ICE),
	[TYPE_DRAGON] =		type_icon_frame(battleIcons2Tiles, TYPE_DRAGON),
	[TYPE_DARK] =		type_icon_frame(battleIconsTiles, TYPE_DARK),
	[TYPE_FAIRY] = 		type_icon_frame(battleIconsTiles, TYPE_FAIRY),
	// [TYPE_ROOSTLESS] = 	type_icon_frame(battleIcons2Tiles, TYPE_MYSTERY),
	// [TYPE_BLANK] = 		type_icon_frame(battleIcons2Tiles, TYPE_MYSTERY),
};

static const struct SpriteTemplate sTypeIconSpriteTemplate =
{
	.tileTag = 0xFFFF,
	.paletteTag = TYPE_ICON_TAG,
	.oam = &sTypeIconOAM,
	.anims = gDummySpriteAnimTable,
	.images = sTypeIconPicTable,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCB_CamomonsTypeIcon,
};

static const struct SpriteTemplate sTypeIconSpriteTemplate2 =
{
	.tileTag = 0xFFFF,
	.paletteTag = TYPE_ICON_TAG_2,
	.oam = &sTypeIconOAM,
	.anims = gDummySpriteAnimTable,
	.images = sTypeIconPicTable,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCB_CamomonsTypeIcon,
};

void TryLoadTypeIcons(u32 battler)
{
    if (IndexOfSpritePaletteTag(TYPE_ICON_TAG) == 0xFF)
    {
        LoadSpritePalette(&sTypeIconPalTemplate);
        LoadSpritePalette(&sTypeIconPalTemplate2);
    }

    for (u8 position = 0; position < gBattlersCount; ++position)
    {
        u8 bank = GetBattlerAtPosition(position);

        if (!BATTLER_ALIVE(GetBattlerAtPosition(position)))
            continue;

        u8 type1 = 0, type2 = 0;
        /*
        struct Pokemon* monIllusion = GetIllusionMonPtr(bank);
        if (monIllusion != GetBankPartyData(bank)) //Under Illusion
        {
            type1 = GetMonType(monIllusion, 0);
            type2 = GetMonType(monIllusion, 1);
        }
        else
        {
            type1 = gBattleMons[bank].type1;
            type2 = gBattleMons[bank].type2;
        }
        */

        for (u8 typeNum = 0; typeNum < 2; ++typeNum) //Load each type
        {
            u8 spriteId;
            s16 x = sTypeIconPositions[position][IS_SINGLE_BATTLE].x;
            s16 y = sTypeIconPositions[position][IS_SINGLE_BATTLE].y + (11 * typeNum); //2nd type is 13px below

            u8 type = (typeNum == 0) ? type1 : type2;

            switch (type) { //Certain types have a different palette
                case TYPE_NORMAL:
                case TYPE_FLYING:
                case TYPE_POISON:
                case TYPE_GROUND:
                case TYPE_DRAGON:
                case TYPE_MYSTERY:
                // case TYPE_ROOSTLESS:
                // case TYPE_BLANK:
                    spriteId = CreateSpriteAtEnd(&sTypeIconSpriteTemplate2, x, y, 0xFF);
                    break;
                default:
                    spriteId = CreateSpriteAtEnd(&sTypeIconSpriteTemplate, x, y, 0xFF);
            }

            if (spriteId != MAX_SPRITES)
            {
                struct Sprite* sprite = &gSprites[spriteId];
                sprite->data[0] = position;
                sprite->data[1] = battler;
                sprite->data[3] = y; //Save original y-value for bouncing

                if (IS_SINGLE_BATTLE)
                {
                    if (SIDE(GetBattlerAtPosition(position)) == B_SIDE_PLAYER)
                        SetSpriteOamFlipBits(sprite, TRUE, FALSE); //Flip horizontally
                }
                else //Double Battle
                {
                    if (SIDE(GetBattlerAtPosition(position)) == B_SIDE_OPPONENT)
                        SetSpriteOamFlipBits(sprite, TRUE, FALSE); //Flip horizontally
                }

                RequestSpriteFrameImageCopy(type, sprite->oam.tileNum, sprite->images);
            }
        }
    }
}
