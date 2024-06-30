MaguroHarbor_House1_MapScripts::
	.byte 0


MaguroHarbor_House1_EventScript_PokedexRiddler::
# 6 "data/maps/MaguroHarbor_House1/scripts.pory"
	lock
# 7 "data/maps/MaguroHarbor_House1/scripts.pory"
	faceplayer
# 11 "data/maps/MaguroHarbor_House1/scripts.pory"
	bufferspeciesdexdesc STR_VAR_2, SPECIES_GROWLITHE
# 13 "data/maps/MaguroHarbor_House1/scripts.pory"
	msgbox MaguroHarbor_House1_EventScript_PokedexRiddler_Text_0
# 21 "data/maps/MaguroHarbor_House1/scripts.pory"
	closemessage
# 23 "data/maps/MaguroHarbor_House1/scripts.pory"
	release
	return


MaguroHarbor_House1_EventScript_PokedexRiddler_Text_0:
# 14 "data/maps/MaguroHarbor_House1/scripts.pory"
	.string "I know a lot about Pokémon. And I\n"
	.string "mean a LOT.\p"
	.string "If you prove that you know as much as\n"
	.string "I do, I'll give you a little something.\p"
	.string "Can you guess which Pokémon I'm\n"
	.string "talking about?\p"
	.string "Here goes…\p"
	.string "{STR_VAR_2}\p"
	.string "So?$"
