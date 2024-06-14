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
# 23 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderTurnsToThink
# 31 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 43 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2, MSGBOX_AUTOCLOSE
# 44 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 45 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 47 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 5
# 48 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Rival::
# 52 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 53 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 54 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Rival_2
# 62 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_1, MSGBOX_AUTOCLOSE
# 63 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
SunriseVillage_EldersHouse_Event_Rival_1:
# 65 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Rival_2:
# 55 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	goto SunriseVillage_EldersHouse_Event_Rival_1


SunriseVillage_EldersHouse_Event_Elder::
# 69 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 71 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 76 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Elder_5
# 80 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_2, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Elder_1:
# 83 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 73 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Elder_1

SunriseVillage_EldersHouse_Event_Elder_5:
# 77 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Elder_1


SunriseVillage_EldersHouse_EventScript_TryToLeave::
# 87 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 88 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0, MSGBOX_AUTOCLOSE
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 92 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 93 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 96 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 97 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 98 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 101 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 103 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 107 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 109 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 111 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 115 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 116 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 117 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 118 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 122 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 123 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 124 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 125 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 130 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 131 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 132 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 136 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 142 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 144 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 145 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 152 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 152 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 156 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 189 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 192 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 214 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 225 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 1, DIR_SOUTH
# 229 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6, MSGBOX_AUTOCLOSE
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 235 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 242 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 248 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7, MSGBOX_AUTOCLOSE
# 264 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 269 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 275 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay 20
# 277 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9, MSGBOX_AUTOCLOSE
# 281 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10, MSGBOX_AUTOCLOSE
# 290 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 293 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 296 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12, MSGBOX_AUTOCLOSE
# 297 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 298 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 299 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13, MSGBOX_YESNO
# 300 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 305 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 307 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 308 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 313 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 318 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 321 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17, MSGBOX_AUTOCLOSE
# 326 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 329 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 137 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 148 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 157 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 158 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 170 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 171 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 177 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 183 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 200 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 202 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 207 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 209 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 215 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 216 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 159 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_BUBBLE, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 237 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 241 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 243 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 244 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 247 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 249 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 251 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 201 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 208 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 210 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 217 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 221 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 172 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 175 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 176 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 178 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 179 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 184 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 185 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 309 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 333 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 338 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 342 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1, MSGBOX_AUTOCLOSE
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 350 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_EventScript_RivalBattle_8
# 352 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_EventScript_RivalBattle_9
# 354 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_EventScript_RivalBattle_10
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_EventScript_RivalBattle_11
SunriseVillage_EldersHouse_EventScript_RivalBattle_6:
# 360 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 361 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 362 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 363 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_DOOR
# 364 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay16
# 367 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 369 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 337 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 339 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_8:
# 351 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsTop
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_9:
# 353 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_10:
# 355 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsRight
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_11:
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsLeft
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6


# 372 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 374 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 375 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 379 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 380 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 381 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 382 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 385 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 389 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 393 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 394 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 396 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 397 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 398 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 402 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 403 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 404 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 406 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 410 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 411 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 415 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 418 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 419 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 419 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 421 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 422 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 423 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_down
# 424 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 428 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsTop:
# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 430 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 434 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 435 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 436 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 436 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 437 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsRight:
# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 443 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsLeft:
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 449 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 452 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 454 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 457 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 460 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 462 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 463 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 464 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 467 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 468 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 468 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 468 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 469 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 470 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 473 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 479 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 480 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 483 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 484 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 487 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 488 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 489 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 489 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 490 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 490 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 491 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 493 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 496 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 499 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 500 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 503 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 504 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 505 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 505 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 506 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 507 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_in_place_faster_up
# 508 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_0:
# 24 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: {PLAYER}, {RIVAL}. You\n"
	.string "are late. Why am I surprised?\p"
	.string "I always have to run after you two! Now\n"
	.string "stay still for a minute and listen\l"
	.string "closely!\p"
	.string "As you have heard, the woods, and even\n"
	.string "the roads, are no longer safe.\p"
	.string "We don't yet know the reason, but the\n"
	.string "wild Pokémon that usually hide in the\l"
	.string "tall grass and live peacefully alongside\l"
	.string "men have started behaving\l"
	.string "aggressively.\p"
	.string "There are reports of travelers being\n"
	.string "attacked from several nearby villages.\l"
	.string "This is all very worrying…$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_1:
# 33 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Which is why the Toku council has\n"
	.string "decided that, for the time being, the\l"
	.string "best way to handle this is to use the\l"
	.string "Pokémon themselves as a means of\l"
	.string "protection!\p"
	.string "There were very few experienced\n"
	.string "Pokémon wielders in Toku until now. This\l"
	.string "is about to change.\p"
	.string "More and more, people will be fighting\n"
	.string "alongside their own companion.\p"
	.string "With a domesticated Pokémon by your\n"
	.string "side, you'll be able to defend\l"
	.string "yourselves even when you're on your\l"
	.string "own.\p"
	.string "Without further ado, please choose one\n"
	.string "of the three creatures in the Pokéballs\l"
	.string "behind me!$"

SunriseVillage_EldersHouse_EventScript_DistributionCutscene_Text_2:
# 43 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: C'mon {PLAYER}, pick\n"
	.string "yours, quick quick!$"

SunriseVillage_EldersHouse_Event_Rival_Text_0:
# 56 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You alright?\p"
	.string "C'mon, let's fight again, and give it your\n"
	.string "all this time!$"

SunriseVillage_EldersHouse_Event_Rival_Text_1:
# 62 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What are you waiting for? Choose one\n"
	.string "already!$"

SunriseVillage_EldersHouse_Event_Elder_Text_0:
# 73 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon research going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 77 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely. No\n"
	.string "takebacks.$"

SunriseVillage_EldersHouse_Event_Elder_Text_2:
# 80 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You're free to battle here, but please\n"
	.string "don't break anything…$"

SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0:
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Where do you think you're\n"
	.string "going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 138 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon. Better leave\n"
	.string "this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 148 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 166 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: Alright, I'm taking this\n"
	.string "one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Now that you have your own\n"
	.string "Pokémon, you two are officially Pokémon\l"
	.string "wielders!\p"
	.string "The more wielders there are, the deeper\n"
	.string "our understanding of Pokémon will be.\p"
	.string "We need to study these creatures from\n"
	.string "up close to find the root of this issue.\p"
	.string "Actually, there's something I wanted to\n"
	.string "ask you.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 278 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 282 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: I call this the “Pokédex”.\n"
	.string "It is an encyclopedia containing vital\l"
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
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 296 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: Understood, Grandma Kaba!\n"
	.string "We're going adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 299 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!\p"
	.string "$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 314 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}! Let's see what our\n"
	.string "brand-new Pokémon are capable of!\p"
	.string "I request an official Pokémon wielder\n"
	.string "battle!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I lost!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1:
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Whew! That was so stressful!\p"
	.string "I went easy on you this time, but next\n"
	.string "time… You'll see!\p"
	.string "Well, I'm going off now. Don't\n"
	.string "dilly-dally, or you'll never catch up!\p"
	.string "See ya, {PLAYER}.$"
