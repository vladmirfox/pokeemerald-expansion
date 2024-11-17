Beachbound_Maguro_Gate_MapScripts::
# 3 "data/maps/Beachbound_Maguro_Gate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Beachbound_Maguro_Gate_EventScript_SetupDecayWarp
	.byte 0


Beachbound_Maguro_Gate_EventScript_SetupDecayWarp::
# 7 "data/maps/Beachbound_Maguro_Gate/scripts.pory"
	compare VAR_DECAY_BEACHBOUND_ROUTE, 0
	goto_if_gt Beachbound_Maguro_Gate_EventScript_SetupDecayWarp_1
# 10 "data/maps/Beachbound_Maguro_Gate/scripts.pory"
	setdynamicwarp MAP_BEACHBOUND_ROUTE, 0
	return

Beachbound_Maguro_Gate_EventScript_SetupDecayWarp_1:
# 8 "data/maps/Beachbound_Maguro_Gate/scripts.pory"
	setdynamicwarp MAP_BEACHBOUND_ROUTE_DECAY
	return

