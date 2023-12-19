static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .species = SPECIES_METANG,
        .lvl = 42,
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 43,
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 44,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
    }
};

static const struct TrainerMon sParty_MayPartner[] = {
    {
        .species = SPECIES_TREECKO,
        .lvl = 20,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ENERGY_BALL},
        .isShiny = TRUE,
    },
    {
        .species = SPECIES_TORCHIC,
        .lvl = 20,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FLAMETHROWER},
    },
    {
        .species = SPECIES_MUDKIP,
        .lvl = 20,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WATERFALL},
    }
};
