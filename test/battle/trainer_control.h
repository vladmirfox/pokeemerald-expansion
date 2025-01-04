//
// DO NOT MODIFY THIS FILE! It is auto-generated from test/battle/trainer_control.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'test/battle/trainer_control.h' to remove #line markers.
//

#line 1 "test/battle/trainer_control.party"

#line 1
    [DIFFICULTY_NORMAL][0] =
    {
#line 2
        .trainerName = _("Test1"),
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9
            .nickname = COMPOUND_STRING("Bubbles"),
#line 9
            .species = SPECIES_WOBBUFFET,
#line 9
            .gender = TRAINER_MON_FEMALE,
#line 9
            .heldItem = ITEM_ASSAULT_VEST,
#line 14
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 13
            .iv = TRAINER_PARTY_IVS(25, 26, 27, 28, 29, 30),
#line 12
            .ability = ABILITY_TELEPATHY,
#line 11
            .lvl = 67,
#line 17
            .ball = ITEM_MASTER_BALL,
#line 15
            .friendship = 42,
#line 10
            .nature = NATURE_HASTY,
#line 16
            .isShiny = TRUE,
#line 18
            .dynamaxLevel = 5,
            .shouldUseDynamax = TRUE,
            .moves = {
#line 19
                MOVE_AIR_SLASH,
                MOVE_BARRIER,
                MOVE_SOLAR_BEAM,
                MOVE_EXPLOSION,
            },
            },
            {
#line 24
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 27
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 26
            .ability = ABILITY_SHADOW_TAG,
#line 25
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 29
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 30
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 33
#line 40
    [DIFFICULTY_NORMAL][1] =
    {
#line 34
        .trainerName = _("Test2"),
#line 35
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 36
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 38
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 39
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 42
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 44
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 43
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 45
#line 52
    [DIFFICULTY_HARD][1] =
    {
#line 46
        .trainerName = _("Test2"),
#line 47
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 48
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 50
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 51
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 54
            .species = SPECIES_YVELTAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 56
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 55
            .lvl = 99,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 57
#line 64
    [DIFFICULTY_NORMAL][2] =
    {
#line 58
        .trainerName = _("Test2"),
#line 59
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 60
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 62
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 63
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 66
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 68
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 67
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 69
#line 76
    [DIFFICULTY_EASY][2] =
    {
#line 70
        .trainerName = _("Test2"),
#line 71
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 72
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 74
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 75
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 78
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 80
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 79
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 81
#line 88
    [DIFFICULTY_HARD][2] =
    {
#line 82
        .trainerName = _("Test2"),
#line 83
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 84
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 86
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 87
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 90
            .species = SPECIES_ARCEUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 92
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 91
            .lvl = 99,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 93
    [DIFFICULTY_NORMAL][3] =
    {
#line 94
        .trainerName = _("Test3"),
#line 95
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 96
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 98
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 99
        .doubleBattle = FALSE,
#line 100
        .partySize = 1,
        .poolSize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 102
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 103
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 104
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 105
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 106
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 107
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 108
            .species = SPECIES_MEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 109
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 110
    [DIFFICULTY_NORMAL][4] =
    {
#line 111
        .trainerName = _("Test4"),
#line 112
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 113
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 115
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 116
        .doubleBattle = FALSE,
#line 117
        .partySize = 3,
        .poolSize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 120
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 121
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 123
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 122
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 124
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 126
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 125
            .tags = MON_POOL_TAG_ACE,
            },
            {
#line 127
            .species = SPECIES_MEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 128
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 129
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 131
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 130
            .tags = MON_POOL_TAG_ACE,
            },
            {
#line 132
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 134
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 133
            .tags = MON_POOL_TAG_LEAD,
            },
        },
    },
#line 135
    [DIFFICULTY_NORMAL][5] =
    {
#line 136
        .trainerName = _("Test5"),
#line 137
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 138
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 141
        .doubleBattle = TRUE,
#line 143
        .poolRuleIndex = POOL_RULESET_WEATHER_DOUBLES,
#line 142
        .partySize = 3,
        .poolSize = 10,
        .party = (const struct TrainerMon[])
        {
            {
#line 145
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 147
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 146
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 148
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 150
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 149
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 151
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 153
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 152
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_SETTER,
            },
            {
#line 154
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 156
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 155
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_ABUSER,
            },
            {
#line 157
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 159
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 158
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_SETTER,
            },
            {
#line 160
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 162
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 161
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_ABUSER,
            },
            {
#line 163
            .species = SPECIES_MEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 164
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 166
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 168
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 167
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 169
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 170
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 171
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 172
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 173
    [DIFFICULTY_NORMAL][6] =
    {
#line 174
        .trainerName = _("Test6"),
#line 175
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 176
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 178
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 179
        .doubleBattle = FALSE,
#line 181
        .poolRuleIndex = POOL_RULESET_BASIC,
#line 180
        .partySize = 2,
        .poolSize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 183
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 184
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 186
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 188
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 187
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 189
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 191
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 190
            .tags = MON_POOL_TAG_LEAD,
            },
        },
    },
#line 192
    [DIFFICULTY_NORMAL][7] =
    {
#line 193
        .trainerName = _("Test1"),
#line 194
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 195
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 198
        .doubleBattle = FALSE,
#line 200
        .poolRuleIndex = POOL_RULESET_BASIC,
#line 201
        .poolPruneIndex = POOL_PRUNE_TEST,
#line 199
        .partySize = 2,
        .poolSize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 203
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 204
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 205
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 207
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 206
            .tags = MON_POOL_TAG_LEAD,
            },
            {
#line 208
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 209
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 210
    [DIFFICULTY_NORMAL][7] =
    {
#line 211
        .trainerName = _("Test1"),
#line 212
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 213
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 215
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 216
        .doubleBattle = FALSE,
#line 218
        .poolRuleIndex = POOL_RULESET_BASIC,
#line 219
        .poolPickIndex = POOL_PICK_LOWEST,
#line 217
        .partySize = 2,
        .poolSize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 221
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 223
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 222
            .tags = MON_POOL_TAG_ACE,
            },
            {
#line 224
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 225
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 226
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 228
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 227
            .tags = MON_POOL_TAG_LEAD,
            },
        },
    },
