Servantquarter_MapScripts::
# 2 "data/maps/Servantquarter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, trag
	.byte 0


trag::
# 6 "data/maps/Servantquarter/scripts.pory"
	compare VAR_ROUTE102_STATE, 11
	goto_if_eq trag_1
# 18 "data/maps/Servantquarter/scripts.pory"
	compare VAR_ROUTE102_STATE, 11
	goto_if_gt trag_2
	return

trag_1:
# 7 "data/maps/Servantquarter/scripts.pory"
	removeobject 1
# 8 "data/maps/Servantquarter/scripts.pory"
	setflag FLAG_UNUSED_0x4A9
# 9 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 10 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 11 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 12 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 13 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 14 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 15 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 16 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

trag_2:
# 19 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 3, 0x0F4, 1
# 20 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 3, 0x0F5, 1
# 21 "data/maps/Servantquarter/scripts.pory"
	setmetatile 14, 4, 0x0FC, 1
# 22 "data/maps/Servantquarter/scripts.pory"
	setmetatile 15, 4, 0x0FD, 1
# 23 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 8, 0x0F1, 1
# 24 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 8, 0x0F2, 1
# 25 "data/maps/Servantquarter/scripts.pory"
	setmetatile 6, 9, 0x0F9, 1
# 26 "data/maps/Servantquarter/scripts.pory"
	setmetatile 7, 9, 0x0FA, 1
	return

