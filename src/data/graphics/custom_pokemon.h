/*

Sample format for importing graphics:

#if P_FAMILY_BULBASAUR

const u32 gMonFrontPic_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/anim_front.4bpp.lz");
const u32 gMonPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/normal.gbapal.lz");
const u32 gMonBackPic_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/back.4bpp.lz");
const u32 gMonShinyPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/shiny.gbapal.lz");
const u8 gMonIcon_Bulbasaur[] = INCBIN_U8("graphics/pokemon/bulbasaur/icon.4bpp");

#if P_FOOTPRINTS

const u8 gMonFootprint_Bulbasaur[] = INCBIN_U8("graphics/pokemon/bulbasaur/footprint.1bpp");

#endif //P_FOOTPRINTS

#if OW_POKEMON_OBJECT_EVENTS

const u32 gObjectEventPic_Bulbasaur[] = INCBIN_COMP("graphics/pokemon/bulbasaur/overworld.4bpp");

#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

const u32 gOverworldPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/overworld_normal.gbapal.lz");
const u32 gShinyOverworldPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/overworld_shiny.gbapal.lz");

#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

*/

const u32 gMonPalette_DustoxDelta[] = INCBIN_U32("graphics/pokemon/dustox/delta.gbapal.lz");
const u8 gMonIcon_DustoxDelta[] = INCBIN_U8("graphics/pokemon/dustox/icon_delta.4bpp");

const u32 gMonPalette_SandslashDelta[] = INCBIN_U32("graphics/pokemon/sandslash/delta.gbapal.lz");

const u32 gMonPalette_VenonatDelta[] = INCBIN_U32("graphics/pokemon/venonat/delta.gbapal.lz");
const u32 gMonPalette_VenomothDelta[] = INCBIN_U32("graphics/pokemon/venomoth/delta.gbapal.lz");

const u32 gMonPalette_GolbatDelta[] = INCBIN_U32("graphics/pokemon/golbat/delta.gbapal.lz");

const u32 gMonPalette_ShedinjaDelta[] = INCBIN_U32("graphics/pokemon/shedinja/delta.gbapal.lz");
