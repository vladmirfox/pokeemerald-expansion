#ifndef GUARD_COMPATIBILITY_H
#define GUARD_COMPATIBILITY_H

#include "constants/global.h"

// Vanilla species defines
#define VANILLA_SPECIES_NONE 0
#define VANILLA_SPECIES_BULBASAUR 1
#define VANILLA_SPECIES_IVYSAUR 2
#define VANILLA_SPECIES_VENUSAUR 3
#define VANILLA_SPECIES_CHARMANDER 4
#define VANILLA_SPECIES_CHARMELEON 5
#define VANILLA_SPECIES_CHARIZARD 6
#define VANILLA_SPECIES_SQUIRTLE 7
#define VANILLA_SPECIES_WARTORTLE 8
#define VANILLA_SPECIES_BLASTOISE 9
#define VANILLA_SPECIES_CATERPIE 10
#define VANILLA_SPECIES_METAPOD 11
#define VANILLA_SPECIES_BUTTERFREE 12
#define VANILLA_SPECIES_WEEDLE 13
#define VANILLA_SPECIES_KAKUNA 14
#define VANILLA_SPECIES_BEEDRILL 15
#define VANILLA_SPECIES_PIDGEY 16
#define VANILLA_SPECIES_PIDGEOTTO 17
#define VANILLA_SPECIES_PIDGEOT 18
#define VANILLA_SPECIES_RATTATA 19
#define VANILLA_SPECIES_RATICATE 20
#define VANILLA_SPECIES_SPEAROW 21
#define VANILLA_SPECIES_FEAROW 22
#define VANILLA_SPECIES_EKANS 23
#define VANILLA_SPECIES_ARBOK 24
#define VANILLA_SPECIES_PIKACHU 25
#define VANILLA_SPECIES_RAICHU 26
#define VANILLA_SPECIES_SANDSHREW 27
#define VANILLA_SPECIES_SANDSLASH 28
#define VANILLA_SPECIES_NIDORAN_F 29
#define VANILLA_SPECIES_NIDORINA 30
#define VANILLA_SPECIES_NIDOQUEEN 31
#define VANILLA_SPECIES_NIDORAN_M 32
#define VANILLA_SPECIES_NIDORINO 33
#define VANILLA_SPECIES_NIDOKING 34
#define VANILLA_SPECIES_CLEFAIRY 35
#define VANILLA_SPECIES_CLEFABLE 36
#define VANILLA_SPECIES_VULPIX 37
#define VANILLA_SPECIES_NINETALES 38
#define VANILLA_SPECIES_JIGGLYPUFF 39
#define VANILLA_SPECIES_WIGGLYTUFF 40
#define VANILLA_SPECIES_ZUBAT 41
#define VANILLA_SPECIES_GOLBAT 42
#define VANILLA_SPECIES_ODDISH 43
#define VANILLA_SPECIES_GLOOM 44
#define VANILLA_SPECIES_VILEPLUME 45
#define VANILLA_SPECIES_PARAS 46
#define VANILLA_SPECIES_PARASECT 47
#define VANILLA_SPECIES_VENONAT 48
#define VANILLA_SPECIES_VENOMOTH 49
#define VANILLA_SPECIES_DIGLETT 50
#define VANILLA_SPECIES_DUGTRIO 51
#define VANILLA_SPECIES_MEOWTH 52
#define VANILLA_SPECIES_PERSIAN 53
#define VANILLA_SPECIES_PSYDUCK 54
#define VANILLA_SPECIES_GOLDUCK 55
#define VANILLA_SPECIES_MANKEY 56
#define VANILLA_SPECIES_PRIMEAPE 57
#define VANILLA_SPECIES_GROWLITHE 58
#define VANILLA_SPECIES_ARCANINE 59
#define VANILLA_SPECIES_POLIWAG 60
#define VANILLA_SPECIES_POLIWHIRL 61
#define VANILLA_SPECIES_POLIWRATH 62
#define VANILLA_SPECIES_ABRA 63
#define VANILLA_SPECIES_KADABRA 64
#define VANILLA_SPECIES_ALAKAZAM 65
#define VANILLA_SPECIES_MACHOP 66
#define VANILLA_SPECIES_MACHOKE 67
#define VANILLA_SPECIES_MACHAMP 68
#define VANILLA_SPECIES_BELLSPROUT 69
#define VANILLA_SPECIES_WEEPINBELL 70
#define VANILLA_SPECIES_VICTREEBEL 71
#define VANILLA_SPECIES_TENTACOOL 72
#define VANILLA_SPECIES_TENTACRUEL 73
#define VANILLA_SPECIES_GEODUDE 74
#define VANILLA_SPECIES_GRAVELER 75
#define VANILLA_SPECIES_GOLEM 76
#define VANILLA_SPECIES_PONYTA 77
#define VANILLA_SPECIES_RAPIDASH 78
#define VANILLA_SPECIES_SLOWPOKE 79
#define VANILLA_SPECIES_SLOWBRO 80
#define VANILLA_SPECIES_MAGNEMITE 81
#define VANILLA_SPECIES_MAGNETON 82
#define VANILLA_SPECIES_FARFETCHD 83
#define VANILLA_SPECIES_DODUO 84
#define VANILLA_SPECIES_DODRIO 85
#define VANILLA_SPECIES_SEEL 86
#define VANILLA_SPECIES_DEWGONG 87
#define VANILLA_SPECIES_GRIMER 88
#define VANILLA_SPECIES_MUK 89
#define VANILLA_SPECIES_SHELLDER 90
#define VANILLA_SPECIES_CLOYSTER 91
#define VANILLA_SPECIES_GASTLY 92
#define VANILLA_SPECIES_HAUNTER 93
#define VANILLA_SPECIES_GENGAR 94
#define VANILLA_SPECIES_ONIX 95
#define VANILLA_SPECIES_DROWZEE 96
#define VANILLA_SPECIES_HYPNO 97
#define VANILLA_SPECIES_KRABBY 98
#define VANILLA_SPECIES_KINGLER 99
#define VANILLA_SPECIES_VOLTORB 100
#define VANILLA_SPECIES_ELECTRODE 101
#define VANILLA_SPECIES_EXEGGCUTE 102
#define VANILLA_SPECIES_EXEGGUTOR 103
#define VANILLA_SPECIES_CUBONE 104
#define VANILLA_SPECIES_MAROWAK 105
#define VANILLA_SPECIES_HITMONLEE 106
#define VANILLA_SPECIES_HITMONCHAN 107
#define VANILLA_SPECIES_LICKITUNG 108
#define VANILLA_SPECIES_KOFFING 109
#define VANILLA_SPECIES_WEEZING 110
#define VANILLA_SPECIES_RHYHORN 111
#define VANILLA_SPECIES_RHYDON 112
#define VANILLA_SPECIES_CHANSEY 113
#define VANILLA_SPECIES_TANGELA 114
#define VANILLA_SPECIES_KANGASKHAN 115
#define VANILLA_SPECIES_HORSEA 116
#define VANILLA_SPECIES_SEADRA 117
#define VANILLA_SPECIES_GOLDEEN 118
#define VANILLA_SPECIES_SEAKING 119
#define VANILLA_SPECIES_STARYU 120
#define VANILLA_SPECIES_STARMIE 121
#define VANILLA_SPECIES_MR_MIME 122
#define VANILLA_SPECIES_SCYTHER 123
#define VANILLA_SPECIES_JYNX 124
#define VANILLA_SPECIES_ELECTABUZZ 125
#define VANILLA_SPECIES_MAGMAR 126
#define VANILLA_SPECIES_PINSIR 127
#define VANILLA_SPECIES_TAUROS 128
#define VANILLA_SPECIES_MAGIKARP 129
#define VANILLA_SPECIES_GYARADOS 130
#define VANILLA_SPECIES_LAPRAS 131
#define VANILLA_SPECIES_DITTO 132
#define VANILLA_SPECIES_EEVEE 133
#define VANILLA_SPECIES_VAPOREON 134
#define VANILLA_SPECIES_JOLTEON 135
#define VANILLA_SPECIES_FLAREON 136
#define VANILLA_SPECIES_PORYGON 137
#define VANILLA_SPECIES_OMANYTE 138
#define VANILLA_SPECIES_OMASTAR 139
#define VANILLA_SPECIES_KABUTO 140
#define VANILLA_SPECIES_KABUTOPS 141
#define VANILLA_SPECIES_AERODACTYL 142
#define VANILLA_SPECIES_SNORLAX 143
#define VANILLA_SPECIES_ARTICUNO 144
#define VANILLA_SPECIES_ZAPDOS 145
#define VANILLA_SPECIES_MOLTRES 146
#define VANILLA_SPECIES_DRATINI 147
#define VANILLA_SPECIES_DRAGONAIR 148
#define VANILLA_SPECIES_DRAGONITE 149
#define VANILLA_SPECIES_MEWTWO 150
#define VANILLA_SPECIES_MEW 151
#define VANILLA_SPECIES_CHIKORITA 152
#define VANILLA_SPECIES_BAYLEEF 153
#define VANILLA_SPECIES_MEGANIUM 154
#define VANILLA_SPECIES_CYNDAQUIL 155
#define VANILLA_SPECIES_QUILAVA 156
#define VANILLA_SPECIES_TYPHLOSION 157
#define VANILLA_SPECIES_TOTODILE 158
#define VANILLA_SPECIES_CROCONAW 159
#define VANILLA_SPECIES_FERALIGATR 160
#define VANILLA_SPECIES_SENTRET 161
#define VANILLA_SPECIES_FURRET 162
#define VANILLA_SPECIES_HOOTHOOT 163
#define VANILLA_SPECIES_NOCTOWL 164
#define VANILLA_SPECIES_LEDYBA 165
#define VANILLA_SPECIES_LEDIAN 166
#define VANILLA_SPECIES_SPINARAK 167
#define VANILLA_SPECIES_ARIADOS 168
#define VANILLA_SPECIES_CROBAT 169
#define VANILLA_SPECIES_CHINCHOU 170
#define VANILLA_SPECIES_LANTURN 171
#define VANILLA_SPECIES_PICHU 172
#define VANILLA_SPECIES_CLEFFA 173
#define VANILLA_SPECIES_IGGLYBUFF 174
#define VANILLA_SPECIES_TOGEPI 175
#define VANILLA_SPECIES_TOGETIC 176
#define VANILLA_SPECIES_NATU 177
#define VANILLA_SPECIES_XATU 178
#define VANILLA_SPECIES_MAREEP 179
#define VANILLA_SPECIES_FLAAFFY 180
#define VANILLA_SPECIES_AMPHAROS 181
#define VANILLA_SPECIES_BELLOSSOM 182
#define VANILLA_SPECIES_MARILL 183
#define VANILLA_SPECIES_AZUMARILL 184
#define VANILLA_SPECIES_SUDOWOODO 185
#define VANILLA_SPECIES_POLITOED 186
#define VANILLA_SPECIES_HOPPIP 187
#define VANILLA_SPECIES_SKIPLOOM 188
#define VANILLA_SPECIES_JUMPLUFF 189
#define VANILLA_SPECIES_AIPOM 190
#define VANILLA_SPECIES_SUNKERN 191
#define VANILLA_SPECIES_SUNFLORA 192
#define VANILLA_SPECIES_YANMA 193
#define VANILLA_SPECIES_WOOPER 194
#define VANILLA_SPECIES_QUAGSIRE 195
#define VANILLA_SPECIES_ESPEON 196
#define VANILLA_SPECIES_UMBREON 197
#define VANILLA_SPECIES_MURKROW 198
#define VANILLA_SPECIES_SLOWKING 199
#define VANILLA_SPECIES_MISDREAVUS 200
#define VANILLA_SPECIES_UNOWN 201
#define VANILLA_SPECIES_WOBBUFFET 202
#define VANILLA_SPECIES_GIRAFARIG 203
#define VANILLA_SPECIES_PINECO 204
#define VANILLA_SPECIES_FORRETRESS 205
#define VANILLA_SPECIES_DUNSPARCE 206
#define VANILLA_SPECIES_GLIGAR 207
#define VANILLA_SPECIES_STEELIX 208
#define VANILLA_SPECIES_SNUBBULL 209
#define VANILLA_SPECIES_GRANBULL 210
#define VANILLA_SPECIES_QWILFISH 211
#define VANILLA_SPECIES_SCIZOR 212
#define VANILLA_SPECIES_SHUCKLE 213
#define VANILLA_SPECIES_HERACROSS 214
#define VANILLA_SPECIES_SNEASEL 215
#define VANILLA_SPECIES_TEDDIURSA 216
#define VANILLA_SPECIES_URSARING 217
#define VANILLA_SPECIES_SLUGMA 218
#define VANILLA_SPECIES_MAGCARGO 219
#define VANILLA_SPECIES_SWINUB 220
#define VANILLA_SPECIES_PILOSWINE 221
#define VANILLA_SPECIES_CORSOLA 222
#define VANILLA_SPECIES_REMORAID 223
#define VANILLA_SPECIES_OCTILLERY 224
#define VANILLA_SPECIES_DELIBIRD 225
#define VANILLA_SPECIES_MANTINE 226
#define VANILLA_SPECIES_SKARMORY 227
#define VANILLA_SPECIES_HOUNDOUR 228
#define VANILLA_SPECIES_HOUNDOOM 229
#define VANILLA_SPECIES_KINGDRA 230
#define VANILLA_SPECIES_PHANPY 231
#define VANILLA_SPECIES_DONPHAN 232
#define VANILLA_SPECIES_PORYGON2 233
#define VANILLA_SPECIES_STANTLER 234
#define VANILLA_SPECIES_SMEARGLE 235
#define VANILLA_SPECIES_TYROGUE 236
#define VANILLA_SPECIES_HITMONTOP 237
#define VANILLA_SPECIES_SMOOCHUM 238
#define VANILLA_SPECIES_ELEKID 239
#define VANILLA_SPECIES_MAGBY 240
#define VANILLA_SPECIES_MILTANK 241
#define VANILLA_SPECIES_BLISSEY 242
#define VANILLA_SPECIES_RAIKOU 243
#define VANILLA_SPECIES_ENTEI 244
#define VANILLA_SPECIES_SUICUNE 245
#define VANILLA_SPECIES_LARVITAR 246
#define VANILLA_SPECIES_PUPITAR 247
#define VANILLA_SPECIES_TYRANITAR 248
#define VANILLA_SPECIES_LUGIA 249
#define VANILLA_SPECIES_HO_OH 250
#define VANILLA_SPECIES_CELEBI 251

#define VANILLA_SPECIES_OLD_UNOWN_B 252
#define VANILLA_SPECIES_OLD_UNOWN_C 253
#define VANILLA_SPECIES_OLD_UNOWN_D 254
#define VANILLA_SPECIES_OLD_UNOWN_E 255
#define VANILLA_SPECIES_OLD_UNOWN_F 256
#define VANILLA_SPECIES_OLD_UNOWN_G 257
#define VANILLA_SPECIES_OLD_UNOWN_H 258
#define VANILLA_SPECIES_OLD_UNOWN_I 259
#define VANILLA_SPECIES_OLD_UNOWN_J 260
#define VANILLA_SPECIES_OLD_UNOWN_K 261
#define VANILLA_SPECIES_OLD_UNOWN_L 262
#define VANILLA_SPECIES_OLD_UNOWN_M 263
#define VANILLA_SPECIES_OLD_UNOWN_N 264
#define VANILLA_SPECIES_OLD_UNOWN_O 265
#define VANILLA_SPECIES_OLD_UNOWN_P 266
#define VANILLA_SPECIES_OLD_UNOWN_Q 267
#define VANILLA_SPECIES_OLD_UNOWN_R 268
#define VANILLA_SPECIES_OLD_UNOWN_S 269
#define VANILLA_SPECIES_OLD_UNOWN_T 270
#define VANILLA_SPECIES_OLD_UNOWN_U 271
#define VANILLA_SPECIES_OLD_UNOWN_V 272
#define VANILLA_SPECIES_OLD_UNOWN_W 273
#define VANILLA_SPECIES_OLD_UNOWN_X 274
#define VANILLA_SPECIES_OLD_UNOWN_Y 275
#define VANILLA_SPECIES_OLD_UNOWN_Z 276

#define VANILLA_SPECIES_TREECKO 277
#define VANILLA_SPECIES_GROVYLE 278
#define VANILLA_SPECIES_SCEPTILE 279
#define VANILLA_SPECIES_TORCHIC 280
#define VANILLA_SPECIES_COMBUSKEN 281
#define VANILLA_SPECIES_BLAZIKEN 282
#define VANILLA_SPECIES_MUDKIP 283
#define VANILLA_SPECIES_MARSHTOMP 284
#define VANILLA_SPECIES_SWAMPERT 285
#define VANILLA_SPECIES_POOCHYENA 286
#define VANILLA_SPECIES_MIGHTYENA 287
#define VANILLA_SPECIES_ZIGZAGOON 288
#define VANILLA_SPECIES_LINOONE 289
#define VANILLA_SPECIES_WURMPLE 290
#define VANILLA_SPECIES_SILCOON 291
#define VANILLA_SPECIES_BEAUTIFLY 292
#define VANILLA_SPECIES_CASCOON 293
#define VANILLA_SPECIES_DUSTOX 294
#define VANILLA_SPECIES_LOTAD 295
#define VANILLA_SPECIES_LOMBRE 296
#define VANILLA_SPECIES_LUDICOLO 297
#define VANILLA_SPECIES_SEEDOT 298
#define VANILLA_SPECIES_NUZLEAF 299
#define VANILLA_SPECIES_SHIFTRY 300
#define VANILLA_SPECIES_NINCADA 301
#define VANILLA_SPECIES_NINJASK 302
#define VANILLA_SPECIES_SHEDINJA 303
#define VANILLA_SPECIES_TAILLOW 304
#define VANILLA_SPECIES_SWELLOW 305
#define VANILLA_SPECIES_SHROOMISH 306
#define VANILLA_SPECIES_BRELOOM 307
#define VANILLA_SPECIES_SPINDA 308
#define VANILLA_SPECIES_WINGULL 309
#define VANILLA_SPECIES_PELIPPER 310
#define VANILLA_SPECIES_SURSKIT 311
#define VANILLA_SPECIES_MASQUERAIN 312
#define VANILLA_SPECIES_WAILMER 313
#define VANILLA_SPECIES_WAILORD 314
#define VANILLA_SPECIES_SKITTY 315
#define VANILLA_SPECIES_DELCATTY 316
#define VANILLA_SPECIES_KECLEON 317
#define VANILLA_SPECIES_BALTOY 318
#define VANILLA_SPECIES_CLAYDOL 319
#define VANILLA_SPECIES_NOSEPASS 320
#define VANILLA_SPECIES_TORKOAL 321
#define VANILLA_SPECIES_SABLEYE 322
#define VANILLA_SPECIES_BARBOACH 323
#define VANILLA_SPECIES_WHISCASH 324
#define VANILLA_SPECIES_LUVDISC 325
#define VANILLA_SPECIES_CORPHISH 326
#define VANILLA_SPECIES_CRAWDAUNT 327
#define VANILLA_SPECIES_FEEBAS 328
#define VANILLA_SPECIES_MILOTIC 329
#define VANILLA_SPECIES_CARVANHA 330
#define VANILLA_SPECIES_SHARPEDO 331
#define VANILLA_SPECIES_TRAPINCH 332
#define VANILLA_SPECIES_VIBRAVA 333
#define VANILLA_SPECIES_FLYGON 334
#define VANILLA_SPECIES_MAKUHITA 335
#define VANILLA_SPECIES_HARIYAMA 336
#define VANILLA_SPECIES_ELECTRIKE 337
#define VANILLA_SPECIES_MANECTRIC 338
#define VANILLA_SPECIES_NUMEL 339
#define VANILLA_SPECIES_CAMERUPT 340
#define VANILLA_SPECIES_SPHEAL 341
#define VANILLA_SPECIES_SEALEO 342
#define VANILLA_SPECIES_WALREIN 343
#define VANILLA_SPECIES_CACNEA 344
#define VANILLA_SPECIES_CACTURNE 345
#define VANILLA_SPECIES_SNORUNT 346
#define VANILLA_SPECIES_GLALIE 347
#define VANILLA_SPECIES_LUNATONE 348
#define VANILLA_SPECIES_SOLROCK 349
#define VANILLA_SPECIES_AZURILL 350
#define VANILLA_SPECIES_SPOINK 351
#define VANILLA_SPECIES_GRUMPIG 352
#define VANILLA_SPECIES_PLUSLE 353
#define VANILLA_SPECIES_MINUN 354
#define VANILLA_SPECIES_MAWILE 355
#define VANILLA_SPECIES_MEDITITE 356
#define VANILLA_SPECIES_MEDICHAM 357
#define VANILLA_SPECIES_SWABLU 358
#define VANILLA_SPECIES_ALTARIA 359
#define VANILLA_SPECIES_WYNAUT 360
#define VANILLA_SPECIES_DUSKULL 361
#define VANILLA_SPECIES_DUSCLOPS 362
#define VANILLA_SPECIES_ROSELIA 363
#define VANILLA_SPECIES_SLAKOTH 364
#define VANILLA_SPECIES_VIGOROTH 365
#define VANILLA_SPECIES_SLAKING 366
#define VANILLA_SPECIES_GULPIN 367
#define VANILLA_SPECIES_SWALOT 368
#define VANILLA_SPECIES_TROPIUS 369
#define VANILLA_SPECIES_WHISMUR 370
#define VANILLA_SPECIES_LOUDRED 371
#define VANILLA_SPECIES_EXPLOUD 372
#define VANILLA_SPECIES_CLAMPERL 373
#define VANILLA_SPECIES_HUNTAIL 374
#define VANILLA_SPECIES_GOREBYSS 375
#define VANILLA_SPECIES_ABSOL 376
#define VANILLA_SPECIES_SHUPPET 377
#define VANILLA_SPECIES_BANETTE 378
#define VANILLA_SPECIES_SEVIPER 379
#define VANILLA_SPECIES_ZANGOOSE 380
#define VANILLA_SPECIES_RELICANTH 381
#define VANILLA_SPECIES_ARON 382
#define VANILLA_SPECIES_LAIRON 383
#define VANILLA_SPECIES_AGGRON 384
#define VANILLA_SPECIES_CASTFORM 385
#define VANILLA_SPECIES_VOLBEAT 386
#define VANILLA_SPECIES_ILLUMISE 387
#define VANILLA_SPECIES_LILEEP 388
#define VANILLA_SPECIES_CRADILY 389
#define VANILLA_SPECIES_ANORITH 390
#define VANILLA_SPECIES_ARMALDO 391
#define VANILLA_SPECIES_RALTS 392
#define VANILLA_SPECIES_KIRLIA 393
#define VANILLA_SPECIES_GARDEVOIR 394
#define VANILLA_SPECIES_BAGON 395
#define VANILLA_SPECIES_SHELGON 396
#define VANILLA_SPECIES_SALAMENCE 397
#define VANILLA_SPECIES_BELDUM 398
#define VANILLA_SPECIES_METANG 399
#define VANILLA_SPECIES_METAGROSS 400
#define VANILLA_SPECIES_REGIROCK 401
#define VANILLA_SPECIES_REGICE 402
#define VANILLA_SPECIES_REGISTEEL 403
#define VANILLA_SPECIES_KYOGRE 404
#define VANILLA_SPECIES_GROUDON 405
#define VANILLA_SPECIES_RAYQUAZA 406
#define VANILLA_SPECIES_LATIAS 407
#define VANILLA_SPECIES_LATIOS 408
#define VANILLA_SPECIES_JIRACHI 409
#define VANILLA_SPECIES_DEOXYS 410
#define VANILLA_SPECIES_CHIMECHO 411
#define VANILLA_SPECIES_EGG 412

#define VANILLA_NUM_SPECIES SPECIES_EGG

// Pokemon struct data

// Property labels for Get(Box)MonData / Set(Box)MonData
enum {
    VANILLA_MON_DATA_PERSONALITY,
    VANILLA_MON_DATA_OT_ID,
    VANILLA_MON_DATA_NICKNAME,
    VANILLA_MON_DATA_LANGUAGE,
    VANILLA_MON_DATA_SANITY_IS_BAD_EGG,
    VANILLA_MON_DATA_SANITY_HAS_SPECIES,
    VANILLA_MON_DATA_SANITY_IS_EGG,
    VANILLA_MON_DATA_OT_NAME,
    VANILLA_MON_DATA_MARKINGS,
    VANILLA_MON_DATA_CHECKSUM,
    VANILLA_MON_DATA_ENCRYPT_SEPARATOR,
    VANILLA_MON_DATA_SPECIES,
    VANILLA_MON_DATA_HELD_ITEM,
    VANILLA_MON_DATA_MOVE1,
    VANILLA_MON_DATA_MOVE2,
    VANILLA_MON_DATA_MOVE3,
    VANILLA_MON_DATA_MOVE4,
    VANILLA_MON_DATA_PP1,
    VANILLA_MON_DATA_PP2,
    VANILLA_MON_DATA_PP3,
    VANILLA_MON_DATA_PP4,
    VANILLA_MON_DATA_PP_BONUSES,
    VANILLA_MON_DATA_COOL,
    VANILLA_MON_DATA_BEAUTY,
    VANILLA_MON_DATA_CUTE,
    VANILLA_MON_DATA_EXP,
    VANILLA_MON_DATA_HP_EV,
    VANILLA_MON_DATA_ATK_EV,
    VANILLA_MON_DATA_DEF_EV,
    VANILLA_MON_DATA_SPEED_EV,
    VANILLA_MON_DATA_SPATK_EV,
    VANILLA_MON_DATA_SPDEF_EV,
    VANILLA_MON_DATA_FRIENDSHIP,
    VANILLA_MON_DATA_SMART,
    VANILLA_MON_DATA_POKERUS,
    VANILLA_MON_DATA_MET_LOCATION,
    VANILLA_MON_DATA_MET_LEVEL,
    VANILLA_MON_DATA_MET_GAME,
    VANILLA_MON_DATA_POKEBALL,
    VANILLA_MON_DATA_HP_IV,
    VANILLA_MON_DATA_ATK_IV,
    VANILLA_MON_DATA_DEF_IV,
    VANILLA_MON_DATA_SPEED_IV,
    VANILLA_MON_DATA_SPATK_IV,
    VANILLA_MON_DATA_SPDEF_IV,
    VANILLA_MON_DATA_IS_EGG,
    VANILLA_MON_DATA_ABILITY_NUM,
    VANILLA_MON_DATA_TOUGH,
    VANILLA_MON_DATA_SHEEN,
    VANILLA_MON_DATA_OT_GENDER,
    VANILLA_MON_DATA_COOL_RIBBON,
    VANILLA_MON_DATA_BEAUTY_RIBBON,
    VANILLA_MON_DATA_CUTE_RIBBON,
    VANILLA_MON_DATA_SMART_RIBBON,
    VANILLA_MON_DATA_TOUGH_RIBBON,
    VANILLA_MON_DATA_STATUS,
    VANILLA_MON_DATA_LEVEL,
    VANILLA_MON_DATA_HP,
    VANILLA_MON_DATA_MAX_HP,
    VANILLA_MON_DATA_ATK,
    VANILLA_MON_DATA_DEF,
    VANILLA_MON_DATA_SPEED,
    VANILLA_MON_DATA_SPATK,
    VANILLA_MON_DATA_SPDEF,
    VANILLA_MON_DATA_MAIL,
    VANILLA_MON_DATA_SPECIES_OR_EGG,
    VANILLA_MON_DATA_IVS,
    VANILLA_MON_DATA_CHAMPION_RIBBON,
    VANILLA_MON_DATA_WINNING_RIBBON,
    VANILLA_MON_DATA_VICTORY_RIBBON,
    VANILLA_MON_DATA_ARTIST_RIBBON,
    VANILLA_MON_DATA_EFFORT_RIBBON,
    VANILLA_MON_DATA_MARINE_RIBBON,
    VANILLA_MON_DATA_LAND_RIBBON,
    VANILLA_MON_DATA_SKY_RIBBON,
    VANILLA_MON_DATA_COUNTRY_RIBBON,
    VANILLA_MON_DATA_NATIONAL_RIBBON,
    VANILLA_MON_DATA_EARTH_RIBBON,
    VANILLA_MON_DATA_WORLD_RIBBON,
    VANILLA_MON_DATA_UNUSED_RIBBONS,
    VANILLA_MON_DATA_MODERN_FATEFUL_ENCOUNTER,
    VANILLA_MON_DATA_KNOWN_MOVES,
    VANILLA_MON_DATA_RIBBON_COUNT,
    VANILLA_MON_DATA_RIBBONS,
    VANILLA_MON_DATA_ATK2,
    VANILLA_MON_DATA_DEF2,
    VANILLA_MON_DATA_SPEED2,
    VANILLA_MON_DATA_SPATK2,
    VANILLA_MON_DATA_SPDEF2,
};

struct VanillaPokemonSubstruct0
{
    u16 species;
    u16 heldItem;
    u32 experience;
    u8 ppBonuses;
    u8 friendship;
    u16 filler;
};

struct VanillaPokemonSubstruct1
{
    u16 moves[MAX_MON_MOVES];
    u8 pp[MAX_MON_MOVES];
};

struct VanillaPokemonSubstruct2
{
    u8 hpEV;
    u8 attackEV;
    u8 defenseEV;
    u8 speedEV;
    u8 spAttackEV;
    u8 spDefenseEV;
    u8 cool;
    u8 beauty;
    u8 cute;
    u8 smart;
    u8 tough;
    u8 sheen;
};

struct VanillaPokemonSubstruct3
{
 /* 0x00 */ u8 pokerus;
 /* 0x01 */ u8 metLocation;

 /* 0x02 */ u16 metLevel:7;
 /* 0x02 */ u16 metGame:4;
 /* 0x03 */ u16 pokeball:4;
 /* 0x03 */ u16 otGender:1;

 /* 0x04 */ u32 hpIV:5;
 /* 0x04 */ u32 attackIV:5;
 /* 0x05 */ u32 defenseIV:5;
 /* 0x05 */ u32 speedIV:5;
 /* 0x05 */ u32 spAttackIV:5;
 /* 0x06 */ u32 spDefenseIV:5;
 /* 0x07 */ u32 isEgg:1;
 /* 0x07 */ u32 abilityNum:1;

 /* 0x08 */ u32 coolRibbon:3;               // Stores the highest contest rank achieved in the Cool category.
 /* 0x08 */ u32 beautyRibbon:3;             // Stores the highest contest rank achieved in the Beauty category.
 /* 0x08 */ u32 cuteRibbon:3;               // Stores the highest contest rank achieved in the Cute category.
 /* 0x09 */ u32 smartRibbon:3;              // Stores the highest contest rank achieved in the Smart category.
 /* 0x09 */ u32 toughRibbon:3;              // Stores the highest contest rank achieved in the Tough category.
 /* 0x09 */ u32 championRibbon:1;           // Given when defeating the Champion. Because both RSE and FRLG use it, later generations don't specify from which region it comes from.
 /* 0x0A */ u32 winningRibbon:1;            // Given at the Battle Tower's Level 50 challenge by winning a set of seven battles that extends the current streak to 56 or more.
 /* 0x0A */ u32 victoryRibbon:1;            // Given at the Battle Tower's Level 100 challenge by winning a set of seven battles that extends the current streak to 56 or more.
 /* 0x0A */ u32 artistRibbon:1;             // Given at the Contest Hall by winning a Master Rank contest with at least 800 points, and agreeing to have the Pok�mon's portrait placed in the museum after being offered.
 /* 0x0A */ u32 effortRibbon:1;             // Given at Slateport's market to Pok�mon with maximum EVs.
 /* 0x0A */ u32 marineRibbon:1;             // Never distributed.
 /* 0x0A */ u32 landRibbon:1;               // Never distributed.
 /* 0x0A */ u32 skyRibbon:1;                // Never distributed.
 /* 0x0A */ u32 countryRibbon:1;            // Distributed during Pok�mon Festa '04 and '05 to tournament winners.
 /* 0x0B */ u32 nationalRibbon:1;           // Given to purified Shadow Pok�mon in Colosseum/XD.
 /* 0x0B */ u32 earthRibbon:1;              // Given to teams that have beaten Mt. Battle's 100-battle challenge in Colosseum/XD.
 /* 0x0B */ u32 worldRibbon:1;              // Distributed during Pok�mon Festa '04 and '05 to tournament winners.
 /* 0x0B */ u32 unusedRibbons:4;            // Discarded in Gen 4.

 // The functionality of this bit changed in FRLG:
 // In RS, this bit does nothing, is never set, & is accidentally unset when hatching Eggs.
 // In FRLG & Emerald, this controls Mew & Deoxys obedience and whether they can be traded.
 // If set, a Pok�mon is a fateful encounter in FRLG's summary screen if hatched & for all Pok�mon in Gen 4+ summary screens.
 // Set for in-game event island legendaries, events distributed after a certain date, & Pok�mon from XD: Gale of Darkness.
 // Not to be confused with METLOC_FATEFUL_ENCOUNTER.
 /* 0x0B */ u32 modernFatefulEncounter:1;
};

// Number of bytes in the largest Pok�mon substruct.
// They are assumed to be the same size, and will be padded to
// the largest size by the union.
// By default they are all 12 bytes.
#define VANILLA_NUM_SUBSTRUCT_BYTES (max(sizeof(struct VanillaPokemonSubstruct0),     \
                             max(sizeof(struct VanillaPokemonSubstruct1),     \
                             max(sizeof(struct VanillaPokemonSubstruct2),     \
                                 sizeof(struct VanillaPokemonSubstruct3)))))

union VanillaPokemonSubstruct
{
    struct VanillaPokemonSubstruct0 type0;
    struct VanillaPokemonSubstruct1 type1;
    struct VanillaPokemonSubstruct2 type2;
    struct VanillaPokemonSubstruct3 type3;
    u16 raw[VANILLA_NUM_SUBSTRUCT_BYTES / 2]; // /2 because it's u16, not u8
};

struct VanillaBoxPokemon
{
    u32 personality;
    u32 otId;
    u8 nickname[VANILLA_POKEMON_NAME_LENGTH];
    u8 language;
    u8 isBadEgg:1;
    u8 hasSpecies:1;
    u8 isEgg:1;
    u8 blockBoxRS:1; // Unused, but Pok�mon Box Ruby & Sapphire will refuse to deposit a Pok�mon with this flag set
    u8 unused:4;
    u8 otName[PLAYER_NAME_LENGTH];
    u8 markings;
    u16 checksum;
    u16 unknown;

    union
    {
        u32 raw[(VANILLA_NUM_SUBSTRUCT_BYTES * 4) / 4]; // *4 because there are 4 substructs, /4 because it's u32, not u8
        union VanillaPokemonSubstruct substructs[4];
    } secure;
};

struct VanillaPokemon
{
    struct VanillaBoxPokemon box;
    u32 status;
    u8 level;
    u8 mail;
    u16 hp;
    u16 maxHP;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 spAttack;
    u16 spDefense;
};

bool32 ExpansionMonToVanillaMon(struct Pokemon *src, struct VanillaPokemon *dst);
bool32 VanillaMonToExpansion(struct VanillaPokemon *src, struct Pokemon *dst);

#endif
