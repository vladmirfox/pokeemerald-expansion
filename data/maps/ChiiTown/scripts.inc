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
	speakername ChiiTown_EventScript_Shopper_Text_0
# 49 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_Shopper_Text_1, MSGBOX_NPC
	return


ChiiTown_EventScript_Kecleon::
# 55 "data/maps/ChiiTown/scripts.pory"
	lock
# 56 "data/maps/ChiiTown/scripts.pory"
	faceplayer
# 57 "data/maps/ChiiTown/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 58 "data/maps/ChiiTown/scripts.pory"
	ismonseen SPECIES_KECLEON
# 59 "data/maps/ChiiTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ChiiTown_EventScript_Kecleon_2
# 62 "data/maps/ChiiTown/scripts.pory"
	speakername ChiiTown_EventScript_Kecleon_Text_1
ChiiTown_EventScript_Kecleon_1:
# 64 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_Kecleon_Text_2
# 65 "data/maps/ChiiTown/scripts.pory"
	waitmoncry
# 66 "data/maps/ChiiTown/scripts.pory"
	closemessage
# 67 "data/maps/ChiiTown/scripts.pory"
	release
	return

ChiiTown_EventScript_Kecleon_2:
# 60 "data/maps/ChiiTown/scripts.pory"
	speakername ChiiTown_EventScript_Kecleon_Text_0
	goto ChiiTown_EventScript_Kecleon_1


ChiiTown_EventScript_PlantingFlowers::
# 71 "data/maps/ChiiTown/scripts.pory"
	speakername ChiiTown_EventScript_PlantingFlowers_Text_0
# 72 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_PlantingFlowers_Text_1, MSGBOX_NPC
	return


ChiiTown_EventScript_Mart::
# 78 "data/maps/ChiiTown/scripts.pory"
	lock
# 79 "data/maps/ChiiTown/scripts.pory"
	faceplayer
# 80 "data/maps/ChiiTown/scripts.pory"
	speakername ChiiTown_EventScript_Mart_Text_0
# 81 "data/maps/ChiiTown/scripts.pory"
	message ChiiTown_EventScript_Mart_Text_1
# 82 "data/maps/ChiiTown/scripts.pory"
	waitmessage
# 83 "data/maps/ChiiTown/scripts.pory"
	pokemart ChiiTown_Mart
# 84 "data/maps/ChiiTown/scripts.pory"
	speakername ChiiTown_EventScript_Mart_Text_0
# 85 "data/maps/ChiiTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 86 "data/maps/ChiiTown/scripts.pory"
	release
	return


	.align 2
# 89 "data/maps/ChiiTown/scripts.pory"
ChiiTown_Mart:
# 90 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 91 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 92 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 93 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 94 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_AWAKENING
# 95 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 96 "data/maps/ChiiTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ChiiTown_EventScript_TownSign::
# 100 "data/maps/ChiiTown/scripts.pory"
	msgbox ChiiTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


ChiiTown_EventScript_SetTrespassVar::
# 104 "data/maps/ChiiTown/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 1
	return


ChiiTown_EventScript_Shopper_Text_0:
# 48 "data/maps/ChiiTown/scripts.pory"
	.string "Woman$"

ChiiTown_EventScript_Shopper_Text_1:
# 50 "data/maps/ChiiTown/scripts.pory"
	.string "The lady who keeps the town's market\n"
	.string "has started selling Pokémon medicine\l"
	.string "and Pokéballs!$"

ChiiTown_EventScript_Kecleon_Text_0:
# 60 "data/maps/ChiiTown/scripts.pory"
	.string "Kecleon$"

ChiiTown_EventScript_Kecleon_Text_1:
# 62 "data/maps/ChiiTown/scripts.pory"
	.string "Weird lizard$"

ChiiTown_EventScript_Kecleon_Text_2:
# 64 "data/maps/ChiiTown/scripts.pory"
	.string "Kleeeeh!$"

ChiiTown_EventScript_PlantingFlowers_Text_0:
# 71 "data/maps/ChiiTown/scripts.pory"
	.string "Little girl$"

ChiiTown_EventScript_PlantingFlowers_Text_1:
# 73 "data/maps/ChiiTown/scripts.pory"
	.string "I'm planting flowers so that the wild\n"
	.string "Pokémon become happy again!$"

ChiiTown_EventScript_Mart_Text_0:
# 80 "data/maps/ChiiTown/scripts.pory"
	.string "Saleswoman$"

ChiiTown_EventScript_Mart_Text_1:
# 81 "data/maps/ChiiTown/scripts.pory"
	.string "Welcome to Chii Town's market! How may\n"
	.string "I help you?$"

ChiiTown_EventScript_TownSign_Text_0:
# 100 "data/maps/ChiiTown/scripts.pory"
	.string "Chii Town\n"
	.string "“The smallest town, with the biggest\l"
	.string "heart.”$"
