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
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_ENERGY_BALL,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_SEED_BOMB,
    #else
        .naturePower = MOVE_STUN_SPORE,
    #endif
        .background = BATTLE_BACKGROUND(TallGrass),
    },
    [BATTLE_TERRAIN_LONG_GRASS] =
    {
        .name = _("NORMAL - LONG GRASS"),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_ENERGY_BALL,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_SEED_BOMB,
    #else
        .naturePower = MOVE_RAZOR_LEAF,
    #endif
        .background = BATTLE_BACKGROUND(LongGrass),
    },
    [BATTLE_TERRAIN_SAND] =
    {
        .name = _("NORMAL - SAND"),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_6 ? MOVE_EARTH_POWER : MOVE_EARTHQUAKE,
        .background = BATTLE_BACKGROUND(Sand),
    },
    [BATTLE_TERRAIN_UNDERWATER] =
    {
        .name = _("NORMAL - UNDERWATER      "),
        .naturePower = MOVE_HYDRO_PUMP,
        .background = BATTLE_BACKGROUND(Underwater),
    },
    [BATTLE_TERRAIN_WATER] =
    {
        .name = _("NORMAL - WATER           "),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_HYDRO_PUMP : MOVE_SURF,
        .background = BATTLE_BACKGROUND(Water),
    },
    [BATTLE_TERRAIN_POND] =
    {
        .name = _("NORMAL - POND            "),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_HYDRO_PUMP : MOVE_BUBBLE_BEAM,
        .background = BATTLE_BACKGROUND(PondWater),
    },
    [BATTLE_TERRAIN_MOUNTAIN] =
    {
        .name = _("NORMAL - MOUNTAIN        "),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_EARTH_POWER,
    #elif B_NATURE_POWER_MOVES >= GEN_5
        .naturePower = MOVE_EARTHQUAKE,
    #else
        .naturePower = MOVE_ROCK_SLIDE,
    #endif
        .background = BATTLE_BACKGROUND(Rock),
    },
    [BATTLE_TERRAIN_CAVE] =
    {
        .name = _("NORMAL - CAVE            "),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_EARTH_POWER,
    #elif B_NATURE_POWER_MOVES >= GEN_5
        .naturePower = MOVE_EARTHQUAKE,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_ROCK_SLIDE,
    #else
        .naturePower = MOVE_SHADOW_BALL,
    #endif
        .background = BATTLE_BACKGROUND(Cave),
    },
    [BATTLE_TERRAIN_BUILDING] =
    {
        .name = _("NORMAL - BUILDING        "),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT,
        .background = BATTLE_BACKGROUND(Building),
    },
    [BATTLE_TERRAIN_PLAIN] =
    {
        .name = _("NORMAL - PLAIN           "),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_TRI_ATTACK,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_EARTHQUAKE,
    #else
        .naturePower = MOVE_SWIFT,
    #endif
        .background =
        {
            .tileset = gBattleTerrainTiles_Building,
            .tilemap = gBattleTerrainTilemap_Building,
            .entryTileset = gBattleTerrainAnimTiles_Building,
            .entryTilemap = gBattleTerrainAnimTilemap_Building,
            .palette = gBattleTerrainPalette_Plain,
        },
    },
    [BATTLE_TERRAIN_SOARING] =
    {
        .naturePower = MOVE_AIR_SLASH,
    },
    [BATTLE_TERRAIN_SKY_PILLAR] =
    {
        .naturePower = MOVE_AIR_SLASH,
    },
    [BATTLE_TERRAIN_BURIAL_GROUND] =
    {
        .naturePower = MOVE_SHADOW_BALL,
    },
    [BATTLE_TERRAIN_PUDDLE] =
    {
        .naturePower = MOVE_MUD_BOMB,
    },
    [BATTLE_TERRAIN_MARSH] =
    {
        .naturePower = MOVE_MUD_BOMB,
    },
    [BATTLE_TERRAIN_SWAMP] =
    {
        .naturePower = MOVE_MUD_BOMB,
    },
    [BATTLE_TERRAIN_SNOW] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_7
        .naturePower = MOVE_ICE_BEAM,
    #elif B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_FROST_BREATH,
    #else
        .naturePower = MOVE_BLIZZARD,
    #endif
    },
    [BATTLE_TERRAIN_ICE] =
    {
        .naturePower = MOVE_ICE_BEAM,
    },
    [BATTLE_TERRAIN_VOLCANO] =
    {
        .naturePower = MOVE_LAVA_PLUME,
    },
    [BATTLE_TERRAIN_DISTORTION_WORLD] =
    {
        .naturePower = MOVE_TRI_ATTACK,
    },
    [BATTLE_TERRAIN_SPACE] =
    {
        .naturePower = MOVE_DRACO_METEOR,
    },
    [BATTLE_TERRAIN_ULTRA_SPACE] =
    {
        .naturePower = MOVE_PSYSHOCK,
    },
};
