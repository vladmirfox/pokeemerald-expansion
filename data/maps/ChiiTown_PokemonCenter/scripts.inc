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
	random 3
# 22 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case 0, ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 25 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case 1, ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 27 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case 2, ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
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

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 24 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_RED
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 26 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_BLUE
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 28 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_GREEN
	return


ChiiTown_PokemonCenter_EventScript_Nurse::
# 35 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 36 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse_CutTheBullshit
# 37 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmessage
# 38 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 39 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Shamisen::
# 44 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 46 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Shamisen_Text_0
# 47 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Shamisen_Text_1
# 50 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 51 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_WhereShamisen::
# 56 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 57 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 58 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0
# 59 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_1
# 62 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	gettime
# 64 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 65 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_2
# 66 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_IveComeALongWay::
# 71 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 72 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 73 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0
# 74 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_1
# 78 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 79 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Snorunt::
# 84 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 85 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 86 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 87 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	ismonseen SPECIES_SNORUNT
# 88 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ChiiTown_PokemonCenter_EventScript_Snorunt_2
# 91 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Snorunt_Text_1
ChiiTown_PokemonCenter_EventScript_Snorunt_1:
# 93 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Snorunt_Text_2
# 96 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmoncry
# 97 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 98 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_Snorunt_2:
# 89 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0
	goto ChiiTown_PokemonCenter_EventScript_Snorunt_1


ChiiTown_PokemonCenter_EventScript_NeedMarket::
# 103 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 104 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 105 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0
# 106 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_1
# 109 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 110 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_RefugePresentation::
# 115 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 116 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 117 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0
# 118 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_1
# 124 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 126 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	switch VAR_FACING
# 127 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_NORTH, ChiiTown_PokemonCenter_EventScript_RefugePresentation_3
# 129 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_WEST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_4
# 131 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_EAST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_5
ChiiTown_PokemonCenter_EventScript_RefugePresentation_1:
# 134 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 135 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	removeobject 2
# 136 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitse
# 139 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_POKEMON_REFUGE_PRESENTATION
# 140 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_RefugePresentation_3:
# 128 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_4:
# 130 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_5:
# 132 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1


# 144 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom:
# 145 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_right
# 146 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 146 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 146 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 146 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 146 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 146 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 149 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_Leave:
# 150 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 150 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 150 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 150 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 150 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 150 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

ChiiTown_PokemonCenter_EventScript_Shamisen_Text_0:
# 46 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Blind singer$"

ChiiTown_PokemonCenter_EventScript_Shamisen_Text_1:
# 48 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Good evening.$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0:
# 58 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Weird man$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_1:
# 60 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Where's that cute shamisen player\n"
	.string "that was here last night?$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_2:
# 65 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "{STR_VAR_1}$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0:
# 73 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Traveler$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_1:
# 75 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "I'm so glad I found this refuge. I've\n"
	.string "come a long way and my feet hurt.\p"
	.string "My Pokémon and I can rest for a while.$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0:
# 89 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Snorunt$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_1:
# 91 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Cold pyramid$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_2:
# 94 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Glaglaglaglagla!$"

ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0:
# 105 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Woman$"

ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_1:
# 107 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Berries, potions… Oh, right, I should\n"
	.string "get a few more Pokéballs from the\l"
	.string "town market!$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0:
# 117 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Talkative man$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_1:
# 119 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
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
