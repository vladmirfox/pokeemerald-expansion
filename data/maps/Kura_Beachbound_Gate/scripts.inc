Kura_Beachbound_Gate_MapScripts::
# 2 "data/maps/Kura_Beachbound_Gate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Beachbound_Maguro_Gate_EventScript_SetupDecayWarp
	.byte 0


Kura_Beachbound_Gate_EventScript_SetupDecayWarp::
# 6 "data/maps/Kura_Beachbound_Gate/scripts.pory"
	compare VAR_DECAY_BEACHBOUND_ROUTE, 0
	goto_if_gt Kura_Beachbound_Gate_EventScript_SetupDecayWarp_1
# 9 "data/maps/Kura_Beachbound_Gate/scripts.pory"
	setdynamicwarp MAP_BEACHBOUND_ROUTE, 1
	return

Kura_Beachbound_Gate_EventScript_SetupDecayWarp_1:
# 7 "data/maps/Kura_Beachbound_Gate/scripts.pory"
	setdynamicwarp MAP_BEACHBOUND_ROUTE_DECAY, 1
	return

