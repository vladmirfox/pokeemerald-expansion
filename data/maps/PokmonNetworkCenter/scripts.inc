PokmonNetworkCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokmonNetworkCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

	PokmonNetworkCenter_OnTransition:
	setrespawn HEAL_LOCATION_ONE_ISLAND
	end

	PokmonNetworkCenter_MapScripts_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PokmonNetworkCenter_EventScript_Celio::
	msgbox PokmonNetworkCenter_Text_Celio, MSGBOX_NPC
	end

PokmonNetworkCenter_Text_Celio:
	.string "Hi! My name is CELIO!\l"
	.string "I am the creator of the NETWORK\n"
	.string "MACHINE, the machine that allows\p"
	.string "you to trade POKéMON across the\n"
	.string "CONTINENT!$"