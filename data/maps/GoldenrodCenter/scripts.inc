GoldenrodCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	GoldenrodCenter_OnTransition:
	setrespawn HEAL_LOCATION_GOLDENROD_CITY
	end

	GoldenrodCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 4
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end