SunriseVillage_RivalsHouse_MapScripts::
	.byte 0


SunriseVillage_RivalsHouse_EventScript_Woman::
# 6 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	lock
# 7 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	faceplayer
# 8 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_RivalsHouse_EventScript_Woman_2
# 14 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Woman_Text_1
SunriseVillage_RivalsHouse_EventScript_Woman_1:
# 18 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	release
	return

SunriseVillage_RivalsHouse_EventScript_Woman_2:
# 9 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Woman_Text_0
	goto SunriseVillage_RivalsHouse_EventScript_Woman_1


SunriseVillage_RivalsHouse_EventScript_Man::
# 22 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	lock
# 23 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	faceplayer
# 24 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_RivalsHouse_EventScript_Man_2
# 30 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Man_Text_1
SunriseVillage_RivalsHouse_EventScript_Man_1:
# 34 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	release
	return

SunriseVillage_RivalsHouse_EventScript_Man_2:
# 25 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Man_Text_0
	goto SunriseVillage_RivalsHouse_EventScript_Man_1


SunriseVillage_RivalsHouse_EventScript_Meowth::
# 38 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Meowth_Text_0, MSGBOX_NPC
	return


SunriseVillage_RivalsHouse_EventScript_Meowth2::
# 44 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	lock
# 45 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	faceplayer
# 46 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	waitse
# 47 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 48 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Meowth2_Text_0
# 51 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	waitmoncry
# 52 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	release
	end


SunriseVillage_RivalsHouse_EventScript_Woman_Text_0:
# 10 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "The house feels a little empty now that\n"
	.string "{RIVAL} has left home.\p"
	.string "I'm glad for our Pokémon and the\n"
	.string "companionship they provide us.$"

SunriseVillage_RivalsHouse_EventScript_Woman_Text_1:
# 15 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hello, {PLAYER}! How are you doing?\n"
	.string "Off to some trouble with {RIVAL}, I\l"
	.string "bet?$"

SunriseVillage_RivalsHouse_EventScript_Man_Text_0:
# 26 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hello, {PLAYER}. How is your adventure\n"
	.string "going?\p"
	.string "Make sure you come back to see your\n"
	.string "sister sometimes, I'm sure she misses\l"
	.string "you.$"

SunriseVillage_RivalsHouse_EventScript_Man_Text_1:
# 31 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hi, {PLAYER}!$"

SunriseVillage_RivalsHouse_EventScript_Meowth_Text_0:
# 39 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Purrr…$"

SunriseVillage_RivalsHouse_EventScript_Meowth2_Text_0:
# 49 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Meow!$"
