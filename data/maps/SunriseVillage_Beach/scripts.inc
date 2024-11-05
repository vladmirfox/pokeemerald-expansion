SunriseVillage_Beach_MapScripts::
# 2 "data/maps/SunriseVillage_Beach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunriseVillage_Beach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SunriseVillage_Beach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunriseVillage_Beach/scripts.pory"
	goto_if_unset FLAG_HIDE_SUNRISE_BEACH_RIVAL, SunriseVillage_Beach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunriseVillage_Beach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunriseVillage_Beach/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SunriseVillage_Beach_EventScript_RivalSpeech::
# 12 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 13 "data/maps/SunriseVillage_Beach/scripts.pory"
	playse SE_PIN
# 14 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 15 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 16 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 17 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 18 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 19 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 20 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_1
# 24 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 27 "data/maps/SunriseVillage_Beach/scripts.pory"
	switch VAR_FACING
# 28 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_SOUTH, SunriseVillage_Beach_EventScript_RivalSpeech_3
# 30 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_NORTH, SunriseVillage_Beach_EventScript_RivalSpeech_4
# 32 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_WEST, SunriseVillage_Beach_EventScript_RivalSpeech_5
# 34 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_EAST, SunriseVillage_Beach_EventScript_RivalSpeech_6
SunriseVillage_Beach_EventScript_RivalSpeech_1:
# 37 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 38 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalSitsOnBench
# 39 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 41 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 42 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_2
# 47 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 49 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 50 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 52 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 53 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_3
# 62 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 64 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay 48
# 66 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 69 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 70 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_4
# 75 "data/maps/SunriseVillage_Beach/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_Beach_EventScript_RivalSpeech_Text_5, SunriseVillage_Beach_EventScript_RivalSpeech_Text_6, SunriseVillage_Beach_EventScript_RivalSpeech_Text_7
# 87 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 88 "data/maps/SunriseVillage_Beach/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 0, SunriseVillage_Beach_EventScript_RivalSpeech_9
# 93 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 1, SunriseVillage_Beach_EventScript_RivalSpeech_10
# 97 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 2, SunriseVillage_Beach_EventScript_RivalSpeech_11
SunriseVillage_Beach_EventScript_RivalSpeech_7:
# 103 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 105 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay 48
# 108 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_0x8004, 1
# 109 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_0x8005, 1
# 110 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_0x8006, 20
# 111 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_0x8007, 5
# 112 "data/maps/SunriseVillage_Beach/scripts.pory"
	special ShakeCamera
# 113 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay 16
# 114 "data/maps/SunriseVillage_Beach/scripts.pory"
	playse SE_PIN
# 115 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalSurprisedByQuake
# 116 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay 16
# 117 "data/maps/SunriseVillage_Beach/scripts.pory"
	playse SE_PIN
# 118 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_PlayerSurprisedByQuake
# 119 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitstate
# 120 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 121 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 1
# 122 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay 48
# 125 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 126 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 127 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 129 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 130 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_11
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_Beach_EventScript_RivalSpeech_Text_12, SunriseVillage_Beach_EventScript_RivalSpeech_Text_13
# 145 "data/maps/SunriseVillage_Beach/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 0, SunriseVillage_Beach_EventScript_RivalSpeech_14
# 152 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 1, SunriseVillage_Beach_EventScript_RivalSpeech_15
SunriseVillage_Beach_EventScript_RivalSpeech_12:
# 159 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 161 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay 48
# 163 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalSeesDistribution
# 164 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 166 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 167 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_16
# 171 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 175 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalRaces
# 176 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 178 "data/maps/SunriseVillage_Beach/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_BEACH_RIVAL
# 179 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
# 180 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_BIGSIS_HOME
# 181 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
# 183 "data/maps/SunriseVillage_Beach/scripts.pory"
	removeobject 1
# 184 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end

SunriseVillage_Beach_EventScript_RivalSpeech_3:
# 29 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromTop
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_4:
# 31 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromBottom
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_5:
# 33 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromRight
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_6:
# 35 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromLeft
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_9:
# 90 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_8
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_10:
# 94 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_9
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_11:
# 98 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_10
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_14:
# 147 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_14
	goto SunriseVillage_Beach_EventScript_RivalSpeech_12

SunriseVillage_Beach_EventScript_RivalSpeech_15:
# 153 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_15
	goto SunriseVillage_Beach_EventScript_RivalSpeech_12


# 188 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_PlayerSurprisedByQuake:
# 189 "data/maps/SunriseVillage_Beach/scripts.pory"
	emote_exclamation_mark
# 190 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 191 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_right
# 192 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 193 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_up
# 194 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 195 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_right
# 196 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 197 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_down
# 198 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_left
# 200 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 201 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_up
	step_end

# 204 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSurprisedByQuake:
# 205 "data/maps/SunriseVillage_Beach/scripts.pory"
	emote_exclamation_mark
# 206 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 207 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_down
# 208 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 209 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_up
# 210 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 211 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_left
# 212 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 213 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_right
# 214 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 215 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_up
# 216 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 217 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_down
	step_end

SunriseVillage_Beach_EventScript_Corsola::
# 222 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 223 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 224 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 225 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
# 226 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola_Text_0
# 229 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 230 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


SunriseVillage_Beach_EventScript_Corsola2::
# 235 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 236 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 237 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 238 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_WEAK
# 239 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola2_Text_0
# 242 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 243 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


# 247 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSitsOnBench:
# 248 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 249 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 249 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 249 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 249 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 249 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 250 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 253 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromLeft:
# 254 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 255 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 256 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 257 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 260 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromTop:
# 261 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 262 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 265 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromRight:
# 266 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 267 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 268 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 271 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromBottom:
# 272 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 273 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 273 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 274 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 275 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 278 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSeesDistribution:
# 279 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_right
# 280 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 281 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 282 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 283 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_player
# 284 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 287 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalRaces:
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 288 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 289 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

SunriseVillage_Beach_EventScript_RivalSpeech_Text_0:
# 19 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "{RIVAL}$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_1:
# 21 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "{PLAYER}! Ya made it!\p"
	.string "Come on, sit down next to me!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_2:
# 43 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Remember when we were little and we\n"
	.string "used to fight each other to be the\l"
	.string "first to sit on this bench?\p"
	.string "You always won!\p"
	.string "…$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_3:
# 54 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Hey, look!\p"
	.string "You can see Yifu City very clearly\n"
	.string "today, it's gorgeous!\p"
	.string "…\p"
	.string "I guess I'm feeling a little nervous\n"
	.string "about all this.\p"
	.string "The Pokémon getting restless in the\n"
	.string "Ginko Woods…\p"
	.string "Having my own Pokémon to care for…\p"
	.string "It feels like everything's about to\n"
	.string "change, though I'm not sure how yet.$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_4:
# 71 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Look at me rambling! I'm sure\n"
	.string "everything is going to be just fine.\p"
	.string "Are you excited to become a Pokémon\n"
	.string "wielder?$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_5:
# 82 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "I'm thrilled!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_6:
# 83 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "I'm terrified!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_7:
# 84 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "It's whatever.$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_8:
# 91 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "That's the spirit! Let's become the\n"
	.string "best wielders ever!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_9:
# 95 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Don't be silly, you dumdum! I know\n"
	.string "you'll become super strong in no time!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_10:
# 99 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Oh come on, I know you're just\n"
	.string "pretending not to be excited!\p"
	.string "This is going to be fun, so cheer up!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_11:
# 131 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "You alright, {PLAYER}?$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_12:
# 141 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "What was that?!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_13:
# 142 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Fine and dandy!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_14:
# 148 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "The volcano's acting up again!\p"
	.string "Whew, the quake was bigger this time…\p"
	.string "… … …$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_15:
# 154 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Whew! Volcano's acting up again, huh…\p"
	.string "The quake was bigger this time…\p"
	.string "… … …$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_16:
# 168 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Oh Shuckles, the distribution's\n"
	.string "already started! Let's go to Elder\l"
	.string "Kaba's house!\p"
	.string "Race ya there!!$"

SunriseVillage_Beach_EventScript_Corsola_Text_0:
# 227 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Krr!$"

SunriseVillage_Beach_EventScript_Corsola2_Text_0:
# 240 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Laaa!$"
