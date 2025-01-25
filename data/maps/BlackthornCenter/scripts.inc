BlackthornCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	BlackthornCenter_OnTransition:
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

	BlackthornCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end