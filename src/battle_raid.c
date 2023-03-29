#include "global.h"
#include "battle.h"
#include "battle_raid.h"
#include "battle_setup.h"
#include "data.h"
#include "malloc.h"
#include "pokemon.h"
#include "constants/items.h"
#include "constants/moves.h"

struct RaidType {
    u8 shield:1;
    u8 shockwave:1;
    u8 rules:1;
    u8 gimmick;
};

// Settings for each Raid Type.
static const struct RaidType sRaidTypes[] = {
    [MAX_RAID] = {
        .shield = RAID_GEN_8,
        .shockwave = RAID_GEN_8,
        .rules = RAID_GEN_8,
        .gimmick = GIMMICK_DYNAMAX,
    },
    [TERA_RAID] = {
        .shield = RAID_GEN_9,
        .shockwave = RAID_GEN_9,
        .rules = RAID_GEN_9,
        .gimmick = GIMMICK_TERA,
    },
};

EWRAM_DATA struct RaidData* gRaidData = NULL;

// TODO: Allow for a custom initialized Raid for events?
bool32 InitRaidData(void) {
    // Initialize fields if needed.
    if (gRaidData == NULL)
        gRaidData = AllocZeroed(sizeof(struct RaidData));
    if (gRaidData->mon == NULL)
        gRaidData->mon = AllocZeroed(sizeof(struct Pokemon));
    if (gRaidData->partners == NULL) // TODO: use numPartners or set it here
        gRaidData->partners = AllocZeroed(3 * sizeof(struct Trainer));

    // TODO: Generate the Pokemon, rank, and partners based on a seed.
    //       The above would be selected from a list based off map sections.
    gRaidData->rank = 6;
    CreateMon(gRaidData->mon, SPECIES_SALAMENCE, 50, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);

    return TRUE;
}
