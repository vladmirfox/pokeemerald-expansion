Route28Center_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route28Center_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	Route28Center_OnTransition:
	setrespawn HEAL_LOCATION_MT_SILVER_F2
	end

	Route28Center_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end