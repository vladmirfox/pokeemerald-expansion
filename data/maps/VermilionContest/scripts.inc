VermilionContest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionContest_OnTransition
	.byte 0

VermilionContest_OnTransition:
	setvar VAR_SAFARI_LOCATION, 1
	end