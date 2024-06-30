#define BATTLE_BACKGROUND(background)                       \
{                                                           \
    .tileset = gBattleTerrainTiles_##background,            \
    .tilemap = gBattleTerrainTilemap_##background,          \
    .entryTileset = gBattleTerrainAnimTiles_##background,   \
    .entryTilemap = gBattleTerrainAnimTilemap_##background, \
    .palette = gBattleTerrainPalette_##background,          \
}

const struct BattleTerrain gBattleTerrainInfo[BATTLE_TERRAIN_COUNT] =
{
    [BATTLE_TERRAIN_GRASS] =
    {
        .name = _("NORMAL - GRASS"),
        .background = BATTLE_BACKGROUND(TallGrass),
    },
    [BATTLE_TERRAIN_LONG_GRASS] =
    {
        .name = _("NORMAL - LONG GRASS"),
        .background = BATTLE_BACKGROUND(LongGrass),
    },
    [BATTLE_TERRAIN_SAND] =
    {
        .name = _("NORMAL - SAND"),
        .background = BATTLE_BACKGROUND(Sand),
    },
    [BATTLE_TERRAIN_UNDERWATER] =
    {
        .name = _("NORMAL - UNDERWATER      "),
        .background = BATTLE_BACKGROUND(Underwater),
    },
    [BATTLE_TERRAIN_WATER] =
    {
        .name = _("NORMAL - WATER           "),
        .background = BATTLE_BACKGROUND(Water),
    },
    [BATTLE_TERRAIN_POND] =
    {
        .name = _("NORMAL - POND            "),
        .background = BATTLE_BACKGROUND(PondWater),
    },
    [BATTLE_TERRAIN_MOUNTAIN] =
    {
        .name = _("NORMAL - MOUNTAIN        "),
        .background = BATTLE_BACKGROUND(Rock),
    },
    [BATTLE_TERRAIN_CAVE] =
    {
        .name = _("NORMAL - CAVE            "),
        .background = BATTLE_BACKGROUND(Cave),
    },
    [BATTLE_TERRAIN_BUILDING] =
    {
        .name = _("NORMAL - BUILDING        "),
        .background = BATTLE_BACKGROUND(Building),
    },
    [BATTLE_TERRAIN_PLAIN] =
    {
        .name = _("NORMAL - PLAIN           "),
        .background =
        {
            .tileset = gBattleTerrainTiles_Building,
            .tilemap = gBattleTerrainTilemap_Building,
            .entryTileset = gBattleTerrainAnimTiles_Building,
            .entryTilemap = gBattleTerrainAnimTilemap_Building,
            .palette = gBattleTerrainPalette_Plain,
        },
    },
};
