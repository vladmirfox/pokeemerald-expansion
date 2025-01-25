Route32Center_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route32Center_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	Route32Center_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE32
	end

	Route32Center_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
