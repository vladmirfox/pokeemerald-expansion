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
	turnobject 1, DIR_SOUTH
# 104 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 105 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 109 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 111 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 114 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 115 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 116 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 119 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 120 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 120 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 121 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 124 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 126 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 126 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 126 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 126 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 127 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 133 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 136 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 141 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 142 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 148 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 166 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 171 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 171 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 177 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 210 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 213 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 215 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 226 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 235 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 248 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6
# 255 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 264 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7
# 286 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 288 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 289 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 291 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 293 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 296 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 297 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 299 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9
# 305 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 307 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 309 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10
# 318 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 320 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 323 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 324 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 326 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 330 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 331 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 332 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	dynmultichoice 16, 6, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15
# 347 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 353 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 355 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 362 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 366 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 368 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 372 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19
# 376 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 381 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 155 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
# 158 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 172 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
# 175 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 178 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 179 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 183 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 188 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 189 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 192 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 195 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 208 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 221 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 223 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 228 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 230 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 237 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 241 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 180 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_FLIPPER_SPLASH, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 184 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 260 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 261 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 262 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 266 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 269 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 271 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 275 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 222 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 224 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 229 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 231 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 242 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 193 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 196 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 200 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16
# 351 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 358 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 385 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 394 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	speakername SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_3
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1
# 402 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 406 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq SunriseVillage_EldersHouse_EventScript_RivalBattle_9
SunriseVillage_EldersHouse_EventScript_RivalBattle_8:
# 409 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeaves
SunriseVillage_EldersHouse_EventScript_RivalBattle_6:
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 414 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 415 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_DOOR
# 416 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 417 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay16
# 419 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 421 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 389 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 391 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_7:
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_9:
# 406 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq SunriseVillage_EldersHouse_EventScript_RivalBattle_7
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_8


# 424 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 426 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 427 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 430 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 431 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 434 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 437 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 438 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 439 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 440 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 446 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 449 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 450 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 454 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 457 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 458 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 459 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 462 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 463 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 464 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 465 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 466 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 467 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 470 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 471 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 471 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 472 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 473 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 477 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 480 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeaves:
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 486 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 487 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 488 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 488 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 489 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 493 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 493 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 494 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 495 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 496 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 500 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 501 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 502 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 503 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 504 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 508 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 508 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 508 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 509 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 510 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 513 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 514 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 515 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 516 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 519 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 520 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 521 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 521 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 522 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 523 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 524 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 527 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 528 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 529 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 529 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 530 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 530 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 531 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 532 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 533 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 536 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 537 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 537 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 538 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 539 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 540 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 543 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 544 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 545 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 545 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 546 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 547 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 548 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
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
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Where do you think you're going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 156 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon. Better\n"
	.string "leave this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Alright, I'm taking this one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 281 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
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
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 303 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 311 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
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
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Understood, Grandma Kaba! We're going\n"
	.string "adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Totally!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 344 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Absolutely not!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!\p"
	.string "$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 359 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_18:
# 363 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_19:
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}! Let's see what our\n"
	.string "brand-new Pokémon are capable of!\p"
	.string "I request an official Pokémon wielder\n"
	.string "battle!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I lost!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1:
# 396 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Whew! That was so stressful!\p"
	.string "I went easy on you this time, but next\n"
	.string "time… You'll see!\p"
	.string "Well, I'm going off now.\p"
	.string "Don't dilly-dally, or you'll never\n"
	.string "catch up!\p"
	.string "See ya, {PLAYER}.$"
