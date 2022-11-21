const struct CompressedSpritePalette gMonPaletteTableFemale[] =
{
    SPECIES_PAL(EEVEE, gMonPalette_Eevee),
#if P_GEN_4_POKEMON == TRUE
    SPECIES_PAL(COMBEE, gMonPalette_CombeeF),
    SPECIES_PAL(STARLY, gMonPalette_Starly),
    SPECIES_PAL(STARAVIA, gMonPalette_Staravia),
    SPECIES_PAL(STARAPTOR, gMonPalette_Staraptor),
    SPECIES_PAL(BIDOOF, gMonPalette_Bidoof),
    SPECIES_PAL(KRICKETOT, gMonPalette_Kricketot),
    SPECIES_PAL(KRICKETUNE, gMonPalette_Kricketune),
    SPECIES_PAL(SHINX, gMonPalette_Shinx),
    SPECIES_PAL(HIPPOPOTAS, gMonPalette_HippopotasF),
    SPECIES_PAL(HIPPOWDON, gMonPalette_HippowdonF),
#endif
#if P_GEN_5_POKEMON == TRUE
    SPECIES_PAL(UNFEZANT, gMonPalette_UnfezantF),
    SPECIES_PAL(FRILLISH, gMonPalette_FrillishF),
    SPECIES_PAL(JELLICENT, gMonPalette_JellicentF),
#endif
#if P_GEN_6_POKEMON == TRUE
    SPECIES_PAL(PYROAR, gMonPalette_Pyroar),
#endif
#if P_GEN_8_POKEMON == TRUE
    SPECIES_PAL(BASCULEGION, gMonPalette_QuestionMark), // gMonPalette_BasculegionF),
#endif
};
