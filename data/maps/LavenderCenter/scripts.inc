LavenderCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	LavenderCenter_OnTransition:
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end

	LavenderCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Lavender_Machoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox Lavender_Machoke_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Lavender_Machoke_Text:
	.string "MACHOKE: Graugh!$"

Lavender_Cubone::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
	msgbox Lavender_Cubone_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Lavender_Cubone_Text:
	.string "CUBONE: Uogh..?$"