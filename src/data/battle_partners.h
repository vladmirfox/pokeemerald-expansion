const struct Trainer gBattlePartners[] = {
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = NULL,
    },

    [PARTNER_STEVEN] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("STEVEN"),
    },

    [PARTNER_MAY] =
    {
        .party = TRAINER_PARTY(sParty_MayPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("MAY"),
    },
};
