
const struct CompressedSpriteSheet gMonBackPicTableFemale[] =
{
    SPECIES_SPRITE(EEVEE, gMonBackPic_EeveeF),
#if P_GEN_4_POKEMON == TRUE
    SPECIES_SPRITE(STARLY, gMonBackPic_StarlyF),
    SPECIES_SPRITE(STARAVIA, gMonBackPic_StaraviaF),
    SPECIES_SPRITE(STARAPTOR, gMonBackPic_Staraptor),
    SPECIES_SPRITE(BIDOOF, gMonBackPic_BidoofF),
    SPECIES_SPRITE(KRICKETOT, gMonBackPic_KricketotF),
    SPECIES_SPRITE(KRICKETUNE, gMonBackPic_KricketuneF),
    SPECIES_SPRITE(SHINX, gMonBackPic_ShinxF),
    SPECIES_SPRITE(COMBEE, gMonBackPic_Combee),
    SPECIES_SPRITE(HIPPOPOTAS, gMonBackPic_Hippopotas),
    SPECIES_SPRITE(HIPPOWDON, gMonBackPic_Hippowdon),
#endif
#if P_GEN_5_POKEMON == TRUE
    SPECIES_SPRITE(UNFEZANT, gMonBackPic_UnfezantF),
    SPECIES_SPRITE(FRILLISH, gMonBackPic_FrillishF),
    SPECIES_SPRITE(JELLICENT, gMonBackPic_JellicentF),
#endif
#if P_GEN_6_POKEMON == TRUE
    SPECIES_SPRITE(PYROAR, gMonBackPic_PyroarF),
#endif
#if P_GEN_8_POKEMON == TRUE
    SPECIES_SPRITE(BASCULEGION, gMonBackPic_QuestionMark), //gMonBackPic_BasculegionF),
#endif
};
