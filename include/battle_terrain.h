#ifndef GUARD_BATTLE_TERRAIN_H
#define GUARD_BATTLE_TERRAIN_H

#include "constants/battle.h"
#include "battle_bg.h"

struct BattleTerrain {
    u8 name[26];
    u16 naturePower;
    struct BattleBackground background;
};

extern const struct BattleTerrain gBattleTerrainInfo[BATTLE_TERRAIN_COUNT];

#endif // GUARD_BATTLE_TERRAIN_H
