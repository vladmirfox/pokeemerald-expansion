SunriseVillage_MapScripts::
# 5 "data/maps/SunriseVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_4
# 12 "data/maps/SunriseVillage/scripts.pory"
	gettime
# 13 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_0x8000, 5
	goto_if_ge SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/SunriseVillage/scripts.pory"
	random 4
# 15 "data/maps/SunriseVillage/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/SunriseVillage/scripts.pory"
	case 0, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 18 "data/maps/SunriseVillage/scripts.pory"
	case 1, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_7
# 20 "data/maps/SunriseVillage/scripts.pory"
	case 2, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 22 "data/maps/SunriseVillage/scripts.pory"
	case 3, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 13 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 17 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_1
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 19 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_2
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 21 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_4
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 23 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_1
# 24 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_3
	return


SunriseVillage_Event_FatGuy::
# 32 "data/maps/SunriseVillage/scripts.pory"
	lock
# 33 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 35 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_ge SunriseVillage_Event_FatGuy_2
# 43 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_FatGuy_Text_1
# 48 "data/maps/SunriseVillage/scripts.pory"
	closemessage
SunriseVillage_Event_FatGuy_1:
# 50 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_FatGuy_2:
# 36 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_FatGuy_Text_0
# 39 "data/maps/SunriseVillage/scripts.pory"
	closemessage
# 40 "data/maps/SunriseVillage/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
	goto SunriseVillage_Event_FatGuy_1


SunriseVillage_Event_GuardForest::
# 56 "data/maps/SunriseVillage/scripts.pory"
	lock
# 57 "data/maps/SunriseVillage/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 58 "data/maps/SunriseVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_Event_GuardForest_2
# 87 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_3
# 90 "data/maps/SunriseVillage/scripts.pory"
	closemessage
# 91 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 92 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_4
# 98 "data/maps/SunriseVillage/scripts.pory"
	closemessage
# 99 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 100 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
SunriseVillage_Event_GuardForest_1:
# 102 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_GuardForest_2:
# 59 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto_if_ge SunriseVillage_Event_GuardForest_5
# 66 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_Event_GuardForest_6
# 77 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 78 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_2
# 81 "data/maps/SunriseVillage/scripts.pory"
	closemessage
# 82 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 83 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
	goto SunriseVillage_Event_GuardForest_1

SunriseVillage_Event_GuardForest_5:
# 60 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_0
# 65 "data/maps/SunriseVillage/scripts.pory"
	closemessage
	goto SunriseVillage_Event_GuardForest_1

SunriseVillage_Event_GuardForest_6:
# 67 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 68 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_1
# 73 "data/maps/SunriseVillage/scripts.pory"
	closemessage
# 74 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 75 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
	goto SunriseVillage_Event_GuardForest_1


SunriseVillage_Event_GuardForest_Interact::
# 107 "data/maps/SunriseVillage/scripts.pory"
	lock
# 108 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 109 "data/maps/SunriseVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_Event_GuardForest_Interact_2
# 132 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Interact_Text_0
# 136 "data/maps/SunriseVillage/scripts.pory"
	closemessage
SunriseVillage_Event_GuardForest_Interact_1:
# 138 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_GuardForest_Interact_2:
# 110 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto_if_ge SunriseVillage_Event_GuardForest_Interact_5
# 117 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_Event_GuardForest_Interact_6
# 125 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_2
# 128 "data/maps/SunriseVillage/scripts.pory"
	closemessage
	goto SunriseVillage_Event_GuardForest_Interact_1

SunriseVillage_Event_GuardForest_Interact_5:
# 111 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_0
# 116 "data/maps/SunriseVillage/scripts.pory"
	closemessage
	goto SunriseVillage_Event_GuardForest_Interact_1

SunriseVillage_Event_GuardForest_Interact_6:
# 118 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_1
# 123 "data/maps/SunriseVillage/scripts.pory"
	closemessage
	goto SunriseVillage_Event_GuardForest_Interact_1


SunriseVillage_Event_LittleGirl::
# 144 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_LittleGirl_Text_0, MSGBOX_NPC
	return


SunriseVillage_Event_Boy::
# 152 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 153 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 154 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_ge SunriseVillage_Event_Boy_2
# 161 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Boy_Text_1
# 165 "data/maps/SunriseVillage/scripts.pory"
	closemessage
SunriseVillage_Event_Boy_1:
# 167 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end

SunriseVillage_Event_Boy_2:
# 155 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Boy_Text_0
# 158 "data/maps/SunriseVillage/scripts.pory"
	closemessage
	goto SunriseVillage_Event_Boy_1


SunriseVillage_Event_Woman::
# 173 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 174 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Woman_Text_0
# 177 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_Farmer::
# 183 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 184 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 185 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Farmer_Text_0
# 188 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_OldMan::
# 194 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 195 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 196 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_OldMan_Text_0
# 199 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_OldWoman::
# 205 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_OldWoman_Text_0, MSGBOX_NPC
	return


SunriseVillage_Event_Happiny::
# 212 "data/maps/SunriseVillage/scripts.pory"
	lock
# 213 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 214 "data/maps/SunriseVillage/scripts.pory"
	waitse
# 215 "data/maps/SunriseVillage/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 216 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Happiny_Text_0
# 219 "data/maps/SunriseVillage/scripts.pory"
	waitmoncry
# 220 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_Munchlax::
# 226 "data/maps/SunriseVillage/scripts.pory"
	lock
# 227 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 228 "data/maps/SunriseVillage/scripts.pory"
	waitse
# 229 "data/maps/SunriseVillage/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 230 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Munchlax_Text_0
# 233 "data/maps/SunriseVillage/scripts.pory"
	waitmoncry
# 234 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_Kirlia::
# 240 "data/maps/SunriseVillage/scripts.pory"
	lock
# 241 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 242 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Kirlia_Text_0
# 245 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_TestGyarados::
# 251 "data/maps/SunriseVillage/scripts.pory"
	lock
# 252 "data/maps/SunriseVillage/scripts.pory"
	givemon SPECIES_SPHEAL, 100
# 253 "data/maps/SunriseVillage/scripts.pory"
	setwildbattle SPECIES_KOTORA, 5
# 254 "data/maps/SunriseVillage/scripts.pory"
	dowildbattle
# 255 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_TownSign::
# 260 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_TownSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_PlayersHouseSign::
# 264 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_RivalsHouseSign::
# 268 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_RivalsHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_EldersHouseSign::
# 272 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_EldersHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_FatGuy_Text_0:
# 37 "data/maps/SunriseVillage/scripts.pory"
	.string "My new Pokémon is so cute, I don't feel\n"
	.string "like leaving it in its Pokéball!$"

SunriseVillage_Event_FatGuy_Text_1:
# 44 "data/maps/SunriseVillage/scripts.pory"
	.string "Someone managed to fit entire Pokémon\n"
	.string "inside these tiny balls.\p"
	.string "The power of science is staggering!$"

SunriseVillage_Event_GuardForest_Text_0:
# 61 "data/maps/SunriseVillage/scripts.pory"
	.string "Oh, I see you received a Pokémon!\p"
	.string "You'll probably be able to manage the\n"
	.string "woods on your own, then.\p"
	.string "Be careful!$"

SunriseVillage_Event_GuardForest_Text_1:
# 69 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey, kid, heard you were going off on an\n"
	.string "adventure!\p"
	.string "Did you say bye to your sister?\p"
	.string "No? Thought so. Go see her before you\n"
	.string "run off, you ungrateful sibling!$"

SunriseVillage_Event_GuardForest_Text_2:
# 79 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey, kid, a friend of yours was looking\n"
	.string "for you.$"

SunriseVillage_Event_GuardForest_Text_3:
# 88 "data/maps/SunriseVillage/scripts.pory"
	.string "Stop right there, kid!$"

SunriseVillage_Event_GuardForest_Text_4:
# 93 "data/maps/SunriseVillage/scripts.pory"
	.string "Wild POKéMON have been lashing out\n"
	.string "recently.\p"
	.string "I know you're used to walking around on\n"
	.string "your own, but the woods have become a\l"
	.string "dangerous place lately!\p"
	.string "I wouldn't go alone if I were you.\p"
	.string "Or, you know, if I were me.$"

SunriseVillage_Event_GuardForest_Interact_Text_0:
# 133 "data/maps/SunriseVillage/scripts.pory"
	.string "Wild POKéMON have been lashing out\n"
	.string "recently.\p"
	.string "Even the Ginko woods have become a\n"
	.string "dangerous place lately!$"

SunriseVillage_Event_LittleGirl_Text_0:
# 145 "data/maps/SunriseVillage/scripts.pory"
	.string "I can't wait I can't wait I can't wait!!!\p"
	.string "AHHHHH I CAN'T WAIT!!!!$"

SunriseVillage_Event_Boy_Text_0:
# 156 "data/maps/SunriseVillage/scripts.pory"
	.string "My Happiny is the strongest of all! See\n"
	.string "how fierce it looks?$"

SunriseVillage_Event_Boy_Text_1:
# 162 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey {PLAYER}{KUN}!\p"
	.string "So, d'you think we'll get to choose the\n"
	.string "one we want?$"

SunriseVillage_Event_Woman_Text_0:
# 175 "data/maps/SunriseVillage/scripts.pory"
	.string "I can see the Pokéballs from here… I've\n"
	.string "never seen so many in my life!$"

SunriseVillage_Event_Farmer_Text_0:
# 186 "data/maps/SunriseVillage/scripts.pory"
	.string "I've been waiting for hours!$"

SunriseVillage_Event_OldMan_Text_0:
# 197 "data/maps/SunriseVillage/scripts.pory"
	.string "The distribution is about to start.$"

SunriseVillage_Event_OldWoman_Text_0:
# 206 "data/maps/SunriseVillage/scripts.pory"
	.string "I'm tired of waiting!$"

SunriseVillage_Event_Happiny_Text_0:
# 217 "data/maps/SunriseVillage/scripts.pory"
	.string "Happi!$"

SunriseVillage_Event_Munchlax_Text_0:
# 231 "data/maps/SunriseVillage/scripts.pory"
	.string "Munch munch munch…$"

SunriseVillage_Event_Kirlia_Text_0:
# 243 "data/maps/SunriseVillage/scripts.pory"
	.string "…$"

SunriseVillage_Event_TownSign_Text_0:
# 260 "data/maps/SunriseVillage/scripts.pory"
	.string "Sunrise Village\n"
	.string "“A village bathing in soft light.”$"

SunriseVillage_Event_PlayersHouseSign_Text_0:
# 264 "data/maps/SunriseVillage/scripts.pory"
	.string "{PLAYER}'s house$"

SunriseVillage_Event_RivalsHouseSign_Text_0:
# 268 "data/maps/SunriseVillage/scripts.pory"
	.string "{RIVAL}'s house$"

SunriseVillage_Event_EldersHouseSign_Text_0:
# 272 "data/maps/SunriseVillage/scripts.pory"
	.string "Elder Kaba's house$"
