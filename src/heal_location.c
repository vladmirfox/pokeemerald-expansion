#include "global.h"
#include "event_data.h"
#include "heal_location.h"
#include "overworld.h"
#include "constants/heal_locations.h"
#include "constants/maps.h"

#include "data/heal_locations.h"

u32 GetHealLocationIndexByMap(u16 mapGroup, u16 mapNum)
{
    u32 i;

    for (i = 0; i < ARRAY_COUNT(sHealLocations); i++)
    {
        if (sHealLocations[i].group == mapGroup && sHealLocations[i].map == mapNum)
            return i + 1;
    }
    return HEAL_LOCATION_NONE;
}

const struct HealLocation *GetHealLocationByMap(u16 mapGroup, u16 mapNum)
{
    u32 index = GetHealLocationIndexByMap(mapGroup, mapNum);

    if (index == HEAL_LOCATION_NONE)
        return NULL;
    else
        return &sHealLocations[index - 1];
}

const struct HealLocation *GetHealLocation(u32 index)
{
    if (index == HEAL_LOCATION_NONE)
        return NULL;
    else if (index > ARRAY_COUNT(sHealLocations))
        return NULL;
    else
        return &sHealLocations[index - 1];
}

bool32 IsLastHealLocation(u32 healLocation)
{
    const struct HealLocation *loc = GetHealLocation(healLocation);
    const struct WarpData *warpData = &gSaveBlock1Ptr->lastHealLocation;

    return warpData->mapGroup == loc->group
        && warpData->mapNum == loc->map
        && warpData->warpId == WARP_ID_NONE
        && warpData->x == loc->x
        && warpData->y == loc->y;
}

static void SetWhiteoutRespawnHealerNpcAsLastTalked(u32 healLocationId)
{
    gSpecialVar_LastTalked = sWhiteoutRespawnHealerNpcLocalIds[healLocationId - 1];
}

void SetWhiteoutRespawnWarpAndHealerNpc(struct WarpData * warp)
{
        u32 healLocationId = GetHealLocationIndexByMap(gSaveBlock1Ptr->lastHealLocation.mapGroup, gSaveBlock1Ptr->lastHealLocation.mapNum);
        warp->mapGroup = sHealLocationsPokemonCenter[healLocationId - 1][0];
        warp->mapNum = sHealLocationsPokemonCenter[healLocationId - 1][1];
        warp->warpId = 0xFF;

        if (sHealLocationsPokemonCenter[healLocationId - 1][0] == MAP_GROUP(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F) && sHealLocationsPokemonCenter[healLocationId - 1][1] == MAP_NUM(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F))
        {
            warp->x = 2;
            warp->y = 7;
        }
        else if (sHealLocationsPokemonCenter[healLocationId - 1][0] == MAP_GROUP(LITTLEROOT_TOWN_MAYS_HOUSE_1F) && sHealLocationsPokemonCenter[healLocationId - 1][1] == MAP_NUM(LITTLEROOT_TOWN_MAYS_HOUSE_1F))
        {
            warp->x = 8;
            warp->y = 7;
        }
        else if (sHealLocations[healLocationId - 1].group == MAP_GROUP(EVER_GRANDE_CITY)
                && sHealLocations[healLocationId - 1].map == MAP_NUM(EVER_GRANDE_CITY)
                && sHealLocations[HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE - 1].x == gSaveBlock1Ptr->lastHealLocation.x 
                && sHealLocations[HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE - 1].y == gSaveBlock1Ptr->lastHealLocation.y)
        {
            healLocationId = HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE;
            warp->mapGroup = sHealLocationsPokemonCenter[healLocationId - 1][0];
            warp->mapNum = sHealLocationsPokemonCenter[healLocationId - 1][1];
            warp->x = 3;
            warp->y = 4;
        }
        else // standard Pokemon Center layout
        {
            warp->x = 7;
            warp->y = 4;
        }
        SetWhiteoutRespawnHealerNpcAsLastTalked(healLocationId);
}

bool32 HasHealNPC(u32 healLocationId)
{
    if (healLocationId == HEAL_LOCATION_NONE || healLocationId > HEAL_LOCATION_MAX)
        return FALSE;
    return sWhiteoutRespawnHealerNpcLocalIds[healLocationId - 1] > 0;
}
