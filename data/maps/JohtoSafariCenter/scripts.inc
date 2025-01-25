JohtoSafariCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JohtoSafariCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	JohtoSafariCenter_OnTransition:
	setrespawn HEAL_LOCATION_JOHTO_SAFARI
	end

	JohtoSafariCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end