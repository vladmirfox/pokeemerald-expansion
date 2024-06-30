#include "battle.h"

struct BattleTerrain {
    u8 name[26];
};

const struct BattleTerrain gBattleTerrainInfo[BATTLE_TERRAIN_COUNT] =
{
    [BATTLE_TERRAIN_GRASS] =
    {
        .name = _("NORMAL - GRASS"),
    },
    [BATTLE_TERRAIN_LONG_GRASS] =
    {
        .name = _("NORMAL - LONG GRASS"),
    },
    [BATTLE_TERRAIN_SAND] =
    {
        .name = _("NORMAL - SAND"),
    },
    [BATTLE_TERRAIN_UNDERWATER] =
    {
        .name = _("NORMAL - UNDERWATER      "),
    },
    [BATTLE_TERRAIN_WATER] =
    {
        .name = _("NORMAL - WATER           "),
    },
    [BATTLE_TERRAIN_POND] =
    {
        .name = _("NORMAL - POND            "),
    },
    [BATTLE_TERRAIN_MOUNTAIN] =
    {
        .name = _("NORMAL - MOUNTAIN        "),
    },
    [BATTLE_TERRAIN_CAVE] =
    {
        .name = _("NORMAL - CAVE            "),
    },
    [BATTLE_TERRAIN_BUILDING] =
    {
        .name = _("NORMAL - BUILDING        "),
    },
    [BATTLE_TERRAIN_PLAIN] =
    {
        .name = _("NORMAL - PLAIN           "),
    },
};