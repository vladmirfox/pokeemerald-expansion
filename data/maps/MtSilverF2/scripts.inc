MtSilverF2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilverF2_OnTransition
	.byte 0

MtSilverF2_OnTransition:
	setflag FLAG_VISITED_MTSILVER
	end