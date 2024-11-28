Servantquarter_MapScripts::
# 2 "data/maps/Servantquarter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, trag
# 3 "data/maps/Servantquarter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, newheal1
	.byte 0


newheal1::
# 6 "data/maps/Servantquarter/scripts.pory"
	setrespawn HEAL_LOCATION_NURSEMET
	end


trag::
# 10 "data/maps/Servantquarter/scripts.pory"
	compare LUXURA_TRAGEDY, 12
	goto_if_eq trag_1
# 22 "data/maps/Servantquarter/scripts.pory"
	compare LUXURA_TRAGEDY, 12
	goto_if_gt trag_2
# 33 "data/maps/Servantquarter/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_gt trag_3
	return

trag_1:
# 11 "data/maps/Servantquarter/scripts.pory"
	removeobject 1
# 12 "data/maps/Servantquarter/scripts.pory"
	setflag FLAG_UNUSED_0x4A9
# 13 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 14 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 15 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 16 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 17 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 18 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 19 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 20 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

trag_2:
# 23 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 24 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 25 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 26 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 27 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 28 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 29 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 30 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

trag_3:
# 34 "data/maps/Servantquarter/scripts.pory"
	addobject 1
# 35 "data/maps/Servantquarter/scripts.pory"
	clearflag FLAG_UNUSED_0x4A9
# 36 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 37 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 38 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 39 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 40 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 41 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 42 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 43 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

