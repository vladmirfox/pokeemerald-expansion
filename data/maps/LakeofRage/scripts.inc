LakeofRage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeofRage_OnTransition
	.byte 0

LakeofRage_OnTransition:
	setflag FLAG_VISITED_LAKEOFRAGE
	end