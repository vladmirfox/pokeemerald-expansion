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
# 46 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 5
# 49 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Rival::
# 53 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 54 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 55 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Rival_2
# 63 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_1, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Rival_1:
# 65 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Rival_2:
# 56 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Rival_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	goto SunriseVillage_EldersHouse_Event_Rival_1


SunriseVillage_EldersHouse_Event_Elder::
# 69 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lock
# 70 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	faceplayer
# 71 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_SUNRISE_VILLAGE_INTRO_STATE
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_EldersHouse_Event_Elder_2
# 78 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Elder_5
# 82 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_3, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Elder_1:
# 85 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	release
	return

SunriseVillage_EldersHouse_Event_Elder_2:
# 75 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_1, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Elder_1

SunriseVillage_EldersHouse_Event_Elder_5:
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_2, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Elder_1


# 88 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerWalkUpToElder:
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 89 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 90 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 93 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderTurnsToThink:
# 94 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 95 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 96 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
# 97 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

SunriseVillage_EldersHouse_Event_Pokeball_Starter_Trapinch::
# 101 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 102 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 103 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 104 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Aron::
# 108 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 109 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 110 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 111 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Pokeball_Starter_Spheal::
# 115 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	lockall
# 116 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 117 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter
# 118 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return


SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter::
# 122 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2
# 128 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 129 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 130 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 131 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6
# 133 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7
# 135 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4:
# 138 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 138 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10
# 142 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9:
# 175 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 177 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 178 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 181 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 182 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18
# 189 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19
# 198 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16:
# 209 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 211 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 214 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6, MSGBOX_AUTOCLOSE
# 215 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 217 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_STARTER_MON
# 218 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28
# 224 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29
# 230 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26:
# 246 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 1, SunriseVillage_EldersHouse_Movement_ElderGivesDex
# 247 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 249 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7
# 251 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 252 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 254 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 255 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 257 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8, MSGBOX_AUTOCLOSE
# 270 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9
# 273 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 274 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
# 276 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10, MSGBOX_AUTOCLOSE
# 277 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_WEST
# 278 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 279 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11, MSGBOX_YESNO
# 281 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48
# 286 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_NORTH
# 288 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	checkplayergender
# 289 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55
# 294 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14, MSGBOX_AUTOCLOSE
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54:
# 299 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject 2, DIR_WEST
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47:
# 302 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15, MSGBOX_AUTOCLOSE
# 307 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 310 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_2:
# 123 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_6:
# 132 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_7:
# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_8:
# 136 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3, MSGBOX_YESNO
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_4

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_10:
# 139 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	hidemonpic
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4
	return

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_11:
# 143 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 144 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23
# 146 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24
# 148 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21:
# 151 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	message SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5
# 153 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmessage
# 154 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitfanfare
# 156 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_TEMP_1
# 157 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_SPHEAL, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44
# 160 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_ARON, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45
# 163 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case SPECIES_TRAPINCH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42:
# 168 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 169 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 170 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52
SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51:
# 173 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	closemessage
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_9

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_18:
# 183 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 184 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32
# 186 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_19:
# 190 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 191 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35
# 193 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36
# 195 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_20:
# 199 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 200 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39
# 202 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40
# 204 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_23:
# 145 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_ORAN_BERRY, move1 = MOVE_BUBBLE, move2 = MOVE_TAIL_WHIP, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_24:
# 147 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_ARON, 5, ITEM_ORAN_BERRY, move1 = MOVE_TACKLE, move2 = MOVE_HARDEN, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_25:
# 149 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	givemon SPECIES_TRAPINCH, 5, ITEM_ORAN_BERRY, move1 = MOVE_MUD_SLAP, move2 = MOVE_SAND_ATTACK, move3 = MOVE_NONE, move4 = MOVE_NONE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_21

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_28:
# 219 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron
# 220 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 221 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 222 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron
# 223 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_29:
# 225 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch
# 226 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 227 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 228 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch
# 229 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_30:
# 231 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal
# 232 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
# 233 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
# 234 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal
# 235 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 0
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_26

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_32:
# 185 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_33:
# 187 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_35:
# 192 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_36:
# 194 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_37:
# 196 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromLeft
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_39:
# 201 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromTop
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_40:
# 203 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromBottom
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_41:
# 205 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingTrapinchFromRight
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_16

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_44:
# 158 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 159 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 4
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_45:
# 161 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 3
# 162 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ARON
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_46:
# 164 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 5
# 165 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TRAPINCH
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_42

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_48:
# 282 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_47

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_52:
# 171 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_51

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_55:
# 290 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13, MSGBOX_AUTOCLOSE
	goto SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_54


SunriseVillage_EldersHouse_EventScript_RivalBattle::
# 323 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0, MSGBOX_AUTOCLOSE
# 330 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	switch VAR_FACING
# 331 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_SOUTH, SunriseVillage_EldersHouse_EventScript_RivalBattle_3
# 333 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_NORTH, SunriseVillage_EldersHouse_EventScript_RivalBattle_4
# 335 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_WEST, SunriseVillage_EldersHouse_EventScript_RivalBattle_5
# 337 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	case DIR_EAST, SunriseVillage_EldersHouse_EventScript_RivalBattle_6
SunriseVillage_EldersHouse_EventScript_RivalBattle_1:
# 341 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 342 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitmovement 2
# 343 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	removeobject 2
# 344 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	playse SE_DOOR
# 345 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	waitse
# 346 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay16
# 348 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1, MSGBOX_AUTOCLOSE
# 352 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
# 354 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_SUNRISE_VILLAGE_INTRO_STATE
# 356 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	msgbox SunriseVillage_EldersHouse_Event_Elder_Text_0, MSGBOX_AUTOCLOSE
# 360 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	releaseall
	return

SunriseVillage_EldersHouse_EventScript_RivalBattle_3:
# 332 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsTop
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_4:
# 334 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_5:
# 336 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsRight
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1

SunriseVillage_EldersHouse_EventScript_RivalBattle_6:
# 338 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	applymovement 2, SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsLeft
	goto SunriseVillage_EldersHouse_EventScript_RivalBattle_1


# 363 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToSpheal:
# 364 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 365 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 366 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 369 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromSpheal:
# 370 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 371 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 372 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 373 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 376 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToTrapinch:
# 377 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 378 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 379 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 380 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 383 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromTrapinch:
# 384 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 385 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 386 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 387 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 388 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 392 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkUpToAron:
# 393 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_up
# 394 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 395 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 396 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 397 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 400 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalWalkAwayFromAron:
# 401 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 402 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 403 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 404 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 405 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 408 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_ElderGivesDex:
# 409 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 409 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 410 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
# 411 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 412 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 413 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_down
# 414 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	delay_16
# 415 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 418 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsTop:
# 419 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 419 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 420 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 424 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsBottom:
# 425 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 426 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 426 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 427 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 431 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsRight:
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 432 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 433 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 437 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_RivalLeavesWhenPlayerIsLeft:
# 438 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 438 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 439 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 442 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromTop:
# 443 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 443 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 444 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 444 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 445 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 446 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 447 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 448 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 451 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingSphealFromBottom:
# 452 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 453 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 454 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	face_up
# 455 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	step_end

# 458 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
SunriseVillage_EldersHouse_Movement_PlayerGoesBackAfterPickingAronFromTop:
# 459 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 459 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_left
# 460 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 460 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 460 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_down
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
# 461 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	walk_right
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
# 57 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You alright?\p"
	.string "C'mon, let's fight again, and give it your\n"
	.string "all this time!$"

SunriseVillage_EldersHouse_Event_Rival_Text_1:
# 63 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "What are you waiting for? Choose one\n"
	.string "already!$"

SunriseVillage_EldersHouse_Event_Elder_Text_0:
# 72 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "var={STR_VAR_3}$"

SunriseVillage_EldersHouse_Event_Elder_Text_1:
# 75 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "How is your Pokémon research going?$"

SunriseVillage_EldersHouse_Event_Elder_Text_2:
# 79 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Choose your new partner wisely. No\n"
	.string "takebacks.$"

SunriseVillage_EldersHouse_Event_Elder_Text_3:
# 82 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You're free to battle here, but please\n"
	.string "don't break anything…$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_0:
# 124 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "You already got a Pokémon. Better leave\n"
	.string "this one here.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_1:
# 132 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "soul of the crashing sea waves?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_2:
# 134 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "noble warrior of iron?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_3:
# 136 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Do you choose {STR_VAR_1},\n"
	.string "swift dancer of sandstorms?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_4:
# 140 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Elder Kaba: Take the time you need.$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_5:
# 152 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_6:
# 214 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: Alright, I'm taking this\n"
	.string "one!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_7:
# 250 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_8:
# 258 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: What's this? A book?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_9:
# 272 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER} received the Letter!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_10:
# 276 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{RIVAL}: Understood, Grandma Kaba!\n"
	.string "We're going adventuring!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_11:
# 280 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}, are you ready?$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_12:
# 283 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "That's what I'm talking about!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_13:
# 291 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to him! He's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_14:
# 295 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Don't listen to her! She's so ready!$"

SunriseVillage_EldersHouse_Event_Common_Pokeball_Starter_Text_15:
# 303 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "{PLAYER}! Let's see what our\n"
	.string "brand-new Pokémon are capable of!\p"
	.string "I request an official Pokémon wielder\n"
	.string "battle!$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_0:
# 327 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "See ya, {PLAYER}.$"

SunriseVillage_EldersHouse_EventScript_RivalBattle_Text_1:
# 349 "data/maps/SunriseVillage_EldersHouse/scripts.pory"
	.string "Setting var to 7$"
