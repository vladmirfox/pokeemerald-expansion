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
# 42 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_FatGuy_Text_1, MSGBOX_AUTOCLOSE
SunriseVillage_Event_FatGuy_1:
# 48 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_FatGuy_2:
# 36 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_FatGuy_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/SunriseVillage/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
	goto SunriseVillage_Event_FatGuy_1


SunriseVillage_Event_GuardForest::
# 54 "data/maps/SunriseVillage/scripts.pory"
	lock
# 55 "data/maps/SunriseVillage/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 56 "data/maps/SunriseVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_Event_GuardForest_2
# 82 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_3, MSGBOX_AUTOCLOSE
# 85 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 86 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_4, MSGBOX_AUTOCLOSE
# 92 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 93 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
SunriseVillage_Event_GuardForest_1:
# 95 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_GuardForest_2:
# 57 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto_if_ge SunriseVillage_Event_GuardForest_5
# 63 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_Event_GuardForest_6
# 73 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 74 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_2, MSGBOX_AUTOCLOSE
# 77 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 78 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
	goto SunriseVillage_Event_GuardForest_1

SunriseVillage_Event_GuardForest_5:
# 58 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_GuardForest_1

SunriseVillage_Event_GuardForest_6:
# 64 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 65 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_1, MSGBOX_AUTOCLOSE
# 70 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 71 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
	goto SunriseVillage_Event_GuardForest_1


SunriseVillage_Event_GuardForest_Interact::
# 100 "data/maps/SunriseVillage/scripts.pory"
	lock
# 101 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 102 "data/maps/SunriseVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_Event_GuardForest_Interact_2
# 122 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Interact_Text_0, MSGBOX_AUTOCLOSE
SunriseVillage_Event_GuardForest_Interact_1:
# 127 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_GuardForest_Interact_2:
# 103 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 8
	goto_if_ge SunriseVillage_Event_GuardForest_Interact_5
# 109 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_eq SunriseVillage_Event_GuardForest_Interact_6
# 116 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_2, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_GuardForest_Interact_1

SunriseVillage_Event_GuardForest_Interact_5:
# 104 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_GuardForest_Interact_1

SunriseVillage_Event_GuardForest_Interact_6:
# 110 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_1, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_GuardForest_Interact_1


SunriseVillage_Event_LittleGirl::
# 133 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_LittleGirl_Text_0, MSGBOX_NPC
	return


SunriseVillage_Event_Boy::
# 141 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 142 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 143 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_ge SunriseVillage_Event_Boy_2
# 149 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Boy_Text_1, MSGBOX_AUTOCLOSE
SunriseVillage_Event_Boy_1:
# 154 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end

SunriseVillage_Event_Boy_2:
# 144 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Boy_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_Boy_1


SunriseVillage_Event_Woman::
# 160 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 161 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Woman_Text_0, MSGBOX_AUTOCLOSE
# 164 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_Farmer::
# 170 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 171 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 172 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Farmer_Text_0, MSGBOX_AUTOCLOSE
# 175 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_OldMan::
# 181 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 182 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 183 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 186 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_OldWoman::
# 192 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_OldWoman_Text_0, MSGBOX_NPC
	return


SunriseVillage_Event_Happiny::
# 199 "data/maps/SunriseVillage/scripts.pory"
	lock
# 200 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 201 "data/maps/SunriseVillage/scripts.pory"
	waitse
# 202 "data/maps/SunriseVillage/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 203 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Happiny_Text_0, MSGBOX_AUTOCLOSE
# 206 "data/maps/SunriseVillage/scripts.pory"
	waitmoncry
# 207 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_Munchlax::
# 213 "data/maps/SunriseVillage/scripts.pory"
	lock
# 214 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 215 "data/maps/SunriseVillage/scripts.pory"
	waitse
# 216 "data/maps/SunriseVillage/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 217 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Munchlax_Text_0, MSGBOX_AUTOCLOSE
# 220 "data/maps/SunriseVillage/scripts.pory"
	waitmoncry
# 221 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_Kirlia::
# 227 "data/maps/SunriseVillage/scripts.pory"
	lock
# 228 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 229 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Kirlia_Text_0, MSGBOX_AUTOCLOSE
# 232 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_TestGyarados::
# 238 "data/maps/SunriseVillage/scripts.pory"
	lock
# 239 "data/maps/SunriseVillage/scripts.pory"
	givemon SPECIES_SPHEAL, 100
# 240 "data/maps/SunriseVillage/scripts.pory"
	setwildbattle SPECIES_KOTORA, 5
# 241 "data/maps/SunriseVillage/scripts.pory"
	dowildbattle
# 242 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_TownSign::
# 247 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_TownSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_PlayersHouseSign::
# 251 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_RivalsHouseSign::
# 255 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_RivalsHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_EldersHouseSign::
# 259 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_EldersHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_FatGuy_Text_0:
# 37 "data/maps/SunriseVillage/scripts.pory"
	.string "My new Pokémon is so cute, I don't feel\n"
	.string "like leaving it in its Pokéball!$"

SunriseVillage_Event_FatGuy_Text_1:
# 43 "data/maps/SunriseVillage/scripts.pory"
	.string "Someone managed to fit entire Pokémon\n"
	.string "inside these tiny balls.\p"
	.string "The power of science is staggering!$"

SunriseVillage_Event_GuardForest_Text_0:
# 59 "data/maps/SunriseVillage/scripts.pory"
	.string "Oh, I see you received a Pokémon!\p"
	.string "You'll probably be able to manage the\n"
	.string "woods on your own, then.\p"
	.string "Be careful!$"

SunriseVillage_Event_GuardForest_Text_1:
# 66 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey, kid, heard you were going off on an\n"
	.string "adventure!\p"
	.string "Did you say bye to your sister?\p"
	.string "No? Thought so. Go see her before you\n"
	.string "run off, you ungrateful sibling!$"

SunriseVillage_Event_GuardForest_Text_2:
# 75 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey, kid, a friend of yours was looking\n"
	.string "for you.$"

SunriseVillage_Event_GuardForest_Text_3:
# 83 "data/maps/SunriseVillage/scripts.pory"
	.string "Stop right there, kid!$"

SunriseVillage_Event_GuardForest_Text_4:
# 87 "data/maps/SunriseVillage/scripts.pory"
	.string "Wild POKéMON have been lashing out\n"
	.string "recently.\p"
	.string "I know you're used to walking around on\n"
	.string "your own, but the woods have become a\l"
	.string "dangerous place lately!\p"
	.string "I wouldn't go alone if I were you.\p"
	.string "Or, you know, if I were me.$"

SunriseVillage_Event_GuardForest_Interact_Text_0:
# 123 "data/maps/SunriseVillage/scripts.pory"
	.string "Wild POKéMON have been lashing out\n"
	.string "recently.\p"
	.string "Even the Ginko woods have become a\n"
	.string "dangerous place lately!$"

SunriseVillage_Event_LittleGirl_Text_0:
# 134 "data/maps/SunriseVillage/scripts.pory"
	.string "I can't wait I can't wait I can't wait!!!\p"
	.string "AHHHHH I CAN'T WAIT!!!!$"

SunriseVillage_Event_Boy_Text_0:
# 145 "data/maps/SunriseVillage/scripts.pory"
	.string "My Happiny is the strongest of all! See\n"
	.string "how fierce it looks?$"

SunriseVillage_Event_Boy_Text_1:
# 150 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey {PLAYER}{KUN}!\p"
	.string "So, d'you think we'll get to choose the\n"
	.string "one we want?$"

SunriseVillage_Event_Woman_Text_0:
# 162 "data/maps/SunriseVillage/scripts.pory"
	.string "I can see the Pokéballs from here… I've\n"
	.string "never seen so many in my life!$"

SunriseVillage_Event_Farmer_Text_0:
# 173 "data/maps/SunriseVillage/scripts.pory"
	.string "I've been waiting for hours!$"

SunriseVillage_Event_OldMan_Text_0:
# 184 "data/maps/SunriseVillage/scripts.pory"
	.string "The distribution is about to start.$"

SunriseVillage_Event_OldWoman_Text_0:
# 193 "data/maps/SunriseVillage/scripts.pory"
	.string "I'm tired of waiting!$"

SunriseVillage_Event_Happiny_Text_0:
# 204 "data/maps/SunriseVillage/scripts.pory"
	.string "Happi!$"

SunriseVillage_Event_Munchlax_Text_0:
# 218 "data/maps/SunriseVillage/scripts.pory"
	.string "Munch munch munch…$"

SunriseVillage_Event_Kirlia_Text_0:
# 230 "data/maps/SunriseVillage/scripts.pory"
	.string "…$"

SunriseVillage_Event_TownSign_Text_0:
# 247 "data/maps/SunriseVillage/scripts.pory"
	.string "Sunrise Village\n"
	.string "“A village bathing in soft light.”$"

SunriseVillage_Event_PlayersHouseSign_Text_0:
# 251 "data/maps/SunriseVillage/scripts.pory"
	.string "{PLAYER}'s house$"

SunriseVillage_Event_RivalsHouseSign_Text_0:
# 255 "data/maps/SunriseVillage/scripts.pory"
	.string "{RIVAL}'s house$"

SunriseVillage_Event_EldersHouseSign_Text_0:
# 259 "data/maps/SunriseVillage/scripts.pory"
	.string "Elder Kaba's house$"
