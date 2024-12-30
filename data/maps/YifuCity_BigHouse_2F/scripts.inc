YifuCity_BigHouse_2F_MapScripts::
	.byte 0


YifuCity_BigHouse_2F_EventScript_OldManScaredOfPokemon::
# 6 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	lock
# 7 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	faceplayer
# 8 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	speakername YifuCity_BigHouse_2F_EventScript_OldManScaredOfPokemon_Text_0
# 9 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	msgbox YifuCity_BigHouse_2F_EventScript_OldManScaredOfPokemon_Text_1
# 16 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	release
	return


YifuCity_BigHouse_2F_EventScript_OldManScaredOfPokemon_Text_0:
# 8 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	.string "Old man$"

YifuCity_BigHouse_2F_EventScript_OldManScaredOfPokemon_Text_1:
# 10 "data/maps/YifuCity_BigHouse_2F/scripts.pory"
	.string "I was told I needed to raise a\n"
	.string "Pokémon of my own. No sir!\p"
	.string "Back in my day, we didn't need no\n"
	.string "Pokémon!\l"
	.string "A fire Pokémon burned my hand, a good\l"
	.string "many years ago…\l"
	.string "Now I'm scared! I don't want anything\l"
	.string "to do with them!$"
