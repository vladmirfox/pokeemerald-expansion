Route10Center_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10Center_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	Route10Center_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE10
	end

	Route10Center_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
