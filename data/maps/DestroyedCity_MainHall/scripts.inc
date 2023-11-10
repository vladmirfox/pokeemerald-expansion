DestroyedCity_MainHall_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DestroyedCity_MainHall_OnLoad
	.byte 0



DestroyedCity_MainHall_OnLoad:

	end

	
DestroyedCity_MainHall_EventScript_King::
	lock
	faceplayer
	msgbox DestroyedCity_MainHall_Text_IntroSpeech, MSGBOX_DEFAULT
	goto DestroyedCity_MainHall_EventScript_PokemonSelection
	end

DestroyedCity_MainHall_EventScript_PokemonSelection::
	release
	end

DestroyedCity_MainHall_Text_IntroSpeech:
	.string "I am the last of the POKéMON LEAGUE\n"
	.string "ELITE FOUR, NEITH MASTER of MEMORY!\p"
	.string "I've been on many an adventure and\n"
	.string "stolen many tales from those I met.\p"
	.string "At times, they were bad memories.\n"
	.string "At times, they were happy ones.\p"
	.string "Let me take a peak into your mind\n"
	.string "and see if there's anything tasty!$"
	