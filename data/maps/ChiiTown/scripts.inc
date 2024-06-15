ChiiTown_MapScripts::
# 8 "data/maps/ChiiTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/ChiiTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChiiTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ChiiTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/ChiiTown/scripts.pory"
	call ChiiTown_EventScript_SpawnBirds
	return

ChiiTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/ChiiTown/scripts.pory"
	map_script_2 VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 2, ChiiTown_EventScript_SetTrespassVar
	.2byte 0


ChiiTown_EventScript_SpawnBirds::
# 19 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_3
# 23 "data/maps/ChiiTown/scripts.pory"
	setflag FLAG_TEMP_4
# 25 "data/maps/ChiiTown/scripts.pory"
	gettime
# 27 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 5
	goto_if_ge ChiiTown_EventScript_SpawnBirds_6
ChiiTown_EventScript_SpawnBirds_4:
# 36 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 9
	goto_if_ge ChiiTown_EventScript_SpawnBirds_3
	return

ChiiTown_EventScript_SpawnBirds_1:
# 28 "data/maps/ChiiTown/scripts.pory"
	random 2
# 29 "data/maps/ChiiTown/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/ChiiTown/scripts.pory"
	case 0, ChiiTown_EventScript_SpawnBirds_10
# 32 "data/maps/ChiiTown/scripts.pory"
	case 1, ChiiTown_EventScript_SpawnBirds_11
	return

ChiiTown_EventScript_SpawnBirds_2:
# 37 "data/maps/ChiiTown/scripts.pory"
	random 2
# 38 "data/maps/ChiiTown/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/ChiiTown/scripts.pory"
	case 0, ChiiTown_EventScript_SpawnBirds_13
# 41 "data/maps/ChiiTown/scripts.pory"
	case 1, ChiiTown_EventScript_SpawnBirds_14
	return

ChiiTown_EventScript_SpawnBirds_3:
# 36 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le ChiiTown_EventScript_SpawnBirds_2
	return

ChiiTown_EventScript_SpawnBirds_6:
# 27 "data/maps/ChiiTown/scripts.pory"
	compare VAR_0x8000, 8
	goto_if_le ChiiTown_EventScript_SpawnBirds_1
	goto ChiiTown_EventScript_SpawnBirds_4

ChiiTown_EventScript_SpawnBirds_10:
# 31 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return

ChiiTown_EventScript_SpawnBirds_11:
# 33 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return

ChiiTown_EventScript_SpawnBirds_13:
# 40 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_3
	return

ChiiTown_EventScript_SpawnBirds_14:
# 42 "data/maps/ChiiTown/scripts.pory"
	clearflag FLAG_TEMP_4
	return


ChiiTown_EventScript_Shopper::
# 48 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_Shopper_Text_0, MSGBOX_NPC
	return


ChiiTown_EventScript_Kecleon::
# 54 "data/maps/ChiiTown/scripts.pory"
	lock
# 55 "data/maps/ChiiTown/scripts.pory"
	faceplayer
# 56 "data/maps/ChiiTown/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 57 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_Kecleon_Text_0
# 58 "data/maps/ChiiTown/scripts.pory"
	waitmoncry
# 59 "data/maps/ChiiTown/scripts.pory"
	closemessage
# 60 "data/maps/ChiiTown/scripts.pory"
	release
	return


ChiiTown_EventScript_PlantingFlowers::
# 64 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_PlantingFlowers_Text_0, MSGBOX_NPC
	return


ChiiTown_EventScript_Mart::
# 70 "data/maps/ChiiTown/scripts.pory"
	lock
# 71 "data/maps/ChiiTown/scripts.pory"
	faceplayer
# 72 "data/maps/ChiiTown/scripts.pory"
	message ChiiTown_EventScript_Mart_Text_0
# 73 "data/maps/ChiiTown/scripts.pory"
	waitmessage
# 74 "data/maps/ChiiTown/scripts.pory"
	pokemart ChiiTown_Mart
# 75 "data/maps/ChiiTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 76 "data/maps/ChiiTown/scripts.pory"
	release
	return


	.align 2
# 79 "data/maps/ChiiTown/scripts.pory"
ChiiTown_Mart:
# 80 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 81 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 82 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 83 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 84 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 85 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 86 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ChiiTown_EventScript_TownSign::
# 90 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


ChiiTown_EventScript_SetTrespassVar::
# 94 "data/maps/ChiiTown/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 1
	return


ChiiTown_EventScript_Shopper_Text_0:
# 49 "data/maps/ChiiTown/scripts.pory"
	.string "The lady who keeps the town's market\n"
	.string "has started selling Pokémon medicine\l"
	.string "and Pokéballs!$"

ChiiTown_EventScript_Kecleon_Text_0:
# 57 "data/maps/ChiiTown/scripts.pory"
	.string "Kleeeeh!$"

ChiiTown_EventScript_PlantingFlowers_Text_0:
# 65 "data/maps/ChiiTown/scripts.pory"
	.string "I'm planting flowers so that the wild\n"
	.string "Pokémon become happy again!$"

ChiiTown_EventScript_Mart_Text_0:
# 72 "data/maps/ChiiTown/scripts.pory"
	.string "Welcome to Chii Town's market! How may I\n"
	.string "help you?$"

ChiiTown_EventScript_TownSign_Text_0:
# 90 "data/maps/ChiiTown/scripts.pory"
	.string "Chii Town\n"
	.string "“The smallest town, with the biggest\l"
	.string "heart.”$"
