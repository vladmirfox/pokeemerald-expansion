SunriseVillage_RivalsHouse_MapScripts::
	.byte 0


SunriseVillage_RivalsHouse_EventScript_Woman::
# 6 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Woman_Text_0, MSGBOX_NPC
	return


SunriseVillage_RivalsHouse_EventScript_Man::
# 13 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	msgbox SunriseVillage_RivalsHouse_EventScript_Man_Text_0, MSGBOX_NPC
	return


SunriseVillage_RivalsHouse_EventScript_Woman_Text_0:
# 7 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "The house feels a little empty now that\n"
	.string "{RIVAL} has left home.\p"
	.string "I'm glad for our Pokémon and the\n"
	.string "companionship they provide us.$"

SunriseVillage_RivalsHouse_EventScript_Man_Text_0:
# 14 "data/maps/SunriseVillage_RivalsHouse/scripts.pory"
	.string "Hello, {PLAYER}. How is your adventure\n"
	.string "going?\p"
	.string "Make sure you go see your sister\n"
	.string "sometimes, I'm sure she misses you.$"
