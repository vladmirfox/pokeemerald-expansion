#define DEFAULT_MONEY 5
#define DEFAULT_BALL ITEM_POKE_BALL

const struct TrainerClass gTrainerClasses[TRAINER_CLASS_COUNT] =
{
    [TRAINER_CLASS_PKMN_TRAINER_1] =
    {
        .name = _("{PKMN} TRAINER"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PKMN_TRAINER_2] =
    {
        .name = _("{PKMN} TRAINER"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_HIKER] =
    {
        .name = _("HIKER"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_TEAM_AQUA] =
    {
        .name = _("TEAM AQUA"),
        .money = 5,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PKMN_BREEDER] =
    {
        .name = _("{PKMN} BREEDER"),
        .money = 10,
        .ball = (B_TRAINER_CLASS_POKE_BALLS >= GEN_7) ? ITEM_HEAL_BALL : ITEM_FRIEND_BALL,
    },

    [TRAINER_CLASS_COOLTRAINER] =
    {
        .name = _("COOLTRAINER"),
        .money = 12,
        .ball = ITEM_ULTRA_BALL,
    },

    [TRAINER_CLASS_BIRD_KEEPER] =
    {
        .name = _("BIRD KEEPER"),
        .money = 8,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_COLLECTOR] =
    {
        .name = _("COLLECTOR"),
        .money = 15,
        .ball = ITEM_PREMIER_BALL,
    },

    [TRAINER_CLASS_SWIMMER_M] =
    {
        .name = _("SWIMMER♂"),
        .money = 2,
        .ball = ITEM_DIVE_BALL,
    },

    [TRAINER_CLASS_TEAM_MAGMA] =
    {
        .name = _("TEAM MAGMA"),
        .money = 5,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_EXPERT] =
    {
        .name = _("EXPERT"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_AQUA_ADMIN] =
    {
        .name = _("AQUA ADMIN"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_BLACK_BELT] =
    {
        .name = _("BLACK BELT"),
        .money = 8,
        .ball = ITEM_ULTRA_BALL,
    },

    [TRAINER_CLASS_AQUA_LEADER] =
    {
        .name = _("AQUA LEADER"),
        .money = 20,
        .ball = ITEM_MASTER_BALL,
    },

    [TRAINER_CLASS_HEX_MANIAC] =
    {
        .name = _("HEX MANIAC"),
        .money = 6,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_AROMA_LADY] =
    {
        .name = _("AROMA LADY"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_RUIN_MANIAC] =
    {
        .name = _("RUIN MANIAC"),
        .money = 15,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_INTERVIEWER] =
    {
        .name = _("INTERVIEWER"),
        .money = 12,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_TUBER_F] =
    {
        .name = _("TUBER"),
        .money = 1,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_TUBER_M] =
    {
        .name = _("TUBER"),
        .money = 1,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_LADY] =
    {
        .name = _("LADY"),
        .money = 50,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_BEAUTY] =
    {
        .name = _("BEAUTY"),
        .money = 20,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_RICH_BOY] =
    {
        .name = _("RICH BOY"),
        .money = 50,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_POKEMANIAC] =
    {
        .name = _("POKéMANIAC"),
        .money = 15,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_GUITARIST] =
    {
        .name = _("GUITARIST"),
        .money = 8,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_KINDLER] =
    {
        .name = _("KINDLER"),
        .money = 8,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_CAMPER] =
    {
        .name = _("CAMPER"),
        .money = 4,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PICNICKER] =
    {
        .name = _("PICNICKER"),
        .money = 4,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_BUG_MANIAC] =
    {
        .name = _("BUG MANIAC"),
        .money = 15,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PSYCHIC] =
    {
        .name = _("PSYCHIC"),
        .money = 6,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_GENTLEMAN] =
    {
        .name = _("GENTLEMAN"),
        .money = 20,
        .ball = ITEM_LUXURY_BALL,
    },

    [TRAINER_CLASS_ELITE_FOUR] =
    {
        .name = _("ELITE FOUR"),
        .money = 25,
        .ball = ITEM_ULTRA_BALL,
    },

    [TRAINER_CLASS_LEADER] =
    {
        .name = _("LEADER"),
        .money = 25,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_SCHOOL_KID] =
    {
        .name = _("SCHOOL KID"),
        .money = 5,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_SR_AND_JR] =
    {
        .name = _("SR. AND JR."),
        .money = 4,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_WINSTRATE] =
    {
        .name = _("WINSTRATE"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_POKEFAN] =
    {
        .name = _("POKéFAN"),
        .money = 20,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_YOUNGSTER] =
    {
        .name = _("YOUNGSTER"),
        .money = 4,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_CHAMPION] =
    {
        .name = _("CHAMPION"),
        .money = 50,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_FISHERMAN] =
    {
        .name = _("FISHERMAN"),
        .money = 10,
        .ball = (B_TRAINER_CLASS_POKE_BALLS >= GEN_8) ? ITEM_DIVE_BALL : ITEM_LURE_BALL,
    },

    [TRAINER_CLASS_TRIATHLETE] =
    {
        .name = _("TRIATHLETE"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_DRAGON_TAMER] =
    {
        .name = _("DRAGON TAMER"),
        .money = 12,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_NINJA_BOY] =
    {
        .name = _("NINJA BOY"),
        .money = 3,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_BATTLE_GIRL] =
    {
        .name = _("BATTLE GIRL"),
        .money = 6,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PARASOL_LADY] =
    {
        .name = _("PARASOL LADY"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_SWIMMER_F] =
    {
        .name = _("SWIMMER♀"),
        .money = 2,
        .ball = ITEM_DIVE_BALL,
    },

    [TRAINER_CLASS_TWINS] =
    {
        .name = _("TWINS"),
        .money = 3,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_SAILOR] =
    {
        .name = _("SAILOR"),
        .money = 8,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_COOLTRAINER_2] =
    {
        .name = _("COOLTRAINER"),
        .money = DEFAULT_MONEY,
        .ball = ITEM_ULTRA_BALL,
    },

    [TRAINER_CLASS_MAGMA_ADMIN] =
    {
        .name = _("MAGMA ADMIN"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_RIVAL] =
    {
        .name = _("{PKMN} TRAINER"),
        .money = 15,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_BUG_CATCHER] =
    {
        .name = _("BUG CATCHER"),
        .money = 4,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PKMN_RANGER] =
    {
        .name = _("{PKMN} RANGER"),
        .money = 12,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_MAGMA_LEADER] =
    {
        .name = _("MAGMA LEADER"),
        .money = 20,
        .ball = ITEM_MASTER_BALL,
    },

    [TRAINER_CLASS_LASS] =
    {
        .name = _("LASS"),
        .money = 4,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_YOUNG_COUPLE] =
    {
        .name = _("YOUNG COUPLE"),
        .money = 8,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_OLD_COUPLE] =
    {
        .name = _("OLD COUPLE"),
        .money = 10,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_SIS_AND_BRO] =
    {
        .name = _("SIS AND BRO"),
        .money = 3,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_SALON_MAIDEN] =
    {
        .name = _("SALON MAIDEN"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_DOME_ACE] =
    {
        .name = _("DOME ACE"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PALACE_MAVEN] =
    {
        .name = _("PALACE MAVEN"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_ARENA_TYCOON] =
    {
        .name = _("ARENA TYCOON"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_FACTORY_HEAD] =
    {
        .name = _("FACTORY HEAD"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PIKE_QUEEN] =
    {
        .name = _("PIKE QUEEN"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_PYRAMID_KING] =
    {
        .name = _("PYRAMID KING"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },

    [TRAINER_CLASS_RS_PROTAG] =
    {
        .name = _("{PKMN} TRAINER"),
        .money = DEFAULT_MONEY,
        .ball = DEFAULT_BALL,
    },
};
