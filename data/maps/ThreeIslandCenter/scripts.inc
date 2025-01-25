ThreeIslandCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIslandCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	ThreeIslandCenter_OnTransition:
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end

	ThreeIslandCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
