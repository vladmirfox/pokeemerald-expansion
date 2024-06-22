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
	applymovement 1, Common_Movement_Delay48
# 65 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 68 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 69 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 71 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 72 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_4
# 77 "data/maps/SunriseVillage_Beach/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_Beach_EventScript_RivalSpeech_Text_5, SunriseVillage_Beach_EventScript_RivalSpeech_Text_6, SunriseVillage_Beach_EventScript_RivalSpeech_Text_7
# 89 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 90 "data/maps/SunriseVillage_Beach/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 0, SunriseVillage_Beach_EventScript_RivalSpeech_9
# 95 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 1, SunriseVillage_Beach_EventScript_RivalSpeech_10
# 99 "data/maps/SunriseVillage_Beach/scripts.pory"
	case 2, SunriseVillage_Beach_EventScript_RivalSpeech_11
SunriseVillage_Beach_EventScript_RivalSpeech_7:
# 105 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 107 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalSeesDistribution
# 108 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 110 "data/maps/SunriseVillage_Beach/scripts.pory"
	speakername SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 111 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_11
# 115 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 118 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalRaces
# 119 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 121 "data/maps/SunriseVillage_Beach/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_BEACH_RIVAL
# 122 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
# 123 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_BIGSIS_HOME
# 124 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
# 126 "data/maps/SunriseVillage_Beach/scripts.pory"
	removeobject 1
# 127 "data/maps/SunriseVillage_Beach/scripts.pory"
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
# 92 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_8
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_10:
# 96 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_9
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_11:
# 100 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_10
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7


SunriseVillage_Beach_EventScript_Corsola::
# 133 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 135 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 136 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
# 137 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola_Text_0
# 140 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 141 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


SunriseVillage_Beach_EventScript_Corsola2::
# 146 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 147 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 148 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 149 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_WEAK
# 150 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola2_Text_0
# 153 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 154 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


# 158 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSitsOnBench:
# 159 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 160 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 160 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 160 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 160 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 161 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 164 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromLeft:
# 165 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 166 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 167 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 168 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 171 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromTop:
# 172 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 176 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromRight:
# 177 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 178 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 179 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 182 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromBottom:
# 183 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 184 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 184 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 185 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 186 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 189 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSeesDistribution:
# 190 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_right
# 191 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 192 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 193 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 194 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_player
# 195 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 198 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalRaces:
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 199 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 200 "data/maps/SunriseVillage_Beach/scripts.pory"
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
# 73 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Look at me rambling! I'm sure\n"
	.string "everything is going to be just fine.\p"
	.string "Are you excited to become a Pokémon\n"
	.string "wielder?$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_5:
# 84 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "I'm thrilled!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_6:
# 85 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "I'm terrified!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_7:
# 86 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "It's whatever.$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_8:
# 93 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "That's the spirit! Let's become the\n"
	.string "best wielders ever!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_9:
# 97 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Don't be silly, you dumdum! I know\n"
	.string "you'll become super strong in no time!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_10:
# 101 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Oh come on, I know you're just\n"
	.string "pretending not to be excited!\p"
	.string "This is going to be fun, so cheer up!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_11:
# 112 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Oh Shuckles, the distribution's\n"
	.string "already started! Let's go to Elder\l"
	.string "Kaba's house!\p"
	.string "Race ya there!!$"

SunriseVillage_Beach_EventScript_Corsola_Text_0:
# 138 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Krr!$"

SunriseVillage_Beach_EventScript_Corsola2_Text_0:
# 151 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Laaa!$"
