LittlerootTown_MaysHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 1
	goto_if_lt LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 1
	return


LittlerootTown_MaysHouse_2F_BigSisCalling::
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lock
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_2F_BigSisCalling_Text_0
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 2
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	release
	end


LittlerootTown_MaysHouse_2F_BigSisCalling_Text_0:
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Are you still\n"
	.string "sleeping?\p"
	.string "Get up and get ready!$"
