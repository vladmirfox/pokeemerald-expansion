ViridianCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	ViridianCenter_OnTransition:
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end

	ViridianCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end