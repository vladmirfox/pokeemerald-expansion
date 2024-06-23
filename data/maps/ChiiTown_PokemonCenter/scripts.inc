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
# 18 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	clearflag FLAG_TEMP_2
# 21 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	random 3
# 23 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case 0, ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 26 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case 1, ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 28 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
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
# 25 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_RED
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 27 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_BLUE
	return

ChiiTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 29 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SHAMISEN_GREEN
	return


ChiiTown_PokemonCenter_EventScript_PcGuy::
# 36 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 37 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 38 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PcGuy
# 39 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Nurse::
# 44 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 45 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse_CutTheBullshit
# 46 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmessage
# 47 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 48 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Shamisen::
# 53 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 54 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 56 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Shamisen_Text_0
# 57 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Shamisen_Text_1
# 62 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_ShamisenFan::
# 68 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 69 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 70 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_ShamisenFan_Text_0
# 71 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_ShamisenFan_Text_1
# 78 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 79 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Boy::
# 84 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 85 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 86 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Boy_Text_0
# 87 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Boy_Text_1
# 91 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 92 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Mom::
# 97 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 98 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 99 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Mom_Text_0
# 100 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Mom_Text_1
# 104 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 105 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_WhereShamisen::
# 110 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 111 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 112 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0
# 113 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_1
# 116 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 117 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_IveComeALongWay::
# 122 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 123 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 124 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0
# 125 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_1
# 129 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 130 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_Snorunt::
# 135 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 136 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 137 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_SNORUNT, CRY_MODE_NORMAL
# 138 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	ismonseen SPECIES_SNORUNT
# 139 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ChiiTown_PokemonCenter_EventScript_Snorunt_2
# 142 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Snorunt_Text_1
ChiiTown_PokemonCenter_EventScript_Snorunt_1:
# 144 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_Snorunt_Text_2
# 147 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmoncry
# 148 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 149 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_Snorunt_2:
# 140 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0
	goto ChiiTown_PokemonCenter_EventScript_Snorunt_1


ChiiTown_PokemonCenter_EventScript_NeedMarket::
# 154 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 155 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 156 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_Mom_Text_0
# 157 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0
# 160 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 161 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end


ChiiTown_PokemonCenter_EventScript_RefugePresentation::
# 166 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	lock
# 167 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	faceplayer
# 168 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	speakername ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0
# 169 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	msgbox ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_1
# 175 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	closemessage
# 177 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	switch VAR_FACING
# 178 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_NORTH, ChiiTown_PokemonCenter_EventScript_RefugePresentation_3
# 180 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_WEST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_4
# 182 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	case DIR_EAST, ChiiTown_PokemonCenter_EventScript_RefugePresentation_5
ChiiTown_PokemonCenter_EventScript_RefugePresentation_1:
# 185 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 186 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	removeobject 2
# 187 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 188 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	waitse
# 190 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	setflag FLAG_POKEMON_REFUGE_PRESENTATION
# 191 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	release
	end

ChiiTown_PokemonCenter_EventScript_RefugePresentation_3:
# 179 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_4:
# 181 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1

ChiiTown_PokemonCenter_EventScript_RefugePresentation_5:
# 183 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	applymovement 2, ChiiTown_PokemonCenter_Movement_Leave
	goto ChiiTown_PokemonCenter_EventScript_RefugePresentation_1


# 195 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_LeaveWhenFromBottom:
# 196 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_right
# 197 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 197 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 197 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 197 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 197 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 197 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 200 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
ChiiTown_PokemonCenter_Movement_Leave:
# 201 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 201 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 201 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 201 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 201 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
# 201 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

ChiiTown_PokemonCenter_EventScript_Shamisen_Text_0:
# 56 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Blind singer$"

ChiiTown_PokemonCenter_EventScript_Shamisen_Text_1:
# 58 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Good evening.\p"
	.string "We blind shamisen players sing to\n"
	.string "survive.\p"
	.string "These Pokémon refuges give us a safe\n"
	.string "place to spend the night.$"

ChiiTown_PokemonCenter_EventScript_ShamisenFan_Text_0:
# 70 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Shamisen fan$"

ChiiTown_PokemonCenter_EventScript_ShamisenFan_Text_1:
# 72 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Such a beautiful voice…\p"
	.string "Such sorrowful notes…\p"
	.string "Such ethereal beauty…\p"
	.string "I could listen to her forever…\p"
	.string "Even though she can't see me, I sure\n"
	.string "hope she'll notice me one day…$"

ChiiTown_PokemonCenter_EventScript_Boy_Text_0:
# 86 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Little boy$"

ChiiTown_PokemonCenter_EventScript_Boy_Text_1:
# 88 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "I'm here with my mama!\p"
	.string "The music lady's nice!$"

ChiiTown_PokemonCenter_EventScript_Mom_Text_0:
# 99 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Woman$"

ChiiTown_PokemonCenter_EventScript_Mom_Text_1:
# 101 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Traveling shamisen players take\n"
	.string "shelter in Pokémon refuges when the\l"
	.string "night falls.\p"
	.string "Their singing makes for such a cosy\n"
	.string "atmosphere!$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_0:
# 112 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Weird man$"

ChiiTown_PokemonCenter_EventScript_WhereShamisen_Text_1:
# 114 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Where's that cute shamisen player\n"
	.string "that was here last night?$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_0:
# 124 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Traveler$"

ChiiTown_PokemonCenter_EventScript_IveComeALongWay_Text_1:
# 126 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "I'm so glad I found this refuge. I've\n"
	.string "come a long way and my feet hurt.\p"
	.string "My Pokémon and I can rest for a while.$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_0:
# 140 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Snorunt$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_1:
# 142 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Cold pyramid$"

ChiiTown_PokemonCenter_EventScript_Snorunt_Text_2:
# 145 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Glaglaglaglagla!$"

ChiiTown_PokemonCenter_EventScript_NeedMarket_Text_0:
# 158 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Berries, potions… Oh, right, I should\n"
	.string "get a few more Pokéballs from the\l"
	.string "town market!$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_0:
# 168 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
	.string "Talkative man$"

ChiiTown_PokemonCenter_EventScript_RefugePresentation_Text_1:
# 170 "data/maps/ChiiTown_PokemonCenter/scripts.pory"
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
