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
# 17 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 19 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	clearflag FLAG_TEMP_2
# 20 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_RED
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	clearflag FLAG_TEMP_1
# 13 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_2
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 9 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	goto ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2


ChiiTown_PokemonCenter_EventScript_Nurse::
# 26 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 27 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse_CutTheBullshit
# 28 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmessage
# 29 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 30 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Shamisen::
# 35 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 36 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 37 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Shamisen_Text_0
# 38 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Shamisen_Text_1
# 41 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 42 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_WhereShamisen::
# 47 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 48 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 49 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0
# 50 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_1
# 53 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 54 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	gettime
# 55 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 56 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_2
# 57 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_IveComeALongWay::
# 62 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 63 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 64 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0
# 65 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_1
# 69 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 70 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Snorunt::
# 75 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 76 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 77 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 78 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	ismonseen SPECIES_SNORUNT
# 79 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ChiiTown_PokemonCenter_EventScript_Snorunt_2
# 82 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Snorunt_Text_1
ChiiTown_PokemonCenter_EventScript_Snorunt_1:
# 84 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Snorunt_Text_2
# 87 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmoncry
# 88 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 89 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_Snorunt_2:
# 80 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0
	goto ChiiTown_PokemonCenter_EventScript_Snorunt_1


ChiiTown_PokemonCenter_EventScript_NeedMarket::
# 94 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 95 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 96 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0
# 97 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_1
# 100 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 101 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_RefugePresentation::
# 106 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 108 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0
# 109 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_1
# 115 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 117 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	switch VAR_FACING
# 118 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_NORTH, ChiiTown_PokemonCenter_EventScript_RefugePresentation_3
# 120 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_WEST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_4
# 122 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_EAST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_5
ChiiTown_PokemonCenter_EventScript_RefugePresentation_1:
# 125 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 126 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	removeobject 2
# 127 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 128 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitse
# 130 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_POKEMON_REFUGE_PRESENTATION
# 131 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_RefugePresentation_3:
# 119 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_4:
# 121 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_5:
# 123 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1


# 135 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom:
# 136 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_right
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_Leave:
# 141 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 141 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 141 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 141 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 141 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 141 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

ChiiTown_PokemonCenter_EventScript_Shamisen_Text_0:
# 37 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Blind singer$"

ChiiTown_PokemonCenter_EventScript_Shamisen_Text_1:
# 39 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Good evening.$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0:
# 49 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Weird man$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_1:
# 51 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Where's that cute shamisen player\n"
	.string "that was here last night?$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_2:
# 56 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "{STR_VAR_1}$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0:
# 64 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Traveler$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_1:
# 66 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "I'm so glad I found this refuge. I've\n"
	.string "come a long way and my feet hurt.\p"
	.string "My Pokémon and I can rest for a while.$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0:
# 80 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Snorunt$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_1:
# 82 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Cold pyramid$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_2:
# 85 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Glaglaglaglagla!$"

ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0:
# 96 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Woman$"

ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_1:
# 98 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Berries, potions… Oh, right, I should\n"
	.string "get a few more Pokéballs from the\l"
	.string "town market!$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0:
# 108 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Talkative man$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_1:
# 110 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Isn't it amazing? This is one of the\n"
	.string "many brand-new Pokémon refuges that\l"
	.string "the Pokémon league council has\l"
	.string "decided to build in towns across all\l"
	.string "Toku!\p"
	.string "With traveling alone becoming more\n"
	.string "dangerous, many people are now\l"
	.string "training a Pokémon of their own for\l"
	.string "protection.\p"
	.string "Towns were starting to be in dire need\n"
	.string "of proper healing and rest spots for\l"
	.string "Pokémon.\p"
	.string "Oh, sorry, I'll get out of your hair\n"
	.string "now. Talk to the nurse whenever you\l"
	.string "want her to heal your Pokémon!$"
