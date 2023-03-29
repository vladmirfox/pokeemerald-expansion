#ifndef GUARD_BATTLE_RAID_H
#define GUARD_BATTLE_RAID_H

// Constants for Raid Settings
#define RAID_GEN_8  0
#define RAID_GEN_9  1

// Gimmick IDs
#define GIMMICK_DYNAMAX 0
#define GIMMICK_TERA    1

// Raid Type IDs
#define MAX_RAID    0
#define TERA_RAID   1

struct RaidData {
    u8 rank;
    u8 raidType;
    struct Pokemon* mon;
    struct Trainer* partners;
    u8 numPartners;
};

extern struct RaidData* gRaidData;

// Functions
bool32 InitRaidData(void);
bool32 InitCustomRaidData(void);

#endif
