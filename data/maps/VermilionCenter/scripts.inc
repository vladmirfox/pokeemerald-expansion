VermilionCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	VermilionCenter_OnTransition:
	setrespawn HEAL_LOCATION_VERMILION_CITY
	end

	VermilionCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
