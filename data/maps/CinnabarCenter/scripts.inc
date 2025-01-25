CinnabarCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	CinnabarCenter_OnTransition:
	setrespawn HEAL_LOCATION_CINNIBAR_ISLAND
	end

	CinnabarCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end