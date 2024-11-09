SunriseVillage_EldersHouse_MapScripts::
# 16 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_lt SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_TEMP_1
	return

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script_2 VAR_SUNRISE_VILLAGE_INTRO_STATE, 4, SunriseVillage_EldersHouse_EventScript_DistributionCutscene
	.2byte 0


SunriseVillage_EldersHouse_EventScript_DistributionCutscene::
# 32 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 34 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder
# 35 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 39 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 40 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1
# 48 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 49 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderTurnsToThink
# 50 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 51 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 52 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2
# 60 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 62 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	clearflag FLAG_TEMP_1
# 64 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensFirstBall
# 65 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 66 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 67 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 68 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 69 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 6
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 71 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 73 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensSecondBall
# 74 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 75 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 76 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 77 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 78 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 7
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 80 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 82 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderOpensThirdBall
# 83 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 85 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 86 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 87 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	addobject 8
# 88 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 30
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderReturnsToInitialPos
# 92 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_LEDGE
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalIsDeslighted
# 96 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 97 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 98 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4
# 101 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 103 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 104 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 105 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_5
# 109 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 112 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 5
# 113 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 116 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderOpensFirstBall:
# 117 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 118 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 119 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
	step_end

# 122 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderOpensSecondBall:
# 123 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 124 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
	step_end

# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderOpensThirdBall:
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 130 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 131 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
	step_end

# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderReturnsToInitialPos:
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 136 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
	step_end

# 139 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalIsDeslighted:
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	jump_in_place_up
	step_end

SunriseVillage_EldersHouse_Event_Elder::
# 144 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 145 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
SunriseVillage_EldersHouse_Event_Elder_1:
# 156 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1


SunriseVillage_EldersHouse_EventScript_TryToLeave::
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 166 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_EventScript_TryToEnterOtherRoom::
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_NORTH
# 175 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 176 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 179 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 180 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 185 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 190 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 192 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 195 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 196 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 210 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 213 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 217 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 224 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 231 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry VAR_TEMP_1, CRY_MODE_NORMAL
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 234 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 235 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 237 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 242 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 242 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 248 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 284 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 286 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 287 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 289 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 293 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 300 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 309 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 320 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 324 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6
# 329 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 331 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 332 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 339 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 346 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7
# 363 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 366 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 368 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 369 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 370 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 374 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 376 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 379 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9
# 382 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 384 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 397 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 399 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 400 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 401 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 403 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 404 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 408 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 409 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 411 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15
# 424 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 430 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 434 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 439 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 443 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 449 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19
# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalPreBattlePose
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 458 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 225 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
# 228 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 243 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 244 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 249 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 260 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 262 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 271 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 277 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 278 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 282 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 295 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 297 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 304 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 306 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 311 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 313 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 315 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 251 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_FLIPPER_SPLASH, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 255 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 333 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 337 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 338 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 340 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 341 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 342 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 344 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 345 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 347 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 350 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 351 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 352 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 296 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 298 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 303 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 305 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 307 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 312 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 314 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 316 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 264 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 7
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 6
# 269 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 8
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16
# 428 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 435 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


# 464 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalPreBattlePose:
# 467 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_player
	step_end

SunriseVillage_EldersHouse_EventScript_PostBattle::
# 471 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	special HealPlayerParty
# 472 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 473 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunriseVillage_EldersHouse_EventScript_PostBattle_2
# 484 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 485 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_PostBattle_Text_1
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
SunriseVillage_EldersHouse_EventScript_PostBattle_1:
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq SunriseVillage_EldersHouse_EventScript_PostBattle_8
SunriseVillage_EldersHouse_EventScript_PostBattle_7:
# 501 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeaves
SunriseVillage_EldersHouse_EventScript_PostBattle_5:
# 504 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 505 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 506 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_EXIT
# 508 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 509 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 16
# 511 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 514 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	resumefakertc
# 516 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_EventScript_PostBattle_2:
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_PostBattle_Text_0
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_EventScript_PostBattle_1

SunriseVillage_EldersHouse_EventScript_PostBattle_6:
# 499 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_PostBattle_5

SunriseVillage_EldersHouse_EventScript_PostBattle_8:
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq SunriseVillage_EldersHouse_EventScript_PostBattle_6
	goto SunriseVillage_EldersHouse_EventScript_PostBattle_7


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 520 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 521 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 523 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 525 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 529 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_PostBattle
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 524 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 526 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1


SunriseVillage_EldersHouse_EventScript_Joltik::
# 533 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 534 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 535 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 536 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playmoncry SPECIES_JOLTIK, CRY_MODE_NORMAL
# 537 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_Joltik_Text_0
# 540 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmoncry
# 541 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	end


# 545 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 546 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 547 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 548 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 551 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 552 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 553 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 554 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 555 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 558 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 559 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 560 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 561 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 562 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 563 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 566 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 567 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 568 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 569 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 570 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 571 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 575 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 576 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 577 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 578 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 579 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 580 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 583 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 584 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 585 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 586 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 587 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 588 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 591 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 592 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 592 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 593 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 594 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 595 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 596 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 597 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 598 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 601 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeaves:
# 602 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 602 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 603 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 607 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 608 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 609 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 609 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 610 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 613 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 614 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 614 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 615 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 616 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 617 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 618 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 621 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 622 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 623 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 624 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 625 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 628 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 629 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 629 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 629 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 630 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 631 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 634 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 635 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 636 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 637 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 640 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 641 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 642 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 642 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 643 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 643 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 644 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 645 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 648 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 649 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 650 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 650 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 651 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 651 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 652 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 653 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 654 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 657 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 658 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 658 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 659 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 660 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 661 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 664 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 665 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 666 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 666 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 667 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 668 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 669 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0:
# 39 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1:
# 41 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, Natsuki.\nYou are late. Why am I surprised?\p"
	.string "I always have to run after you two!\nNow stay still for a minute and\llisten closely!\p"
	.string "As you have heard, the woods, and even\nthe roads, are no longer safe.\p"
	.string "We don't yet know why, but the wild\nPokémon that usually hide in the\ltall grass and live peacefully\lalongside men have started behaving\laggressively.\p"
	.string "There are reports of travelers being\nattacked from several nearby villages.\p"
	.string "This is all very worrying…$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2:
# 53 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Which is why!\p"
	.string "The Toku council has decided that,\n"
	.string "for the time being, the best way to\l"
	.string "handle this is to use the Pokémon\l"
	.string "themselves as a means of protection!\p"
	.string "There were very few experienced\n"
	.string "Pokémon wielders in Toku until now.\l"
	.string "This is about change.\p"
	.string "With a trained Pokémon by your side,\n"
	.string "you'll be able to defend yourselves\l"
	.string "on your own.\p"
	.string "Without further ado, please carefully\n"
	.string "choose your new companion!$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3:
# 97 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Natsuki$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4:
# 98 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Woah! Cool.$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_5:
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, choose yours first!\n"
	.string "I don't mind being second pick.$"

SunriseVillage_EldersHouse_Event_Elder_Text_0:
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon adventure going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely.\n"
	.string "No takebacks.$"

SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0:
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Where do you think you're going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 226 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon.\n"
	.string "Better leave this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Alright. I'm taking this one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 358 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Now that you have your own Pokémon,\n"
	.string "you two are officially\l"
	.string "Pokémon wielders!\p"
	.string "The more wielders there are,\n"
	.string "the deeper our understanding\l"
	.string "of Pokémon will be.\p"
	.string "We need to study these creatures\n"
	.string "from up close to find the root of\l"
	.string "this issue.\p"
	.string "Actually, there's something\n"
	.string "I wanted to ask you.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 369 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 380 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I call this the “Pokédex”.\n"
	.string "It is an encyclopedia containing\l"
	.string "vital information about Pokémon\l"
	.string "from the whole region!\p"
	.string "Except it's, well, empty.\n"
	.string "That's where you come in!\p"
	.string "Explore Toku and fill its pages with\n"
	.string "your findings!\p"
	.string "You can start by going all the way to\n"
	.string "Silveridge, north of here in the\l"
	.string "mountains.\p"
	.string "Another Elder lives there and,\n"
	.string "hopefully, has more information\l"
	.string "as to why the Pokémon are lashing\l"
	.string "out.\p"
	.string "Could you deliver him this letter?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11:
# 399 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 404 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Understood, Grandma Kaba.\n"
	.string "We're going adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}… Are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Totally!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 421 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Absolutely not!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 426 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 436 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18:
# 440 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19:
# 450 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Let's see what our brand-new Pokémon\l"
	.string "are capable of!\p"
	.string "I request an official Pokémon\n"
	.string "wielder battle!$"

SunriseVillage_EldersHouse_EventScript_PostBattle_Text_0:
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Oh, man!\n"
	.string "That was the most fun I've ever had!\p"
	.string "{PLAYER}!\n"
	.string "We're now officially rivals!\p"
	.string "I went easy on you this time, but\n"
	.string "next time… You'll see!\p"
	.string "I'm going home to pack some things.\p"
	.string "See ya later, Feraligatr.$"

SunriseVillage_EldersHouse_EventScript_PostBattle_Text_1:
# 486 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Oh, man!\n"
	.string "That was the most fun I've ever had!\p"
	.string "{PLAYER}!\n"
	.string "We're now officially rivals!\p"
	.string "You better work hard to keep up!\p"
	.string "I'm going home to pack some things.\p"
	.string "See ya later, Feraligatr.$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Looks like I lost!$"

SunriseVillage_EldersHouse_EventScript_Joltik_Text_0:
# 538 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Fss!$"
