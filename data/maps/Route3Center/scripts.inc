Route3Center_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3Center_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	Route3Center_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE3
	end

	Route3Center_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
