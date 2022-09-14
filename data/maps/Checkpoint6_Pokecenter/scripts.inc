Checkpoint6_Pokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint6_Pokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Checkpoint6_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CHECKPOINT6
	end


Checkpoint6_Pokecenter_Nurse::
	setvar VAR_0x800B, 1
	incrementgamestat GAME_STAT_USED_POKECENTER
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

