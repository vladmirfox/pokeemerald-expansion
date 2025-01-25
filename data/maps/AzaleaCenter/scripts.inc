AzaleaCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	AzaleaCenter_OnTransition:
	setrespawn HEAL_LOCATION_AZALEA_TOWN
	end

	AzaleaCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end