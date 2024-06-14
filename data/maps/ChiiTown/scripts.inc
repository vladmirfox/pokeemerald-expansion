ChiiTown_MapScripts::
# 2 "data/maps/ChiiTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 32 "data/maps/ChiiTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChiiTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_3
# 9 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_4
# 11 "data/maps/ChiiTown/scripts.pory"
	gettime
# 13 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 5
	goto_if_ge ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_6
ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 22 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 9
	goto_if_ge ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/ChiiTown/scripts.pory"
	random 2
# 15 "data/maps/ChiiTown/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/ChiiTown/scripts.pory"
	case 0, ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_10
# 18 "data/maps/ChiiTown/scripts.pory"
	case 1, ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_11
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 23 "data/maps/ChiiTown/scripts.pory"
	random 2
# 24 "data/maps/ChiiTown/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/ChiiTown/scripts.pory"
	case 0, ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_13
# 27 "data/maps/ChiiTown/scripts.pory"
	case 1, ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_14
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 22 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 13 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 8
	goto_if_le ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_1
	goto ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_4

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 17 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 19 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 26 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_3
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 28 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_4
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/ChiiTown/scripts.pory"
	map_script_2 VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 2, ChiiTown_EventScript_SetTrespassVar
	.2byte 0


ChiiTown_EventScript_Shopper::
# 38 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_Shopper_Text_0, MSGBOX_NPC
	return


ChiiTown_EventScript_Kecleon::
# 44 "data/maps/ChiiTown/scripts.pory"
	lock
# 45 "data/maps/ChiiTown/scripts.pory"
	faceplayer
# 46 "data/maps/ChiiTown/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 47 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_Kecleon_Text_0
# 48 "data/maps/ChiiTown/scripts.pory"
	waitmoncry
# 49 "data/maps/ChiiTown/scripts.pory"
	closemessage
# 50 "data/maps/ChiiTown/scripts.pory"
	release
	return


ChiiTown_EventScript_PlantingFlowers::
# 54 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_PlantingFlowers_Text_0, MSGBOX_NPC
	return


ChiiTown_EventScript_Mart::
# 60 "data/maps/ChiiTown/scripts.pory"
	lock
# 61 "data/maps/ChiiTown/scripts.pory"
	faceplayer
# 62 "data/maps/ChiiTown/scripts.pory"
	message ChiiTown_EventScript_Mart_Text_0
# 63 "data/maps/ChiiTown/scripts.pory"
	waitmessage
# 64 "data/maps/ChiiTown/scripts.pory"
	pokemart ChiiTown_Mart
# 65 "data/maps/ChiiTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 66 "data/maps/ChiiTown/scripts.pory"
	release
	return


	.align 2
# 69 "data/maps/ChiiTown/scripts.pory"
ChiiTown_Mart:
# 70 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 71 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 72 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 73 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 74 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 75 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 76 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ChiiTown_EventScript_TownSign::
# 80 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


ChiiTown_EventScript_SetTrespassVar::
# 84 "data/maps/ChiiTown/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 1
	return


ChiiTown_EventScript_Shopper_Text_0:
# 39 "data/maps/ChiiTown/scripts.pory"
	.string "The lady who keeps the town's market\n"
	.string "has started selling Pokémon medicine\l"
	.string "and Pokéballs!$"

ChiiTown_EventScript_Kecleon_Text_0:
# 47 "data/maps/ChiiTown/scripts.pory"
	.string "Kleeeeh!$"

ChiiTown_EventScript_PlantingFlowers_Text_0:
# 55 "data/maps/ChiiTown/scripts.pory"
	.string "I'm planting flowers so that the wild\n"
	.string "Pokémon become happy again!$"

ChiiTown_EventScript_Mart_Text_0:
# 62 "data/maps/ChiiTown/scripts.pory"
	.string "Welcome to Chii Town's market! How may I\n"
	.string "help you?$"

ChiiTown_EventScript_TownSign_Text_0:
# 80 "data/maps/ChiiTown/scripts.pory"
	.string "Chii Town\n"
	.string "“The smallest town, with the biggest\l"
	.string "heart.”$"
