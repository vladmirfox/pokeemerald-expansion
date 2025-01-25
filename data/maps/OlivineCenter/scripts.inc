OlivineCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	OlivineCenter_OnTransition:
	setrespawn HEAL_LOCATION_OLIVINE_CITY
	end

	OlivineCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end