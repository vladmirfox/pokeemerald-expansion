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

const u32 gMonPalette_WurmpleDelta[] = INCBIN_U32("graphics/pokemon/wurmple/delta.gbapal.lz");
const u32 gMonPalette_SilcoonDelta[] = INCBIN_U32("graphics/pokemon/silcoon/delta.gbapal.lz");
const u32 gMonPalette_DustoxDelta[] = INCBIN_U32("graphics/pokemon/dustox/delta.gbapal.lz");
const u8 gMonIcon_DustoxDelta[] = INCBIN_U8("graphics/pokemon/dustox/icon_delta.4bpp");

const u32 gMonPalette_SandslashDelta[] = INCBIN_U32("graphics/pokemon/sandslash/delta.gbapal.lz");

const u32 gMonPalette_VenonatDelta[] = INCBIN_U32("graphics/pokemon/venonat/delta.gbapal.lz");
const u32 gMonPalette_VenomothDelta[] = INCBIN_U32("graphics/pokemon/venomoth/delta.gbapal.lz");

const u32 gMonPalette_GolbatDelta[] = INCBIN_U32("graphics/pokemon/golbat/delta.gbapal.lz");

const u32 gMonPalette_ShedinjaDelta[] = INCBIN_U32("graphics/pokemon/shedinja/delta.gbapal.lz");

const u32 gMonPalette_BeedrillDelta[] = INCBIN_U32("graphics/pokemon/beedrill/delta.gbapal.lz");
const u32 gMonPalette_ButterfreeDelta[] = INCBIN_U32("graphics/pokemon/butterfree/delta.gbapal.lz");

const u32 gMonFrontPic_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/anim_front.4bpp.lz");
const u32 gMonPalette_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/normal.gbapal.lz");
const u32 gMonBackPic_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/back.4bpp.lz");
const u32 gMonShinyPalette_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/normal.gbapal.lz");
const u8 gMonIcon_Igneousaur[] = INCBIN_U8("graphics/pokemon/igneousaur/icon.4bpp");

const u32 gMonFrontPic_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/anim_front.4bpp.lz");
const u32 gMonPalette_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/normal.gbapal.lz");
const u32 gMonBackPic_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/back.4bpp.lz");
const u32 gMonShinyPalette_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/normal.gbapal.lz");
const u8 gMonFootprint_Polaris[] = INCBIN_U8("graphics/pokemon/polaris/footprint.1bpp");
const u8 gMonIcon_Polaris[] = INCBIN_U8("graphics/pokemon/polaris/icon.4bpp");

const u32 gMonFrontPic_Voltrex[] = INCBIN_U32("graphics/pokemon/electrosaur/voltrex.4bpp.lz");
const u32 gMonPalette_Voltrex[] = INCBIN_U32("graphics/pokemon/electrosaur/voltrex.gbapal.lz");
const u32 gMonBackPic_Voltrex[] = INCBIN_U32("graphics/pokemon/electrosaur/back_voltrex.4bpp.lz");
const u8 gMonIcon_Voltrex[] = INCBIN_U8("graphics/pokemon/electrosaur/icon_voltrex.4bpp");

const u32 gMonFrontPic_Electrosaur[] = INCBIN_U32("graphics/pokemon/electrosaur/electrosaur.4bpp.lz");
const u32 gMonPalette_Electrosaur[] = INCBIN_U32("graphics/pokemon/electrosaur/electrosaur.gbapal.lz");
const u32 gMonBackPic_Electrosaur[] = INCBIN_U32("graphics/pokemon/electrosaur/back_electrosaur.4bpp.lz");
const u8 gMonIcon_Electrosaur[] = INCBIN_U8("graphics/pokemon/electrosaur/icon_electrosaur.4bpp");

const u32 gMonFrontPic_Tricerachop[] = INCBIN_U32("graphics/pokemon/tricerachop/anim_front_tricerachop.4bpp.lz");
const u32 gMonPalette_Tricerachop[] = INCBIN_U32("graphics/pokemon/tricerachop/tricerachop.gbapal.lz");
const u32 gMonBackPic_Tricerachop[] = INCBIN_U32("graphics/pokemon/tricerachop/back_tricerachop.4bpp.lz");
// const u8 gMonIcon_Tricerachop[] = INCBIN_U8("graphics/pokemon/tricerachop/icon_electrosaur.4bpp");

const u32 gMonFrontPic_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/anim_front_mega.4bpp.lz");
const u32 gMonPalette_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/mega.gbapal.lz");
const u32 gMonShinyPalette_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/shiny_mega.gbapal.lz");
const u32 gMonBackPic_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/back_mega.4bpp.lz");
const u8 gMonIcon_Abyssilily[] = INCBIN_U8("graphics/pokemon/cradily/mega/icon.4bpp");

const u32 gMonFrontPic_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/anim_front.4bpp.lz");
const u32 gMonPalette_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/normal.gbapal.lz");
const u32 gMonShinyPalette_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/shiny.gbapal.lz");
const u32 gMonBackPic_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/back.4bpp.lz");
const u8 gMonIcon_Armountan[] = INCBIN_U8("graphics/pokemon/armaldo/mega/icon.4bpp");
