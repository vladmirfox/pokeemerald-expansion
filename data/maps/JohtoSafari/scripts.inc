JohtoSafari_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JohtoSafari_OnTransition
	.byte 0

JohtoSafari_OnTransition:
	setflag FLAG_VISITED_JOHTOSAFARI
	end