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
#define NUM_RAID_TYPES 2

struct RaidType {
    u8 shield:1;
    u8 shockwave:1;
    u8 rules:1;
    u8 gimmick;
};

struct RaidData {
    u8 rank;
    u8 raidType;
    struct Pokemon* mon;
    struct Trainer* partners;
    u8 numPartners;
};

extern const struct RaidType gRaidTypes[NUM_RAID_TYPES];
extern struct RaidData* gRaidData;

// Functions
bool32 InitRaidData(void);
bool32 InitCustomRaidData(void);
bool32 IsRaidBoss(u16 battlerId);

#endif
