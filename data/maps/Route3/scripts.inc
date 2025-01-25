Route3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	.byte 0

Route3_OnTransition:
	setflag FLAG_VISITED_ROUTE3
	end