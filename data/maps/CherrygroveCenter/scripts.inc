CherrygroveCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	CherrygroveCenter_OnTransition:
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

	CherrygroveCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end