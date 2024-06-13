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
	applymovement 2, Common_Movement_FacePlayer
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
SunriseVillage_EldersHouse_Event_Rival_1:
# 64 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Rival_2:
# 55 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	goto SunriseVillage_EldersHouse_Event_Rival_1


SunriseVillage_EldersHouse_Event_Elder::
# 68 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 69 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 75 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Elder_5
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_2, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Elder_1:
# 82 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Elder_1

SunriseVillage_EldersHouse_Event_Elder_5:
# 76 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Elder_1


SunriseVillage_EldersHouse_EventScript_TryToLeave::
# 86 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 87 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit
# 91 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return


# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGetAwayFromExit:
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 96 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 99 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 100 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 100 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 101 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 104 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 105 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 106 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 107 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 112 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 113 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 114 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 115 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 119 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 120 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 121 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 122 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 126 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 127 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 133 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 139 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 141 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 142 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 144 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 188 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 189 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 195 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 202 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 222 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 224 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6, MSGBOX_AUTOCLOSE
# 228 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 230 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 231 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 237 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 243 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7, MSGBOX_AUTOCLOSE
# 259 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 260 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 262 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8
# 264 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 265 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 267 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 268 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9, MSGBOX_AUTOCLOSE
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10, MSGBOX_AUTOCLOSE
# 283 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 285 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11
# 286 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 287 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 289 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12, MSGBOX_AUTOCLOSE
# 290 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_WEST
# 291 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13, MSGBOX_YESNO
# 293 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 298 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 300 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 301 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 306 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 311 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_WEST
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 314 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17, MSGBOX_AUTOCLOSE
# 319 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 322 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 145 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 150 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 151 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 155 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 157 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 159 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 167 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 171 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 174 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 179 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 180 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 184 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 196 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 197 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 206 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 208 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 212 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 213 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 215 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 217 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 156 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_BUBBLE, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 158 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 234 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 235 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 236 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 238 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 239 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 240 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 241 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 242 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 244 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 245 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 247 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 248 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 200 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 207 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 209 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 214 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 216 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 170 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 172 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 175 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 176 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 326 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 329 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 331 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1, MSGBOX_AUTOCLOSE
# 342 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_EventScript_RivalBattle_8
# 345 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_EventScript_RivalBattle_9
# 347 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_EventScript_RivalBattle_10
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_EventScript_RivalBattle_11
SunriseVillage_EldersHouse_EventScript_RivalBattle_6:
# 353 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 354 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 355 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_DOOR
# 357 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 358 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay16
# 360 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 362 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_SPHEAL, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 330 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_ARON, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 332 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_FIRST_BATTLE_TRAPINCH, SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_8:
# 344 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsTop
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_9:
# 346 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_10:
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsRight
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6

SunriseVillage_EldersHouse_EventScript_RivalBattle_11:
# 350 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsLeft
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_6


# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 366 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 367 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 368 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 372 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 374 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 375 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 379 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 380 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 381 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 382 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 383 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 389 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 390 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 391 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 396 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 397 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 398 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 399 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 400 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 403 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 404 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 406 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 407 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 408 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 411 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
# 414 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 415 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 416 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
# 417 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 418 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 421 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsTop:
# 422 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 422 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 423 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 427 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 428 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 429 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 430 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 434 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsRight:
# 435 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 435 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 436 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 440 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsLeft:
# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 441 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 446 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 446 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 449 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 450 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 454 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 456 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 457 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 460 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 462 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 463 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 466 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom:
# 467 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 468 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 469 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 472 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft:
# 473 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 474 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 475 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 476 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 477 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 480 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop:
# 481 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 482 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 483 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 483 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 483 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 484 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 485 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 486 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 489 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom:
# 490 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 491 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 492 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 493 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 496 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight:
# 497 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 498 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 499 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 500 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 501 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
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
	.string "This is all very worrying…\p"
	.string "$"

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
	.string "People will more and more fight\n"
	.string "alongside their very own Pokémon.\p"
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
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon research going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 76 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely. No\n"
	.string "takebacks.$"

SunriseVillage_EldersHouse_Event_Elder_Text_2:
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You're free to battle here, but please\n"
	.string "don't break anything…$"

SunriseVillage_EldersHouse_EventScript_TryToLeave_Text_0:
# 88 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Where do you think you're\n"
	.string "going?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon. Better leave\n"
	.string "this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 145 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 151 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: Alright, I'm taking this\n"
	.string "one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 253 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Now that you have your own\n"
	.string "Pokémon, you two are officially Pokémon\l"
	.string "wielders!\p"
	.string "The more Pokémon wielders there are,\n"
	.string "the deeper our understanding of\l"
	.string "Pokémon will be.\p"
	.string "We need to study these creatures from\n"
	.string "up close to find the root of this issue.\p"
	.string "Actually, there's something I wanted to\n"
	.string "ask you.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 263 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 271 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 275 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: I call this the “Pokédex”.\n"
	.string "It is an encyclopedia containing vital\l"
	.string "information about Pokémon from the\l"
	.string "whole region!\p"
	.string "Except it's, well, empty. That's where\n"
	.string "you come in!\p"
	.string "Explore Toku and fill the pages of this\n"
	.string "Pokédex with your findings!\p"
	.string "You can start by going all the way to\n"
	.string "Silveridge, north of here in the\l"
	.string "mountains.\p"
	.string "Another Elder lives there and,\n"
	.string "hopefully, has more information as to\l"
	.string "why the Pokémon are lashing out.\p"
	.string "Could you deliver him this letter?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11:
# 285 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 289 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: Understood, Grandma Kaba!\n"
	.string "We're going adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 292 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 295 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 303 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_16:
# 307 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_17:
# 315 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}! Let's see what our\n"
	.string "brand-new Pokémon are capable of!\p"
	.string "I request an official Pokémon wielder\n"
	.string "battle!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 328 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "I lost!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1:
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Whew! That was so stressful!\p"
	.string "I went easy on you this time, but next\n"
	.string "time… You'll see!\p"
	.string "Well, I'm going off now. Don't\n"
	.string "dilly-dally, or you'll never catch up!\p"
	.string "See ya, {PLAYER}.$"
