const struct PokedexEntryForms gPokedexEntriesForms[] =
{
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_DIANCIE_MEGA] =
    {
        .height = 11,
        .weight = 278,
        .description = gDianciePokedexText, // No official dex entry for this form
    },
#endif


#if P_GEN_6_POKEMON == TRUE
    // Meowstic   
    [SPECIES_MEOWSTIC_FEMALE] =
    { 
        .description = gDummyPokedexText,
    },
    // Aegislash   
    [SPECIES_AEGISLASH_BLADE] =
    { 
        .description = gDummyPokedexText,
    },
    // Pumpkaboo   
    [SPECIES_PUMPKABOO_SMALL] =
    {
        .height = 3,
        .weight = 35,
        .description = gDummyPokedexText,
    },
    [SPECIES_PUMPKABOO_LARGE] =
    {
        .height = 5,
        .weight = 75,
        .description = gDummyPokedexText,
    },
    [SPECIES_PUMPKABOO_SUPER] =
    {
        .height = 8,
        .weight = 150,
        .description = gDummyPokedexText,
    },
    // Gourgeist   
    [SPECIES_GOURGEIST_SMALL] =
    {
        .height = 7,
        .weight = 95,
        .description = gDummyPokedexText,
    },
    [SPECIES_GOURGEIST_LARGE] =
    {
        .height = 11,
        .weight = 140,
        .description = gDummyPokedexText,
    },
    [SPECIES_GOURGEIST_SUPER] =
    {
        .height = 17,
        .weight = 390,
        .description = gDummyPokedexText,
    },
    // Zygarde   
    [SPECIES_ZYGARDE_10] =
    {
        .height = 12,
        .weight = 335,
        .description = gDummyPokedexText,
    },
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .height = 12,
        .weight = 335,
        .description = gDummyPokedexText,
    },
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .height = 50,
        .weight = 3050,
        .description = gDummyPokedexText,
    },
    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .height = 45,
        .weight = 6100,
        .description = gDummyPokedexText,
    },
    // Hoopa   
    [SPECIES_HOOPA_UNBOUND] =
    {
        .categoryName = _("Djinn"),
        .height = 65,
        .weight = 4900,
        .description = gDummyPokedexText,
    },
#endif
#if P_GEN_7_POKEMON == TRUE
    // Oricorio   
    [SPECIES_ORICORIO_POM_POM] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ORICORIO_PAU] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ORICORIO_SENSU] =
    { 
        .description = gDummyPokedexText,
    },
    // Rockruff   
    [SPECIES_ROCKRUFF_OWN_TEMPO] =
    { 
        .description = gDummyPokedexText,
    },
    // Lycanroc   
    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .height = 11,
        .weight = 250,
        .description = gDummyPokedexText,
    },
    [SPECIES_LYCANROC_DUSK] =
    {
        .height = 8,
        .weight = 250,
        .description = gDummyPokedexText,
    },
    // Wishiwashi   
    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .height = 82,
        .weight = 786,
        .description = gDummyPokedexText,
    },
    // Silvally   
    [SPECIES_SILVALLY_FIGHTING] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_FLYING] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_POISON] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_GROUND] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_ROCK] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_BUG] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_GHOST] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_STEEL] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_FIRE] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_WATER] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_GRASS] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_ELECTRIC] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_PSYCHIC] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_ICE] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_DRAGON] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_DARK] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_SILVALLY_FAIRY] =
    { 
        .description = gDummyPokedexText,
    },
    // Minior   
    [SPECIES_MINIOR_METEOR_ORANGE] =
    {
        .height = 3,
        .weight = 400,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_METEOR_YELLOW] =
    {
        .height = 3,
        .weight = 400,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_METEOR_GREEN] =
    {
        .height = 3,
        .weight = 400,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_METEOR_BLUE] =
    {
        .height = 3,
        .weight = 400,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_METEOR_INDIGO] =
    {
        .height = 3,
        .weight = 400,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_METEOR_VIOLET] =
    {
        .height = 3,
        .weight = 400,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_RED] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_ORANGE] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_YELLOW] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_GREEN] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_BLUE] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_INDIGO] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    [SPECIES_MINIOR_CORE_VIOLET] =
    {
        .height = 3,
        .weight = 3,
        .description = gDummyPokedexText,
    },
    // Mimikyu   
    [SPECIES_MIMIKYU_BUSTED] =
    { 
        .description = gDummyPokedexText,
    },
    // Necrozma   
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .height = 38,
        .weight = 4600,
        .description = gDummyPokedexText,
    },
    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .height = 42,
        .weight = 3500,
        .description = gDummyPokedexText,
    },
    [SPECIES_NECROZMA_ULTRA] =
    {
        .height = 75,
        .weight = 2300,
        .description = gDummyPokedexText,
    },
    // Magearna   
    [SPECIES_MAGEARNA_ORIGINAL_COLOR] =
    { 
        .description = gDummyPokedexText,
    },
#endif
#if P_GEN_8_POKEMON == TRUE
    // Cramorant   
    [SPECIES_CRAMORANT_GULPING] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_CRAMORANT_GORGING] =
    { 
        .description = gDummyPokedexText,
    },
    // Toxtricity   
    [SPECIES_TOXTRICITY_LOW_KEY] =
    { 
        .description = gDummyPokedexText,
    },
    // Sinistea   
    [SPECIES_SINISTEA_ANTIQUE] =
    { 
        .description = gDummyPokedexText,
    },
    // Polteageist   
    [SPECIES_POLTEAGEIST_ANTIQUE] =
    { 
        .description = gDummyPokedexText,
    },
    // Alcremie   
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] =
    { 
        .description = gDummyPokedexText,
    },
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] =
    { 
        .description = gDummyPokedexText,
    },
    // Eiscue   
    [SPECIES_EISCUE_NOICE_FACE] =
    { 
        .description = gDummyPokedexText,
    },
    // Indeedee   
    [SPECIES_INDEEDEE_FEMALE] =
    { 
        .description = gDummyPokedexText,
    },
    // Morpeko   
    [SPECIES_MORPEKO_HANGRY] =
    { 
        .description = gDummyPokedexText,
    },
    // Zacian   
    [SPECIES_ZACIAN_CROWNED_SWORD] =
    {
        .height = 28,
        .weight = 3550,
        .description = gDummyPokedexText,
    },
    // Zamazenta   
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] =
    {
        .height = 29,
        .weight = 7850,
        .description = gDummyPokedexText,
    },
    // Eternatus   
    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .height = 100,
        .weight = 10000,
        .description = gDummyPokedexText,
    },
    // Urshifu   
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] =
    { 
        .description = gDummyPokedexText,
    },
    // Zarude   
    [SPECIES_ZARUDE_DADA] =
    { 
        .description = gDummyPokedexText,
    },
    // Calyrex   
    [SPECIES_CALYREX_ICE_RIDER] =
    {
        .categoryName = _("High King"),
        .height = 24,
        .weight = 8091,
        .description = gDummyPokedexText,
    },
    [SPECIES_CALYREX_SHADOW_RIDER] =
    {
        .categoryName = _("High King"),
        .height = 24,
        .weight = 536,
        .description = gDummyPokedexText,
    },
#endif
};
