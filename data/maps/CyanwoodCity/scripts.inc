CyanwoodCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CyanwoodCity_OnTransition
	.byte 0

CyanwoodCity_OnTransition:
	setflag FLAG_VISITED_CIANWOOD
	end