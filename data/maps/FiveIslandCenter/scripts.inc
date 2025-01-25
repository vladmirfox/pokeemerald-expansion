FiveIslandCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIslandCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	FiveIslandCenter_OnTransition:
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

	FiveIslandCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
