JohtoBattleTower_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JohtoBattleTower_OnTransition
	.byte 0

JohtoBattleTower_OnTransition:
	setflag FLAG_VISITED_JOHTOBATTLETOWER
	end