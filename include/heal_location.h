#ifndef GUARD_HEAL_LOCATION_H
#define GUARD_HEAL_LOCATION_H

struct HealLocation
{
    s8 group;
    s8 map;
    u16 x;
    u16 y;
};

u32 GetHealLocationIndexByMap(u16 mapGroup, u16 mapNum);
const struct HealLocation *GetHealLocationByMap(u16 mapGroup, u16 mapNum);
const struct HealLocation *GetHealLocation(u32 index);
bool32 IsLastHealLocation(u32 healLocation);
void SetWhiteoutRespawnWarpAndHealerNpc(struct WarpData * warp);
bool32 HasHealNPC(u32 healLocationId);

#endif // GUARD_HEAL_LOCATION_H
