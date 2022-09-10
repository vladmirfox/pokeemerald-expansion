Checkpoint4_Pokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint4_Pokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Checkpoint4_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CHECKPOINT4
	end


Checkpoint4_Pokecenter_Nurse::
	setvar VAR_0x800B, 1
	incrementgamestat GAME_STAT_USED_POKECENTER
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

