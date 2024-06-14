ChiiTown_PokemonCenter_MapScripts::
# 5 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CHII_TOWN
# 7 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	gettime
# 9 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	compare VAR_0x8000, 5
	goto_if_ge ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	clearflag FLAG_TEMP_1
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 9 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	goto ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2


ChiiTown_PokemonCenter_EventScript_Nurse::
# 21 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 22 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse_CutTheBullshit
# 23 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmessage
# 24 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 25 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_WhereShamisen::
# 30 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 31 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 32 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0
# 35 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 36 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_IveComeALongWay::
# 41 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 42 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 43 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0
# 47 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 48 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Snorunt::
# 53 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 54 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 55 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 56 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0
# 59 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmoncry
# 60 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 61 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_NeedMarket::
# 66 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 67 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 68 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0
# 71 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 72 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_RefugePresentation::
# 77 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 78 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 79 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0
# 85 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 87 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	switch VAR_FACING
# 88 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_NORTH, ChiiTown_PokemonCenter_EventScript_RefugePresentation_3
# 90 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_WEST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_4
# 92 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_EAST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_5
ChiiTown_PokemonCenter_EventScript_RefugePresentation_1:
# 95 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 96 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	removeobject 2
# 97 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 98 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitse
# 100 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_POKEMON_REFUGE_PRESENTATION
# 101 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_RefugePresentation_3:
# 89 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_4:
# 91 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_5:
# 93 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1


# 105 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom:
# 106 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_right
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_Leave:
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0:
# 33 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Where's that cute shamisen player that\n"
	.string "was here last night?$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0:
# 44 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "I'm so glad I found this refuge. I've\n"
	.string "come a long way and my feet hurt.\p"
	.string "My Pokémon and I can rest for a while.$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0:
# 57 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Glaglaglaglagla!$"

ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0:
# 69 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Berries, potions… Oh, right, I should get\n"
	.string "a few more Pokéballs from the town\l"
	.string "market!$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0:
# 80 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Isn't it amazing? This is one of the\n"
	.string "many brand-new Pokémon refuges that\l"
	.string "the Pokémon league council has decided\l"
	.string "to build in towns across all Toku!\p"
	.string "With traveling alone becoming more\n"
	.string "dangerous, many people are now training\l"
	.string "a Pokémon of their own for protection.\p"
	.string "Towns were starting to be in dire need\n"
	.string "of proper healing and rest spots for\l"
	.string "Pokémon.\p"
	.string "Oh, sorry, I'll get out of your hair now.\n"
	.string "Talk to the nurse whenever you want her\l"
	.string "to heal your Pokémon!$"
