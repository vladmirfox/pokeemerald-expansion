CrossgateTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CrossgateTown_OnTransition
	.byte 0

CrossgateTown_OnTransition:
	setflag FLAG_VISITED_CROSSGATE
	end