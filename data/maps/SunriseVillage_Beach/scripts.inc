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
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_0
# 23 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 26 "data/maps/SunriseVillage_Beach/scripts.pory"
	switch VAR_FACING
# 27 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_SOUTH, SunriseVillage_Beach_EventScript_RivalSpeech_3
# 29 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_NORTH, SunriseVillage_Beach_EventScript_RivalSpeech_4
# 31 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_WEST, SunriseVillage_Beach_EventScript_RivalSpeech_5
# 33 "data/maps/SunriseVillage_Beach/scripts.pory"
	case DIR_EAST, SunriseVillage_Beach_EventScript_RivalSpeech_6
SunriseVillage_Beach_EventScript_RivalSpeech_1:
# 36 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 37 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject 1, DIR_WEST
# 38 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 39 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 41 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_1
# 46 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 48 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 49 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 51 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_2
# 60 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 62 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 63 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 66 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject 1, DIR_NORTH
# 67 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 69 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_3, MSGBOX_YESNO
# 74 "data/maps/SunriseVillage_Beach/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_Beach_EventScript_RivalSpeech_8
# 80 "data/maps/SunriseVillage_Beach/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_Beach_EventScript_RivalSpeech_9
# 80 "data/maps/SunriseVillage_Beach/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_Beach_EventScript_RivalSpeech_9
SunriseVillage_Beach_EventScript_RivalSpeech_7:
# 89 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalRaces
# 90 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 92 "data/maps/SunriseVillage_Beach/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_BEACH_RIVAL
# 93 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
# 94 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_BIGSIS_HOME
# 95 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
# 97 "data/maps/SunriseVillage_Beach/scripts.pory"
	removeobject 1
# 98 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end

SunriseVillage_Beach_EventScript_RivalSpeech_3:
# 28 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromTop
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_4:
# 30 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromBottom
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_5:
# 32 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromRight
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_6:
# 34 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_Beach_Movement_GoNextToRivalFromLeft
	goto SunriseVillage_Beach_EventScript_RivalSpeech_1

SunriseVillage_Beach_EventScript_RivalSpeech_8:
# 75 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_4, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_9:
# 81 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_5, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7


SunriseVillage_Beach_EventScript_Corsola::
# 104 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 105 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 106 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 107 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
# 108 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 112 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


SunriseVillage_Beach_EventScript_Corsola2::
# 117 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 118 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 119 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 120 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_WEAK
# 121 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola2_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 125 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


# 129 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromLeft:
# 130 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 131 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 132 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_left
# 133 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 136 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromTop:
# 137 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_left
# 138 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 141 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromRight:
# 142 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 143 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 144 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 147 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromBottom:
# 148 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 149 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 149 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 150 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 151 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 154 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalRaces:
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 155 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 156 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

SunriseVillage_Beach_EventScript_RivalSpeech_Text_0:
# 20 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "{PLAYER}{KUN}! Ya made it!\p"
	.string "Come on, sit down next to me!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_1:
# 42 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Remember when we were little and we\n"
	.string "used to fight each other to be the\l"
	.string "first to sit on this bench?\p"
	.string "You always won!\p"
	.string "…$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_2:
# 52 "data/maps/SunriseVillage_Beach/scripts.pory"
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

SunriseVillage_Beach_EventScript_RivalSpeech_Text_3:
# 70 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Look at me rambling! I'm sure everything\n"
	.string "is going to be just fine.\p"
	.string "Are you excited to become a Pokémon\n"
	.string "wielder?$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_4:
# 76 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "That's the spirit! Let's become the\n"
	.string "best wielders ever!\p"
	.string "Come on, the distribution's already\n"
	.string "started! Let's go to Elder Kaba's house!\p"
	.string "Race ya there!!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_5:
# 82 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Don't be silly! I know you'll become\n"
	.string "super strong in no time!\p"
	.string "Come on, the distribution's already\n"
	.string "started! Let's go to Elder Kaba's house!\p"
	.string "Race ya there!!$"

SunriseVillage_Beach_EventScript_Corsola_Text_0:
# 109 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Krr!$"

SunriseVillage_Beach_EventScript_Corsola2_Text_0:
# 122 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Laaa!$"
