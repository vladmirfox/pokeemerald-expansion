SunriseVillage_EldersHouse_MapScripts::
# 8 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

SunriseVillage_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	map_script_2 VAR_SUNRISE_VILLAGE_INTRO_STATE, 4, SunriseVillage_EldersHouse_EventScript_DistributionCutscene
	.2byte 0


SunriseVillage_EldersHouse_EventScript_DistributionCutscene::
# 17 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 19 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder
# 20 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 24 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 25 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1
# 32 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 33 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderTurnsToThink
# 34 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 35 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 36 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2
# 44 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 47 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 48 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 50 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4
# 51 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 52 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 53 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 55 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 5
# 56 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Rival::
# 60 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 61 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 62 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 63 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Rival_2
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_1
# 73 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 74 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
SunriseVillage_EldersHouse_Event_Rival_1:
# 76 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Rival_2:
# 64 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_0
# 68 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	goto SunriseVillage_EldersHouse_Event_Rival_1


SunriseVillage_EldersHouse_Event_Elder::
# 80 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 81 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 82 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 83 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Elder_5
# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_2
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
SunriseVillage_EldersHouse_Event_Elder_1:
# 98 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 85 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0
# 86 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1

SunriseVillage_EldersHouse_Event_Elder_5:
# 90 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Elder_1


SunriseVillage_EldersHouse_EventScript_TryToLeave::
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 103 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 104 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 107 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 109 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 113 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 114 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 115 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 118 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 119 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 119 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 120 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 123 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 124 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 126 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 127 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 127 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 132 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 133 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 139 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 141 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 142 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 148 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 170 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 170 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 176 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 209 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 214 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 217 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 225 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 234 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 247 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 249 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 256 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 269 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 278 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7
# 285 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 287 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 288 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 290 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 293 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 295 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 296 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 298 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 300 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9
# 304 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 306 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 308 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 309 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10
# 317 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 319 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 321 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 323 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 325 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 326 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 329 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 330 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 331 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 333 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15
# 346 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 352 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 354 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 355 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 361 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 367 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 370 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19
# 375 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 377 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 380 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
# 157 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 166 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 171 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 172 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 177 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 178 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 180 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 185 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 188 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 190 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 202 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 207 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 222 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 226 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 229 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 231 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 235 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 179 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_POWDER_SNOW, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 183 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 260 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 261 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 262 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 264 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 271 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 221 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 223 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 228 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 230 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 237 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 241 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 192 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 193 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 195 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 196 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 347 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16
# 350 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 384 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 385 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 389 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 393 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 394 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1
# 401 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 404 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq SunriseVillage_EldersHouse_EventScript_RivalBattle_9
SunriseVillage_EldersHouse_EventScript_RivalBattle_8:
# 408 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeaves
SunriseVillage_EldersHouse_EventScript_RivalBattle_6:
# 411 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 414 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_DOOR
# 415 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 416 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay16
# 418 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_7:
# 406 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_9:
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq SunriseVillage_EldersHouse_EventScript_RivalBattle_7
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_8


# 423 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 424 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 426 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 430 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 431 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 436 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 437 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 438 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 439 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 440 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 444 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 446 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 449 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 454 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 457 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 458 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 462 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 463 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 464 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 465 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 466 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 469 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 470 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 470 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 471 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 472 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 473 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 479 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeaves:
# 480 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 480 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 485 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 486 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 487 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 487 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 488 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 491 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 493 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 494 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 495 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 496 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 499 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 500 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 501 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 502 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 503 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 506 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 508 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 509 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 512 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 513 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 514 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 515 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 518 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 519 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 520 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 520 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 521 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 521 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 523 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 526 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 527 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 528 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 528 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 529 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 529 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 530 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 531 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 532 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 535 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 536 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 536 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 537 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 538 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 539 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 542 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 543 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 544 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 544 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 545 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 546 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 547 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0:
# 24 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1:
# 26 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, {RIVAL}.\n"
	.string "You are late. Why am I surprised?\p"
	.string "I always have to run after you two!\n"
	.string "Now stay still for a minute and listen\l"
	.string "closely!\p"
	.string "As you have heard, the woods, and\n"
	.string "even the roads, are no longer safe.\p"
	.string "We don't yet know the reason, but the\n"
	.string "wild Pokémon that usually hide in the\l"
	.string "tall grass and live peacefully\l"
	.string "alongside men have started behaving\l"
	.string "aggressively.\p"
	.string "There are reports of travelers being\n"
	.string "attacked from several nearby\l"
	.string "villages. This is all very worrying…$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2:
# 37 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Which is why the Toku council has\n"
	.string "decided that, for the time being, the\l"
	.string "best way to handle this is to use the\l"
	.string "Pokémon themselves as a means of\l"
	.string "protection!\p"
	.string "There were very few experienced\n"
	.string "Pokémon wielders in Toku until now.\p"
	.string "This is about to change.\p"
	.string "More and more, people will be fighting\n"
	.string "alongside their own companion.\p"
	.string "With a domesticated Pokémon by your\n"
	.string "side, you'll be able to defend\l"
	.string "yourselves even when you're on your\l"
	.string "own.\p"
	.string "Without further ado, please choose\n"
	.string "one of the three creatures in the\l"
	.string "Pokéballs behind me!$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3:
# 49 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_4:
# 50 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "C'mon {PLAYER}, pick yours, quick\n"
	.string "quick!$"

SunriseVillage_EldersHouse_Event_Rival_Text_0:
# 65 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You alright?\p"
	.string "C'mon, let's fight again, and give it\n"
	.string "your all this time!$"

SunriseVillage_EldersHouse_Event_Rival_Text_1:
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What are you waiting for? Choose one\n"
	.string "already!$"

SunriseVillage_EldersHouse_Event_Elder_Text_0:
# 85 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon research going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 90 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely. No\n"
	.string "takebacks.$"

SunriseVillage_EldersHouse_Event_Elder_Text_2:
# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You're free to battle here, but please\n"
	.string "don't break anything…$"

SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0:
# 105 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Where do you think you're going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 155 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon. Better\n"
	.string "leave this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 166 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Alright, I'm taking this one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Now that you have your own Pokémon,\n"
	.string "you two are officially Pokémon\l"
	.string "wielders!\p"
	.string "The more wielders there are, the\n"
	.string "deeper our understanding of Pokémon\l"
	.string "will be.\p"
	.string "We need to study these creatures\n"
	.string "from up close to find the root of this\l"
	.string "issue.\p"
	.string "Actually, there's something I wanted\n"
	.string "to ask you.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 291 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I call this the “Pokédex”. It is an\n"
	.string "encyclopedia containing vital\l"
	.string "information about Pokémon from the\l"
	.string "whole region!\p"
	.string "Except it's, well, empty. That's where\n"
	.string "you come in!\p"
	.string "Explore Toku and fill its pages with\n"
	.string "your findings!\p"
	.string "You can start by going all the way to\n"
	.string "Silveridge, north of here in the\l"
	.string "mountains.\p"
	.string "Another Elder lives there and,\n"
	.string "hopefully, has more information as to\l"
	.string "why the Pokémon are lashing out.\p"
	.string "Could you deliver him this letter?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11:
# 321 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 326 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Understood, Grandma Kaba! We're going\n"
	.string "adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 342 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Totally!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Absolutely not!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!\p"
	.string "$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 358 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18:
# 362 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19:
# 372 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}! Let's see what our\n"
	.string "brand-new Pokémon are capable of!\p"
	.string "I request an official Pokémon wielder\n"
	.string "battle!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I lost!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1:
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Whew! That was so stressful!\p"
	.string "I went easy on you this time, but next\n"
	.string "time… You'll see!\p"
	.string "Well, I'm going off now.\p"
	.string "Don't dilly-dally, or you'll never\n"
	.string "catch up!\p"
	.string "See ya, {PLAYER}.$"
