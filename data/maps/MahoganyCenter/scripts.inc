MahoganyCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MahoganyCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	MahoganyCenter_OnTransition:
	setrespawn HEAL_LOCATION_JOHTO_SAFARI
	end

	MahoganyCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end