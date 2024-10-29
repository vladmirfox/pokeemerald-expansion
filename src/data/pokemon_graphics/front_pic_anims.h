static const union AnimCmd sAnim_SingleFramePlaceHolder_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END, 
};

static const union AnimCmd *const sAnims_SingleFramePlaceHolder[] =
{
    sAnim_GeneralFrame0,
    sAnim_SingleFramePlaceHolder_1,
};

static const union AnimCmd sAnim_TwoFramePlaceHolder_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END, 
};

static const union AnimCmd *const sAnims_TwoFramePlaceHolder[] =
{
    sAnim_GeneralFrame0,
    sAnim_TwoFramePlaceHolder_1,
};

#if P_FAMILY_BULBASAUR
static const union AnimCmd sAnim_Bulbasaur_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ivysaur_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venusaur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
static const union AnimCmd sAnim_Charmander_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charmeleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charizard_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
static const union AnimCmd sAnim_Squirtle_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wartortle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blastoise_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
static const union AnimCmd sAnim_Caterpie_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metapod_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Butterfree_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
static const union AnimCmd sAnim_Weedle_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kakuna_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beedrill_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
static const union AnimCmd sAnim_Pidgey_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgeotto_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgeot_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
static const union AnimCmd sAnim_Rattata_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raticate_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
static const union AnimCmd sAnim_Spearow_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fearow_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
static const union AnimCmd sAnim_Ekans_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arbok_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Pichu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Pikachu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raichu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
static const union AnimCmd sAnim_Sandshrew_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandslash_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
static const union AnimCmd sAnim_NidoranF_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidorina_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidoqueen_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_NidoranM_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidorino_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidoking_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Cleffa_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Clefairy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clefable_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
static const union AnimCmd sAnim_Vulpix_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninetales_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Igglybuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Jigglypuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wigglytuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
static const union AnimCmd sAnim_Zubat_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golbat_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Crobat_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
static const union AnimCmd sAnim_Oddish_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gloom_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vileplume_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Bellossom_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
static const union AnimCmd sAnim_Paras_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Parasect_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
static const union AnimCmd sAnim_Venonat_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venomoth_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
static const union AnimCmd sAnim_Diglett_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dugtrio_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
static const union AnimCmd sAnim_Meowth_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Persian_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
static const union AnimCmd sAnim_Psyduck_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golduck_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
static const union AnimCmd sAnim_Mankey_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Primeape_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
static const union AnimCmd sAnim_Growlithe_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arcanine_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
static const union AnimCmd sAnim_Poliwag_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwhirl_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwrath_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Politoed_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
static const union AnimCmd sAnim_Abra_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kadabra_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Alakazam_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
static const union AnimCmd sAnim_Machop_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machoke_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machamp_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
static const union AnimCmd sAnim_Bellsprout_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weepinbell_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Victreebel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
static const union AnimCmd sAnim_Tentacool_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tentacruel_1[] =
{
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 19),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
static const union AnimCmd sAnim_Geodude_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Graveler_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golem_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 31),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
static const union AnimCmd sAnim_Ponyta_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rapidash_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
static const union AnimCmd sAnim_Slowpoke_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slowbro_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Slowking_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
static const union AnimCmd sAnim_Magnemite_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magneton_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Magnezone_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
static const union AnimCmd sAnim_Farfetchd_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
static const union AnimCmd sAnim_Doduo_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dodrio_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
static const union AnimCmd sAnim_Seel_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewgong_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
static const union AnimCmd sAnim_Grimer_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Muk_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
static const union AnimCmd sAnim_Shellder_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cloyster_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
static const union AnimCmd sAnim_Gastly_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haunter_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gengar_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
static const union AnimCmd sAnim_Onix_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Steelix_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
static const union AnimCmd sAnim_Drowzee_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hypno_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
static const union AnimCmd sAnim_Krabby_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kingler_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
static const union AnimCmd sAnim_Voltorb_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Electrode_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
static const union AnimCmd sAnim_Exeggcute_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exeggutor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
static const union AnimCmd sAnim_Cubone_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marowak_1[] =
{
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Tyrogue_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Hitmonlee_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hitmonchan_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Hitmontop_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
static const union AnimCmd sAnim_Lickitung_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Lickilicky_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
static const union AnimCmd sAnim_Koffing_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weezing_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
static const union AnimCmd sAnim_Rhyhorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhydon_1[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Rhyperior_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Happiny_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Chansey_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Blissey_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
static const union AnimCmd sAnim_Tangela_1[] =
{
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Tangrowth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
static const union AnimCmd sAnim_Kangaskhan_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
static const union AnimCmd sAnim_Horsea_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seadra_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Kingdra_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
static const union AnimCmd sAnim_Goldeen_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seaking_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
static const union AnimCmd sAnim_Staryu_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Starmie_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_MimeJr_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_MrMime_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
static const union AnimCmd sAnim_Scyther_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Scizor_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Smoochum_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Jynx_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Elekid_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Electabuzz_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Electivire_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Magby_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

static const union AnimCmd sAnim_Magmar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Magmortar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
static const union AnimCmd sAnim_Pinsir_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
static const union AnimCmd sAnim_Tauros_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
static const union AnimCmd sAnim_Magikarp_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gyarados_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
static const union AnimCmd sAnim_Lapras_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
static const union AnimCmd sAnim_Ditto_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
static const union AnimCmd sAnim_Eevee_1[] =
{
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vaporeon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jolteon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flareon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Espeon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Umbreon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Leafeon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glaceon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
static const union AnimCmd sAnim_Sylveon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
static const union AnimCmd sAnim_Porygon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_2_CROSS_EVOS
static const union AnimCmd sAnim_Porygon2_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Porygon_Z_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
static const union AnimCmd sAnim_Omanyte_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Omastar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
static const union AnimCmd sAnim_Kabuto_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kabutops_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
static const union AnimCmd sAnim_Aerodactyl_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Munchlax_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Snorlax_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
static const union AnimCmd sAnim_Articuno_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
static const union AnimCmd sAnim_Zapdos_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
static const union AnimCmd sAnim_Moltres_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
static const union AnimCmd sAnim_Dratini_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonair_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonite_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
static const union AnimCmd sAnim_Mewtwo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
static const union AnimCmd sAnim_Mew_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MEW

#if P_FAMILY_CHIKORITA
static const union AnimCmd sAnim_Chikorita_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bayleef_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meganium_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
static const union AnimCmd sAnim_Cyndaquil_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilava_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Typhlosion_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
static const union AnimCmd sAnim_Totodile_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Croconaw_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Feraligatr_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
static const union AnimCmd sAnim_Sentret_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Furret_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
static const union AnimCmd sAnim_Hoothoot_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noctowl_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
static const union AnimCmd sAnim_Ledyba_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ledian_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
static const union AnimCmd sAnim_Spinarak_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ariados_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
static const union AnimCmd sAnim_Chinchou_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lanturn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
static const union AnimCmd sAnim_Togepi_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Togetic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Togekiss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
static const union AnimCmd sAnim_Natu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Xatu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
static const union AnimCmd sAnim_Mareep_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flaaffy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ampharos_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
static const union AnimCmd sAnim_Azurill_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};
#endif //P_GEN_3_CROSS_EVOS

static const union AnimCmd sAnim_Marill_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Azumarill_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Bonsly_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Sudowoodo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
static const union AnimCmd sAnim_Hoppip_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skiploom_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jumpluff_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
static const union AnimCmd sAnim_Aipom_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Ambipom_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
static const union AnimCmd sAnim_Sunkern_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sunflora_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
static const union AnimCmd sAnim_Yanma_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Yanmega_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
static const union AnimCmd sAnim_Wooper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quagsire_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
static const union AnimCmd sAnim_Murkrow_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Honchkrow_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
static const union AnimCmd sAnim_Misdreavus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mismagius_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
static const union AnimCmd sAnim_Wynaut_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_3_CROSS_EVOS

static const union AnimCmd sAnim_Wobbuffet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_GIRAFARIG
static const union AnimCmd sAnim_Girafarig_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
static const union AnimCmd sAnim_Pineco_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Forretress_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
static const union AnimCmd sAnim_Dunsparce_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
static const union AnimCmd sAnim_Gligar_1[] =
{
    ANIMCMD_FRAME(1, 17),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Gliscor_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
static const union AnimCmd sAnim_Snubbull_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Granbull_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
static const union AnimCmd sAnim_Qwilfish_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
static const union AnimCmd sAnim_Shuckle_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
static const union AnimCmd sAnim_Heracross_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
static const union AnimCmd sAnim_Sneasel_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Weavile_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
static const union AnimCmd sAnim_Teddiursa_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ursaring_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
static const union AnimCmd sAnim_Slugma_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magcargo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
static const union AnimCmd sAnim_Swinub_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Piloswine_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mamoswine_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
static const union AnimCmd sAnim_Corsola_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
static const union AnimCmd sAnim_Remoraid_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Octillery_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
static const union AnimCmd sAnim_Delibird_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Mantyke_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Mantine_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
static const union AnimCmd sAnim_Skarmory_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
static const union AnimCmd sAnim_Houndour_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Houndoom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
static const union AnimCmd sAnim_Phanpy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Donphan_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
static const union AnimCmd sAnim_Stantler_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_STANTLER

#if P_FAMILY_SMEARGLE
static const union AnimCmd sAnim_Smeargle_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SMEARGLE

#if P_FAMILY_MILTANK
static const union AnimCmd sAnim_Miltank_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_MILTANK

#if P_FAMILY_RAIKOU
static const union AnimCmd sAnim_Raikou_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
static const union AnimCmd sAnim_Entei_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
static const union AnimCmd sAnim_Suicune_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LARVITAR
static const union AnimCmd sAnim_Larvitar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pupitar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyranitar_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_LUGIA
static const union AnimCmd sAnim_Lugia_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUGIA

#if P_FAMILY_HO_OH
static const union AnimCmd sAnim_HoOh_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_HO_OH

#if P_FAMILY_CELEBI
static const union AnimCmd sAnim_Celebi_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_CELEBI

#if P_FAMILY_TREECKO
static const union AnimCmd sAnim_Treecko_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grovyle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sceptile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
static const union AnimCmd sAnim_Torchic_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Combusken_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blaziken_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
static const union AnimCmd sAnim_Mudkip_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marshtomp_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swampert_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
static const union AnimCmd sAnim_Poochyena_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mightyena_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_POOCHYENA

#if P_FAMILY_ZIGZAGOON
static const union AnimCmd sAnim_Zigzagoon_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Linoone_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_WURMPLE
static const union AnimCmd sAnim_Wurmple_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Silcoon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beautifly_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cascoon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dustox_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_WURMPLE

#if P_FAMILY_LOTAD
static const union AnimCmd sAnim_Lotad_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lombre_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ludicolo_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
static const union AnimCmd sAnim_Seedot_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nuzleaf_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shiftry_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
static const union AnimCmd sAnim_Taillow_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swellow_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
static const union AnimCmd sAnim_Wingull_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pelipper_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
static const union AnimCmd sAnim_Ralts_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kirlia_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 39),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gardevoir_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Gallade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
static const union AnimCmd sAnim_Surskit_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Masquerain_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
static const union AnimCmd sAnim_Shroomish_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Breloom_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
static const union AnimCmd sAnim_Slakoth_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vigoroth_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slaking_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
static const union AnimCmd sAnim_Nincada_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninjask_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shedinja_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
static const union AnimCmd sAnim_Whismur_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Loudred_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exploud_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
static const union AnimCmd sAnim_Makuhita_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hariyama_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
static const union AnimCmd sAnim_Nosepass_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Probopass_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
static const union AnimCmd sAnim_Skitty_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delcatty_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
static const union AnimCmd sAnim_Sableye_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
static const union AnimCmd sAnim_Mawile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
static const union AnimCmd sAnim_Aron_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lairon_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aggron_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
static const union AnimCmd sAnim_Meditite_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Medicham_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
static const union AnimCmd sAnim_Electrike_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manectric_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
static const union AnimCmd sAnim_Plusle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
static const union AnimCmd sAnim_Minun_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
static const union AnimCmd sAnim_Volbeat_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Illumise_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Budew_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Roselia_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Roserade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
static const union AnimCmd sAnim_Gulpin_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swalot_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
static const union AnimCmd sAnim_Carvanha_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sharpedo_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
static const union AnimCmd sAnim_Wailmer_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wailord_1[] =
{
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
static const union AnimCmd sAnim_Numel_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Camerupt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
static const union AnimCmd sAnim_Torkoal_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
static const union AnimCmd sAnim_Spoink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grumpig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
static const union AnimCmd sAnim_Spinda_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
static const union AnimCmd sAnim_Trapinch_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vibrava_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flygon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
static const union AnimCmd sAnim_Cacnea_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cacturne_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
static const union AnimCmd sAnim_Swablu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Altaria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
static const union AnimCmd sAnim_Zangoose_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
static const union AnimCmd sAnim_Seviper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
static const union AnimCmd sAnim_Lunatone_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
static const union AnimCmd sAnim_Solrock_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
static const union AnimCmd sAnim_Barboach_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whiscash_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
static const union AnimCmd sAnim_Corphish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawdaunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
static const union AnimCmd sAnim_Baltoy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Claydol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
static const union AnimCmd sAnim_Lileep_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cradily_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
static const union AnimCmd sAnim_Anorith_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Armaldo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
static const union AnimCmd sAnim_Feebas_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Milotic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
static const union AnimCmd sAnim_CastformNormal_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSunny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformRainy_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSnowy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
static const union AnimCmd sAnim_Kecleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
static const union AnimCmd sAnim_Shuppet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Banette_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
static const union AnimCmd sAnim_Duskull_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dusclops_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Dusknoir_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
static const union AnimCmd sAnim_Tropius_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Chingling_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS

static const union AnimCmd sAnim_Chimecho_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
static const union AnimCmd sAnim_Absol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
static const union AnimCmd sAnim_Snorunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glalie_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

#if P_GEN_4_CROSS_EVOS
static const union AnimCmd sAnim_Froslass_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
static const union AnimCmd sAnim_Spheal_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sealeo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Walrein_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
static const union AnimCmd sAnim_Clamperl_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Huntail_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorebyss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
static const union AnimCmd sAnim_Relicanth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
static const union AnimCmd sAnim_Luvdisc_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
static const union AnimCmd sAnim_Bagon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shelgon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamence_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
static const union AnimCmd sAnim_Beldum_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metang_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metagross_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
static const union AnimCmd sAnim_Regirock_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
static const union AnimCmd sAnim_Regice_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
static const union AnimCmd sAnim_Registeel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
static const union AnimCmd sAnim_Latias_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
static const union AnimCmd sAnim_Latios_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
static const union AnimCmd sAnim_Kyogre_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
static const union AnimCmd sAnim_Groudon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
static const union AnimCmd sAnim_Rayquaza_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
static const union AnimCmd sAnim_Jirachi_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
static const union AnimCmd sAnim_DeoxysNormal_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysAttack_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysDefense_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysSpeed_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEOXYS

#if P_FAMILY_TURTWIG
static const union AnimCmd sAnim_Turtwig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grotle_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torterra_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
static const union AnimCmd sAnim_Chimchar_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Monferno_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Infernape_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
static const union AnimCmd sAnim_Piplup_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Prinplup_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Empoleon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
static const union AnimCmd sAnim_Starly_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staravia_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staraptor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
static const union AnimCmd sAnim_Bidoof_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bibarel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
static const union AnimCmd sAnim_Kricketot_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kricketune_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
static const union AnimCmd sAnim_Shinx_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxio_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxray_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
static const union AnimCmd sAnim_Cranidos_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rampardos_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
static const union AnimCmd sAnim_Shieldon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bastiodon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
static const union AnimCmd sAnim_Burmy_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wormadam_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mothim_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
static const union AnimCmd sAnim_Combee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vespiquen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
static const union AnimCmd sAnim_Pachirisu_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
static const union AnimCmd sAnim_Buizel_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floatzel_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
static const union AnimCmd sAnim_Cherubi_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimOvercast_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimSunshine_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
static const union AnimCmd sAnim_Shellos_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gastrodon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
static const union AnimCmd sAnim_Drifloon_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drifblim_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
static const union AnimCmd sAnim_Buneary_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lopunny_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
static const union AnimCmd sAnim_Glameow_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Purugly_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
static const union AnimCmd sAnim_Stunky_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skuntank_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
static const union AnimCmd sAnim_Bronzor_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bronzong_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
static const union AnimCmd sAnim_Chatot_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
static const union AnimCmd sAnim_Spiritomb_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
static const union AnimCmd sAnim_Gible_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gabite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garchomp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
static const union AnimCmd sAnim_Riolu_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lucario_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
static const union AnimCmd sAnim_Hippopotas_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hippowdon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
static const union AnimCmd sAnim_Skorupi_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drapion_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
static const union AnimCmd sAnim_Croagunk_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxicroak_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
static const union AnimCmd sAnim_Carnivine_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
static const union AnimCmd sAnim_Finneon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lumineon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
static const union AnimCmd sAnim_Snover_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Abomasnow_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
static const union AnimCmd sAnim_Rotom_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomHeat_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomWash_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFrost_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFan_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomMow_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
static const union AnimCmd sAnim_Uxie_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
static const union AnimCmd sAnim_Mesprit_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
static const union AnimCmd sAnim_Azelf_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
static const union AnimCmd sAnim_Dialga_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
static const union AnimCmd sAnim_Palkia_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
static const union AnimCmd sAnim_Heatran_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
static const union AnimCmd sAnim_Regigigas_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
static const union AnimCmd sAnim_GiratinaAltered_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GiratinaOrigin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
static const union AnimCmd sAnim_Cresselia_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
static const union AnimCmd sAnim_Phione_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manaphy_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
static const union AnimCmd sAnim_Darkrai_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
static const union AnimCmd sAnim_ShayminLand_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ShayminSky_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
static const union AnimCmd sAnim_Arceus_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCEUS

#if P_FAMILY_VICTINI
static const union AnimCmd sAnim_Victini_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VICTINI

#if P_FAMILY_SNIVY
static const union AnimCmd sAnim_Snivy_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Servine_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Serperior_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
static const union AnimCmd sAnim_Tepig_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pignite_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Emboar_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
static const union AnimCmd sAnim_Oshawott_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewott_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Samurott_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
static const union AnimCmd sAnim_Patrat_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Watchog_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0 , 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
static const union AnimCmd sAnim_Lillipup_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Herdier_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stoutland_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
static const union AnimCmd sAnim_Purrloin_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Liepard_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
static const union AnimCmd sAnim_Pansage_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisage_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
static const union AnimCmd sAnim_Pansear_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisear_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
static const union AnimCmd sAnim_Panpour_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simipour_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
static const union AnimCmd sAnim_Munna_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Musharna_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
static const union AnimCmd sAnim_Pidove_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tranquill_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Unfezant_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
static const union AnimCmd sAnim_Blitzle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zebstrika_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
static const union AnimCmd sAnim_Roggenrola_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Boldore_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gigalith_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
static const union AnimCmd sAnim_Woobat_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swoobat_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
static const union AnimCmd sAnim_Drilbur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Excadrill_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
static const union AnimCmd sAnim_Audino_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
static const union AnimCmd sAnim_Timburr_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gurdurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Conkeldurr_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
static const union AnimCmd sAnim_Tympole_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palpitoad_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seismitoad_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
static const union AnimCmd sAnim_Throh_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_THROH

#if P_FAMILY_SAWK
static const union AnimCmd sAnim_Sawk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SAWK

#if P_FAMILY_SEWADDLE
static const union AnimCmd sAnim_Sewaddle_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swadloon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Leavanny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
static const union AnimCmd sAnim_Venipede_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whirlipede_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scolipede_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_COTTONEE
static const union AnimCmd sAnim_Cottonee_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whimsicott_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
static const union AnimCmd sAnim_Petilil_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lilligant_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
static const union AnimCmd sAnim_Basculin_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
static const union AnimCmd sAnim_Sandile_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krokorok_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krookodile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
static const union AnimCmd sAnim_Darumaka_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanStandard_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanZen_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
static const union AnimCmd sAnim_Maractus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
static const union AnimCmd sAnim_Dwebble_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crustle_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
static const union AnimCmd sAnim_Scraggy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scrafty_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
static const union AnimCmd sAnim_Sigilyph_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
static const union AnimCmd sAnim_Yamask_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cofagrigus_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
static const union AnimCmd sAnim_Tirtouga_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carracosta_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
static const union AnimCmd sAnim_Archen_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Archeops_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
static const union AnimCmd sAnim_Trubbish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garbodor_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
static const union AnimCmd sAnim_Zorua_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zoroark_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
static const union AnimCmd sAnim_Minccino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cinccino_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
static const union AnimCmd sAnim_Gothita_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothorita_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothitelle_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
static const union AnimCmd sAnim_Solosis_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Duosion_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Reuniclus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
static const union AnimCmd sAnim_Ducklett_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swanna_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
static const union AnimCmd sAnim_Vanillite_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanillish_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanilluxe_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
static const union AnimCmd sAnim_Deerling_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sawsbuck_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
static const union AnimCmd sAnim_Emolga_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
static const union AnimCmd sAnim_Karrablast_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Escavalier_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
static const union AnimCmd sAnim_Foongus_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Amoonguss_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
static const union AnimCmd sAnim_Frillish_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellicent_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
static const union AnimCmd sAnim_Alomomola_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
static const union AnimCmd sAnim_Joltik_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Galvantula_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
static const union AnimCmd sAnim_Ferroseed_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferrothorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_KLINK
static const union AnimCmd sAnim_Klink_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klinklang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_KLINK

#if P_FAMILY_TYNAMO
static const union AnimCmd sAnim_Tynamo_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektrik_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektross_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_ELGYEM
static const union AnimCmd sAnim_Elgyem_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beheeyem_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
static const union AnimCmd sAnim_Litwick_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lampent_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chandelure_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
static const union AnimCmd sAnim_Axew_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fraxure_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haxorus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
static const union AnimCmd sAnim_Cubchoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beartic_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
static const union AnimCmd sAnim_Cryogonal_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_SHELMET
static const union AnimCmd sAnim_Shelmet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Accelgor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
static const union AnimCmd sAnim_Stunfisk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
static const union AnimCmd sAnim_Mienfoo_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mienshao_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
static const union AnimCmd sAnim_Druddigon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_GOLETT
static const union AnimCmd sAnim_Golett_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golurk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOLETT

#if P_FAMILY_PAWNIARD
static const union AnimCmd sAnim_Pawniard_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bisharp_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
static const union AnimCmd sAnim_Bouffalant_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_RUFFLET
static const union AnimCmd sAnim_Rufflet_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braviary_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
static const union AnimCmd sAnim_Vullaby_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mandibuzz_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
static const union AnimCmd sAnim_Heatmor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
static const union AnimCmd sAnim_Durant_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
static const union AnimCmd sAnim_Deino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zweilous_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hydreigon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
static const union AnimCmd sAnim_Larvesta_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Volcarona_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
static const union AnimCmd sAnim_Cobalion_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
static const union AnimCmd sAnim_Terrakion_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
static const union AnimCmd sAnim_Virizion_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
static const union AnimCmd sAnim_TornadusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TornadusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
static const union AnimCmd sAnim_ThundurusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ThundurusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
static const union AnimCmd sAnim_Reshiram_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
static const union AnimCmd sAnim_Zekrom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
static const union AnimCmd sAnim_LandorusIncarnate_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LandorusTherian_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
static const union AnimCmd sAnim_Kyurem_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

#if P_FUSION_FORMS
static const union AnimCmd sAnim_KyuremWhite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FUSION_FORMS

#if P_FUSION_FORMS
static const union AnimCmd sAnim_KyuremBlack_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
static const union AnimCmd sAnim_KeldeoOrdinary_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KeldeoResolute_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
static const union AnimCmd sAnim_MeloettaAria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MeloettaPirouette_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
static const union AnimCmd sAnim_Genesect_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_GENESECT

#if P_FAMILY_CHESPIN
static const union AnimCmd sAnim_Chespin_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilladin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chesnaught_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
static const union AnimCmd sAnim_Fennekin_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braixen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delphox_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
static const union AnimCmd sAnim_Froakie_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Frogadier_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Greninja_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GreninjaAsh_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
static const union AnimCmd sAnim_Bunnelby_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Diggersby_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
static const union AnimCmd sAnim_Fletchling_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_Fletchinder_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonflame_1[] =
{
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
static const union AnimCmd sAnim_Scatterbug_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spewpa_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vivillon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
static const union AnimCmd sAnim_Litleo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyroar_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
static const union AnimCmd sAnim_Flabebe_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floette_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Florges_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
static const union AnimCmd sAnim_Skiddo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gogoat_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
static const union AnimCmd sAnim_Pancham_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pangoro_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
static const union AnimCmd sAnim_Furfrou_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
static const union AnimCmd sAnim_Espurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meowstic_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
static const union AnimCmd sAnim_Honedge_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Doublade_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AegislashShield_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AegislashBlade_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
static const union AnimCmd sAnim_Spritzee_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aromatisse_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
static const union AnimCmd sAnim_Swirlix_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slurpuff_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
static const union AnimCmd sAnim_Inkay_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Malamar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
static const union AnimCmd sAnim_Binacle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Barbaracle_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
static const union AnimCmd sAnim_Skrelp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragalge_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
static const union AnimCmd sAnim_Clauncher_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clawitzer_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
static const union AnimCmd sAnim_Helioptile_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heliolisk_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
static const union AnimCmd sAnim_Tyrunt_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyrantrum_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
static const union AnimCmd sAnim_Amaura_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aurorus_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
static const union AnimCmd sAnim_Hawlucha_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
static const union AnimCmd sAnim_Dedenne_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
static const union AnimCmd sAnim_Carbink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
static const union AnimCmd sAnim_Goomy_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sliggoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goodra_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
static const union AnimCmd sAnim_Klefki_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
static const union AnimCmd sAnim_Phantump_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trevenant_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
static const union AnimCmd sAnim_Pumpkaboo_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gourgeist_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
static const union AnimCmd sAnim_Bergmite_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Avalugg_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
static const union AnimCmd sAnim_Noibat_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noivern_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
static const union AnimCmd sAnim_Xerneas_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
static const union AnimCmd sAnim_Yveltal_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
static const union AnimCmd sAnim_Zygarde50_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zygarde10_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZygardeComplete_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
static const union AnimCmd sAnim_Diancie_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
static const union AnimCmd sAnim_HoopaConfined_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HoopaUnbound_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
static const union AnimCmd sAnim_Volcanion_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_VOLCANION

#if P_FAMILY_ROWLET
static const union AnimCmd sAnim_Rowlet_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dartrix_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Decidueye_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROWLET

#if P_FAMILY_PIKIPEK
static const union AnimCmd sAnim_Pikipek_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trumbeak_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucannon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_GRUBBIN
static const union AnimCmd sAnim_Grubbin_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charjabug_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vikavolt_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CUTIEFLY
static const union AnimCmd sAnim_Cutiefly_1[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ribombee_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
static const union AnimCmd sAnim_Rockruff_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidday_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidnight_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocDusk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_DEWPIDER
static const union AnimCmd sAnim_Dewpider_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Araquanid_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_SALANDIT
static const union AnimCmd sAnim_Salandit_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salazzle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
static const union AnimCmd sAnim_Stufful_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bewear_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_ORANGURU
static const union AnimCmd sAnim_Oranguru_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
static const union AnimCmd sAnim_Passimian_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
static const union AnimCmd sAnim_Wimpod_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golisopod_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_PYUKUMUKU
static const union AnimCmd sAnim_Pyukumuku_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TURTONATOR
static const union AnimCmd sAnim_Turtonator_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
static const union AnimCmd sAnim_Togedemaru_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_DRAMPA
static const union AnimCmd sAnim_Drampa_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_JANGMO_O
static const union AnimCmd sAnim_Jangmo_O_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hakamo_O_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kommo_O_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
static const union AnimCmd sAnim_TapuKoko_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
static const union AnimCmd sAnim_TapuLele_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
static const union AnimCmd sAnim_TapuBulu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
static const union AnimCmd sAnim_TapuFini_1[] =
{
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_MARSHADOW
static const union AnimCmd sAnim_Marshadow_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_ROOKIDEE
static const union AnimCmd sAnim_Rookidee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corvisquire_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corviknight_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_CHEWTLE
static const union AnimCmd sAnim_Chewtle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drednaw_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_SIZZLIPEDE
static const union AnimCmd sAnim_Sizzlipede_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Centiskorch_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif //P_FAMILY_SIZZLIPEDE

static const union AnimCmd sAnim_Egg_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_END,
};

#define SINGLE_ANIMATION(name)                      \
static const union AnimCmd *const sAnims_##name[] = \
{                                                   \
    sAnim_GeneralFrame0,                            \
    sAnim_##name##_1,                               \
}

#if P_FAMILY_BULBASAUR
SINGLE_ANIMATION(Bulbasaur);
SINGLE_ANIMATION(Ivysaur);
SINGLE_ANIMATION(Venusaur);
#endif //P_FAMILY_BULBASAUR
#if P_FAMILY_CHARMANDER
SINGLE_ANIMATION(Charmander);
SINGLE_ANIMATION(Charmeleon);
SINGLE_ANIMATION(Charizard);
#endif //P_FAMILY_CHARMANDER
#if P_FAMILY_SQUIRTLE
SINGLE_ANIMATION(Squirtle);
SINGLE_ANIMATION(Wartortle);
SINGLE_ANIMATION(Blastoise);
#endif //P_FAMILY_SQUIRTLE
#if P_FAMILY_CATERPIE
SINGLE_ANIMATION(Caterpie);
SINGLE_ANIMATION(Metapod);
SINGLE_ANIMATION(Butterfree);
#endif //P_FAMILY_CATERPIE
#if P_FAMILY_WEEDLE
SINGLE_ANIMATION(Weedle);
SINGLE_ANIMATION(Kakuna);
SINGLE_ANIMATION(Beedrill);
#endif //P_FAMILY_WEEDLE
#if P_FAMILY_PIDGEY
SINGLE_ANIMATION(Pidgey);
SINGLE_ANIMATION(Pidgeotto);
SINGLE_ANIMATION(Pidgeot);
#endif //P_FAMILY_PIDGEY
#if P_FAMILY_RATTATA
SINGLE_ANIMATION(Rattata);
SINGLE_ANIMATION(Raticate);
#endif //P_FAMILY_RATTATA
#if P_FAMILY_SPEAROW
SINGLE_ANIMATION(Spearow);
SINGLE_ANIMATION(Fearow);
#endif //P_FAMILY_SPEAROW
#if P_FAMILY_EKANS
SINGLE_ANIMATION(Ekans);
SINGLE_ANIMATION(Arbok);
#endif //P_FAMILY_EKANS
#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Pichu);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Pikachu);
SINGLE_ANIMATION(Raichu);
#endif //P_FAMILY_PIKACHU
#if P_FAMILY_SANDSHREW
SINGLE_ANIMATION(Sandshrew);
SINGLE_ANIMATION(Sandslash);
#endif //P_FAMILY_SANDSHREW
#if P_FAMILY_NIDORAN
SINGLE_ANIMATION(NidoranF);
SINGLE_ANIMATION(Nidorina);
SINGLE_ANIMATION(Nidoqueen);
SINGLE_ANIMATION(NidoranM);
SINGLE_ANIMATION(Nidorino);
SINGLE_ANIMATION(Nidoking);
#endif //P_FAMILY_NIDORAN
#if P_FAMILY_CLEFAIRY
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Cleffa);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Clefairy);
SINGLE_ANIMATION(Clefable);
#endif //P_FAMILY_CLEFAIRY
#if P_FAMILY_VULPIX
SINGLE_ANIMATION(Vulpix);
SINGLE_ANIMATION(Ninetales);
#endif //P_FAMILY_VULPIX
#if P_FAMILY_JIGGLYPUFF
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Igglybuff);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Jigglypuff);
SINGLE_ANIMATION(Wigglytuff);
#endif //P_FAMILY_JIGGLYPUFF
#if P_FAMILY_ZUBAT
SINGLE_ANIMATION(Zubat);
SINGLE_ANIMATION(Golbat);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Crobat);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT
#if P_FAMILY_ODDISH
SINGLE_ANIMATION(Oddish);
SINGLE_ANIMATION(Gloom);
SINGLE_ANIMATION(Vileplume);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Bellossom);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH
#if P_FAMILY_PARAS
SINGLE_ANIMATION(Paras);
SINGLE_ANIMATION(Parasect);
#endif //P_FAMILY_PARAS
#if P_FAMILY_VENONAT
SINGLE_ANIMATION(Venonat);
SINGLE_ANIMATION(Venomoth);
#endif //P_FAMILY_VENONAT
#if P_FAMILY_DIGLETT
SINGLE_ANIMATION(Diglett);
SINGLE_ANIMATION(Dugtrio);
#endif //P_FAMILY_DIGLETT
#if P_FAMILY_MEOWTH
SINGLE_ANIMATION(Meowth);
SINGLE_ANIMATION(Persian);
#endif //P_FAMILY_MEOWTH
#if P_FAMILY_PSYDUCK
SINGLE_ANIMATION(Psyduck);
SINGLE_ANIMATION(Golduck);
#endif //P_FAMILY_PSYDUCK
#if P_FAMILY_MANKEY
SINGLE_ANIMATION(Mankey);
SINGLE_ANIMATION(Primeape);
#endif //P_FAMILY_MANKEY
#if P_FAMILY_GROWLITHE
SINGLE_ANIMATION(Growlithe);
SINGLE_ANIMATION(Arcanine);
#endif //P_FAMILY_GROWLITHE
#if P_FAMILY_POLIWAG
SINGLE_ANIMATION(Poliwag);
SINGLE_ANIMATION(Poliwhirl);
SINGLE_ANIMATION(Poliwrath);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Politoed);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG
#if P_FAMILY_ABRA
SINGLE_ANIMATION(Abra);
SINGLE_ANIMATION(Kadabra);
SINGLE_ANIMATION(Alakazam);
#endif //P_FAMILY_ABRA
#if P_FAMILY_MACHOP
SINGLE_ANIMATION(Machop);
SINGLE_ANIMATION(Machoke);
SINGLE_ANIMATION(Machamp);
#endif //P_FAMILY_MACHOP
#if P_FAMILY_BELLSPROUT
SINGLE_ANIMATION(Bellsprout);
SINGLE_ANIMATION(Weepinbell);
SINGLE_ANIMATION(Victreebel);
#endif //P_FAMILY_BELLSPROUT
#if P_FAMILY_TENTACOOL
SINGLE_ANIMATION(Tentacool);
SINGLE_ANIMATION(Tentacruel);
#endif //P_FAMILY_TENTACOOL
#if P_FAMILY_GEODUDE
SINGLE_ANIMATION(Geodude);
SINGLE_ANIMATION(Graveler);
SINGLE_ANIMATION(Golem);
#endif //P_FAMILY_GEODUDE
#if P_FAMILY_PONYTA
SINGLE_ANIMATION(Ponyta);
SINGLE_ANIMATION(Rapidash);
#endif //P_FAMILY_PONYTA
#if P_FAMILY_SLOWPOKE
SINGLE_ANIMATION(Slowpoke);
SINGLE_ANIMATION(Slowbro);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Slowking);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_SLOWPOKE
#if P_FAMILY_MAGNEMITE
SINGLE_ANIMATION(Magnemite);
SINGLE_ANIMATION(Magneton);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Magnezone);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE
#if P_FAMILY_FARFETCHD
SINGLE_ANIMATION(Farfetchd);
#endif //P_FAMILY_FARFETCHD
#if P_FAMILY_DODUO
SINGLE_ANIMATION(Doduo);
SINGLE_ANIMATION(Dodrio);
#endif //P_FAMILY_DODUO
#if P_FAMILY_SEEL
SINGLE_ANIMATION(Seel);
SINGLE_ANIMATION(Dewgong);
#endif //P_FAMILY_SEEL
#if P_FAMILY_GRIMER
SINGLE_ANIMATION(Grimer);
SINGLE_ANIMATION(Muk);
#endif //P_FAMILY_GRIMER
#if P_FAMILY_SHELLDER
SINGLE_ANIMATION(Shellder);
SINGLE_ANIMATION(Cloyster);
#endif //P_FAMILY_SHELLDER
#if P_FAMILY_GASTLY
SINGLE_ANIMATION(Gastly);
SINGLE_ANIMATION(Haunter);
SINGLE_ANIMATION(Gengar);
#endif //P_FAMILY_GASTLY
#if P_FAMILY_ONIX
SINGLE_ANIMATION(Onix);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Steelix);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX
#if P_FAMILY_DROWZEE
SINGLE_ANIMATION(Drowzee);
SINGLE_ANIMATION(Hypno);
#endif //P_FAMILY_DROWZEE
#if P_FAMILY_KRABBY
SINGLE_ANIMATION(Krabby);
SINGLE_ANIMATION(Kingler);
#endif //P_FAMILY_KRABBY
#if P_FAMILY_VOLTORB
SINGLE_ANIMATION(Voltorb);
SINGLE_ANIMATION(Electrode);
#endif //P_FAMILY_VOLTORB
#if P_FAMILY_EXEGGCUTE
SINGLE_ANIMATION(Exeggcute);
SINGLE_ANIMATION(Exeggutor);
#endif //P_FAMILY_EXEGGCUTE
#if P_FAMILY_CUBONE
SINGLE_ANIMATION(Cubone);
SINGLE_ANIMATION(Marowak);
#endif //P_FAMILY_CUBONE
#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Tyrogue);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Hitmonlee);
SINGLE_ANIMATION(Hitmonchan);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Hitmontop);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS
#if P_FAMILY_LICKITUNG
SINGLE_ANIMATION(Lickitung);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Lickilicky);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG
#if P_FAMILY_KOFFING
SINGLE_ANIMATION(Koffing);
SINGLE_ANIMATION(Weezing);
#endif //P_FAMILY_KOFFING
#if P_FAMILY_RHYHORN
SINGLE_ANIMATION(Rhyhorn);
SINGLE_ANIMATION(Rhydon);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Rhyperior);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN
#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Happiny);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chansey);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Blissey);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY
#if P_FAMILY_TANGELA
SINGLE_ANIMATION(Tangela);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Tangrowth);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA
#if P_FAMILY_KANGASKHAN
SINGLE_ANIMATION(Kangaskhan);
#endif //P_FAMILY_KANGASKHAN
#if P_FAMILY_HORSEA
SINGLE_ANIMATION(Horsea);
SINGLE_ANIMATION(Seadra);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Kingdra);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA
#if P_FAMILY_GOLDEEN
SINGLE_ANIMATION(Goldeen);
SINGLE_ANIMATION(Seaking);
#endif //P_FAMILY_GOLDEEN
#if P_FAMILY_STARYU
SINGLE_ANIMATION(Staryu);
SINGLE_ANIMATION(Starmie);
#endif //P_FAMILY_STARYU
#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(MimeJr);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(MrMime);
#endif //P_FAMILY_MR_MIME
#if P_FAMILY_SCYTHER
SINGLE_ANIMATION(Scyther);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Scizor);
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_SCYTHER
#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Smoochum);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Jynx);
#endif //P_FAMILY_JYNX
#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Elekid);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Electabuzz);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Electivire);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ
#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Magby);
#endif //P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Magmar);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Magmortar);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR
#if P_FAMILY_PINSIR
SINGLE_ANIMATION(Pinsir);
#endif //P_FAMILY_PINSIR
#if P_FAMILY_TAUROS
SINGLE_ANIMATION(Tauros);
#endif //P_FAMILY_TAUROS
#if P_FAMILY_MAGIKARP
SINGLE_ANIMATION(Magikarp);
SINGLE_ANIMATION(Gyarados);
#endif //P_FAMILY_MAGIKARP
#if P_FAMILY_LAPRAS
SINGLE_ANIMATION(Lapras);
#endif //P_FAMILY_LAPRAS
#if P_FAMILY_DITTO
SINGLE_ANIMATION(Ditto);
#endif //P_FAMILY_DITTO
#if P_FAMILY_EEVEE
SINGLE_ANIMATION(Eevee);
SINGLE_ANIMATION(Vaporeon);
SINGLE_ANIMATION(Jolteon);
SINGLE_ANIMATION(Flareon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Espeon);
SINGLE_ANIMATION(Umbreon);
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Leafeon);
SINGLE_ANIMATION(Glaceon);
#endif //P_GEN_4_CROSS_EVOS
#if P_GEN_6_CROSS_EVOS
SINGLE_ANIMATION(Sylveon);
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE
#if P_FAMILY_PORYGON
SINGLE_ANIMATION(Porygon);
#if P_GEN_2_CROSS_EVOS
SINGLE_ANIMATION(Porygon2);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Porygon_Z);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON
#if P_FAMILY_OMANYTE
SINGLE_ANIMATION(Omanyte);
SINGLE_ANIMATION(Omastar);
#endif //P_FAMILY_OMANYTE
#if P_FAMILY_KABUTO
SINGLE_ANIMATION(Kabuto);
SINGLE_ANIMATION(Kabutops);
#endif //P_FAMILY_KABUTO
#if P_FAMILY_AERODACTYL
SINGLE_ANIMATION(Aerodactyl);
#endif //P_FAMILY_AERODACTYL
#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Munchlax);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Snorlax);
#endif //P_FAMILY_SNORLAX
#if P_FAMILY_ARTICUNO
SINGLE_ANIMATION(Articuno);
#endif //P_FAMILY_ARTICUNO
#if P_FAMILY_ZAPDOS
SINGLE_ANIMATION(Zapdos);
#endif //P_FAMILY_ZAPDOS
#if P_FAMILY_MOLTRES
SINGLE_ANIMATION(Moltres);
#endif //P_FAMILY_MOLTRES
#if P_FAMILY_DRATINI
SINGLE_ANIMATION(Dratini);
SINGLE_ANIMATION(Dragonair);
SINGLE_ANIMATION(Dragonite);
#endif //P_FAMILY_DRATINI
#if P_FAMILY_MEWTWO
SINGLE_ANIMATION(Mewtwo);
#endif //P_FAMILY_MEWTWO
#if P_FAMILY_MEW
SINGLE_ANIMATION(Mew);
#endif //P_FAMILY_MEW
#if P_FAMILY_CHIKORITA
SINGLE_ANIMATION(Chikorita);
SINGLE_ANIMATION(Bayleef);
SINGLE_ANIMATION(Meganium);
#endif //P_FAMILY_CHIKORITA
#if P_FAMILY_CYNDAQUIL
SINGLE_ANIMATION(Cyndaquil);
SINGLE_ANIMATION(Quilava);
SINGLE_ANIMATION(Typhlosion);
#endif //P_FAMILY_CYNDAQUIL
#if P_FAMILY_TOTODILE
SINGLE_ANIMATION(Totodile);
SINGLE_ANIMATION(Croconaw);
SINGLE_ANIMATION(Feraligatr);
#endif //P_FAMILY_TOTODILE
#if P_FAMILY_SENTRET
SINGLE_ANIMATION(Sentret);
SINGLE_ANIMATION(Furret);
#endif //P_FAMILY_SENTRET
#if P_FAMILY_HOOTHOOT
SINGLE_ANIMATION(Hoothoot);
SINGLE_ANIMATION(Noctowl);
#endif //P_FAMILY_HOOTHOOT
#if P_FAMILY_LEDYBA
SINGLE_ANIMATION(Ledyba);
SINGLE_ANIMATION(Ledian);
#endif //P_FAMILY_LEDYBA
#if P_FAMILY_SPINARAK
SINGLE_ANIMATION(Spinarak);
SINGLE_ANIMATION(Ariados);
#endif //P_FAMILY_SPINARAK
#if P_FAMILY_CHINCHOU
SINGLE_ANIMATION(Chinchou);
SINGLE_ANIMATION(Lanturn);
#endif //P_FAMILY_CHINCHOU
#if P_FAMILY_TOGEPI
SINGLE_ANIMATION(Togepi);
SINGLE_ANIMATION(Togetic);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Togekiss);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI
#if P_FAMILY_NATU
SINGLE_ANIMATION(Natu);
SINGLE_ANIMATION(Xatu);
#endif //P_FAMILY_NATU
#if P_FAMILY_MAREEP
SINGLE_ANIMATION(Mareep);
SINGLE_ANIMATION(Flaaffy);
SINGLE_ANIMATION(Ampharos);
#endif //P_FAMILY_MAREEP
#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Azurill);
#endif //P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Marill);
SINGLE_ANIMATION(Azumarill);
#endif //P_FAMILY_MARILL
#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Bonsly);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Sudowoodo);
#endif //P_FAMILY_SUDOWOODO
#if P_FAMILY_HOPPIP
SINGLE_ANIMATION(Hoppip);
SINGLE_ANIMATION(Skiploom);
SINGLE_ANIMATION(Jumpluff);
#endif //P_FAMILY_HOPPIP
#if P_FAMILY_AIPOM
SINGLE_ANIMATION(Aipom);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Ambipom);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM
#if P_FAMILY_SUNKERN
SINGLE_ANIMATION(Sunkern);
SINGLE_ANIMATION(Sunflora);
#endif //P_FAMILY_SUNKERN
#if P_FAMILY_YANMA
SINGLE_ANIMATION(Yanma);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Yanmega);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA
#if P_FAMILY_WOOPER
SINGLE_ANIMATION(Wooper);
SINGLE_ANIMATION(Quagsire);
#endif //P_FAMILY_WOOPER
#if P_FAMILY_MURKROW
SINGLE_ANIMATION(Murkrow);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Honchkrow);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW
#if P_FAMILY_MISDREAVUS
SINGLE_ANIMATION(Misdreavus);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mismagius);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS
#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Wynaut);
#endif //P_GEN_3_CROSS_EVOS
SINGLE_ANIMATION(Wobbuffet);
#endif //P_FAMILY_WOBBUFFET
#if P_FAMILY_GIRAFARIG
SINGLE_ANIMATION(Girafarig);
#endif //P_FAMILY_GIRAFARIG
#if P_FAMILY_PINECO
SINGLE_ANIMATION(Pineco);
SINGLE_ANIMATION(Forretress);
#endif //P_FAMILY_PINECO
#if P_FAMILY_DUNSPARCE
SINGLE_ANIMATION(Dunsparce);
#endif //P_FAMILY_DUNSPARCE
#if P_FAMILY_GLIGAR
SINGLE_ANIMATION(Gligar);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Gliscor);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR
#if P_FAMILY_SNUBBULL
SINGLE_ANIMATION(Snubbull);
SINGLE_ANIMATION(Granbull);
#endif //P_FAMILY_SNUBBULL
#if P_FAMILY_QWILFISH
SINGLE_ANIMATION(Qwilfish);
#endif //P_FAMILY_QWILFISH
#if P_FAMILY_SHUCKLE
SINGLE_ANIMATION(Shuckle);
#endif //P_FAMILY_SHUCKLE
#if P_FAMILY_HERACROSS
SINGLE_ANIMATION(Heracross);
#endif //P_FAMILY_HERACROSS
#if P_FAMILY_SNEASEL
SINGLE_ANIMATION(Sneasel);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Weavile);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNEASEL
#if P_FAMILY_TEDDIURSA
SINGLE_ANIMATION(Teddiursa);
SINGLE_ANIMATION(Ursaring);
#endif //P_FAMILY_TEDDIURSA
#if P_FAMILY_SLUGMA
SINGLE_ANIMATION(Slugma);
SINGLE_ANIMATION(Magcargo);
#endif //P_FAMILY_SLUGMA
#if P_FAMILY_SWINUB
SINGLE_ANIMATION(Swinub);
SINGLE_ANIMATION(Piloswine);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mamoswine);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB
#if P_FAMILY_CORSOLA
SINGLE_ANIMATION(Corsola);
#endif //P_FAMILY_CORSOLA
#if P_FAMILY_REMORAID
SINGLE_ANIMATION(Remoraid);
SINGLE_ANIMATION(Octillery);
#endif //P_FAMILY_REMORAID
#if P_FAMILY_DELIBIRD
SINGLE_ANIMATION(Delibird);
#endif //P_FAMILY_DELIBIRD
#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mantyke);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Mantine);
#endif //P_FAMILY_MANTINE
#if P_FAMILY_SKARMORY
SINGLE_ANIMATION(Skarmory);
#endif //P_FAMILY_SKARMORY
#if P_FAMILY_HOUNDOUR
SINGLE_ANIMATION(Houndour);
SINGLE_ANIMATION(Houndoom);
#endif //P_FAMILY_HOUNDOUR
#if P_FAMILY_PHANPY
SINGLE_ANIMATION(Phanpy);
SINGLE_ANIMATION(Donphan);
#endif //P_FAMILY_PHANPY
#if P_FAMILY_STANTLER
SINGLE_ANIMATION(Stantler);
#endif //P_FAMILY_STANTLER
#if P_FAMILY_SMEARGLE
SINGLE_ANIMATION(Smeargle);
#endif //P_FAMILY_SMEARGLE
#if P_FAMILY_MILTANK
SINGLE_ANIMATION(Miltank);
#endif //P_FAMILY_MILTANK
#if P_FAMILY_RAIKOU
SINGLE_ANIMATION(Raikou);
#endif //P_FAMILY_RAIKOU
#if P_FAMILY_ENTEI
SINGLE_ANIMATION(Entei);
#endif //P_FAMILY_ENTEI
#if P_FAMILY_SUICUNE
SINGLE_ANIMATION(Suicune);
#endif //P_FAMILY_SUICUNE
#if P_FAMILY_LARVITAR
SINGLE_ANIMATION(Larvitar);
SINGLE_ANIMATION(Pupitar);
SINGLE_ANIMATION(Tyranitar);
#endif //P_FAMILY_LARVITAR
#if P_FAMILY_LUGIA
SINGLE_ANIMATION(Lugia);
#endif //P_FAMILY_LUGIA
#if P_FAMILY_HO_OH
SINGLE_ANIMATION(HoOh);
#endif //P_FAMILY_HO_OH
#if P_FAMILY_CELEBI
SINGLE_ANIMATION(Celebi);
#endif //P_FAMILY_CELEBI
#if P_FAMILY_TREECKO
SINGLE_ANIMATION(Treecko);
SINGLE_ANIMATION(Grovyle);
SINGLE_ANIMATION(Sceptile);
#endif //P_FAMILY_TREECKO
#if P_FAMILY_TORCHIC
SINGLE_ANIMATION(Torchic);
SINGLE_ANIMATION(Combusken);
SINGLE_ANIMATION(Blaziken);
#endif //P_FAMILY_TORCHIC
#if P_FAMILY_MUDKIP
SINGLE_ANIMATION(Mudkip);
SINGLE_ANIMATION(Marshtomp);
SINGLE_ANIMATION(Swampert);
#endif //P_FAMILY_MUDKIP
#if P_FAMILY_POOCHYENA
SINGLE_ANIMATION(Poochyena);
SINGLE_ANIMATION(Mightyena);
#endif //P_FAMILY_POOCHYENA
#if P_FAMILY_ZIGZAGOON
SINGLE_ANIMATION(Zigzagoon);
SINGLE_ANIMATION(Linoone);
#endif //P_FAMILY_ZIGZAGOON
#if P_FAMILY_WURMPLE
SINGLE_ANIMATION(Wurmple);
SINGLE_ANIMATION(Silcoon);
SINGLE_ANIMATION(Beautifly);
SINGLE_ANIMATION(Cascoon);
SINGLE_ANIMATION(Dustox);
#endif //P_FAMILY_WURMPLE
#if P_FAMILY_LOTAD
SINGLE_ANIMATION(Lotad);
SINGLE_ANIMATION(Lombre);
SINGLE_ANIMATION(Ludicolo);
#endif //P_FAMILY_LOTAD
#if P_FAMILY_SEEDOT
SINGLE_ANIMATION(Seedot);
SINGLE_ANIMATION(Nuzleaf);
SINGLE_ANIMATION(Shiftry);
#endif //P_FAMILY_SEEDOT
#if P_FAMILY_TAILLOW
SINGLE_ANIMATION(Taillow);
SINGLE_ANIMATION(Swellow);
#endif //P_FAMILY_TAILLOW
#if P_FAMILY_WINGULL
SINGLE_ANIMATION(Wingull);
SINGLE_ANIMATION(Pelipper);
#endif //P_FAMILY_WINGULL
#if P_FAMILY_RALTS
SINGLE_ANIMATION(Ralts);
SINGLE_ANIMATION(Kirlia);
SINGLE_ANIMATION(Gardevoir);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Gallade);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS
#if P_FAMILY_SURSKIT
SINGLE_ANIMATION(Surskit);
SINGLE_ANIMATION(Masquerain);
#endif //P_FAMILY_SURSKIT
#if P_FAMILY_SHROOMISH
SINGLE_ANIMATION(Shroomish);
SINGLE_ANIMATION(Breloom);
#endif //P_FAMILY_SHROOMISH
#if P_FAMILY_SLAKOTH
SINGLE_ANIMATION(Slakoth);
SINGLE_ANIMATION(Vigoroth);
SINGLE_ANIMATION(Slaking);
#endif //P_FAMILY_SLAKOTH
#if P_FAMILY_NINCADA
SINGLE_ANIMATION(Nincada);
SINGLE_ANIMATION(Ninjask);
SINGLE_ANIMATION(Shedinja);
#endif //P_FAMILY_NINCADA
#if P_FAMILY_WHISMUR
SINGLE_ANIMATION(Whismur);
SINGLE_ANIMATION(Loudred);
SINGLE_ANIMATION(Exploud);
#endif //P_FAMILY_WHISMUR
#if P_FAMILY_MAKUHITA
SINGLE_ANIMATION(Makuhita);
SINGLE_ANIMATION(Hariyama);
#endif //P_FAMILY_MAKUHITA
#if P_FAMILY_NOSEPASS
SINGLE_ANIMATION(Nosepass);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Probopass);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS
#if P_FAMILY_SKITTY
SINGLE_ANIMATION(Skitty);
SINGLE_ANIMATION(Delcatty);
#endif //P_FAMILY_SKITTY
#if P_FAMILY_SABLEYE
SINGLE_ANIMATION(Sableye);
#endif //P_FAMILY_SABLEYE
#if P_FAMILY_MAWILE
SINGLE_ANIMATION(Mawile);
#endif //P_FAMILY_MAWILE
#if P_FAMILY_ARON
SINGLE_ANIMATION(Aron);
SINGLE_ANIMATION(Lairon);
SINGLE_ANIMATION(Aggron);
#endif //P_FAMILY_ARON
#if P_FAMILY_MEDITITE
SINGLE_ANIMATION(Meditite);
SINGLE_ANIMATION(Medicham);
#endif //P_FAMILY_MEDITITE
#if P_FAMILY_ELECTRIKE
SINGLE_ANIMATION(Electrike);
SINGLE_ANIMATION(Manectric);
#endif //P_FAMILY_ELECTRIKE
#if P_FAMILY_PLUSLE
SINGLE_ANIMATION(Plusle);
#endif //P_FAMILY_PLUSLE
#if P_FAMILY_MINUN
SINGLE_ANIMATION(Minun);
#endif //P_FAMILY_MINUN
#if P_FAMILY_VOLBEAT_ILLUMISE
SINGLE_ANIMATION(Volbeat);
SINGLE_ANIMATION(Illumise);
#endif //P_FAMILY_VOLBEAT_ILLUMISE
#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Budew);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Roselia);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Roserade);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA
#if P_FAMILY_GULPIN
SINGLE_ANIMATION(Gulpin);
SINGLE_ANIMATION(Swalot);
#endif //P_FAMILY_GULPIN
#if P_FAMILY_CARVANHA
SINGLE_ANIMATION(Carvanha);
SINGLE_ANIMATION(Sharpedo);
#endif //P_FAMILY_CARVANHA
#if P_FAMILY_WAILMER
SINGLE_ANIMATION(Wailmer);
SINGLE_ANIMATION(Wailord);
#endif //P_FAMILY_WAILMER
#if P_FAMILY_NUMEL
SINGLE_ANIMATION(Numel);
SINGLE_ANIMATION(Camerupt);
#endif //P_FAMILY_NUMEL
#if P_FAMILY_TORKOAL
SINGLE_ANIMATION(Torkoal);
#endif //P_FAMILY_TORKOAL
#if P_FAMILY_SPOINK
SINGLE_ANIMATION(Spoink);
SINGLE_ANIMATION(Grumpig);
#endif //P_FAMILY_SPOINK
#if P_FAMILY_SPINDA
SINGLE_ANIMATION(Spinda);
#endif //P_FAMILY_SPINDA
#if P_FAMILY_TRAPINCH
SINGLE_ANIMATION(Trapinch);
SINGLE_ANIMATION(Vibrava);
SINGLE_ANIMATION(Flygon);
#endif //P_FAMILY_TRAPINCH
#if P_FAMILY_CACNEA
SINGLE_ANIMATION(Cacnea);
SINGLE_ANIMATION(Cacturne);
#endif //P_FAMILY_CACNEA
#if P_FAMILY_SWABLU
SINGLE_ANIMATION(Swablu);
SINGLE_ANIMATION(Altaria);
#endif //P_FAMILY_SWABLU
#if P_FAMILY_ZANGOOSE
SINGLE_ANIMATION(Zangoose);
#endif //P_FAMILY_ZANGOOSE
#if P_FAMILY_SEVIPER
SINGLE_ANIMATION(Seviper);
#endif //P_FAMILY_SEVIPER
#if P_FAMILY_LUNATONE
SINGLE_ANIMATION(Lunatone);
#endif //P_FAMILY_LUNATONE
#if P_FAMILY_SOLROCK
SINGLE_ANIMATION(Solrock);
#endif //P_FAMILY_SOLROCK
#if P_FAMILY_BARBOACH
SINGLE_ANIMATION(Barboach);
SINGLE_ANIMATION(Whiscash);
#endif //P_FAMILY_BARBOACH
#if P_FAMILY_CORPHISH
SINGLE_ANIMATION(Corphish);
SINGLE_ANIMATION(Crawdaunt);
#endif //P_FAMILY_CORPHISH
#if P_FAMILY_BALTOY
SINGLE_ANIMATION(Baltoy);
SINGLE_ANIMATION(Claydol);
#endif //P_FAMILY_BALTOY
#if P_FAMILY_LILEEP
SINGLE_ANIMATION(Lileep);
SINGLE_ANIMATION(Cradily);
#endif //P_FAMILY_LILEEP
#if P_FAMILY_ANORITH
SINGLE_ANIMATION(Anorith);
SINGLE_ANIMATION(Armaldo);
#endif //P_FAMILY_ANORITH
#if P_FAMILY_FEEBAS
SINGLE_ANIMATION(Feebas);
SINGLE_ANIMATION(Milotic);
#endif //P_FAMILY_FEEBAS
#if P_FAMILY_CASTFORM
SINGLE_ANIMATION(CastformNormal);
SINGLE_ANIMATION(CastformSunny);
SINGLE_ANIMATION(CastformRainy);
SINGLE_ANIMATION(CastformSnowy);
#endif //P_FAMILY_CASTFORM
#if P_FAMILY_KECLEON
SINGLE_ANIMATION(Kecleon);
#endif //P_FAMILY_KECLEON
#if P_FAMILY_SHUPPET
SINGLE_ANIMATION(Shuppet);
SINGLE_ANIMATION(Banette);
#endif //P_FAMILY_SHUPPET
#if P_FAMILY_DUSKULL
SINGLE_ANIMATION(Duskull);
SINGLE_ANIMATION(Dusclops);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Dusknoir);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL
#if P_FAMILY_TROPIUS
SINGLE_ANIMATION(Tropius);
#endif //P_FAMILY_TROPIUS
#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chingling);
#endif //P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Chimecho);
#endif //P_FAMILY_CHIMECHO
#if P_FAMILY_ABSOL
SINGLE_ANIMATION(Absol);
#endif //P_FAMILY_ABSOL
#if P_FAMILY_SNORUNT
SINGLE_ANIMATION(Snorunt);
SINGLE_ANIMATION(Glalie);
#if P_GEN_4_CROSS_EVOS
SINGLE_ANIMATION(Froslass);
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT
#if P_FAMILY_SPHEAL
SINGLE_ANIMATION(Spheal);
SINGLE_ANIMATION(Sealeo);
SINGLE_ANIMATION(Walrein);
#endif //P_FAMILY_SPHEAL
#if P_FAMILY_CLAMPERL
SINGLE_ANIMATION(Clamperl);
SINGLE_ANIMATION(Huntail);
SINGLE_ANIMATION(Gorebyss);
#endif //P_FAMILY_CLAMPERL
#if P_FAMILY_RELICANTH
SINGLE_ANIMATION(Relicanth);
#endif //P_FAMILY_RELICANTH
#if P_FAMILY_LUVDISC
SINGLE_ANIMATION(Luvdisc);
#endif //P_FAMILY_LUVDISC
#if P_FAMILY_BAGON
SINGLE_ANIMATION(Bagon);
SINGLE_ANIMATION(Shelgon);
SINGLE_ANIMATION(Salamence);
#endif //P_FAMILY_BAGON
#if P_FAMILY_BELDUM
SINGLE_ANIMATION(Beldum);
SINGLE_ANIMATION(Metang);
SINGLE_ANIMATION(Metagross);
#endif //P_FAMILY_BELDUM
#if P_FAMILY_REGIROCK
SINGLE_ANIMATION(Regirock);
#endif //P_FAMILY_REGIROCK
#if P_FAMILY_REGICE
SINGLE_ANIMATION(Regice);
#endif //P_FAMILY_REGICE
#if P_FAMILY_REGISTEEL
SINGLE_ANIMATION(Registeel);
#endif //P_FAMILY_REGISTEEL
#if P_FAMILY_LATIAS
SINGLE_ANIMATION(Latias);
#endif //P_FAMILY_LATIAS
#if P_FAMILY_LATIOS
SINGLE_ANIMATION(Latios);
#endif //P_FAMILY_LATIOS
#if P_FAMILY_KYOGRE
SINGLE_ANIMATION(Kyogre);
#endif //P_FAMILY_KYOGRE
#if P_FAMILY_GROUDON
SINGLE_ANIMATION(Groudon);
#endif //P_FAMILY_GROUDON
#if P_FAMILY_RAYQUAZA
SINGLE_ANIMATION(Rayquaza);
#endif //P_FAMILY_RAYQUAZA
#if P_FAMILY_JIRACHI
SINGLE_ANIMATION(Jirachi);
#endif //P_FAMILY_JIRACHI
#if P_FAMILY_DEOXYS
SINGLE_ANIMATION(DeoxysNormal);
SINGLE_ANIMATION(DeoxysAttack);
SINGLE_ANIMATION(DeoxysDefense);
SINGLE_ANIMATION(DeoxysSpeed);
#endif //P_FAMILY_DEOXYS
#if P_FAMILY_TURTWIG
SINGLE_ANIMATION(Turtwig);
SINGLE_ANIMATION(Grotle);
SINGLE_ANIMATION(Torterra);
#endif //P_FAMILY_TURTWIG
#if P_FAMILY_CHIMCHAR
SINGLE_ANIMATION(Chimchar);
SINGLE_ANIMATION(Monferno);
SINGLE_ANIMATION(Infernape);
#endif //P_FAMILY_CHIMCHAR
#if P_FAMILY_PIPLUP
SINGLE_ANIMATION(Piplup);
SINGLE_ANIMATION(Prinplup);
SINGLE_ANIMATION(Empoleon);
#endif //P_FAMILY_PIPLUP
#if P_FAMILY_STARLY
SINGLE_ANIMATION(Starly);
SINGLE_ANIMATION(Staravia);
SINGLE_ANIMATION(Staraptor);
#endif //P_FAMILY_STARLY
#if P_FAMILY_BIDOOF
SINGLE_ANIMATION(Bidoof);
SINGLE_ANIMATION(Bibarel);
#endif //P_FAMILY_BIDOOF
#if P_FAMILY_KRICKETOT
SINGLE_ANIMATION(Kricketot);
SINGLE_ANIMATION(Kricketune);
#endif //P_FAMILY_KRICKETOT
#if P_FAMILY_SHINX
SINGLE_ANIMATION(Shinx);
SINGLE_ANIMATION(Luxio);
SINGLE_ANIMATION(Luxray);
#endif //P_FAMILY_SHINX
#if P_FAMILY_CRANIDOS
SINGLE_ANIMATION(Cranidos);
SINGLE_ANIMATION(Rampardos);
#endif //P_FAMILY_CRANIDOS
#if P_FAMILY_SHIELDON
SINGLE_ANIMATION(Shieldon);
SINGLE_ANIMATION(Bastiodon);
#endif //P_FAMILY_SHIELDON
#if P_FAMILY_BURMY
SINGLE_ANIMATION(Burmy);
SINGLE_ANIMATION(Wormadam);
SINGLE_ANIMATION(Mothim);
#endif //P_FAMILY_BURMY
#if P_FAMILY_COMBEE
SINGLE_ANIMATION(Combee);
SINGLE_ANIMATION(Vespiquen);
#endif //P_FAMILY_COMBEE
#if P_FAMILY_PACHIRISU
SINGLE_ANIMATION(Pachirisu);
#endif //P_FAMILY_PACHIRISU
#if P_FAMILY_BUIZEL
SINGLE_ANIMATION(Buizel);
SINGLE_ANIMATION(Floatzel);
#endif //P_FAMILY_BUIZEL
#if P_FAMILY_CHERUBI
SINGLE_ANIMATION(Cherubi);
SINGLE_ANIMATION(CherrimOvercast);
SINGLE_ANIMATION(CherrimSunshine);
#endif //P_FAMILY_CHERUBI
#if P_FAMILY_SHELLOS
SINGLE_ANIMATION(Shellos);
SINGLE_ANIMATION(Gastrodon);
#endif //P_FAMILY_SHELLOS
#if P_FAMILY_DRIFLOON
SINGLE_ANIMATION(Drifloon);
SINGLE_ANIMATION(Drifblim);
#endif //P_FAMILY_DRIFLOON
#if P_FAMILY_BUNEARY
SINGLE_ANIMATION(Buneary);
SINGLE_ANIMATION(Lopunny);
#endif //P_FAMILY_BUNEARY
#if P_FAMILY_GLAMEOW
SINGLE_ANIMATION(Glameow);
SINGLE_ANIMATION(Purugly);
#endif //P_FAMILY_GLAMEOW
#if P_FAMILY_STUNKY
SINGLE_ANIMATION(Stunky);
SINGLE_ANIMATION(Skuntank);
#endif //P_FAMILY_STUNKY
#if P_FAMILY_BRONZOR
SINGLE_ANIMATION(Bronzor);
SINGLE_ANIMATION(Bronzong);
#endif //P_FAMILY_BRONZOR
#if P_FAMILY_CHATOT
SINGLE_ANIMATION(Chatot);
#endif //P_FAMILY_CHATOT
#if P_FAMILY_SPIRITOMB
SINGLE_ANIMATION(Spiritomb);
#endif //P_FAMILY_SPIRITOMB
#if P_FAMILY_GIBLE
SINGLE_ANIMATION(Gible);
SINGLE_ANIMATION(Gabite);
SINGLE_ANIMATION(Garchomp);
#endif //P_FAMILY_GIBLE
#if P_FAMILY_RIOLU
SINGLE_ANIMATION(Riolu);
SINGLE_ANIMATION(Lucario);
#endif //P_FAMILY_RIOLU
#if P_FAMILY_HIPPOPOTAS
SINGLE_ANIMATION(Hippopotas);
SINGLE_ANIMATION(Hippowdon);
#endif //P_FAMILY_HIPPOPOTAS
#if P_FAMILY_SKORUPI
SINGLE_ANIMATION(Skorupi);
SINGLE_ANIMATION(Drapion);
#endif //P_FAMILY_SKORUPI
#if P_FAMILY_CROAGUNK
SINGLE_ANIMATION(Croagunk);
SINGLE_ANIMATION(Toxicroak);
#endif //P_FAMILY_CROAGUNK
#if P_FAMILY_CARNIVINE
SINGLE_ANIMATION(Carnivine);
#endif //P_FAMILY_CARNIVINE
#if P_FAMILY_FINNEON
SINGLE_ANIMATION(Finneon);
SINGLE_ANIMATION(Lumineon);
#endif //P_FAMILY_FINNEON
#if P_FAMILY_SNOVER
SINGLE_ANIMATION(Snover);
SINGLE_ANIMATION(Abomasnow);
#endif //P_FAMILY_SNOVER
#if P_FAMILY_ROTOM
SINGLE_ANIMATION(Rotom);
SINGLE_ANIMATION(RotomHeat);
SINGLE_ANIMATION(RotomWash);
SINGLE_ANIMATION(RotomFrost);
SINGLE_ANIMATION(RotomFan);
SINGLE_ANIMATION(RotomMow);
#endif //P_FAMILY_ROTOM
#if P_FAMILY_UXIE
SINGLE_ANIMATION(Uxie);
#endif //P_FAMILY_UXIE
#if P_FAMILY_MESPRIT
SINGLE_ANIMATION(Mesprit);
#endif //P_FAMILY_MESPRIT
#if P_FAMILY_AZELF
SINGLE_ANIMATION(Azelf);
#endif //P_FAMILY_AZELF
#if P_FAMILY_DIALGA
SINGLE_ANIMATION(Dialga);
#endif //P_FAMILY_DIALGA
#if P_FAMILY_PALKIA
SINGLE_ANIMATION(Palkia);
#endif //P_FAMILY_PALKIA
#if P_FAMILY_HEATRAN
SINGLE_ANIMATION(Heatran);
#endif //P_FAMILY_HEATRAN
#if P_FAMILY_REGIGIGAS
SINGLE_ANIMATION(Regigigas);
#endif //P_FAMILY_REGIGIGAS
#if P_FAMILY_GIRATINA
SINGLE_ANIMATION(GiratinaAltered);
SINGLE_ANIMATION(GiratinaOrigin);
#endif //P_FAMILY_GIRATINA
#if P_FAMILY_CRESSELIA
SINGLE_ANIMATION(Cresselia);
#endif //P_FAMILY_CRESSELIA
#if P_FAMILY_MANAPHY
SINGLE_ANIMATION(Phione);
SINGLE_ANIMATION(Manaphy);
#endif //P_FAMILY_MANAPHY
#if P_FAMILY_DARKRAI
SINGLE_ANIMATION(Darkrai);
#endif //P_FAMILY_DARKRAI
#if P_FAMILY_SHAYMIN
SINGLE_ANIMATION(ShayminLand);
SINGLE_ANIMATION(ShayminSky);
#endif //P_FAMILY_SHAYMIN
#if P_FAMILY_ARCEUS
SINGLE_ANIMATION(Arceus);
#endif //P_FAMILY_ARCEUS
#if P_FAMILY_VICTINI
SINGLE_ANIMATION(Victini);
#endif //P_FAMILY_VICTINI
#if P_FAMILY_SNIVY
SINGLE_ANIMATION(Snivy);
SINGLE_ANIMATION(Servine);
SINGLE_ANIMATION(Serperior);
#endif //P_FAMILY_SNIVY
#if P_FAMILY_TEPIG
SINGLE_ANIMATION(Tepig);
SINGLE_ANIMATION(Pignite);
SINGLE_ANIMATION(Emboar);
#endif //P_FAMILY_TEPIG
#if P_FAMILY_OSHAWOTT
SINGLE_ANIMATION(Oshawott);
SINGLE_ANIMATION(Dewott);
SINGLE_ANIMATION(Samurott);
#endif //P_FAMILY_OSHAWOTT
#if P_FAMILY_PATRAT
SINGLE_ANIMATION(Patrat);
SINGLE_ANIMATION(Watchog);
#endif //P_FAMILY_PATRAT
#if P_FAMILY_LILLIPUP
SINGLE_ANIMATION(Lillipup);
SINGLE_ANIMATION(Herdier);
SINGLE_ANIMATION(Stoutland);
#endif //P_FAMILY_LILLIPUP
#if P_FAMILY_PURRLOIN
SINGLE_ANIMATION(Purrloin);
SINGLE_ANIMATION(Liepard);
#endif //P_FAMILY_PURRLOIN
#if P_FAMILY_PANSAGE
SINGLE_ANIMATION(Pansage);
SINGLE_ANIMATION(Simisage);
#endif //P_FAMILY_PANSAGE
#if P_FAMILY_PANSEAR
SINGLE_ANIMATION(Pansear);
SINGLE_ANIMATION(Simisear);
#endif //P_FAMILY_PANSEAR
#if P_FAMILY_PANPOUR
SINGLE_ANIMATION(Panpour);
SINGLE_ANIMATION(Simipour);
#endif //P_FAMILY_PANPOUR
#if P_FAMILY_MUNNA
SINGLE_ANIMATION(Munna);
SINGLE_ANIMATION(Musharna);
#endif //P_FAMILY_MUNNA
#if P_FAMILY_PIDOVE
SINGLE_ANIMATION(Pidove);
SINGLE_ANIMATION(Tranquill);
SINGLE_ANIMATION(Unfezant);
#endif //P_FAMILY_PIDOVE
#if P_FAMILY_BLITZLE
SINGLE_ANIMATION(Blitzle);
SINGLE_ANIMATION(Zebstrika);
#endif //P_FAMILY_BLITZLE
#if P_FAMILY_ROGGENROLA
SINGLE_ANIMATION(Roggenrola);
SINGLE_ANIMATION(Boldore);
SINGLE_ANIMATION(Gigalith);
#endif //P_FAMILY_ROGGENROLA
#if P_FAMILY_WOOBAT
SINGLE_ANIMATION(Woobat);
SINGLE_ANIMATION(Swoobat);
#endif //P_FAMILY_WOOBAT
#if P_FAMILY_DRILBUR
SINGLE_ANIMATION(Drilbur);
SINGLE_ANIMATION(Excadrill);
#endif //P_FAMILY_DRILBUR
#if P_FAMILY_AUDINO
SINGLE_ANIMATION(Audino);
#endif //P_FAMILY_AUDINO
#if P_FAMILY_TIMBURR
SINGLE_ANIMATION(Timburr);
SINGLE_ANIMATION(Gurdurr);
SINGLE_ANIMATION(Conkeldurr);
#endif //P_FAMILY_TIMBURR
#if P_FAMILY_TYMPOLE
SINGLE_ANIMATION(Tympole);
SINGLE_ANIMATION(Palpitoad);
SINGLE_ANIMATION(Seismitoad);
#endif //P_FAMILY_TYMPOLE
#if P_FAMILY_THROH
SINGLE_ANIMATION(Throh);
#endif //P_FAMILY_THROH
#if P_FAMILY_SAWK
SINGLE_ANIMATION(Sawk);
#endif //P_FAMILY_SAWK
#if P_FAMILY_SEWADDLE
SINGLE_ANIMATION(Sewaddle);
SINGLE_ANIMATION(Swadloon);
SINGLE_ANIMATION(Leavanny);
#endif //P_FAMILY_SEWADDLE
#if P_FAMILY_VENIPEDE
SINGLE_ANIMATION(Venipede);
SINGLE_ANIMATION(Whirlipede);
SINGLE_ANIMATION(Scolipede);
#endif //P_FAMILY_VENIPEDE
#if P_FAMILY_COTTONEE
SINGLE_ANIMATION(Cottonee);
SINGLE_ANIMATION(Whimsicott);
#endif //P_FAMILY_COTTONEE
#if P_FAMILY_PETILIL
SINGLE_ANIMATION(Petilil);
SINGLE_ANIMATION(Lilligant);
#endif //P_FAMILY_PETILIL
#if P_FAMILY_BASCULIN
SINGLE_ANIMATION(Basculin);
#endif //P_FAMILY_BASCULIN
#if P_FAMILY_SANDILE
SINGLE_ANIMATION(Sandile);
SINGLE_ANIMATION(Krokorok);
SINGLE_ANIMATION(Krookodile);
#endif //P_FAMILY_SANDILE
#if P_FAMILY_DARUMAKA
SINGLE_ANIMATION(Darumaka);
SINGLE_ANIMATION(DarmanitanStandard);
SINGLE_ANIMATION(DarmanitanZen);
#endif //P_FAMILY_DARUMAKA
#if P_FAMILY_MARACTUS
SINGLE_ANIMATION(Maractus);
#endif //P_FAMILY_MARACTUS
#if P_FAMILY_DWEBBLE
SINGLE_ANIMATION(Dwebble);
SINGLE_ANIMATION(Crustle);
#endif //P_FAMILY_DWEBBLE
#if P_FAMILY_SCRAGGY
SINGLE_ANIMATION(Scraggy);
SINGLE_ANIMATION(Scrafty);
#endif //P_FAMILY_SCRAGGY
#if P_FAMILY_SIGILYPH
SINGLE_ANIMATION(Sigilyph);
#endif //P_FAMILY_SIGILYPH
#if P_FAMILY_YAMASK
SINGLE_ANIMATION(Yamask);
SINGLE_ANIMATION(Cofagrigus);
#endif //P_FAMILY_YAMASK
#if P_FAMILY_TIRTOUGA
SINGLE_ANIMATION(Tirtouga);
SINGLE_ANIMATION(Carracosta);
#endif //P_FAMILY_TIRTOUGA
#if P_FAMILY_ARCHEN
SINGLE_ANIMATION(Archen);
SINGLE_ANIMATION(Archeops);
#endif //P_FAMILY_ARCHEN
#if P_FAMILY_TRUBBISH
SINGLE_ANIMATION(Trubbish);
SINGLE_ANIMATION(Garbodor);
#endif //P_FAMILY_TRUBBISH
#if P_FAMILY_ZORUA
SINGLE_ANIMATION(Zorua);
SINGLE_ANIMATION(Zoroark);
#endif //P_FAMILY_ZORUA
#if P_FAMILY_MINCCINO
SINGLE_ANIMATION(Minccino);
SINGLE_ANIMATION(Cinccino);
#endif //P_FAMILY_MINCCINO
#if P_FAMILY_GOTHITA
SINGLE_ANIMATION(Gothita);
SINGLE_ANIMATION(Gothorita);
SINGLE_ANIMATION(Gothitelle);
#endif //P_FAMILY_GOTHITA
#if P_FAMILY_SOLOSIS
SINGLE_ANIMATION(Solosis);
SINGLE_ANIMATION(Duosion);
SINGLE_ANIMATION(Reuniclus);
#endif //P_FAMILY_SOLOSIS
#if P_FAMILY_DUCKLETT
SINGLE_ANIMATION(Ducklett);
SINGLE_ANIMATION(Swanna);
#endif //P_FAMILY_DUCKLETT
#if P_FAMILY_VANILLITE
SINGLE_ANIMATION(Vanillite);
SINGLE_ANIMATION(Vanillish);
SINGLE_ANIMATION(Vanilluxe);
#endif //P_FAMILY_VANILLITE
#if P_FAMILY_DEERLING
SINGLE_ANIMATION(Deerling);
SINGLE_ANIMATION(Sawsbuck);
#endif //P_FAMILY_DEERLING
#if P_FAMILY_EMOLGA
SINGLE_ANIMATION(Emolga);
#endif //P_FAMILY_EMOLGA
#if P_FAMILY_KARRABLAST
SINGLE_ANIMATION(Karrablast);
SINGLE_ANIMATION(Escavalier);
#endif //P_FAMILY_KARRABLAST
#if P_FAMILY_FOONGUS
SINGLE_ANIMATION(Foongus);
SINGLE_ANIMATION(Amoonguss);
#endif //P_FAMILY_FOONGUS
#if P_FAMILY_FRILLISH
SINGLE_ANIMATION(Frillish);
SINGLE_ANIMATION(Jellicent);
#endif //P_FAMILY_FRILLISH
#if P_FAMILY_ALOMOMOLA
SINGLE_ANIMATION(Alomomola);
#endif //P_FAMILY_ALOMOMOLA
#if P_FAMILY_JOLTIK
SINGLE_ANIMATION(Joltik);
SINGLE_ANIMATION(Galvantula);
#endif //P_FAMILY_JOLTIK
#if P_FAMILY_FERROSEED
SINGLE_ANIMATION(Ferroseed);
SINGLE_ANIMATION(Ferrothorn);
#endif //P_FAMILY_FERROSEED
#if P_FAMILY_KLINK
SINGLE_ANIMATION(Klink);
SINGLE_ANIMATION(Klang);
SINGLE_ANIMATION(Klinklang);
#endif //P_FAMILY_KLINK
#if P_FAMILY_TYNAMO
SINGLE_ANIMATION(Tynamo);
SINGLE_ANIMATION(Eelektrik);
SINGLE_ANIMATION(Eelektross);
#endif //P_FAMILY_TYNAMO
#if P_FAMILY_ELGYEM
SINGLE_ANIMATION(Elgyem);
SINGLE_ANIMATION(Beheeyem);
#endif //P_FAMILY_ELGYEM
#if P_FAMILY_LITWICK
SINGLE_ANIMATION(Litwick);
SINGLE_ANIMATION(Lampent);
SINGLE_ANIMATION(Chandelure);
#endif //P_FAMILY_LITWICK
#if P_FAMILY_AXEW
SINGLE_ANIMATION(Axew);
SINGLE_ANIMATION(Fraxure);
SINGLE_ANIMATION(Haxorus);
#endif //P_FAMILY_AXEW
#if P_FAMILY_CUBCHOO
SINGLE_ANIMATION(Cubchoo);
SINGLE_ANIMATION(Beartic);
#endif //P_FAMILY_CUBCHOO
#if P_FAMILY_CRYOGONAL
SINGLE_ANIMATION(Cryogonal);
#endif //P_FAMILY_CRYOGONAL
#if P_FAMILY_SHELMET
SINGLE_ANIMATION(Shelmet);
SINGLE_ANIMATION(Accelgor);
#endif //P_FAMILY_SHELMET
#if P_FAMILY_STUNFISK
SINGLE_ANIMATION(Stunfisk);
#endif //P_FAMILY_STUNFISK
#if P_FAMILY_MIENFOO
SINGLE_ANIMATION(Mienfoo);
SINGLE_ANIMATION(Mienshao);
#endif //P_FAMILY_MIENFOO
#if P_FAMILY_DRUDDIGON
SINGLE_ANIMATION(Druddigon);
#endif //P_FAMILY_DRUDDIGON
#if P_FAMILY_GOLETT
SINGLE_ANIMATION(Golett);
SINGLE_ANIMATION(Golurk);
#endif //P_FAMILY_GOLETT
#if P_FAMILY_PAWNIARD
SINGLE_ANIMATION(Pawniard);
SINGLE_ANIMATION(Bisharp);
#endif //P_FAMILY_PAWNIARD
#if P_FAMILY_BOUFFALANT
SINGLE_ANIMATION(Bouffalant);
#endif //P_FAMILY_BOUFFALANT
#if P_FAMILY_RUFFLET
SINGLE_ANIMATION(Rufflet);
SINGLE_ANIMATION(Braviary);
#endif //P_FAMILY_RUFFLET
#if P_FAMILY_VULLABY
SINGLE_ANIMATION(Vullaby);
SINGLE_ANIMATION(Mandibuzz);
#endif //P_FAMILY_VULLABY
#if P_FAMILY_HEATMOR
SINGLE_ANIMATION(Heatmor);
#endif //P_FAMILY_HEATMOR
#if P_FAMILY_DURANT
SINGLE_ANIMATION(Durant);
#endif //P_FAMILY_DURANT
#if P_FAMILY_DEINO
SINGLE_ANIMATION(Deino);
SINGLE_ANIMATION(Zweilous);
SINGLE_ANIMATION(Hydreigon);
#endif //P_FAMILY_DEINO
#if P_FAMILY_LARVESTA
SINGLE_ANIMATION(Larvesta);
SINGLE_ANIMATION(Volcarona);
#endif //P_FAMILY_LARVESTA
#if P_FAMILY_COBALION
SINGLE_ANIMATION(Cobalion);
#endif //P_FAMILY_COBALION
#if P_FAMILY_TERRAKION
SINGLE_ANIMATION(Terrakion);
#endif //P_FAMILY_TERRAKION
#if P_FAMILY_VIRIZION
SINGLE_ANIMATION(Virizion);
#endif //P_FAMILY_VIRIZION
#if P_FAMILY_TORNADUS
SINGLE_ANIMATION(TornadusIncarnate);
SINGLE_ANIMATION(TornadusTherian);
#endif //P_FAMILY_TORNADUS
#if P_FAMILY_THUNDURUS
SINGLE_ANIMATION(ThundurusIncarnate);
SINGLE_ANIMATION(ThundurusTherian);
#endif //P_FAMILY_THUNDURUS
#if P_FAMILY_RESHIRAM
SINGLE_ANIMATION(Reshiram);
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
SINGLE_ANIMATION(Zekrom);
#endif //P_FAMILY_ZEKROM
#if P_FAMILY_LANDORUS
SINGLE_ANIMATION(LandorusIncarnate);
SINGLE_ANIMATION(LandorusTherian);
#endif //P_FAMILY_LANDORUS
#if P_FAMILY_KYUREM
SINGLE_ANIMATION(Kyurem);
#if P_FUSION_FORMS
SINGLE_ANIMATION(KyuremWhite);
SINGLE_ANIMATION(KyuremBlack);
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM
#if P_FAMILY_KELDEO
SINGLE_ANIMATION(KeldeoOrdinary);
SINGLE_ANIMATION(KeldeoResolute);
#endif //P_FAMILY_KELDEO
#if P_FAMILY_MELOETTA
SINGLE_ANIMATION(MeloettaAria);
SINGLE_ANIMATION(MeloettaPirouette);
#endif //P_FAMILY_MELOETTA
#if P_FAMILY_GENESECT
SINGLE_ANIMATION(Genesect);
#endif //P_FAMILY_GENESECT
#if P_FAMILY_CHESPIN
SINGLE_ANIMATION(Chespin);
SINGLE_ANIMATION(Quilladin);
SINGLE_ANIMATION(Chesnaught);
#endif //P_FAMILY_CHESPIN
#if P_FAMILY_FENNEKIN
SINGLE_ANIMATION(Fennekin);
SINGLE_ANIMATION(Braixen);
SINGLE_ANIMATION(Delphox);
#endif //P_FAMILY_FENNEKIN
#if P_FAMILY_FROAKIE
SINGLE_ANIMATION(Froakie);
SINGLE_ANIMATION(Frogadier);
SINGLE_ANIMATION(Greninja);
SINGLE_ANIMATION(GreninjaAsh);
#endif //P_FAMILY_FROAKIE
#if P_FAMILY_BUNNELBY
SINGLE_ANIMATION(Bunnelby);
SINGLE_ANIMATION(Diggersby);
#endif //P_FAMILY_BUNNELBY
#if P_FAMILY_FLETCHLING
SINGLE_ANIMATION(Fletchling);
SINGLE_ANIMATION(Fletchinder);
SINGLE_ANIMATION(Talonflame);
#endif //P_FAMILY_FLETCHLING
#if P_FAMILY_SCATTERBUG
SINGLE_ANIMATION(Scatterbug);
SINGLE_ANIMATION(Spewpa);
SINGLE_ANIMATION(Vivillon);
#endif //P_FAMILY_SCATTERBUG
#if P_FAMILY_LITLEO
SINGLE_ANIMATION(Litleo);
SINGLE_ANIMATION(Pyroar);
#endif //P_FAMILY_LITLEO
#if P_FAMILY_FLABEBE
SINGLE_ANIMATION(Flabebe);
SINGLE_ANIMATION(Floette);
SINGLE_ANIMATION(Florges);
#endif //P_FAMILY_FLABEBE
#if P_FAMILY_SKIDDO
SINGLE_ANIMATION(Skiddo);
SINGLE_ANIMATION(Gogoat);
#endif //P_FAMILY_SKIDDO
#if P_FAMILY_PANCHAM
SINGLE_ANIMATION(Pancham);
SINGLE_ANIMATION(Pangoro);
#endif //P_FAMILY_PANCHAM
#if P_FAMILY_FURFROU
SINGLE_ANIMATION(Furfrou);
#endif //P_FAMILY_FURFROU
#if P_FAMILY_ESPURR
SINGLE_ANIMATION(Espurr);
SINGLE_ANIMATION(Meowstic);
#endif //P_FAMILY_ESPURR
#if P_FAMILY_HONEDGE
SINGLE_ANIMATION(Honedge);
SINGLE_ANIMATION(Doublade);
SINGLE_ANIMATION(AegislashShield);
SINGLE_ANIMATION(AegislashBlade);
#endif //P_FAMILY_HONEDGE
#if P_FAMILY_SPRITZEE
SINGLE_ANIMATION(Spritzee);
SINGLE_ANIMATION(Aromatisse);
#endif //P_FAMILY_SPRITZEE
#if P_FAMILY_SWIRLIX
SINGLE_ANIMATION(Swirlix);
SINGLE_ANIMATION(Slurpuff);
#endif //P_FAMILY_SWIRLIX
#if P_FAMILY_INKAY
SINGLE_ANIMATION(Inkay);
SINGLE_ANIMATION(Malamar);
#endif //P_FAMILY_INKAY
#if P_FAMILY_BINACLE
SINGLE_ANIMATION(Binacle);
SINGLE_ANIMATION(Barbaracle);
#endif //P_FAMILY_BINACLE
#if P_FAMILY_SKRELP
SINGLE_ANIMATION(Skrelp);
SINGLE_ANIMATION(Dragalge);
#endif //P_FAMILY_SKRELP
#if P_FAMILY_CLAUNCHER
SINGLE_ANIMATION(Clauncher);
SINGLE_ANIMATION(Clawitzer);
#endif //P_FAMILY_CLAUNCHER
#if P_FAMILY_HELIOPTILE
SINGLE_ANIMATION(Helioptile);
SINGLE_ANIMATION(Heliolisk);
#endif //P_FAMILY_HELIOPTILE
#if P_FAMILY_TYRUNT
SINGLE_ANIMATION(Tyrunt);
SINGLE_ANIMATION(Tyrantrum);
#endif //P_FAMILY_TYRUNT
#if P_FAMILY_AMAURA
SINGLE_ANIMATION(Amaura);
SINGLE_ANIMATION(Aurorus);
#endif //P_FAMILY_AMAURA
#if P_FAMILY_HAWLUCHA
SINGLE_ANIMATION(Hawlucha);
#endif //P_FAMILY_HAWLUCHA
#if P_FAMILY_DEDENNE
SINGLE_ANIMATION(Dedenne);
#endif //P_FAMILY_DEDENNE
#if P_FAMILY_CARBINK
SINGLE_ANIMATION(Carbink);
#endif //P_FAMILY_CARBINK
#if P_FAMILY_GOOMY
SINGLE_ANIMATION(Goomy);
SINGLE_ANIMATION(Sliggoo);
SINGLE_ANIMATION(Goodra);
#endif //P_FAMILY_GOOMY
#if P_FAMILY_KLEFKI
SINGLE_ANIMATION(Klefki);
#endif //P_FAMILY_KLEFKI
#if P_FAMILY_PHANTUMP
SINGLE_ANIMATION(Phantump);
SINGLE_ANIMATION(Trevenant);
#endif //P_FAMILY_PHANTUMP
#if P_FAMILY_PUMPKABOO
SINGLE_ANIMATION(Pumpkaboo);
SINGLE_ANIMATION(Gourgeist);
#endif //P_FAMILY_PUMPKABOO
#if P_FAMILY_BERGMITE
SINGLE_ANIMATION(Bergmite);
SINGLE_ANIMATION(Avalugg);
#endif //P_FAMILY_BERGMITE
#if P_FAMILY_NOIBAT
SINGLE_ANIMATION(Noibat);
SINGLE_ANIMATION(Noivern);
#endif //P_FAMILY_NOIBAT
#if P_FAMILY_XERNEAS
SINGLE_ANIMATION(Xerneas);
#endif //P_FAMILY_XERNEAS
#if P_FAMILY_YVELTAL
SINGLE_ANIMATION(Yveltal);
#endif //P_FAMILY_YVELTAL
#if P_FAMILY_ZYGARDE
SINGLE_ANIMATION(Zygarde50);
SINGLE_ANIMATION(Zygarde10);
SINGLE_ANIMATION(ZygardeComplete);
#endif //P_FAMILY_ZYGARDE
#if P_FAMILY_DIANCIE
SINGLE_ANIMATION(Diancie);
#endif //P_FAMILY_DIANCIE
#if P_FAMILY_HOOPA
SINGLE_ANIMATION(HoopaConfined);
SINGLE_ANIMATION(HoopaUnbound);
#endif //P_FAMILY_HOOPA
#if P_FAMILY_VOLCANION
SINGLE_ANIMATION(Volcanion);
#endif //P_FAMILY_VOLCANION
#if P_FAMILY_ROWLET
SINGLE_ANIMATION(Rowlet);
SINGLE_ANIMATION(Dartrix);
SINGLE_ANIMATION(Decidueye);
#endif //P_FAMILY_ROWLET
#if P_FAMILY_PIKIPEK
SINGLE_ANIMATION(Pikipek);
SINGLE_ANIMATION(Trumbeak);
SINGLE_ANIMATION(Toucannon);
#endif //P_FAMILY_PIKIPEK
#if P_FAMILY_GRUBBIN
SINGLE_ANIMATION(Grubbin);
SINGLE_ANIMATION(Charjabug);
SINGLE_ANIMATION(Vikavolt);
#endif //P_FAMILY_GRUBBIN
#if P_FAMILY_CUTIEFLY
SINGLE_ANIMATION(Cutiefly);
SINGLE_ANIMATION(Ribombee);
#endif //P_FAMILY_CUTIEFLY
#if P_FAMILY_ROCKRUFF
SINGLE_ANIMATION(Rockruff);
SINGLE_ANIMATION(LycanrocMidday);
SINGLE_ANIMATION(LycanrocMidnight);
SINGLE_ANIMATION(LycanrocDusk);
#endif //P_FAMILY_ROCKRUFF
#if P_FAMILY_DEWPIDER
SINGLE_ANIMATION(Dewpider);
SINGLE_ANIMATION(Araquanid);
#endif //P_FAMILY_DEWPIDER
#if P_FAMILY_SALANDIT
SINGLE_ANIMATION(Salandit);
SINGLE_ANIMATION(Salazzle);
#endif //P_FAMILY_SALANDIT
#if P_FAMILY_STUFFUL
SINGLE_ANIMATION(Stufful);
SINGLE_ANIMATION(Bewear);
#endif //P_FAMILY_STUFFUL
#if P_FAMILY_ORANGURU
SINGLE_ANIMATION(Oranguru);
#endif //P_FAMILY_ORANGURU
#if P_FAMILY_PASSIMIAN
SINGLE_ANIMATION(Passimian);
#endif //P_FAMILY_PASSIMIAN
#if P_FAMILY_WIMPOD
SINGLE_ANIMATION(Wimpod);
SINGLE_ANIMATION(Golisopod);
#endif //P_FAMILY_WIMPOD
#if P_FAMILY_PYUKUMUKU
SINGLE_ANIMATION(Pyukumuku);
#endif //P_FAMILY_PYUKUMUKU
#if P_FAMILY_TURTONATOR
SINGLE_ANIMATION(Turtonator);
#endif //P_FAMILY_TURTONATOR
#if P_FAMILY_TOGEDEMARU
SINGLE_ANIMATION(Togedemaru);
#endif //P_FAMILY_TOGEDEMARU
#if P_FAMILY_DRAMPA
SINGLE_ANIMATION(Drampa);
#endif //P_FAMILY_DRAMPA
#if P_FAMILY_JANGMO_O
SINGLE_ANIMATION(Jangmo_O);
SINGLE_ANIMATION(Hakamo_O);
SINGLE_ANIMATION(Kommo_O);
#endif //P_FAMILY_JANGMO_O
#if P_FAMILY_TAPU_KOKO
SINGLE_ANIMATION(TapuKoko);
#endif //P_FAMILY_TAPU_KOKO
#if P_FAMILY_TAPU_LELE
SINGLE_ANIMATION(TapuLele);
#endif //P_FAMILY_TAPU_LELE
#if P_FAMILY_TAPU_BULU
SINGLE_ANIMATION(TapuBulu);
#endif //P_FAMILY_TAPU_BULU
#if P_FAMILY_TAPU_FINI
SINGLE_ANIMATION(TapuFini);
#endif //P_FAMILY_TAPU_FINI
#if P_FAMILY_MARSHADOW
SINGLE_ANIMATION(Marshadow);
#endif //P_FAMILY_MARSHADOW
#if P_FAMILY_ROOKIDEE
SINGLE_ANIMATION(Rookidee);
SINGLE_ANIMATION(Corvisquire);
SINGLE_ANIMATION(Corviknight);
#endif //P_FAMILY_ROOKIDEE
#if P_FAMILY_CHEWTLE
SINGLE_ANIMATION(Chewtle);
SINGLE_ANIMATION(Drednaw);
#endif //P_FAMILY_CHEWTLE
#if P_FAMILY_SIZZLIPEDE
SINGLE_ANIMATION(Sizzlipede);
SINGLE_ANIMATION(Centiskorch);
#endif //P_FAMILY_SIZZLIPEDE
#if P_FAMILY_TERAPAGOS
#endif //P_FAMILY_TERAPAGOS
SINGLE_ANIMATION(Egg);
