IndigoPlateauF1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateauF1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	IndigoPlateauF1_OnTransition:
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
	end

	IndigoPlateauF1_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end