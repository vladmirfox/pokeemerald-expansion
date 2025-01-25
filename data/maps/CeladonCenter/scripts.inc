CeladonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	CeladonCenter_OnTransition:
	setrespawn HEAL_LOCATION_CELADON_CITY
	end

	CeladonCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
