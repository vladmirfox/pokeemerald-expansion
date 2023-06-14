LittlerootPokemonArea_MapScripts::
	.byte 0

LittlerootPokemonArea_PlayerWithPokemon::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, LittlerootPokemonArea_HasPokemon
	msgbox LittlerootPokemonArea_Text_HasNoPokemon, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootPokemonArea_Movement_PlayerStepBack
	waitmovement 0
	release
	end

LittlerootPokemonArea_Movement_PlayerStepBack::
	delay_8
	walk_left
	step_end

LittlerootPokemonArea_HasPokemon::
	release
	end

LittlerootPokemonArea_Text_HasNoPokemon::
	.string "Sorry but I can't let you through\n"
	.string "without any POKéMON. The Creatures\p"
	.string "that live here might seem cute...\n"
	.string "But they are the offspring of some\p"
	.string "of the strongest POKéMON known to\n"
	.string "live in the HOENN.\p"
	.string "Please step back and come again\n"
	.string "when you have some POKéMON yourself.$"
