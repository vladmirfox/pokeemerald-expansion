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
#include "decompress.h"
#include "item.h"
#include "item_menu.h"
#include "link.h"
#include "main.h"
#include "m4a.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokeball.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "reshow_battle_screen.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "test_runner.h"
#include "type_icons.h"
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
#include "menu.h"
#include "pokemon_summary_screen.h"
#include "sprite.h"
#include "graphics.h"

struct Pokemon* GetBattlerData(u32 battlerId);
u32 GetMonPublicType(u32 battlerId, u32 typeId);
static void SpriteCB_TypeIcon(struct Sprite* sprite);
static bool32 ShouldHideTypeIcon(u32 battlerId);
static void DestroyTypeIcon(struct Sprite* sprite);
bool32 UseDoubleBattleCoords(u32);
bool32 IsBattlerFainted(u32);
bool32 IsBattlerNull(u32);

struct Pokemon* GetBattlerData(u32 battlerId)
{
    u32 index = gBattlerPartyIndexes[battlerId];

    return (GetBattlerSide(battlerId) == B_SIDE_OPPONENT) ? &gEnemyParty[index] : &gPlayerParty[index];
}

bool32 UseDoubleBattleCoords(u32 position)
{
	if (!BATTLE_TYPE_IS_DOUBLE)
		return FALSE;

	if ((position == B_POSITION_PLAYER_LEFT) && (IsBattlerNull(B_POSITION_PLAYER_RIGHT)))
		return FALSE;

	if ((position == B_POSITION_OPPONENT_LEFT) && (IsBattlerNull(B_POSITION_OPPONENT_RIGHT)))
		return FALSE;

	return TRUE;
}

bool32 IsTypeOrdinary(u32 typeId)
{
	return typeId != TYPE_NONE &&
		typeId != TYPE_MYSTERY &&
		typeId <= TYPE_FAIRY;
}

bool32 IsTypeIsSecondPalette(u32 typeId)
{
    switch (typeId)
    {
        case TYPE_FIRE:
        case TYPE_WATER:
        case TYPE_GRASS:
        case TYPE_ELECTRIC:
        case TYPE_PSYCHIC:
        case TYPE_ICE:
        case TYPE_DRAGON:
        case TYPE_DARK:
        case TYPE_FAIRY:
            return TRUE;
        default:
            return FALSE;
    }
}

bool32 ShouldHideUncaughtType(u32 species)
{
	if (B_SHOW_TYPES != SHOW_TYPES_SEEN)
		return FALSE;

    if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT))
		return FALSE;

	return TRUE;
}

bool32 IsMonTerastallizedAndStellarType(struct Pokemon* mon,u32 battlerId)
{
    if (GetActiveGimmick(battlerId) != GIMMICK_TERA)
		return FALSE;

	if (GetMonData(mon,MON_DATA_TERA_TYPE,NULL) != TYPE_STELLAR)
		return FALSE;

	return TRUE;
}

bool32 IsIllusionActive(struct Pokemon* monIllusion)
{
	return (monIllusion != NULL);
}

u32 GetSpeciesType(struct Pokemon* monIllusion, u32 typeNum, u32 illusionSpecies, u32 monSpecies)
{
	if (IsIllusionActive(monIllusion))
		return gSpeciesInfo[illusionSpecies].types[typeNum];
	else
		return gSpeciesInfo[monSpecies].types[typeNum];
}

u32 IsIllusionActiveAndTypeUnchanged(struct Pokemon* monIllusion, u32 monSpecies, u32 battlerId)
{
	if (!IsIllusionActive(monIllusion))
		return FALSE;

	if (
			(gSpeciesInfo[monSpecies].types[0] != gBattleMons[battlerId].type1) ||
			(gSpeciesInfo[monSpecies].types[1] != gBattleMons[battlerId].type2)
	   )
		return FALSE;

	return TRUE;
}

u32 GetMonPublicType(u32 battlerId, u32 typeNum)
{
	struct Pokemon* mon = GetBattlerData(battlerId);
	struct Pokemon* monIllusion = GetIllusionMonPtr(battlerId);
	u32 monSpecies = GetMonData(mon,MON_DATA_SPECIES,NULL);
	u32 illusionSpecies = GetMonData(monIllusion,MON_DATA_SPECIES,NULL);

	if (ShouldHideUncaughtType(monSpecies))
		return TYPE_MYSTERY;

	if (IsMonTerastallizedAndStellarType(mon, battlerId))
		return GetSpeciesType(monIllusion,typeNum,illusionSpecies,monSpecies);

	if (IsIllusionActiveAndTypeUnchanged(monIllusion,monSpecies, battlerId))
		return gSpeciesInfo[illusionSpecies].types[typeNum];

	if (!typeNum)
		return gBattleMons[battlerId].type1;
	else
		return gBattleMons[battlerId].type2;
}

static const struct Coords16 sTypeIconPositions[][2] =
{
	[B_POSITION_PLAYER_LEFT] =
	{
		[FALSE] = {221, 86},
		[TRUE] = {144, 71},
	},
	[B_POSITION_OPPONENT_LEFT] =
	{
		[FALSE] = {20, 26},
		[TRUE] = {97, 14},
	},
	[B_POSITION_PLAYER_RIGHT] =
	{
		[TRUE] = {156, 96},
	},
	[B_POSITION_OPPONENT_RIGHT] =
	{
		[TRUE] = {85, 39},
	},
};

static void DestroyTypeIcon(struct Sprite* sprite)
{
	u32 i;
	DestroySpriteAndFreeResources(sprite);

	for (i = 0; i < MAX_SPRITES; ++i)
	{
		if (!gSprites[i].inUse)
			continue;

		if (gSprites[i].template->paletteTag == TYPE_ICON_TAG)
			return;
	}

	FreeSpritePaletteByTag(TYPE_ICON_TAG);
	FreeSpritePaletteByTag(TYPE_ICON_TAG_2);
}

static bool32 ShouldHideTypeIcon(u32 battlerId)
{
	return gBattlerControllerFuncs[battlerId] != PlayerHandleChooseMove
		&& gBattlerControllerFuncs[battlerId] != HandleInputChooseMove
		&& gBattlerControllerFuncs[battlerId] != HandleChooseMoveAfterDma3
		&& gBattlerControllerFuncs[battlerId] != HandleInputChooseMove
		&& gBattlerControllerFuncs[battlerId] != HandleInputChooseTarget
		&& gBattlerControllerFuncs[battlerId] != HandleMoveSwitching
		&& gBattlerControllerFuncs[battlerId] != HandleInputChooseMove;
}

static void SpriteCB_TypeIcon(struct Sprite* sprite)
{
	u32 position = sprite->data[0];
	u32 battlerId = sprite->data[1];
	bool32 useDoubleBattleCoords = UseDoubleBattleCoords(GetBattlerAtPosition(position));

	if (sprite->data[2] == 10)
	{
		DestroyTypeIcon(sprite);
		return;
	}

	if (ShouldHideTypeIcon(battlerId))
	{
		if (useDoubleBattleCoords)
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
		else
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

		++sprite->data[2];
		return;
	}

	if (useDoubleBattleCoords)
	{
		switch (position) {
			case B_POSITION_PLAYER_LEFT:
			case B_POSITION_PLAYER_RIGHT:
				if (sprite->x > sTypeIconPositions[position][TRUE].x - 10)
					sprite->x -= 1;
				break;
			case B_POSITION_OPPONENT_LEFT:
			case B_POSITION_OPPONENT_RIGHT:
				if (sprite->x < sTypeIconPositions[position][TRUE].x + 10)
					sprite->x += 1;
				break;
		}
	}
	else
	{
		switch (position) {
			case B_POSITION_PLAYER_LEFT:
				if (sprite->x < sTypeIconPositions[position][FALSE].x + 10)
					sprite->x += 1;
				break;
			case B_POSITION_OPPONENT_LEFT:
				if (sprite->x > sTypeIconPositions[position][FALSE].x - 10)
					sprite->x -= 1;
				break;
		}
	}

	s16 originalY = sprite->data[3];
	struct Sprite* healthbox = &gSprites[gHealthboxSpriteIds[GetBattlerAtPosition(position)]];
	sprite->y = originalY + healthbox->y2;
}

#define TYPE_ICON_1_FRAME(monType) ((monType - 1) * 2)
#define TYPE_ICON_2_FRAME(monType) ((monType - 11) * 2)

static const union AnimCmd sSpriteAnim_TypeIcon_Normal[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_NORMAL), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Fighting[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_FIGHTING), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Flying[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_FLYING), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Poison[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_POISON), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Ground[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_GROUND), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Rock[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_ROCK), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Bug[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_BUG), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Ghost[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_GHOST), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Steel[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_STEEL), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Mystery[] =
{
	ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_MYSTERY), 0),
	ANIMCMD_END
};

// type image 2 anims
static const union AnimCmd sSpriteAnim_TypeIcon_Fire[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_FIRE), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Water[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_WATER), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Grass[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_GRASS), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Electric[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_ELECTRIC), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Psychic[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_PSYCHIC), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Ice[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_ICE), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Dragon[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_DRAGON), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Dark[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_DARK), 0),
	ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Fairy[] =
{
	ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_FAIRY), 0),
	ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_TypeIcons[] =
{
	[TYPE_NONE] =       sSpriteAnim_TypeIcon_Mystery,
	[TYPE_NORMAL] =     sSpriteAnim_TypeIcon_Normal,
	[TYPE_FIGHTING] =   sSpriteAnim_TypeIcon_Fighting,
	[TYPE_FLYING] =     sSpriteAnim_TypeIcon_Flying,
	[TYPE_POISON] =     sSpriteAnim_TypeIcon_Poison,
	[TYPE_GROUND] =     sSpriteAnim_TypeIcon_Ground,
	[TYPE_ROCK] =       sSpriteAnim_TypeIcon_Rock,
	[TYPE_BUG] =        sSpriteAnim_TypeIcon_Bug,
	[TYPE_GHOST] =      sSpriteAnim_TypeIcon_Ghost,
	[TYPE_STEEL] =      sSpriteAnim_TypeIcon_Steel,
	[TYPE_MYSTERY] =    sSpriteAnim_TypeIcon_Mystery,
	[TYPE_FIRE] =       sSpriteAnim_TypeIcon_Fire,
	[TYPE_WATER] =      sSpriteAnim_TypeIcon_Water,
	[TYPE_GRASS] =      sSpriteAnim_TypeIcon_Grass,
	[TYPE_ELECTRIC] =   sSpriteAnim_TypeIcon_Electric,
	[TYPE_PSYCHIC] =    sSpriteAnim_TypeIcon_Psychic,
	[TYPE_ICE] =        sSpriteAnim_TypeIcon_Ice,
	[TYPE_DRAGON] =     sSpriteAnim_TypeIcon_Dragon,
	[TYPE_DARK] =       sSpriteAnim_TypeIcon_Dark,
	[TYPE_FAIRY] =      sSpriteAnim_TypeIcon_Fairy,
	[TYPE_STELLAR] =    sSpriteAnim_TypeIcon_Mystery,
};

static const struct CompressedSpritePalette sTypeIconPal1 =
{
	.data = gBattleIcons_Pal1,
	.tag = TYPE_ICON_TAG
};

static const struct CompressedSpritePalette sTypeIconPal2 =
{
	.data = gBattleIcons_Pal2,
	.tag = TYPE_ICON_TAG_2
};

static const struct OamData sOamData_TypeIcons =
{
	.affineMode = ST_OAM_AFFINE_OFF,
	.objMode = ST_OAM_OBJ_NORMAL,
	.shape = SPRITE_SHAPE(8x16),
	.size = SPRITE_SIZE(8x16),
	.priority = 1,
};

static const struct CompressedSpriteSheet sSpriteSheet_TypeIcons2 =
{
	.data = gBattleIcons_Gfx2,
	.size = (8*16) * 9,
	.tag = TYPE_ICON_TAG_2,
};

static const struct CompressedSpriteSheet sSpriteSheet_TypeIcons1 =
{
	.data = gBattleIcons_Gfx1,
	.size = (8*16) * 10,
	.tag = TYPE_ICON_TAG,
};

static const struct SpriteTemplate sSpriteTemplate_TypeIcons1 =
{
	.tileTag = TYPE_ICON_TAG,
	.paletteTag = TYPE_ICON_TAG,
	.oam = &sOamData_TypeIcons,
	.anims = sSpriteAnimTable_TypeIcons,
	.images = NULL,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCB_TypeIcon
};

static const struct SpriteTemplate sSpriteTemplate_TypeIcons2 =
{
	.tileTag = TYPE_ICON_TAG_2,
	.paletteTag = TYPE_ICON_TAG_2,
	.oam = &sOamData_TypeIcons,
	.anims = sSpriteAnimTable_TypeIcons,
	.images = NULL,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCB_TypeIcon
};

void LoadTypeSpritesAndPalettes(void)
{
	if (IndexOfSpritePaletteTag(TYPE_ICON_TAG) != 0xFF)
		return;

	LoadCompressedSpriteSheet(&sSpriteSheet_TypeIcons1);
	LoadCompressedSpriteSheet(&sSpriteSheet_TypeIcons2);
	LoadCompressedSpritePalette(&sTypeIconPal1);
	LoadCompressedSpritePalette(&sTypeIconPal2);
}

bool32 IsBattlerFainted(u32 battlerId)
{
	return gBattleMons[battlerId].hp < 1;
}

bool32 IsBattlerNull(u32 battlerId)
{
	return gBattleMons[battlerId].species== SPECIES_NONE;
}

bool32 ShouldFlipTypeIcon(bool32 useDoubleBattleCoords, u32 position, u32 typeId)
{
	bool32 side = (useDoubleBattleCoords) ? B_SIDE_OPPONENT : B_SIDE_PLAYER;

	if (!IsTypeOrdinary(typeId))
		return FALSE;

	if (GetBattlerSide(GetBattlerAtPosition(position)) != side)
		return FALSE;

	return TRUE;
}

void SetTypeIconXY(s32* x, s32* y, u32 position, bool32 useDoubleBattleCoords, u32 typeNum)
{
	*x = sTypeIconPositions[position][useDoubleBattleCoords].x;
	*y = sTypeIconPositions[position][useDoubleBattleCoords].y + (11 * typeNum);
}

bool32 ShouldSkipSecondType(u32 types[], u32 typeNum)
{
	if (!typeNum)
		return FALSE;

	if (types[0] != types[1])
		return FALSE;

	return TRUE;
}

void CreateSpriteAndSetTypeSpriteAttributes(u32 type, u32 x, u32 y, u32 position, u32 battler, bool32 useDoubleBattleCoords)
{
	struct Sprite* sprite;
	const struct SpriteTemplate* spriteTemplate = IsTypeIsSecondPalette(type) ? &sSpriteTemplate_TypeIcons2 : &sSpriteTemplate_TypeIcons1;
	u32 spriteId = CreateSpriteAtEnd(spriteTemplate, x, y,UCHAR_MAX);

	if (spriteId == MAX_SPRITES)
		return;

	sprite = &gSprites[spriteId];
	sprite->data[0] = position;
	sprite->data[1] = battler;
	sprite->data[3] = y;

	sprite->hFlip = ShouldFlipTypeIcon(useDoubleBattleCoords, position, type);

	StartSpriteAnim(sprite, type);
}

void CreateSpriteFromType(u32 position, bool32 useDoubleBattleCoords, u32 types[], u32 typeNum, u32 battler)
{
	s32 x = 0, y = 0;

	if (ShouldSkipSecondType(types, typeNum))
		return;

	SetTypeIconXY(&x, &y, position, useDoubleBattleCoords, typeNum);

	CreateSpriteAndSetTypeSpriteAttributes(types[typeNum], x, y, position, battler, useDoubleBattleCoords);
}

void LoadTypeIconsPerBattler(u32 battler, u32 position)
{
	u32 typeNum, types[2];
	u32 battlerId = GetBattlerAtPosition(position);
	bool32 useDoubleBattleCoords = UseDoubleBattleCoords(battlerId);

	if (IsBattlerFainted(battlerId))
		return;

	for (typeNum = 0; typeNum < 2; ++typeNum)
		types[typeNum] = GetMonPublicType(battlerId, typeNum);

	for (typeNum = 0; typeNum < 2; ++typeNum)
		CreateSpriteFromType(position, useDoubleBattleCoords, types, typeNum, battler);
}

void LoadTypeIcons(u32 battler)
{
	u32 position;

	if (!B_SHOW_TYPES)
		return;

	LoadTypeSpritesAndPalettes();

	for (position = 0; position < gBattlersCount; ++position)
		LoadTypeIconsPerBattler(battler, position);
}
