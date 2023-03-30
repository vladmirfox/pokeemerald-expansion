#ifndef GUARD_BATTLE_RAID_H
#define GUARD_BATTLE_RAID_H

// Constants for Raid Settings
#define RAID_GEN_8  0
#define RAID_GEN_9  1

// Gimmick IDs
#define GIMMICK_MEGA    0
#define GIMMICK_DYNAMAX 1
#define GIMMICK_TERA    2

// Raid Type IDs
#define RAID_TYPE_MAX    0
#define RAID_TYPE_TERA   1
#define RAID_TYPE_MEGA   2
#define NUM_RAID_TYPES   3

// Raid Battle States
#define RAID_INTRO_COMPLETE     (1 << 1)
#define RAID_CREATE_SHIELD      (1 << 2)
#define RAID_BREAK_SHIELD       (1 << 3)
#define RAID_CATCHING_BOSS      (1 << 4)

// Raid Storm Levels
#define RAID_STORM_LEVEL_1     3    // number of turns
#define RAID_STORM_LEVEL_2     6
#define RAID_STORM_LEVEL_3     9
#define RAID_STORM_MAX         10

// Raid Ranks
#define RAID_RANK_1     0
#define RAID_RANK_2     1
#define RAID_RANK_3     2
#define RAID_RANK_4     3
#define RAID_RANK_5     4
#define RAID_RANK_6     5
#define RAID_RANK_7     6
#define MAX_RAID_RANK   RAID_RANK_7

// Other Constants
#define MAX_RAID_DROPS     12
#define MAX_SHIELD_COUNT   5

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
void InitRaidBattleData(void);
bool32 IsRaidBoss(u16 battlerId);
void ApplyRaidHPMultiplier(u16 battlerId, struct Pokemon* mon);
bool32 ShouldRaidKickPlayer(void);

#endif
