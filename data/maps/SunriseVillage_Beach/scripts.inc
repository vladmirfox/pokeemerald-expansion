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
	applymovement 1, SunriseVillage_Beach_Movement_RivalSitsOnBench
# 38 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 40 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_1
# 45 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 47 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 48 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 50 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_2
# 59 "data/maps/SunriseVillage_Beach/scripts.pory"
	closemessage
# 61 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 62 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 65 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/SunriseVillage_Beach/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 68 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_3, MSGBOX_YESNO
# 73 "data/maps/SunriseVillage_Beach/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_Beach_EventScript_RivalSpeech_8
# 77 "data/maps/SunriseVillage_Beach/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_Beach_EventScript_RivalSpeech_9
# 77 "data/maps/SunriseVillage_Beach/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_Beach_EventScript_RivalSpeech_9
SunriseVillage_Beach_EventScript_RivalSpeech_7:
# 83 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalSeesDistribution
# 84 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 86 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_6, MSGBOX_AUTOCLOSE
# 92 "data/maps/SunriseVillage_Beach/scripts.pory"
	applymovement 1, SunriseVillage_Beach_Movement_RivalRaces
# 93 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmovement 0
# 95 "data/maps/SunriseVillage_Beach/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_BEACH_RIVAL
# 96 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
# 97 "data/maps/SunriseVillage_Beach/scripts.pory"
	clearflag FLAG_HIDE_BIGSIS_HOME
# 98 "data/maps/SunriseVillage_Beach/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
# 100 "data/maps/SunriseVillage_Beach/scripts.pory"
	removeobject 1
# 101 "data/maps/SunriseVillage_Beach/scripts.pory"
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
# 74 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_4, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7

SunriseVillage_Beach_EventScript_RivalSpeech_9:
# 78 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_RivalSpeech_Text_5, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Beach_EventScript_RivalSpeech_7


SunriseVillage_Beach_EventScript_Corsola::
# 107 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 108 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 109 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 110 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
# 111 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 115 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


SunriseVillage_Beach_EventScript_Corsola2::
# 120 "data/maps/SunriseVillage_Beach/scripts.pory"
	lock
# 121 "data/maps/SunriseVillage_Beach/scripts.pory"
	faceplayer
# 122 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitse
# 123 "data/maps/SunriseVillage_Beach/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_WEAK
# 124 "data/maps/SunriseVillage_Beach/scripts.pory"
	msgbox SunriseVillage_Beach_EventScript_Corsola2_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/SunriseVillage_Beach/scripts.pory"
	waitmoncry
# 128 "data/maps/SunriseVillage_Beach/scripts.pory"
	release
	end


# 132 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSitsOnBench:
# 133 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 134 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 135 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 138 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromLeft:
# 139 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 140 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 141 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 145 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromTop:
# 146 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_in_place_faster_left
# 147 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 150 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromRight:
# 151 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 152 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 153 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 156 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_GoNextToRivalFromBottom:
# 157 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_right
# 158 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 158 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_up
# 159 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_left
# 160 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 163 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalSeesDistribution:
# 164 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_right
# 165 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 166 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 167 "data/maps/SunriseVillage_Beach/scripts.pory"
	delay_16
# 168 "data/maps/SunriseVillage_Beach/scripts.pory"
	face_player
# 169 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

# 172 "data/maps/SunriseVillage_Beach/scripts.pory"
SunriseVillage_Beach_Movement_RivalRaces:
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 173 "data/maps/SunriseVillage_Beach/scripts.pory"
	walk_fast_right
# 174 "data/maps/SunriseVillage_Beach/scripts.pory"
	step_end

SunriseVillage_Beach_EventScript_RivalSpeech_Text_0:
# 20 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "{PLAYER}{KUN}! Ya made it!\p"
	.string "Come on, sit down next to me!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_1:
# 41 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Remember when we were little and we\n"
	.string "used to fight each other to be the\l"
	.string "first to sit on this bench?\p"
	.string "You always won!\p"
	.string "…$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_2:
# 51 "data/maps/SunriseVillage_Beach/scripts.pory"
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
# 69 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Look at me rambling! I'm sure everything\n"
	.string "is going to be just fine.\p"
	.string "Are you excited to become a Pokémon\n"
	.string "wielder?$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_4:
# 75 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "That's the spirit! Let's become the\n"
	.string "best wielders ever!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_5:
# 79 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Don't be silly, you dumdum! I know you'll\n"
	.string "become super strong in no time!$"

SunriseVillage_Beach_EventScript_RivalSpeech_Text_6:
# 87 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Oh Shuckles, the distribution's already\n"
	.string "started! Let's go to Elder Kaba's house!\p"
	.string "Race ya there!!$"

SunriseVillage_Beach_EventScript_Corsola_Text_0:
# 112 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Krr!$"

SunriseVillage_Beach_EventScript_Corsola2_Text_0:
# 125 "data/maps/SunriseVillage_Beach/scripts.pory"
	.string "Laaa!$"
