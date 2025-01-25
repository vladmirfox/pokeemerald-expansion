.set LOCALID_MEWTWO, 1

PokemonMansionF5_MapScripts::
	.byte 0

PokemonMansionF5_Mewtwo::
	lock
	applymovement LOCALID_MEWTWO, PokemonMansionF5_MewtwoApproachPlayer
	waitmovement 0
	playmoncry SPECIES_MEWTWO, CRY_MODE_NORMAL
	waitmoncry
	fadescreen(FADE_TO_WHITE)
	msgbox PokemonMansionF5_Text_MewtwoFled, MSGBOX_DEFAULT
	warp MAP_POKEMON_MANSION_F5, 9, 7,
	setflag FLAG_MEWTWO_MANSION
	clearflag FLAG_SHOW_MEWTWO
	delay 40
	fadescreen(FADE_FROM_WHITE)
	msgbox PokemonMansionF5_Text_MewtwoFled, MSGBOX_DEFAULT
	release
	end

PokemonMansionF5_MewtwoApproachPlayer:
	walk_in_place_down
	step_end

PokemonMansionF5_Text_MewtwoFled:
	.string "The POKéMON has fled.$"