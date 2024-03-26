MysteriousCave_MapScripts::
# 4 "data/maps/MysteriousCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MysteriousCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/MysteriousCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MysteriousCave_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/MysteriousCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MysteriousCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MysteriousCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/MysteriousCave/scripts.pory"
	setrespawn HEAL_LOCATION_MYSTERIOUS_CAVE
	return

MysteriousCave_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/MysteriousCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_FIRST_ENCOUNTER, MysteriousCave_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MysteriousCave_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 10 "data/maps/MysteriousCave/scripts.pory"
	removeobject 1
	return

MysteriousCave_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/MysteriousCave/scripts.pory"
	call OpenCloseExit
	return


OpenCloseExit:
# 20 "data/maps/MysteriousCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_FIRST_ENCOUNTER, OpenCloseExit_2
# 25 "data/maps/MysteriousCave/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_Exit_Closed, TRUE
# 26 "data/maps/MysteriousCave/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_Exit_Closed, TRUE
OpenCloseExit_1:
# 28 "data/maps/MysteriousCave/scripts.pory"
	special DrawWholeMapView
	return

OpenCloseExit_2:
# 21 "data/maps/MysteriousCave/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_Exit_Top, TRUE
# 22 "data/maps/MysteriousCave/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_Exit_Bottom, FALSE
	goto OpenCloseExit_1


RandomArceus:
# 32 "data/maps/MysteriousCave/scripts.pory"
	random 18
# 33 "data/maps/MysteriousCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 34 "data/maps/MysteriousCave/scripts.pory"
	subvar VAR_TEMP_0, 1
# 35 "data/maps/MysteriousCave/scripts.pory"
	switch VAR_TEMP_0
# 36 "data/maps/MysteriousCave/scripts.pory"
	case -1, RandomArceus_3
# 39 "data/maps/MysteriousCave/scripts.pory"
	addvar VAR_TEMP_0, SPECIES_ARCEUS_FIGHTING
RandomArceus_1:
# 42 "data/maps/MysteriousCave/scripts.pory"
	switch VAR_TEMP_0
# 43 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_NORMAL, RandomArceus_6
# 46 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_FIGHTING, RandomArceus_7
# 49 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_FLYING, RandomArceus_8
# 52 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_POISON, RandomArceus_9
# 55 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_GROUND, RandomArceus_10
# 58 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_ROCK, RandomArceus_11
# 61 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_BUG, RandomArceus_12
# 64 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_GHOST, RandomArceus_13
# 67 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_STEEL, RandomArceus_14
# 70 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_FIRE, RandomArceus_15
# 73 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_WATER, RandomArceus_16
# 76 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_GRASS, RandomArceus_17
# 79 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_ELECTRIC, RandomArceus_18
# 82 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_PSYCHIC, RandomArceus_19
# 85 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_ICE, RandomArceus_20
# 88 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_DRAGON, RandomArceus_21
# 91 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_DARK, RandomArceus_22
# 94 "data/maps/MysteriousCave/scripts.pory"
	case SPECIES_ARCEUS_FAIRY, RandomArceus_23
	return

RandomArceus_3:
# 37 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARCEUS_NORMAL
	goto RandomArceus_1

RandomArceus_6:
# 44 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_BLANK_PLATE
# 45 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_NORMAL
	return

RandomArceus_7:
# 47 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_FIST_PLATE
# 48 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FIGHTING
	return

RandomArceus_8:
# 50 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SKY_PLATE
# 51 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FLYING
	return

RandomArceus_9:
# 53 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TOXIC_PLATE
# 54 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_POISON
	return

RandomArceus_10:
# 56 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_EARTH_PLATE
# 57 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_GROUND
	return

RandomArceus_11:
# 59 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_STONE_PLATE
# 60 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_ROCK
	return

RandomArceus_12:
# 62 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_INSECT_PLATE
# 63 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_BUG
	return

RandomArceus_13:
# 65 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SPOOKY_PLATE
# 66 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_GHOST
	return

RandomArceus_14:
# 68 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_IRON_PLATE
# 69 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_STEEL
	return

RandomArceus_15:
# 71 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_FLAME_PLATE
# 72 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FIRE
	return

RandomArceus_16:
# 74 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SPLASH_PLATE
# 75 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_WATER
	return

RandomArceus_17:
# 77 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MEADOW_PLATE
# 78 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_GRASS
	return

RandomArceus_18:
# 80 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_ZAP_PLATE
# 81 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_ELECTRIC
	return

RandomArceus_19:
# 83 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIND_PLATE
# 84 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_PSYCHIC
	return

RandomArceus_20:
# 86 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_ICICLE_PLATE
# 87 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_ICE
	return

RandomArceus_21:
# 89 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_DRACO_PLATE
# 90 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_DRAGON
	return

RandomArceus_22:
# 92 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_DREAD_PLATE
# 93 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_DARK
	return

RandomArceus_23:
# 95 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_1, ITEM_PIXIE_PLATE
# 96 "data/maps/MysteriousCave/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FAIRY
	return


RandomArceusStarter:
# 101 "data/maps/MysteriousCave/scripts.pory"
	goto_if_unset FLAG_STARTER_GIVEN, RandomArceusStarter_1
	return

RandomArceusStarter_1:
# 102 "data/maps/MysteriousCave/scripts.pory"
	call RandomArceus
# 104 "data/maps/MysteriousCave/scripts.pory"
	givemon SPECIES_ARCEUS, 1, ITEM_LEGEND_PLATE, , , , , , , , , , , , , , , , , , , , , , , VAR_TEMP_2
# 105 "data/maps/MysteriousCave/scripts.pory"
	msgbox RandomArceusStarter_Text_0
# 106 "data/maps/MysteriousCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARCEUS
# 107 "data/maps/MysteriousCave/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 109 "data/maps/MysteriousCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RandomArceusStarter_4
RandomArceusStarter_3:
# 114 "data/maps/MysteriousCave/scripts.pory"
	setflag FLAG_STARTER_GIVEN
# 115 "data/maps/MysteriousCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 116 "data/maps/MysteriousCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 118 "data/maps/MysteriousCave/scripts.pory"
	setmonmove 0, 2, MOVE_JUDGMENT
	return

RandomArceusStarter_4:
# 110 "data/maps/MysteriousCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 111 "data/maps/MysteriousCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RandomArceusStarter_3


RandomArceusEncounter::
# 123 "data/maps/MysteriousCave/scripts.pory"
	lock
# 124 "data/maps/MysteriousCave/scripts.pory"
	waitse
# 126 "data/maps/MysteriousCave/scripts.pory"
	call RandomArceusStarter
# 128 "data/maps/MysteriousCave/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 129 "data/maps/MysteriousCave/scripts.pory"
	waitmoncry
# 131 "data/maps/MysteriousCave/scripts.pory"
	call RandomArceus
# 132 "data/maps/MysteriousCave/scripts.pory"
	copyvar VAR_TEMP_3, VAR_TEMP_0
# 133 "data/maps/MysteriousCave/scripts.pory"
	copyvar VAR_TEMP_4, VAR_TEMP_1
# 134 "data/maps/MysteriousCave/scripts.pory"
	call RandomArceus
# 136 "data/maps/MysteriousCave/scripts.pory"
	setwildbattle VAR_TEMP_0, 1, VAR_TEMP_1, VAR_TEMP_3, 1, VAR_TEMP_4
# 137 "data/maps/MysteriousCave/scripts.pory"
	dowildbattle
# 139 "data/maps/MysteriousCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RandomArceusEncounter_2
RandomArceusEncounter_1:
# 148 "data/maps/MysteriousCave/scripts.pory"
	releaseall
	return

RandomArceusEncounter_2:
# 140 "data/maps/MysteriousCave/scripts.pory"
	playse SE_CLICK
# 145 "data/maps/MysteriousCave/scripts.pory"
	call OpenCloseExit
	goto RandomArceusEncounter_1


RandomArceusStarter_Text_0:
# 105 "data/maps/MysteriousCave/scripts.pory"
	.string "{PLAYER} recieved an Arceus holding a plate!$"
