const struct CompressedSpriteSheet gMonFrontPicTable[] =
{
    SPECIES_SPRITE(EGG, gMonFrontPic_Egg),
};

const struct CompressedSpriteSheet gMonFrontPicTableFemale[] =
{
    SPECIES_SPRITE(EEVEE, gMonFrontPic_EeveeF),
#if P_GEN_4_POKEMON == TRUE
    SPECIES_SPRITE(STARLY, gMonFrontPic_StarlyF),
    SPECIES_SPRITE(STARAVIA, gMonFrontPic_StaraviaF),
    SPECIES_SPRITE(STARAPTOR, gMonFrontPic_StaraptorF),
    SPECIES_SPRITE(BIDOOF, gMonFrontPic_BidoofF),
    SPECIES_SPRITE(KRICKETOT, gMonFrontPic_KricketotF),
    SPECIES_SPRITE(KRICKETUNE, gMonFrontPic_KricketuneF),
    SPECIES_SPRITE(SHINX, gMonFrontPic_ShinxF),
    SPECIES_SPRITE(COMBEE, gMonFrontPic_Combee),
    SPECIES_SPRITE(HIPPOPOTAS, gMonFrontPic_Hippopotas),
    SPECIES_SPRITE(HIPPOWDON, gMonFrontPic_Hippowdon),
#endif
#if P_GEN_5_POKEMON == TRUE
    SPECIES_SPRITE(UNFEZANT, gMonFrontPic_UnfezantF),
    SPECIES_SPRITE(FRILLISH, gMonFrontPic_FrillishF),
    SPECIES_SPRITE(JELLICENT, gMonFrontPic_JellicentF),
#endif
#if P_GEN_6_POKEMON == TRUE
    SPECIES_SPRITE(PYROAR, gMonFrontPic_PyroarF),
#endif
#if P_GEN_8_POKEMON == TRUE
    SPECIES_SPRITE(BASCULEGION, gMonFrontPic_QuestionMark), //gMonFrontPic_BasculegionF),
#endif
};
