// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BULBASAUR] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_IVYSAUR] =
    {
        .size = 0x56,
        .y_offset = 9,
=======
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_IVYSAUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_VENUSAUR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHARMANDER] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 10,
    },
    [SPECIES_CHARMELEON] =
    {
        .size = 0x66,
        .y_offset = 7,
    },
    [SPECIES_CHARIZARD] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_SQUIRTLE] =
    {
        .size = 0x65,
        .y_offset = 11,
    },
    [SPECIES_WARTORTLE] =
    {
        .size = 0x66,
        .y_offset = 7,
    },
    [SPECIES_BLASTOISE] =
    {
        .size = 0x88,
        .y_offset = 3,
    },
    [SPECIES_CATERPIE] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_METAPOD] =
    {
        .size = 0x54,
        .y_offset = 14,
    },
    [SPECIES_BUTTERFREE] =
    {
        .size = 0x76,
        .y_offset = 10,
    },
    [SPECIES_WEEDLE] =
    {
        .size = 0x54,
        .y_offset = 13,
    },
    [SPECIES_KAKUNA] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_BEEDRILL] =
    {
        .size = 0x86,
        .y_offset = 5,
    },
    [SPECIES_PIDGEY] =
    {
        .size = 0x65,
        .y_offset = 12,
    },
    [SPECIES_PIDGEOTTO] =
    {
        .size = 0x67,
        .y_offset = 6,
    },
    [SPECIES_PIDGEOT] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_RATTATA] =
    {
        .size = 0x44,
        .y_offset = 13,
    },
    [SPECIES_RATICATE] =
    {
        .size = 0x66,
        .y_offset = 6,
    },
    [SPECIES_SPEAROW] =
    {
        .size = 0x45,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_CHARMELEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_CHARIZARD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SQUIRTLE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_WARTORTLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_BLASTOISE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CATERPIE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_METAPOD] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 20,
    },
    [SPECIES_BUTTERFREE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_WEEDLE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_KAKUNA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_BEEDRILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_PIDGEY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_PIDGEOTTO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 11,
    },
    [SPECIES_PIDGEOT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RATTATA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_RATICATE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SPEAROW] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_FEAROW] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_EKANS] =
    {
<<<<<<< HEAD
        .size = 0x65,
        .y_offset = 10,
    },
    [SPECIES_ARBOK] =
    {
        .size = 0x88,
        .y_offset = 1,
=======
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_ARBOK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_PIKACHU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 9,
    },
    [SPECIES_RAICHU] =
    {
<<<<<<< HEAD
        .size = 0x67,
        .y_offset = 3,
    },
    [SPECIES_SANDSHREW] =
    {
        .size = 0x55,
        .y_offset = 11,
    },
    [SPECIES_SANDSLASH] =
    {
        .size = 0x76,
        .y_offset = 6,
    },
    [SPECIES_NIDORAN_F] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_NIDORINA] =
    {
        .size = 0x66,
        .y_offset = 8,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .size = 0x78,
        .y_offset = 2,
=======
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SANDSHREW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SANDSLASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_NIDORAN_F] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_NIDORINA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_NIDORAN_M] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_NIDORINO] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_NIDOKING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_CLEFAIRY] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 12,
    },
    [SPECIES_CLEFABLE] =
    {
        .size = 0x66,
        .y_offset = 6,
    },
    [SPECIES_VULPIX] =
    {
        .size = 0x65,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLEFABLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VULPIX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_NINETALES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_JIGGLYPUFF] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_WIGGLYTUFF] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_ZUBAT] =
    {
        .size = 0x67,
        .y_offset = 16,
    },
    [SPECIES_GOLBAT] =
    {
        .size = 0x88,
        .y_offset = 7,
    },
    [SPECIES_ODDISH] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_GLOOM] =
    {
        .size = 0x66,
        .y_offset = 11,
    },
    [SPECIES_VILEPLUME] =
    {
        .size = 0x77,
        .y_offset = 7,
    },
    [SPECIES_PARAS] =
    {
        .size = 0x55,
        .y_offset = 14,
    },
    [SPECIES_PARASECT] =
    {
        .size = 0x86,
        .y_offset = 7,
=======
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_WIGGLYTUFF] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_ZUBAT] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GOLBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ODDISH] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_GLOOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_VILEPLUME] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PARAS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_PARASECT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_VENONAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VENOMOTH] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 9,
    },
    [SPECIES_DIGLETT] =
    {
        .size = 0x54,
        .y_offset = 17,
    },
    [SPECIES_DUGTRIO] =
    {
        .size = 0x75,
        .y_offset = 11,
    },
    [SPECIES_MEOWTH] =
    {
        .size = 0x55,
        .y_offset = 10,
    },
    [SPECIES_PERSIAN] =
    {
        .size = 0x77,
        .y_offset = 4,
    },
    [SPECIES_PSYDUCK] =
    {
        .size = 0x56,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_DIGLETT] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_DUGTRIO] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_MEOWTH] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_PERSIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_PSYDUCK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_GOLDUCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MANKEY] =
    {
<<<<<<< HEAD
        .size = 0x65,
        .y_offset = 11,
    },
    [SPECIES_PRIMEAPE] =
    {
        .size = 0x77,
        .y_offset = 6,
=======
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_PRIMEAPE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_GROWLITHE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_ARCANINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_POLIWAG] =
    {
<<<<<<< HEAD
        .size = 0x74,
        .y_offset = 13,
    },
    [SPECIES_POLIWHIRL] =
    {
        .size = 0x76,
        .y_offset = 9,
    },
    [SPECIES_POLIWRATH] =
    {
        .size = 0x76,
        .y_offset = 6,
    },
    [SPECIES_ABRA] =
    {
        .size = 0x66,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 19,
    },
    [SPECIES_POLIWHIRL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_POLIWRATH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ABRA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_KADABRA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ALAKAZAM] =
    {
<<<<<<< HEAD
        .size = 0x87,
        .y_offset = 2,
    },
    [SPECIES_MACHOP] =
    {
        .size = 0x56,
        .y_offset = 10,
    },
    [SPECIES_MACHOKE] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_MACHAMP] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_BELLSPROUT] =
    {
        .size = 0x65,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MACHOP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_MACHOKE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_MACHAMP] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BELLSPROUT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_WEEPINBELL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_VICTREEBEL] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 6,
    },
    [SPECIES_TENTACOOL] =
    {
        .size = 0x46,
        .y_offset = 7,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_TENTACOOL] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TENTACRUEL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GEODUDE] =
    {
<<<<<<< HEAD
        .size = 0x54,
        .y_offset = 19,
    },
    [SPECIES_GRAVELER] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_GOLEM] =
    {
        .size = 0x77,
        .y_offset = 6,
    },
    [SPECIES_PONYTA] =
    {
        .size = 0x66,
        .y_offset = 6,
    },
    [SPECIES_RAPIDASH] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_SLOWPOKE] =
    {
        .size = 0x66,
        .y_offset = 16,
    },
    [SPECIES_SLOWBRO] =
    {
        .size = 0x86,
        .y_offset = 4,
    },
    [SPECIES_MAGNEMITE] =
    {
        .size = 0x43,
        .y_offset = 20,
    },
    [SPECIES_MAGNETON] =
    {
        .size = 0x76,
        .y_offset = 7,
    },
    [SPECIES_FARFETCHD] =
    {
        .size = 0x66,
        .y_offset = 7,
    },
    [SPECIES_DODUO] =
    {
        .size = 0x57,
        .y_offset = 7,
=======
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_GRAVELER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GOLEM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PONYTA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_RAPIDASH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SLOWPOKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SLOWBRO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGNEMITE] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },
    [SPECIES_MAGNETON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_FARFETCHD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_DODUO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_DODRIO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEL] =
    {
<<<<<<< HEAD
        .size = 0x76,
        .y_offset = 8,
    },
    [SPECIES_DEWGONG] =
    {
        .size = 0x87,
        .y_offset = 2,
    },
    [SPECIES_GRIMER] =
    {
        .size = 0x65,
        .y_offset = 9,
    },
    [SPECIES_MUK] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_SHELLDER] =
    {
        .size = 0x55,
        .y_offset = 13,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = 0x87,
        .y_offset = 3,
    },
    [SPECIES_GASTLY] =
    {
        .size = 0x77,
        .y_offset = 13,
    },
    [SPECIES_HAUNTER] =
    {
        .size = 0x77,
        .y_offset = 13,
    },
    [SPECIES_GENGAR] =
    {
        .size = 0x77,
        .y_offset = 7,
    },
    [SPECIES_ONIX] =
    {
        .size = 0x78,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_DEWGONG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GRIMER] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MUK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SHELLDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_GASTLY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_HAUNTER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_GENGAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ONIX] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_DROWZEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_HYPNO] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 3,
    },
    [SPECIES_KRABBY] =
    {
        .size = 0x65,
        .y_offset = 14,
    },
    [SPECIES_KINGLER] =
    {
        .size = 0x88,
        .y_offset = 8,
    },
    [SPECIES_VOLTORB] =
    {
        .size = 0x44,
        .y_offset = 15,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = 0x55,
        .y_offset = 11,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = 0x87,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_KRABBY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_KINGLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_VOLTORB] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_EXEGGUTOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CUBONE] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 13,
    },
    [SPECIES_MAROWAK] =
    {
        .size = 0x76,
        .y_offset = 8,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = 0x87,
        .y_offset = 3,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = 0x67,
        .y_offset = 3,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = 0x86,
        .y_offset = 7,
    },
    [SPECIES_KOFFING] =
    {
        .size = 0x66,
        .y_offset = 10,
    },
    [SPECIES_WEEZING] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_RHYHORN] =
    {
        .size = 0x76,
        .y_offset = 12,
    },
    [SPECIES_RHYDON] =
    {
        .size = 0x88,
        .y_offset = 4,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_MAROWAK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_KOFFING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_WEEZING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_RHYHORN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_RHYDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CHANSEY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_TANGELA] =
    {
<<<<<<< HEAD
        .size = 0x67,
        .y_offset = 12,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_HORSEA] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_SEADRA] =
    {
        .size = 0x67,
        .y_offset = 6,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = 0x66,
        .y_offset = 13,
    },
    [SPECIES_SEAKING] =
    {
        .size = 0x77,
        .y_offset = 5,
    },
    [SPECIES_STARYU] =
    {
        .size = 0x66,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HORSEA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_SEADRA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SEAKING] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_STARYU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_STARMIE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MR_MIME] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SCYTHER] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_JYNX] =
    {
        .size = 0x77,
        .y_offset = 9,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = 0x78,
        .y_offset = 4,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_JYNX] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MAGMAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_PINSIR] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 5,
    },
    [SPECIES_TAUROS] =
    {
        .size = 0x78,
        .y_offset = 5,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_GYARADOS] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_LAPRAS] =
    {
        .size = 0x85,
        .y_offset = 2,
    },
    [SPECIES_DITTO] =
    {
        .size = 0x54,
        .y_offset = 15,
    },
    [SPECIES_EEVEE] =
    {
        .size = 0x56,
        .y_offset = 11,
    },
    [SPECIES_VAPOREON] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_JOLTEON] =
    {
        .size = 0x76,
        .y_offset = 10,
    },
    [SPECIES_FLAREON] =
    {
        .size = 0x66,
        .y_offset = 11,
    },
    [SPECIES_PORYGON] =
    {
        .size = 0x55,
        .y_offset = 14,
    },
    [SPECIES_OMANYTE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_OMASTAR] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_KABUTO] =
    {
        .size = 0x54,
        .y_offset = 16,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = 0x88,
        .y_offset = 4,
    },
    [SPECIES_SNORLAX] =
    {
        .size = 0x87,
        .y_offset = 1,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = 0x88,
        .y_offset = 2,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_TAUROS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GYARADOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 8,
    },
    [SPECIES_LAPRAS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_DITTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_EEVEE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_VAPOREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_JOLTEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_FLAREON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_PORYGON] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_OMANYTE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_OMASTAR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KABUTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SNORLAX] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_ZAPDOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MOLTRES] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_DRATINI] =
    {
        .size = 0x75,
        .y_offset = 9,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = 0x87,
        .y_offset = 1,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DRATINI] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_DRAGONITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEWTWO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEW] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 9,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = 0x75,
        .y_offset = 10,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = 0x77,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MEGANIUM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CYNDAQUIL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_QUILAVA] =
    {
<<<<<<< HEAD
        .size = 0x76,
        .y_offset = 6,
=======
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TYPHLOSION] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TOTODILE] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 14,
    },
    [SPECIES_CROCONAW] =
    {
        .size = 0x67,
        .y_offset = 5,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_SENTRET] =
    {
        .size = 0x47,
        .y_offset = 2,
    },
    [SPECIES_FURRET] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = 0x55,
        .y_offset = 12,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = 0x58,
        .y_offset = 2,
    },
    [SPECIES_LEDYBA] =
    {
        .size = 0x56,
        .y_offset = 10,
    },
    [SPECIES_LEDIAN] =
    {
        .size = 0x67,
        .y_offset = 6,
    },
    [SPECIES_SPINARAK] =
    {
        .size = 0x54,
        .y_offset = 16,
    },
    [SPECIES_ARIADOS] =
    {
        .size = 0x87,
        .y_offset = 6,
    },
    [SPECIES_CROBAT] =
    {
        .size = 0x88,
        .y_offset = 6,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = 0x75,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_CROCONAW] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SENTRET] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 4,
    },
    [SPECIES_FURRET] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_LEDYBA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_LEDIAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINARAK] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 19,
    },
    [SPECIES_ARIADOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CROBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 11,
    },
    [SPECIES_PICHU] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_CLEFFA] =
    {
        .size = 0x44,
        .y_offset = 18,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = 0x44,
        .y_offset = 17,
    },
    [SPECIES_TOGEPI] =
    {
        .size = 0x34,
        .y_offset = 16,
    },
    [SPECIES_TOGETIC] =
    {
        .size = 0x46,
        .y_offset = 8,
    },
    [SPECIES_NATU] =
    {
        .size = 0x44,
        .y_offset = 17,
    },
    [SPECIES_XATU] =
    {
        .size = 0x47,
        .y_offset = 5,
    },
    [SPECIES_MAREEP] =
    {
        .size = 0x55,
        .y_offset = 12,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = 0x56,
        .y_offset = 9,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = 0x77,
        .y_offset = 2,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = 0x45,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 20,
    },
    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_NATU] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_XATU] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MARILL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_AZUMARILL] =
    {
<<<<<<< HEAD
        .size = 0x76,
        .y_offset = 6,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = 0x67,
        .y_offset = 7,
    },
    [SPECIES_POLITOED] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_HOPPIP] =
    {
        .size = 0x66,
        .y_offset = 14,
=======
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_POLITOED] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_HOPPIP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SKIPLOOM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_JUMPLUFF] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 9,
    },
    [SPECIES_AIPOM] =
    {
        .size = 0x58,
        .y_offset = 1,
    },
    [SPECIES_SUNKERN] =
    {
        .size = 0x44,
        .y_offset = 17,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_AIPOM] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_SUNKERN] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SUNFLORA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_YANMA] =
    {
<<<<<<< HEAD
        .size = 0x86,
        .y_offset = 14,
=======
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_WOOPER] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_QUAGSIRE] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 5,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UMBREON] =
    {
<<<<<<< HEAD
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_MURKROW] =
    {
        .size = 0x66,
        .y_offset = 15,
=======
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },
    [SPECIES_MISDREAVUS] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_UNOWN] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_WOBBUFFET] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 5,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_PINECO] =
    {
        .size = 0x56,
        .y_offset = 12,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = 0x76,
        .y_offset = 8,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = 0x74,
        .y_offset = 9,
    },
    [SPECIES_GLIGAR] =
    {
        .size = 0x78,
        .y_offset = 4,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_GLIGAR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_STEELIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNUBBULL] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 12,
    },
    [SPECIES_GRANBULL] =
    {
        .size = 0x57,
        .y_offset = 4,
    },
    [SPECIES_QWILFISH] =
    {
        .size = 0x56,
        .y_offset = 8,
    },
    [SPECIES_SCIZOR] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = 0x66,
        .y_offset = 8,
    },
    [SPECIES_HERACROSS] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_SNEASEL] =
    {
        .size = 0x67,
        .y_offset = 7,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_URSARING] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_SLUGMA] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = 0x57,
        .y_offset = 6,
    },
    [SPECIES_SWINUB] =
    {
        .size = 0x43,
        .y_offset = 18,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GRANBULL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HERACROSS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SNEASEL] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_URSARING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SLUGMA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 13,
    },
    [SPECIES_SWINUB] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_PILOSWINE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_REMORAID] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 11,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = 0x66,
        .y_offset = 8,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = 0x56,
        .y_offset = 7,
    },
    [SPECIES_MANTINE] =
    {
        .size = 0x88,
        .y_offset = 5,
    },
    [SPECIES_SKARMORY] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = 0x56,
        .y_offset = 9,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = 0x77,
        .y_offset = 0,
    },
    [SPECIES_KINGDRA] =
    {
        .size = 0x78,
        .y_offset = 1,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_MANTINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_KINGDRA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_PHANPY] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_DONPHAN] =
    {
<<<<<<< HEAD
        .size = 0x86,
        .y_offset = 9,
=======
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_PORYGON2] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TYROGUE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_HITMONTOP] =
    {
<<<<<<< HEAD
        .size = 0x67,
        .y_offset = 6,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = 0x35,
        .y_offset = 13,
    },
    [SPECIES_ELEKID] =
    {
        .size = 0x76,
        .y_offset = 12,
    },
    [SPECIES_MAGBY] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_MILTANK] =
    {
        .size = 0x77,
        .y_offset = 8,
    },
    [SPECIES_BLISSEY] =
    {
        .size = 0x77,
        .y_offset = 5,
    },
    [SPECIES_RAIKOU] =
    {
        .size = 0x88,
        .y_offset = 5,
    },
    [SPECIES_ENTEI] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_SUICUNE] =
    {
        .size = 0x88,
        .y_offset = 3,
    },
    [SPECIES_LARVITAR] =
    {
        .size = 0x46,
        .y_offset = 10,
    },
    [SPECIES_PUPITAR] =
    {
        .size = 0x56,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_ELEKID] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_MAGBY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_BLISSEY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_RAIKOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ENTEI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SUICUNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LARVITAR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_PUPITAR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUGIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HO_OH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CELEBI] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TREECKO] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_GROVYLE] =
    {
<<<<<<< HEAD
        .size = 0x87,
        .y_offset = 5,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SCEPTILE] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TORCHIC] =
    {
<<<<<<< HEAD
        .size = 0x56,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_COMBUSKEN] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_BLAZIKEN] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MUDKIP] =
    {
<<<<<<< HEAD
        .size = 0x56,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MARSHTOMP] =
    {
<<<<<<< HEAD
        .size = 0x67,
        .y_offset = 5,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SWAMPERT] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 6,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_POOCHYENA] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MIGHTYENA] =
    {
<<<<<<< HEAD
        .size = 0x87,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_ZIGZAGOON] =
    {
<<<<<<< HEAD
        .size = 0x85,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LINOONE] =
    {
<<<<<<< HEAD
        .size = 0x78,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_WURMPLE] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SILCOON] =
    {
<<<<<<< HEAD
        .size = 0x75,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_BEAUTIFLY] =
    {
<<<<<<< HEAD
        .size = 0x86,
        .y_offset = 9,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CASCOON] =
    {
<<<<<<< HEAD
        .size = 0x74,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_DUSTOX] =
    {
<<<<<<< HEAD
        .size = 0x86,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LOTAD] =
    {
<<<<<<< HEAD
        .size = 0x65,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LOMBRE] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 8,
    },
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TREECKO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_GROVYLE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SCEPTILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TORCHIC] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_COMBUSKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BLAZIKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUDKIP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_MARSHTOMP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SWAMPERT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_POOCHYENA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_MIGHTYENA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ZIGZAGOON] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_LINOONE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_WURMPLE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_SILCOON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 17,
    },
    [SPECIES_BEAUTIFLY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CASCOON] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_DUSTOX] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 15,
    },
    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEDOT] =
    {
<<<<<<< HEAD
        .size = 0x46,
        .y_offset = 12,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = 0x56,
        .y_offset = 7,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = 0x88,
        .y_offset = 7,
    },
    [SPECIES_NINCADA] =
    {
        .size = 0x74,
        .y_offset = 16,
    },
    [SPECIES_NINJASK] =
    {
        .size = 0x86,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 16,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_NINCADA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_NINJASK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SHEDINJA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_TAILLOW] =
    {
<<<<<<< HEAD
        .size = 0x64,
        .y_offset = 11,
    },
    [SPECIES_SWELLOW] =
    {
        .size = 0x87,
        .y_offset = 5,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = 0x54,
        .y_offset = 14,
    },
    [SPECIES_BRELOOM] =
    {
        .size = 0x77,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_SWELLOW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_BRELOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SPINDA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 8,
    },
    [SPECIES_WINGULL] =
    {
<<<<<<< HEAD
        .size = 0x84,
        .y_offset = 11,
    },
    [SPECIES_PELIPPER] =
    {
        .size = 0x77,
        .y_offset = 2,
    },
    [SPECIES_SURSKIT] =
    {
        .size = 0x65,
        .y_offset = 8,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = 0x88,
        .y_offset = 4,
    },
    [SPECIES_WAILMER] =
    {
        .size = 0x75,
        .y_offset = 10,
    },
    [SPECIES_WAILORD] =
    {
        .size = 0x87,
        .y_offset = 4,
    },
    [SPECIES_SKITTY] =
    {
        .size = 0x66,
        .y_offset = 12,
    },
    [SPECIES_DELCATTY] =
    {
        .size = 0x66,
        .y_offset = 4,
    },
    [SPECIES_KECLEON] =
    {
        .size = 0x67,
        .y_offset = 5,
    },
    [SPECIES_BALTOY] =
    {
        .size = 0x55,
        .y_offset = 8,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = 0x78,
        .y_offset = 3,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = 0x56,
        .y_offset = 10,
    },
    [SPECIES_TORKOAL] =
    {
        .size = 0x88,
        .y_offset = 3,
    },
    [SPECIES_SABLEYE] =
    {
        .size = 0x66,
        .y_offset = 10,
    },
    [SPECIES_BARBOACH] =
    {
        .size = 0x46,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 24,
    },
    [SPECIES_PELIPPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SURSKIT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_WAILMER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_WAILORD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_SKITTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DELCATTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_KECLEON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_BALTOY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 6,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SABLEYE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_BARBOACH] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_WHISCASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_LUVDISC] =
    {
<<<<<<< HEAD
        .size = 0x46,
        .y_offset = 14,
    },
    [SPECIES_CORPHISH] =
    {
        .size = 0x66,
        .y_offset = 8,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = 0x88,
        .y_offset = 4,
    },
    [SPECIES_FEEBAS] =
    {
        .size = 0x46,
        .y_offset = 10,
    },
    [SPECIES_MILOTIC] =
    {
        .size = 0x88,
        .y_offset = 2,
=======
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 24,
    },
    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_FEEBAS] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_MILOTIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CARVANHA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SHARPEDO] =
    {
<<<<<<< HEAD
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = 0x54,
        .y_offset = 12,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = 0x86,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 12,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_MAKUHITA] =
    {
<<<<<<< HEAD
        .size = 0x65,
        .y_offset = 8,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = 0x64,
        .y_offset = 14,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = 0x67,
        .y_offset = 2,
    },
    [SPECIES_NUMEL] =
    {
        .size = 0x65,
        .y_offset = 9,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = 0x87,
        .y_offset = 6,
    },
    [SPECIES_SPHEAL] =
    {
        .size = 0x65,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_NUMEL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 9,
    },
    [SPECIES_SPHEAL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SEALEO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WALREIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CACNEA] =
    {
<<<<<<< HEAD
        .size = 0x74,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNORUNT] =
    {
<<<<<<< HEAD
        .size = 0x56,
        .y_offset = 12,
    },
    [SPECIES_GLALIE] =
    {
        .size = 0x76,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GLALIE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LUNATONE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SOLROCK] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_AZURILL] =
    {
        .size = 0x55,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_AZURILL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_GRUMPIG] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 2,
    },
    [SPECIES_PLUSLE] =
    {
        .size = 0x56,
        .y_offset = 11,
    },
    [SPECIES_MINUN] =
    {
        .size = 0x66,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PLUSLE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_MINUN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MAWILE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MEDITITE] =
    {
<<<<<<< HEAD
        .size = 0x65,
        .y_offset = 10,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = 0x68,
        .y_offset = 0,
    },
    [SPECIES_SWABLU] =
    {
        .size = 0x76,
        .y_offset = 14,
    },
    [SPECIES_ALTARIA] =
    {
        .size = 0x88,
        .y_offset = 1,
=======
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_SWABLU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 17,
    },
    [SPECIES_ALTARIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_WYNAUT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_DUSKULL] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 12,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = 0x77,
        .y_offset = 3,
    },
    [SPECIES_ROSELIA] =
    {
        .size = 0x76,
        .y_offset = 11,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = 0x74,
        .y_offset = 15,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = 0x78,
        .y_offset = 7,
    },
    [SPECIES_SLAKING] =
    {
        .size = 0x86,
        .y_offset = 7,
    },
    [SPECIES_GULPIN] =
    {
        .size = 0x55,
        .y_offset = 15,
    },
    [SPECIES_SWALOT] =
    {
        .size = 0x66,
        .y_offset = 5,
=======
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ROSELIA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SLAKING] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_GULPIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 18,
    },
    [SPECIES_SWALOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WHISMUR] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_EXPLOUD] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = 0x55,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_HUNTAIL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_GOREBYSS] =
    {
<<<<<<< HEAD
        .size = 0x86,
        .y_offset = 6,
    },
    [SPECIES_ABSOL] =
    {
        .size = 0x68,
        .y_offset = 2,
    },
    [SPECIES_SHUPPET] =
    {
        .size = 0x56,
        .y_offset = 13,
    },
    [SPECIES_BANETTE] =
    {
        .size = 0x55,
        .y_offset = 7,
    },
    [SPECIES_SEVIPER] =
    {
        .size = 0x77,
        .y_offset = 6,
=======
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUPPET] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_BANETTE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_RELICANTH] =
    {
<<<<<<< HEAD
        .size = 0x77,
        .y_offset = 10,
    },
    [SPECIES_ARON] =
    {
        .size = 0x43,
        .y_offset = 14,
    },
    [SPECIES_LAIRON] =
    {
        .size = 0x75,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 11,
    },
    [SPECIES_ARON] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_LAIRON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_AGGRON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CASTFORM] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_VOLBEAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ILLUMISE] =
    {
<<<<<<< HEAD
        .size = 0x56,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_LILEEP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_CRADILY] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ANORITH] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 7,
    },
    [SPECIES_ARMALDO] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_RALTS] =
    {
        .size = 0x35,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ARMALDO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_RALTS] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_KIRLIA] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR] =
    {
<<<<<<< HEAD
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_BAGON] =
    {
        .size = 0x56,
        .y_offset = 9,
=======
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_BAGON] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SHELGON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SALAMENCE] =
    {
<<<<<<< HEAD
        .size = 0x87,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_BELDUM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_METANG] =
    {
<<<<<<< HEAD
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_METAGROSS] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_REGIROCK] =
    {
        .size = 0x78,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_METAGROSS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_REGIROCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_REGICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_REGISTEEL] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 5,
    },
    [SPECIES_KYOGRE] =
    {
        .size = 0x87,
        .y_offset = 0,
    },
    [SPECIES_GROUDON] =
    {
        .size = 0x88,
        .y_offset = 0,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_KYOGRE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GROUDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_RAYQUAZA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 8,
    },
    [SPECIES_LATIOS] =
    {
        .size = 0x88,
        .y_offset = 0,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_LATIOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },
    [SPECIES_DEOXYS] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = 0x37,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 6,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TURTWIG] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 11,
=======
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 20,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_GROTLE] =
    {
<<<<<<< HEAD
        .size = 0x56,
        .y_offset = 7,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_TORTERRA] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CHIMCHAR] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_MONFERNO] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_INFERNAPE] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 1,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_PIPLUP] =
    {
<<<<<<< HEAD
        .size = 0x65,
=======
        .size = MON_COORDS_SIZE(24, 40),
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
        .y_offset = 14,
    },
    [SPECIES_PRINPLUP] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 7,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_EMPOLEON] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 0,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_STARLY] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_STARAVIA] =
    {
<<<<<<< HEAD
        .size = 0x54,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_STARAPTOR] =
    {
<<<<<<< HEAD
        .size = 0x76,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_BIDOOF] =
    {
<<<<<<< HEAD
        .size = 0x54,
        .y_offset = 12,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_BIBAREL] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_KRICKETOT] =
    {
        .size = 0x86,
        .y_offset = 11,
    },
    [SPECIES_KRICKETUNE] =
    {
        .size = 0x65,
        .y_offset = 7,
    },
    [SPECIES_SHINX] =
    {
        .size = 0x67,
        .y_offset = 13,
    },
    [SPECIES_LUXIO] =
    {
        .size = 0x88,
        .y_offset = 10,
    },
    [SPECIES_LUXRAY] =
    {
<<<<<<< HEAD
        .size = 0x44,
        .y_offset = 2,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_BUDEW] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 14,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_ROSERADE] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 7,
=======
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CRANIDOS] =
    {
<<<<<<< HEAD
        .size = 0x78,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_RAMPARDOS] =
    {
        .size = 0x65,
        .y_offset = 3,
    },
    [SPECIES_SHIELDON] =
    {
        .size = 0x88,
        .y_offset = 15,
    },
    [SPECIES_BASTIODON] =
    {
        .size = 0x67,
        .y_offset = 6,
    },
    [SPECIES_BURMY] =
    {
        .size = 0x67,
        .y_offset = 13,
    },
    [SPECIES_WORMADAM] =
    {
        .size = 0x55,
        .y_offset = 10,
    },
    [SPECIES_MOTHIM] =
    {
        .size = 0x76,
        .y_offset = 12,
    },
    [SPECIES_COMBEE] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_VESPIQUEN] =
    {
        .size = 0x66,
        .y_offset = 4,
    },
    [SPECIES_PACHIRISU] =
    {
        .size = 0x78,
=======
        .size = MON_COORDS_SIZE(32, 40),
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
        .y_offset = 12,
    },
    [SPECIES_BUIZEL] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 10,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 18,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_FLOATZEL] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 3,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CHERUBI] =
    {
<<<<<<< HEAD
        .size = 0x78,
        .y_offset = 16,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_CHERRIM] =
    {
<<<<<<< HEAD
        .size = 0x55,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_SHELLOS] =
    {
<<<<<<< HEAD
        .size = 0x66,
        .y_offset = 13,
=======
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 21,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_GASTRODON] =
    {
<<<<<<< HEAD
        .size = 0x65,
        .y_offset = 8,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_AMBIPOM] =
    {
<<<<<<< HEAD
        .size = 0x88,
        .y_offset = 1,
=======
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
    },
    [SPECIES_DRIFLOON] =
    {
<<<<<<< HEAD
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_DRIFBLIM] =
    {
        .size = 0x67,
        .y_offset = 7,
    },
    [SPECIES_BUNEARY] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_LOPUNNY] =
    {
        .size = 0x88,
        .y_offset = 4,
    },
    [SPECIES_MISMAGIUS] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_HONCHKROW] =
    {
        .size = 0x66,
        .y_offset = 6,
    },
    [SPECIES_GLAMEOW] =
    {
        .size = 0x77,
        .y_offset = 8,
    },
    [SPECIES_PURUGLY] =
    {
        .size = 0x55,
        .y_offset = 5,
    },
    [SPECIES_CHINGLING] =
    {
        .size = 0x86,
=======
        .size = MON_COORDS_SIZE(24, 40),
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
        .y_offset = 15,
    },
    [SPECIES_STUNKY] =
    {
<<<<<<< HEAD
        .size = 0x66,
=======
        .size = MON_COORDS_SIZE(24, 40),
>>>>>>> 384bdaee183e9368852818f734a83fd0e4e02075
        .y_offset = 13,
    },
    [SPECIES_SKUNTANK] =
    {
        .size = 0x88,
        .y_offset = 7,
    },
    [SPECIES_BRONZOR] =
    {
        .size = 0x54,
        .y_offset = 14,
    },
    [SPECIES_BRONZONG] =
    {
        .size = 0x75,
        .y_offset = 6,
    },
    [SPECIES_BONSLY] =
    {
        .size = 0x55,
        .y_offset = 9,
    },
    [SPECIES_MIME_JR] =
    {
        .size = 0x77,
        .y_offset = 9,
    },
    [SPECIES_HAPPINY] =
    {
        .size = 0x56,
        .y_offset = 12,
    },
    [SPECIES_CHATOT] =
    {
        .size = 0x78,
        .y_offset = 11,
    },
    [SPECIES_SPIRITOMB] =
    {
        .size = 0x65,
        .y_offset = 6,
    },
    [SPECIES_GIBLE] =
    {
        .size = 0x77,
        .y_offset = 9,
    },
    [SPECIES_GABITE] =
    {
        .size = 0x66,
        .y_offset = 2,
    },
    [SPECIES_GARCHOMP] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_MUNCHLAX] =
    {
        .size = 0x74,
        .y_offset = 10,
    },
    [SPECIES_RIOLU] =
    {
        .size = 0x76,
        .y_offset = 10,
    },
    [SPECIES_LUCARIO] =
    {
        .size = 0x76,
        .y_offset = 7,
    },
    [SPECIES_HIPPOPOTAS] =
    {
        .size = 0x66,
        .y_offset = 12,
    },
    [SPECIES_HIPPOWDON] =
    {
        .size = 0x77,
        .y_offset = 6,
    },
    [SPECIES_SKORUPI] =
    {
        .size = 0x87,
        .y_offset = 11,
    },
    [SPECIES_DRAPION] =
    {
        .size = 0x56,
        .y_offset = 8,
    },
    [SPECIES_CROAGUNK] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_TOXICROAK] =
    {
        .size = 0x88,
        .y_offset = 5,
    },
    [SPECIES_CARNIVINE] =
    {
        .size = 0x65,
        .y_offset = 10,
    },
    [SPECIES_FINNEON] =
    {
        .size = 0x66,
        .y_offset = 14,
    },
    [SPECIES_LUMINEON] =
    {
        .size = 0x77,
        .y_offset = 6,
    },
    [SPECIES_MANTYKE] =
    {
        .size = 0x46,
        .y_offset = 12,
    },
    [SPECIES_SNOVER] =
    {
        .size = 0x87,
        .y_offset = 10,
    },
    [SPECIES_ABOMASNOW] =
    {
        .size = 0x54,
        .y_offset = 0,
    },
    [SPECIES_WEAVILE] =
    {
        .size = 0x87,
        .y_offset = 4,
    },
    [SPECIES_MAGNEZONE] =
    {
        .size = 0x77,
        .y_offset = 4,
    },
    [SPECIES_LICKILICKY] =
    {
        .size = 0x66,
        .y_offset = 2,
    },
    [SPECIES_RHYPERIOR] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_TANGROWTH] =
    {
        .size = 0x66,
        .y_offset = 2,
    },
    [SPECIES_ELECTIVIRE] =
    {
        .size = 0x86,
        .y_offset = 0,
    },
    [SPECIES_MAGMORTAR] =
    {
        .size = 0x43,
        .y_offset = 0,
    },
    [SPECIES_TOGEKISS] =
    {
        .size = 0x76,
        .y_offset = 10,
    },
    [SPECIES_YANMEGA] =
    {
        .size = 0x66,
        .y_offset = 5,
    },
    [SPECIES_LEAFEON] =
    {
        .size = 0x57,
        .y_offset = 9,
    },
    [SPECIES_GLACEON] =
    {
        .size = 0x88,
        .y_offset = 10,
    },
    [SPECIES_GLISCOR] =
    {
        .size = 0x76,
        .y_offset = 7,
    },
    [SPECIES_MAMOSWINE] =
    {
        .size = 0x87,
        .y_offset = 4,
    },
    [SPECIES_PORYGON_Z] =
    {
        .size = 0x65,
        .y_offset = 6,
    },
    [SPECIES_GALLADE] =
    {
        .size = 0x87,
        .y_offset = 1,
    },
    [SPECIES_PROBOPASS] =
    {
        .size = 0x55,
        .y_offset = 4,
    },
    [SPECIES_DUSKNOIR] =
    {
        .size = 0x87,
        .y_offset = 4,
    },
    [SPECIES_FROSLASS] =
    {
        .size = 0x77,
        .y_offset = 8,
    },
    [SPECIES_ROTOM] =
    {
        .size = 0x77,
        .y_offset = 11,
    },
    [SPECIES_UXIE] =
    {
        .size = 0x77,
        .y_offset = 6,
    },
    [SPECIES_MESPRIT] =
    {
        .size = 0x78,
        .y_offset = 4,
    },
    [SPECIES_AZELF] =
    {
        .size = 0x77,
        .y_offset = 0,
    },
    [SPECIES_DIALGA] =
    {
        .size = 0x77,
        .y_offset = 0,
    },
    [SPECIES_PALKIA] =
    {
        .size = 0x65,
        .y_offset = 0,
    },
    [SPECIES_HEATRAN] =
    {
        .size = 0x88,
        .y_offset = 5,
    },
    [SPECIES_REGIGIGAS] =
    {
        .size = 0x44,
        .y_offset = 4,
    },
    [SPECIES_GIRATINA] =
    {
        .size = 0x55,
        .y_offset = 0,
    },
    [SPECIES_CRESSELIA] =
    {
        .size = 0x87,
        .y_offset = 2,
    },
    [SPECIES_PHIONE] =
    {
        .size = 0x88,
        .y_offset = 9,
    },
    [SPECIES_MANAPHY] =
    {
        .size = 0x55,
        .y_offset = 13,
    },
    [SPECIES_DARKRAI] =
    {
        .size = 0x76,
        .y_offset = 3,
    },
    [SPECIES_SHAYMIN] =
    {
        .size = 0x87,
        .y_offset = 16,
    },
    [SPECIES_ARCEUS] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_VICTINI] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_SNIVY] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_SERVINE] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_SERPERIOR] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_TEPIG] =
    {
        .size = 0x45,
        .y_offset = 15,
    },
    [SPECIES_PIGNITE] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_EMBOAR] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_OSHAWOTT] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_DEWOTT] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_SAMUROTT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_PATRAT] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_WATCHOG] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_LILLIPUP] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_HERDIER] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_STOUTLAND] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_PURRLOIN] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_LIEPARD] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_PANSAGE] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_SIMISAGE] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_PANSEAR] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_SIMISEAR] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_PANPOUR] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_SIMIPOUR] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_MUNNA] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_MUSHARNA] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_PIDOVE] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_TRANQUILL] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_UNFEZANT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_BLITZLE] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_ZEBSTRIKA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ROGGENROLA] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_BOLDORE] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_GIGALITH] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_WOOBAT] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_SWOOBAT] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_DRILBUR] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_EXCADRILL] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_AUDINO] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_TIMBURR] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_GURDURR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_CONKELDURR] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_TYMPOLE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_PALPITOAD] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_SEISMITOAD] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_THROH] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_SAWK] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_SEWADDLE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_SWADLOON] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_LEAVANNY] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VENIPEDE] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_WHIRLIPEDE] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_SCOLIPEDE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_COTTONEE] =
    {
        .size = 0x45,
        .y_offset = 18,
    },
    [SPECIES_WHIMSICOTT] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_PETILIL] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_LILLIGANT] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_BASCULIN] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_SANDILE] =
    {
        .size = 0x45,
        .y_offset = 18,
    },
    [SPECIES_KROKOROK] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_KROOKODILE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_DARUMAKA] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_DARMANITAN] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_MARACTUS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_DWEBBLE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_CRUSTLE] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_SCRAGGY] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_SCRAFTY] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_SIGILYPH] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_YAMASK] =
    {
        .size = 0x45,
        .y_offset = 15,
    },
    [SPECIES_COFAGRIGUS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_TIRTOUGA] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_CARRACOSTA] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_ARCHEN] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_ARCHEOPS] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_TRUBBISH] =
    {
        .size = 0x45,
        .y_offset = 15,
    },
    [SPECIES_GARBODOR] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_ZORUA] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_ZOROARK] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_MINCCINO] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_CINCCINO] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_GOTHITA] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_GOTHORITA] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_GOTHITELLE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SOLOSIS] =
    {
        .size = 0x45,
        .y_offset = 17,
    },
    [SPECIES_DUOSION] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_REUNICLUS] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_DUCKLETT] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_SWANNA] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_VANILLITE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_VANILLISH] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_VANILLUXE] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_DEERLING] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_SAWSBUCK] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_EMOLGA] =
    {
        .size = 0x45,
        .y_offset = 17,
    },
    [SPECIES_KARRABLAST] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_ESCAVALIER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FOONGUS] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_AMOONGUSS] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_FRILLISH] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_JELLICENT] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_ALOMOMOLA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_JOLTIK] =
    {
        .size = 0x45,
        .y_offset = 17,
    },
    [SPECIES_GALVANTULA] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_FERROSEED] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_FERROTHORN] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_KLINK] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_KLANG] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_KLINKLANG] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_TYNAMO] =
    {
        .size = 0x45,
        .y_offset = 22,
    },
    [SPECIES_EELEKTRIK] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_EELEKTROSS] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_ELGYEM] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_BEHEEYEM] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_LITWICK] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_LAMPENT] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_CHANDELURE] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_AXEW] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_FRAXURE] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_HAXORUS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_CUBCHOO] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_BEARTIC] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_CRYOGONAL] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SHELMET] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_ACCELGOR] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_STUNFISK] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MIENFOO] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_MIENSHAO] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_DRUDDIGON] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_GOLETT] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_GOLURK] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_PAWNIARD] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_BISHARP] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_BOUFFALANT] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_RUFFLET] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_BRAVIARY] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_VULLABY] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_MANDIBUZZ] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_HEATMOR] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_DURANT] =
    {
        .size = 0x45,
        .y_offset = 17,
    },
    [SPECIES_DEINO] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_ZWEILOUS] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_HYDREIGON] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_LARVESTA] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_VOLCARONA] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_COBALION] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_TERRAKION] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_VIRIZION] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_TORNADUS] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_THUNDURUS] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_RESHIRAM] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_ZEKROM] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_LANDORUS] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_KYUREM] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_KELDEO] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_MELOETTA] =
    {
        .size = 0x45,
        .y_offset = 9,
    },
    [SPECIES_GENESECT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Gen 6 and 7
    [SPECIES_CHESPIN] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_QUILLADIN] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_CHESNAUGHT] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_FENNEKIN] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_BRAIXEN] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_DELPHOX] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FROAKIE] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_FROGADIER] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_GRENINJA] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_BUNNELBY] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_DIGGERSBY] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_FLETCHLING] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_FLETCHINDER] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_TALONFLAME] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_SCATTERBUG] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_SPEWPA] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_VIVILLON] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_LITLEO] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_PYROAR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FLABEBE] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_FLOETTE] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FLORGES] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SKIDDO] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_GOGOAT] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_PANCHAM] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_PANGORO] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FURFROU] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_ESPURR] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_MEOWSTIC] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_HONEDGE] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_DOUBLADE] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_AEGISLASH] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SPRITZEE] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_AROMATISSE] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_SWIRLIX] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_SLURPUFF] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_INKAY] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MALAMAR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_BINACLE] =
    {
        .size = 0x45,
        .y_offset = 9,
    },
    [SPECIES_BARBARACLE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SKRELP] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_DRAGALGE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_CLAUNCHER] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_CLAWITZER] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_HELIOPTILE] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_HELIOLISK] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_TYRUNT] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_TYRANTRUM] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_AMAURA] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_AURORUS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SYLVEON] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_HAWLUCHA] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_DEDENNE] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_CARBINK] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_GOOMY] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_SLIGGOO] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_GOODRA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_KLEFKI] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_PHANTUMP] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_TREVENANT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_PUMPKABOO] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_GOURGEIST] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_BERGMITE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_AVALUGG] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_NOIBAT] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_NOIVERN] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_XERNEAS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_YVELTAL] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_DIANCIE] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_HOOPA] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_VOLCANION] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ROWLET] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_DARTRIX] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_DECIDUEYE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_LITTEN] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_TORRACAT] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_INCINEROAR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_POPPLIO] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_BRIONNE] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_PRIMARINA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_PIKIPEK] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_TRUMBEAK] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_TOUCANNON] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_YUNGOOS] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_GUMSHOOS] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_GRUBBIN] =
    {
        .size = 0x45,
        .y_offset = 17,
    },
    [SPECIES_CHARJABUG] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_VIKAVOLT] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_CRABRAWLER] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_CRABOMINABLE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ORICORIO] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_CUTIEFLY] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_RIBOMBEE] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_ROCKRUFF] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_LYCANROC] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_WISHIWASHI] =
    {
        .size = 0x45,
        .y_offset = 15,
    },
    [SPECIES_MAREANIE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_TOXAPEX] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_MUDBRAY] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_MUDSDALE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_DEWPIDER] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_ARAQUANID] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_FOMANTIS] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_LURANTIS] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_MORELULL] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_SHIINOTIC] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_SALANDIT] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_SALAZZLE] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_STUFFUL] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_BEWEAR] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_BOUNSWEET] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_STEENEE] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_TSAREENA] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_COMFEY] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_ORANGURU] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    [SPECIES_PASSIMIAN] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_WIMPOD] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_GOLISOPOD] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SANDYGAST] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_PALOSSAND] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_PYUKUMUKU] =
    {
        .size = 0x45,
        .y_offset = 15,
    },
    [SPECIES_TYPE_NULL] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_SILVALLY] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_MINIOR] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_KOMALA] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_TURTONATOR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_TOGEDEMARU] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_MIMIKYU] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_BRUXISH] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_DRAMPA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_DHELMISE] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_JANGMO_O] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_HAKAMO_O] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_KOMMO_O] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_TAPU_KOKO] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_TAPU_LELE] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_TAPU_BULU] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_TAPU_FINI] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_COSMOG] =
    {
        .size = 0x45,
        .y_offset = 10,
    },
    [SPECIES_COSMOEM] =
    {
        .size = 0x45,
        .y_offset = 9,
    },
    [SPECIES_SOLGALEO] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_LUNALA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_NIHILEGO] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_BUZZWOLE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_PHEROMOSA] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_XURKITREE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_CELESTEELA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_KARTANA] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_GUZZLORD] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_NECROZMA] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_MAGEARNA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_MARSHADOW] =
    {
        .size = 0x45,
        .y_offset = 9,
    },
    [SPECIES_POIPOLE] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_NAGANADEL] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_STAKATAKA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_BLACEPHALON] =
    {
        .size = 0x45,
        .y_offset = 1,
    },
    [SPECIES_ZERAORA] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_MELTAN] =
    {
        .size = 0x45,
        .y_offset = 8,
    },
    [SPECIES_MELMETAL] =
    {
        .size = 0x86,
        .y_offset = 4,
    },
    [SPECIES_GROOKEY] =
    {
        .size = 0x56,
        .y_offset = 12,
    },
    [SPECIES_THWACKEY] =
    {
        .size = 0x67,
        .y_offset = 7,
    },
    [SPECIES_RILLABOOM] =
    {
        .size = 0x86,
        .y_offset = 3,
    },
    [SPECIES_SCORBUNNY] =
    {
        .size = 0x57,
        .y_offset = 8,
    },
    [SPECIES_RABOOT] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_CINDERACE] =
    {
        .size = 0x58,
        .y_offset = 0,
    },
    [SPECIES_SOBBLE] =
    {
        .size = 0x57,
        .y_offset = 11,
    },
    [SPECIES_DRIZZILE] =
    {
        .size = 0x56,
        .y_offset = 9,
    },
    [SPECIES_INTELEON] =
    {
        .size = 0x86,
        .y_offset = 1,
    },
    [SPECIES_SKWOVET] =
    {
        .size = 0x56,
        .y_offset = 9,
    },
    [SPECIES_GREEDENT] =
    {
        .size = 0x78,
        .y_offset = 4,
    },
    [SPECIES_ROOKIDEE] =
    {
        .size = 0x55,
        .y_offset = 16,
    },
    [SPECIES_CORVISQUIRE] =
    {
        .size = 0x87,
        .y_offset = 5,
    },
    [SPECIES_CORVIKNIGHT] =
    {
        .size = 0x78,
        .y_offset = 2,
    },
    [SPECIES_BLIPBUG] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_DOTTLER] =
    {
        .size = 0x65,
        .y_offset = 13,
    },
    [SPECIES_ORBEETLE] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_NICKIT] =
    {
        .size = 0x76,
        .y_offset = 9,
    },
    [SPECIES_THIEVUL] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_GOSSIFLEUR] =
    {
        .size = 0x67,
        .y_offset = 11,
    },
    [SPECIES_ELDEGOSS] =
    {
        .size = 0x67,
        .y_offset = 4,
    },
    [SPECIES_WOOLOO] =
    {
        .size = 0x55,
        .y_offset = 12,
    },
    [SPECIES_DUBWOOL] =
    {
        .size = 0x67,
        .y_offset = 5,
    },
    [SPECIES_CHEWTLE] =
    {
        .size = 0x46,
        .y_offset = 13,
    },
    [SPECIES_DREDNAW] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_YAMPER] =
    {
        .size = 0x56,
        .y_offset = 10,
    },
    [SPECIES_BOLTUND] =
    {
        .size = 0x67,
        .y_offset = 5,
    },
    [SPECIES_ROLYCOLY] =
    {
        .size = 0x55,
        .y_offset = 16,
    },
    [SPECIES_CARKOL] =
    {
        .size = 0x67,
        .y_offset = 8,
    },
    [SPECIES_COALOSSAL] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_APPLIN] =
    {
        .size = 0x45,
        .y_offset = 16,
    },
    [SPECIES_FLAPPLE] =
    {
        .size = 0x76,
        .y_offset = 9,
    },
    [SPECIES_APPLETUN] =
    {
        .size = 0x87,
        .y_offset = 5,
    },
    [SPECIES_SILICOBRA] =
    {
        .size = 0x55,
        .y_offset = 12,
    },
    [SPECIES_SANDACONDA] =
    {
        .size = 0x85,
        .y_offset = 12,
    },
    [SPECIES_CRAMORANT] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_ARROKUDA] =
    {
        .size = 0x74,
        .y_offset = 17,
    },
    [SPECIES_BARRASKEWDA] =
    {
        .size = 0x76,
        .y_offset = 8,
    },
    [SPECIES_TOXEL] =
    {
        .size = 0x56,
        .y_offset = 11,
    },
    [SPECIES_TOXTRICITY] =
    {
        .size = 0x68,
        .y_offset = 1,
    },
    [SPECIES_SIZZLIPEDE] =
    {
        .size = 0x64,
        .y_offset = 17,
    },
    [SPECIES_CENTISKORCH] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_CLOBBOPUS] =
    {
        .size = 0x65,
        .y_offset = 15,
    },
    [SPECIES_GRAPPLOCT] =
    {
        .size = 0x67,
        .y_offset = 5,
    },
    [SPECIES_SINISTEA] =
    {
        .size = 0x54,
        .y_offset = 17,
    },
    [SPECIES_POLTEAGEIST] =
    {
        .size = 0x66,
        .y_offset = 11,
    },
    [SPECIES_HATENNA] =
    {
        .size = 0x66,
        .y_offset = 12,
    },
    [SPECIES_HATTREM] =
    {
        .size = 0x76,
        .y_offset = 8,
    },
    [SPECIES_HATTERENE] =
    {
        .size = 0x68,
        .y_offset = 0,
    },
    [SPECIES_IMPIDIMP] =
    {
        .size = 0x65,
        .y_offset = 12,
    },
    [SPECIES_MORGREM] =
    {
        .size = 0x67,
        .y_offset = 6,
    },
    [SPECIES_GRIMMSNARL] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_OBSTAGOON] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_PERRSERKER] =
    {
        .size = 0x68,
        .y_offset = 2,
    },
    [SPECIES_CURSOLA] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_SIRFETCHD] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_MR_RIME] =
    {
        .size = 0x78,
        .y_offset = 4,
    },
    [SPECIES_RUNERIGUS] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_MILCERY] =
    {
        .size = 0x55,
        .y_offset = 15,
    },
    [SPECIES_ALCREMIE] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_FALINKS] =
    {
        .size = 0x76,
        .y_offset = 8,
    },
    [SPECIES_PINCURCHIN] =
    {
        .size = 0x55,
        .y_offset = 15,
    },
    [SPECIES_SNOM] =
    {
        .size = 0x54,
        .y_offset = 20,
    },
    [SPECIES_FROSMOTH] =
    {
        .size = 0x87,
        .y_offset = 5,
    },
    [SPECIES_STONJOURNER] =
    {
        .size = 0x68,
        .y_offset = 2,
    },
    [SPECIES_EISCUE] =
    {
        .size = 0x58,
        .y_offset = 0,
    },
    [SPECIES_INDEEDEE] =
    {
        .size = 0x57,
        .y_offset = 9,
    },
    [SPECIES_MORPEKO] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_CUFANT] =
    {
        .size = 0x76,
        .y_offset = 11,
    },
    [SPECIES_COPPERAJAH] =
    {
        .size = 0x87,
        .y_offset = 5,
    },
    [SPECIES_DRACOZOLT] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_ARCTOZOLT] =
    {
        .size = 0x78,
        .y_offset = 1,
    },
    [SPECIES_DRACOVISH] =
    {
        .size = 0x68,
        .y_offset = 0,
    },
    [SPECIES_ARCTOVISH] =
    {
        .size = 0x88,
        .y_offset = 3,
    },
    [SPECIES_DURALUDON] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_DREEPY] =
    {
        .size = 0x65,
        .y_offset = 14,
    },
    [SPECIES_DRAKLOAK] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_DRAGAPULT] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_ZACIAN] =
    {
        .size = 0x88,
        .y_offset = 3,
    },
    [SPECIES_ZAMAZENTA] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_ETERNATUS] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_KUBFU] =
    {
        .size = 0x56,
        .y_offset = 8,
    },
    [SPECIES_URSHIFU] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_ZARUDE] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    [SPECIES_REGIELEKI] =
    {
        .size = 0x86,
        .y_offset = 4,
    },
    [SPECIES_REGIDRAGO] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_GLASTRIER] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_SPECTRIER] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_CALYREX] =
    {
        .size = 0x68,
        .y_offset = 2,
    },
    // Megas
    [SPECIES_VENUSAUR_MEGA] =
    {
        .size = 0,
        .y_offset = 6,
    },
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .size = 0,
        .y_offset = 1,
    },
    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_BLASTOISE_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_BEEDRILL_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_PIDGEOT_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_ALAKAZAM_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_SLOWBRO_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_GENGAR_MEGA] =
    {
        .size = 0,
        .y_offset = 8,
    },
    [SPECIES_KANGASKHAN_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_PINSIR_MEGA] =
    {
        .size = 0,
        .y_offset = 4,
    },
    [SPECIES_GYARADOS_MEGA] =
    {
        .size = 0,
        .y_offset = 1,
    },
    [SPECIES_AERODACTYL_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_MEWTWO_MEGA_X] =
    {
        .size = 0,
        .y_offset = 1,
    },
    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_AMPHAROS_MEGA] =
    {
        .size = 0,
        .y_offset = 2,
    },
    [SPECIES_STEELIX_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_SCIZOR_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_HERACROSS_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_TYRANITAR_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_SCEPTILE_MEGA] =
    {
        .size = 0,
        .y_offset = 2,
    },
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .size = 0,
        .y_offset = 1,
    },
    [SPECIES_SWAMPERT_MEGA] =
    {
        .size = 0,
        .y_offset = 4,
    },
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_SABLEYE_MEGA] =
    {
        .size = 0,
        .y_offset = 7,
    },
    [SPECIES_MAWILE_MEGA] =
    {
        .size = 0,
        .y_offset = 5,
    },
    [SPECIES_AGGRON_MEGA] =
    {
        .size = 0,
        .y_offset = 2,
    },
    [SPECIES_MEDICHAM_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_MANECTRIC_MEGA] =
    {
        .size = 0,
        .y_offset = 3,
    },
    [SPECIES_SHARPEDO_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_CAMERUPT_MEGA] =
    {
        .size = 0,
        .y_offset = 6,
    },
    [SPECIES_ALTARIA_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_BANETTE_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_ABSOL_MEGA] =
    {
        .size = 0,
        .y_offset = 5,
    },
    [SPECIES_GLALIE_MEGA] =
    {
        .size = 0,
        .y_offset = 4,
    },
    [SPECIES_SALAMENCE_MEGA] =
    {
        .size = 0,
        .y_offset = 5,
    },
    [SPECIES_METAGROSS_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_LATIAS_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_LATIOS_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_LOPUNNY_MEGA] =
    {
        .size = 0,
        .y_offset = 2,
    },
    [SPECIES_GARCHOMP_MEGA] =
    {
        .size = 0,
        .y_offset = 3,
    },
    [SPECIES_LUCARIO_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_GALLADE_MEGA] =
    {
        .size = 0,
        .y_offset = 1,
    },
    [SPECIES_AUDINO_MEGA] =
    {
        .size = 0,
        .y_offset = 5,
    },
    [SPECIES_DIANCIE_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    // Special Mega + Primals
    [SPECIES_RAYQUAZA_MEGA] =
    {
        .size = 0,
        .y_offset = 0,
    },
    [SPECIES_KYOGRE_PRIMAL] =
    {
        .size = 0x87,
        .y_offset = 0,
    },
    [SPECIES_GROUDON_PRIMAL] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    // Alolan Forms
    [SPECIES_RATTATA_ALOLAN] =
    {
        .size = 0x44,
        .y_offset = 13,
    },
    [SPECIES_RATICATE_ALOLAN] =
    {
        .size = 0x66,
        .y_offset = 6,
    },
    [SPECIES_RAICHU_ALOLAN] =
    {
        .size = 0x67,
        .y_offset = 3,
    },
    [SPECIES_SANDSHREW_ALOLAN] =
    {
        .size = 0x55,
        .y_offset = 11,
    },
    [SPECIES_SANDSLASH_ALOLAN] =
    {
        .size = 0x76,
        .y_offset = 6,
    },
    [SPECIES_VULPIX_ALOLAN] =
    {
        .size = 0x65,
        .y_offset = 11,
    },
    [SPECIES_NINETALES_ALOLAN] =
    {
        .size = 0x88,
        .y_offset = 3,
    },
    [SPECIES_DIGLETT_ALOLAN] =
    {
        .size = 0x54,
        .y_offset = 17,
    },
    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .size = 0x75,
        .y_offset = 11,
    },
    [SPECIES_MEOWTH_ALOLAN] =
    {
        .size = 0x55,
        .y_offset = 10,
    },
    [SPECIES_PERSIAN_ALOLAN] =
    {
        .size = 0x77,
        .y_offset = 4,
    },
    [SPECIES_GEODUDE_ALOLAN] =
    {
        .size = 0x54,
        .y_offset = 19,
    },
    [SPECIES_GRAVELER_ALOLAN] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_GOLEM_ALOLAN] =
    {
        .size = 0x77,
        .y_offset = 6,
    },
    [SPECIES_GRIMER_ALOLAN] =
    {
        .size = 0x65,
        .y_offset = 9,
    },
    [SPECIES_MUK_ALOLAN] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_MAROWAK_ALOLAN] =
    {
        .size = 0x76,
        .y_offset = 8,
    },
    // Galarian Forms
    [SPECIES_MEOWTH_GALARIAN] =
    {
        .size = 0x66,
        .y_offset = 9,
    },
    [SPECIES_PONYTA_GALARIAN] =
    {
        .size = 0x87,
        .y_offset = 8,
    },
    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        .size = 0x74,
        .y_offset = 19,
    },
    [SPECIES_SLOWBRO_GALARIAN] =
    {
        .size = 0x87,
        .y_offset = 4,
    },
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        .size = 0x86,
        .y_offset = 9,
    },
    [SPECIES_WEEZING_GALARIAN] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_MR_MIME_GALARIAN] =
    {
        .size = 0x77,
        .y_offset = 7,
    },
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        .size = 0x68,
        .y_offset = 0,
    },
    [SPECIES_MOLTRES_GALARIAN] =
    {
        .size = 0x88,
        .y_offset = 1,
    },
    [SPECIES_SLOWKING_GALARIAN] =
    {
        .size = 0x68,
        .y_offset = 0,
    },
    [SPECIES_CORSOLA_GALARIAN] =
    {
        .size = 0x66,
        .y_offset = 11,
    },
    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        .size = 0x75,
        .y_offset = 13,
    },
    [SPECIES_LINOONE_GALARIAN] =
    {
        .size = 0x85,
        .y_offset = 13,
    },
    [SPECIES_DARUMAKA_GALARIAN] =
    {
        .size = 0x55,
        .y_offset = 15,
    },
    [SPECIES_DARMANITAN_GALARIAN] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    [SPECIES_YAMASK_GALARIAN] =
    {
        .size = 0x65,
        .y_offset = 13,
    },
    [SPECIES_STUNFISK_GALARIAN] =
    {
        .size = 0x65,
        .y_offset = 14,
    },
    // Misc Forms
    // Cosplay Pikachu
    [SPECIES_PIKACHU_COSPLAY] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_BELLE] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_POP_STAR] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_PH_D] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_LIBRE] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    // Cap Pikachu
    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        .size = 0x67,
        .y_offset = 9,
    },
    // Pichu
    [SPECIES_PICHU_SPIKY_EARED] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    // Unown
    [SPECIES_UNOWN_B] =
    {
        .size = 0x34,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_C] =
    {
        .size = 0x44,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_D] =
    {
        .size = 0x44,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_E] =
    {
        .size = 0x44,
        .y_offset = 17,
    },
    [SPECIES_UNOWN_F] =
    {
        .size = 0x44,
        .y_offset = 17,
    },
    [SPECIES_UNOWN_G] =
    {
        .size = 0x35,
        .y_offset = 14,
    },
    [SPECIES_UNOWN_H] =
    {
        .size = 0x44,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_I] =
    {
        .size = 0x34,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_J] =
    {
        .size = 0x34,
        .y_offset = 17,
    },
    [SPECIES_UNOWN_K] =
    {
        .size = 0x44,
        .y_offset = 17,
    },
    [SPECIES_UNOWN_L] =
    {
        .size = 0x34,
        .y_offset = 19,
    },
    [SPECIES_UNOWN_M] =
    {
        .size = 0x44,
        .y_offset = 19,
    },
    [SPECIES_UNOWN_N] =
    {
        .size = 0x43,
        .y_offset = 20,
    },
    [SPECIES_UNOWN_O] =
    {
        .size = 0x44,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_P] =
    {
        .size = 0x34,
        .y_offset = 19,
    },
    [SPECIES_UNOWN_Q] =
    {
        .size = 0x43,
        .y_offset = 21,
    },
    [SPECIES_UNOWN_R] =
    {
        .size = 0x34,
        .y_offset = 19,
    },
    [SPECIES_UNOWN_S] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    [SPECIES_UNOWN_T] =
    {
        .size = 0x34,
        .y_offset = 18,
    },
    [SPECIES_UNOWN_U] =
    {
        .size = 0x44,
        .y_offset = 18,
    },
    [SPECIES_UNOWN_V] =
    {
        .size = 0x44,
        .y_offset = 18,
    },
    [SPECIES_UNOWN_W] =
    {
        .size = 0x44,
        .y_offset = 19,
    },
    [SPECIES_UNOWN_X] =
    {
        .size = 0x33,
        .y_offset = 21,
    },
    [SPECIES_UNOWN_Y] =
    {
        .size = 0x34,
        .y_offset = 17,
    },
    [SPECIES_UNOWN_Z] =
    {
        .size = 0x34,
        .y_offset = 16,
    },
    [SPECIES_UNOWN_EMARK] =
    {
        .size = 0x35,
        .y_offset = 15,
    },
    [SPECIES_UNOWN_QMARK] =
    {
        .size = 0x35,
        .y_offset = 13,
    },
    // Castform
    [SPECIES_CASTFORM_SUNNY] =
    {
        .size = 0x34,
        .y_offset = 17,
    },
    [SPECIES_CASTFORM_RAINY] =
    {
        .size = 0x34,
        .y_offset = 17,
    },
    [SPECIES_CASTFORM_SNOWY] =
    {
        .size = 0x34,
        .y_offset = 17,
    },
    // Deoxys
    [SPECIES_DEOXYS_ATTACK] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_DEOXYS_DEFENSE] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_DEOXYS_SPEED] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    // Burmy
    [SPECIES_BURMY_SANDY_CLOAK] =
    {
        .size = 0x67,
        .y_offset = 13,
    },
    [SPECIES_BURMY_TRASH_CLOAK] =
    {
        .size = 0x67,
        .y_offset = 13,
    },
    // Wormadam
    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .size = 0x55,
        .y_offset = 10,
    },
    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .size = 0x55,
        .y_offset = 10,
    },
    // Cherrim
    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .size = 0x55,
        .y_offset = 8,
    },
    // Shellos
    [SPECIES_SHELLOS_EAST_SEA] =
    {
        .size = 0x66,
        .y_offset = 13,
    },
    // Gastrodon
    [SPECIES_GASTRODON_EAST_SEA] =
    {
        .size = 0x65,
        .y_offset = 8,
    },
    // Rotom
    [SPECIES_ROTOM_HEAT] =
    {
        .size = 0x77,
        .y_offset = 11,
    },
    [SPECIES_ROTOM_WASH] =
    {
        .size = 0x77,
        .y_offset = 11,
    },
    [SPECIES_ROTOM_FROST] =
    {
        .size = 0x77,
        .y_offset = 11,
    },
    [SPECIES_ROTOM_FAN] =
    {
        .size = 0x77,
        .y_offset = 11,
    },
    [SPECIES_ROTOM_MOW] =
    {
        .size = 0x77,
        .y_offset = 11,
    },
    // Giratina
    [SPECIES_GIRATINA_ORIGIN] =
    {
        .size = 0x87,
        .y_offset = 2,
    },
    // Shaymin
    [SPECIES_SHAYMIN_SKY] =
    {
        .size = 0x87,
        .y_offset = 7,
    },
    // Arceus
    [SPECIES_ARCEUS_FIGHTING] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_FLYING] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_POISON] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_GROUND] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_ROCK] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_BUG] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_GHOST] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_STEEL] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_FIRE] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_WATER] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_GRASS] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_ELECTRIC] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_PSYCHIC] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_ICE] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_DRAGON] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_DARK] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_FAIRY] =
    {
        .size = 0x67,
        .y_offset = 0,
    },
    // Basculin
    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    // Darmanitan
    [SPECIES_DARMANITAN_ZEN_MODE] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] =
    {
        .size = 0x68,
        .y_offset = 2,
    },
    // Deerling
    [SPECIES_DEERLING_SUMMER] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_DEERLING_AUTUMN] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    [SPECIES_DEERLING_WINTER] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    // Sawsbuck
    [SPECIES_SAWSBUCK_SUMMER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SAWSBUCK_AUTUMN] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SAWSBUCK_WINTER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Therian Forms
    [SPECIES_TORNADUS_THERIAN] =
    {
        .size = 0x87,
        .y_offset = 2,
    },
    [SPECIES_THUNDURUS_THERIAN] =
    {
        .size = 0x87,
        .y_offset = 0,
    },
    [SPECIES_LANDORUS_THERIAN] =
    {
        .size = 0x87,
        .y_offset = 2,
    },
    // Kyurem
    [SPECIES_KYUREM_WHITE] =
    {
        .size = 0x87,
        .y_offset = 0,
    },
    [SPECIES_KYUREM_BLACK] =
    {
        .size = 0x87,
        .y_offset = 0,
    },
    // Keldeo
    [SPECIES_KELDEO_RESOLUTE] =
    {
        .size = 0x45,
        .y_offset = 5,
    },
    // Meloetta
    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .size = 0x87,
        .y_offset = 3,
    },
    // Genesect
    [SPECIES_GENESECT_DOUSE_DRIVE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_GENESECT_SHOCK_DRIVE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_GENESECT_BURN_DRIVE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_GENESECT_CHILL_DRIVE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Greninja
    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    [SPECIES_GRENINJA_ASH] =
    {
        .size = 0x45,
        .y_offset = 7,
    },
    // Vivillon
    [SPECIES_VIVILLON_POLAR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_TUNDRA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_CONTINENTAL] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_GARDEN] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_ELEGANT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MEADOW] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MODERN] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MARINE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_ARCHIPELAGO] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_HIGH_PLAINS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_SANDSTORM] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_RIVER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MONSOON] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_SAVANNA] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_SUN] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_OCEAN] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_JUNGLE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_FANCY] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_POKE_BALL] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Flabébé
    [SPECIES_FLABEBE_YELLOW_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_FLABEBE_ORANGE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_FLABEBE_BLUE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    [SPECIES_FLABEBE_WHITE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    // Floette
    [SPECIES_FLOETTE_YELLOW_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_ORANGE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_BLUE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_WHITE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_ETERNAL_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    // Florges
    [SPECIES_FLORGES_YELLOW_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FLORGES_ORANGE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FLORGES_BLUE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_FLORGES_WHITE_FLOWER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Furfrou
    [SPECIES_FURFROU_HEART_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_STAR_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_DIAMOND_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_DEBUTANTE_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_MATRON_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_DANDY_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_LA_REINE_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_KABUKI_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    [SPECIES_FURFROU_PHARAOH_TRIM] =
    {
        .size = 0x45,
        .y_offset = 3,
    },
    // Meowstic
    [SPECIES_MEOWSTIC_FEMALE] =
    {
        .size = 0x45,
        .y_offset = 6,
    },
    // Aegislash
    [SPECIES_AEGISLASH_BLADE] =
    {
        .size = 0x87,
        .y_offset = 1,
    },
    // Pumpkaboo
    [SPECIES_PUMPKABOO_SMALL] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_PUMPKABOO_LARGE] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    [SPECIES_PUMPKABOO_SUPER] =
    {
        .size = 0x45,
        .y_offset = 13,
    },
    // Gourgeist
    [SPECIES_GOURGEIST_SMALL] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_GOURGEIST_LARGE] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    [SPECIES_GOURGEIST_SUPER] =
    {
        .size = 0x45,
        .y_offset = 4,
    },
    // Xerneas
    [SPECIES_XERNEAS_ACTIVE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Zygarde
    [SPECIES_ZYGARDE_10] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .size = 0x55,
        .y_offset = 0,
    },
    // Hoopa
    [SPECIES_HOOPA_UNBOUND] =
    {
        .size = 0x87,
        .y_offset = 1,
    },
    // Oricorio
    [SPECIES_ORICORIO_POM_POM] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_ORICORIO_PAU] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_ORICORIO_SENSU] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    // Rockruff
    [SPECIES_ROCKRUFF_OWN_TEMPO] =
    {
        .size = 0x45,
        .y_offset = 11,
    },
    // Lycanroc
    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_LYCANROC_DUSK] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Wishiwashi
    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .size = 0x87,
        .y_offset = 3,
    },
    // Silvally
    [SPECIES_SILVALLY_FIGHTING] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_FLYING] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_POISON] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_GROUND] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_ROCK] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_BUG] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_GHOST] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_STEEL] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_FIRE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_WATER] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_GRASS] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_ELECTRIC] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_PSYCHIC] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_ICE] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_DRAGON] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_DARK] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_FAIRY] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Minior
    [SPECIES_MINIOR_METEOR_ORANGE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_YELLOW] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_GREEN] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_BLUE] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_INDIGO] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_VIOLET] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    [SPECIES_MINIOR_CORE_RED] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_MINIOR_CORE_ORANGE] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_MINIOR_CORE_YELLOW] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_MINIOR_CORE_GREEN] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_MINIOR_CORE_BLUE] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_MINIOR_CORE_INDIGO] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    [SPECIES_MINIOR_CORE_VIOLET] =
    {
        .size = 0x87,
        .y_offset = 9,
    },
    // Mimikyu
    [SPECIES_MIMIKYU_BUSTED] =
    {
        .size = 0x45,
        .y_offset = 12,
    },
    // Necrozma
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    [SPECIES_NECROZMA_ULTRA] =
    {
        .size = 0x45,
        .y_offset = 2,
    },
    // Magearna
    [SPECIES_MAGEARNA_ORIGINAL_COLOR] =
    {
        .size = 0x45,
        .y_offset = 0,
    },
    // Cramorant
    [SPECIES_CRAMORANT_GULPING] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_CRAMORANT_GORGING] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    // Toxtricity
    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        .size = 0x68,
        .y_offset = 2,
    },
    // Sinistea
    [SPECIES_SINISTEA_ANTIQUE] =
    {
        .size = 0x54,
        .y_offset = 17,
    },
    // Polteageist
    [SPECIES_POLTEAGEIST_ANTIQUE] =
    {
        .size = 0x66,
        .y_offset = 11,
    },
    // Alcremie
    [SPECIES_ALCREMIE_RUBY_CREAM] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_MATCHA_CREAM] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_MINT_CREAM] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_LEMON_CREAM] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_SALTED_CREAM] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_RUBY_SWIRL] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_CARAMEL_SWIRL] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_RAINBOW_SWIRL] =
    {
        .size = 0x57,
        .y_offset = 7,
    },
    // Eiscue
    [SPECIES_EISCUE_NOICE_FACE] =
    {
        .size = 0x58,
        .y_offset = 0,
    },
    // Indeedee
    [SPECIES_INDEEDEE_FEMALE] =
    {
        .size = 0x56,
        .y_offset = 9,
    },
    // Morpeko
    [SPECIES_MORPEKO_HANGRY] =
    {
        .size = 0x45,
        .y_offset = 14,
    },
    // Zacian
    [SPECIES_ZACIAN_CROWNED_SWORD] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    // Zamazenta
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    // Eternatus
    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .size = 0x86,
        .y_offset = 0,
    },
    // Urshifu
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] =
    {
        .size = 0x78,
        .y_offset = 0,
    },
    // Zarude
    [SPECIES_ZARUDE_DADA] =
    {
        .size = 0x88,
        .y_offset = 2,
    },
    // Calyrex
    [SPECIES_CALYREX_ICE_RIDER] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    [SPECIES_CALYREX_SHADOW_RIDER] =
    {
        .size = 0x88,
        .y_offset = 0,
    },
    // Egg
    [SPECIES_EGG] =
    {
        .size = 0x33,
        .y_offset = 20,
    },
};
