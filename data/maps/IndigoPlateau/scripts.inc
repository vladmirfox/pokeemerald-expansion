IndigoPlateau_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_OnTransition
	.byte 0

IndigoPlateau_OnTransition:
	setflag FLAG_VISITED_INDIGOPLATEAU
	end