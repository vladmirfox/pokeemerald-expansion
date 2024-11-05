SunriseVillage_RivalsHouse_MapScripts::
	.byte 0


SunriseVillage_RivalsHouse_EventScript_Woman::
# 6 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	lock
# 7 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	faceplayer
# 8 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	speakername SunriseVillage_RivalsHouse_EventScript_Woman_Text_0
# 9 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_RivalsHouse_EventScript_Woman_2
# 15 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Woman_Text_2
SunriseVillage_RivalsHouse_EventScript_Woman_1:
# 19 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	release
	return

SunriseVillage_RivalsHouse_EventScript_Woman_2:
# 10 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Woman_Text_1
	goto SunriseVillage_RivalsHouse_EventScript_Woman_1


SunriseVillage_RivalsHouse_EventScript_Man::
# 23 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	lock
# 24 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	faceplayer
# 25 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	speakername SunriseVillage_RivalsHouse_EventScript_Man_Text_0
# 26 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_RivalsHouse_EventScript_Man_2
# 32 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Man_Text_2
SunriseVillage_RivalsHouse_EventScript_Man_1:
# 36 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	release
	return

SunriseVillage_RivalsHouse_EventScript_Man_2:
# 27 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Man_Text_1
	goto SunriseVillage_RivalsHouse_EventScript_Man_1


SunriseVillage_RivalsHouse_EventScript_Meowth::
# 40 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	speakername SunriseVillage_RivalsHouse_EventScript_Meowth_Text_0
# 41 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Meowth_Text_1, MSGBOX_NPC
	return


SunriseVillage_RivalsHouse_EventScript_Meowth2::
# 47 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	lock
# 48 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	faceplayer
# 49 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	waitse
# 50 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 51 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	speakername SunriseVillage_RivalsHouse_EventScript_Meowth_Text_0
# 52 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Meowth2_Text_0
# 55 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	waitmoncry
# 56 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	release
	end


SunriseVillage_RivalsHouse_EventScript_Woman_Text_0:
# 8 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "{RIVAL}'s mom$"

SunriseVillage_RivalsHouse_EventScript_Woman_Text_1:
# 11 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "The house feels a little empty now\n"
	.string "that {RIVAL} has left home.\p"
	.string "I'm glad for our Pokémon and the\n"
	.string "companionship they provide us.$"

SunriseVillage_RivalsHouse_EventScript_Woman_Text_2:
# 16 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hello, {PLAYER}! How are you doing?\n"
	.string "Off to some trouble with {RIVAL}, I\l"
	.string "bet?$"

SunriseVillage_RivalsHouse_EventScript_Man_Text_0:
# 25 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "{RIVAL}'s dad$"

SunriseVillage_RivalsHouse_EventScript_Man_Text_1:
# 28 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hello, {PLAYER}. How is your\n"
	.string "adventure going?\p"
	.string "Make sure you come back to see your\n"
	.string "sister sometimes, I'm sure she misses\l"
	.string "you.$"

SunriseVillage_RivalsHouse_EventScript_Man_Text_2:
# 33 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hi, {PLAYER}!$"

SunriseVillage_RivalsHouse_EventScript_Meowth_Text_0:
# 40 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Meowth$"

SunriseVillage_RivalsHouse_EventScript_Meowth_Text_1:
# 42 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Purrr…$"

SunriseVillage_RivalsHouse_EventScript_Meowth2_Text_0:
# 53 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Meow!$"
