SunriseVillage_MapScripts::
# 4 "data/maps/SunriseVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_3
# 9 "data/maps/SunriseVillage/scripts.pory"
	setflag FLAG_TEMP_4
# 11 "data/maps/SunriseVillage/scripts.pory"
	gettime
# 12 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_0x8000, 5
	goto_if_ge SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/SunriseVillage/scripts.pory"
	random 4
# 14 "data/maps/SunriseVillage/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/SunriseVillage/scripts.pory"
	case 0, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 17 "data/maps/SunriseVillage/scripts.pory"
	case 1, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_7
# 19 "data/maps/SunriseVillage/scripts.pory"
	case 2, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 21 "data/maps/SunriseVillage/scripts.pory"
	case 3, SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_9
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 12 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 16 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_1
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 18 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_2
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 20 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_4
	return

SunriseVillage_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 22 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_1
# 23 "data/maps/SunriseVillage/scripts.pory"
	clearflag FLAG_TEMP_3
	return


SunriseVillage_Event_FatGuy::
# 31 "data/maps/SunriseVillage/scripts.pory"
	lock
# 32 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 34 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_ge SunriseVillage_Event_FatGuy_2
# 41 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_FatGuy_Text_1, MSGBOX_AUTOCLOSE
SunriseVillage_Event_FatGuy_1:
# 47 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_FatGuy_2:
# 35 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_FatGuy_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/SunriseVillage/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
	goto SunriseVillage_Event_FatGuy_1


SunriseVillage_Event_GuardForest::
# 53 "data/maps/SunriseVillage/scripts.pory"
	lock
# 54 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 55 "data/maps/SunriseVillage/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, SunriseVillage_Event_GuardForest_2
# 73 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_2, MSGBOX_AUTOCLOSE
# 76 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 77 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_3, MSGBOX_AUTOCLOSE
# 83 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 84 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
SunriseVillage_Event_GuardForest_1:
# 86 "data/maps/SunriseVillage/scripts.pory"
	release
	end

SunriseVillage_Event_GuardForest_2:
# 56 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 7
	goto_if_ge SunriseVillage_Event_GuardForest_5
# 63 "data/maps/SunriseVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 64 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
# 65 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_1, MSGBOX_AUTOCLOSE
# 68 "data/maps/SunriseVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 69 "data/maps/SunriseVillage/scripts.pory"
	waitmovement 0
	goto SunriseVillage_Event_GuardForest_1

SunriseVillage_Event_GuardForest_5:
# 57 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_GuardForest_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_GuardForest_1


SunriseVillage_Event_LittleGirl::
# 92 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_LittleGirl_Text_0, MSGBOX_NPC
	return


SunriseVillage_Event_Boy::
# 100 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 101 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 102 "data/maps/SunriseVillage/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 4
	goto_if_ge SunriseVillage_Event_Boy_2
# 108 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Boy_Text_1, MSGBOX_AUTOCLOSE
SunriseVillage_Event_Boy_1:
# 113 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end

SunriseVillage_Event_Boy_2:
# 103 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Boy_Text_0, MSGBOX_AUTOCLOSE
	goto SunriseVillage_Event_Boy_1


SunriseVillage_Event_Woman::
# 119 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 120 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 121 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Woman_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_Farmer::
# 130 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 131 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 132 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Farmer_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_OldMan::
# 141 "data/maps/SunriseVillage/scripts.pory"
	lockall
# 142 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 143 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 146 "data/maps/SunriseVillage/scripts.pory"
	releaseall
	end


SunriseVillage_Event_OldWoman::
# 152 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_OldWoman_Text_0, MSGBOX_NPC
	return


SunriseVillage_Event_Happiny::
# 159 "data/maps/SunriseVillage/scripts.pory"
	lock
# 160 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 161 "data/maps/SunriseVillage/scripts.pory"
	waitse
# 162 "data/maps/SunriseVillage/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 163 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Happiny_Text_0, MSGBOX_AUTOCLOSE
# 166 "data/maps/SunriseVillage/scripts.pory"
	waitmoncry
# 167 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_Munchlax::
# 173 "data/maps/SunriseVillage/scripts.pory"
	lock
# 174 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 175 "data/maps/SunriseVillage/scripts.pory"
	waitse
# 176 "data/maps/SunriseVillage/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 177 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Munchlax_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/maps/SunriseVillage/scripts.pory"
	waitmoncry
# 181 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_Kirlia::
# 187 "data/maps/SunriseVillage/scripts.pory"
	lock
# 188 "data/maps/SunriseVillage/scripts.pory"
	faceplayer
# 189 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_Kirlia_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_TestGyarados::
# 198 "data/maps/SunriseVillage/scripts.pory"
	lock
# 199 "data/maps/SunriseVillage/scripts.pory"
	givemon SPECIES_SPHEAL, 100
# 200 "data/maps/SunriseVillage/scripts.pory"
	setwildbattle SPECIES_KOTORA, 5
# 201 "data/maps/SunriseVillage/scripts.pory"
	dowildbattle
# 202 "data/maps/SunriseVillage/scripts.pory"
	release
	end


SunriseVillage_Event_TownSign::
# 207 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_TownSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_PlayersHouseSign::
# 211 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_RivalsHouseSign::
# 215 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_RivalsHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_EldersHouseSign::
# 219 "data/maps/SunriseVillage/scripts.pory"
	msgbox SunriseVillage_Event_EldersHouseSign_Text_0, MSGBOX_SIGN
	return


SunriseVillage_Event_FatGuy_Text_0:
# 36 "data/maps/SunriseVillage/scripts.pory"
	.string "My new Pokémon is so cute, I don't feel\n"
	.string "like leaving it in its Pokéball!$"

SunriseVillage_Event_FatGuy_Text_1:
# 42 "data/maps/SunriseVillage/scripts.pory"
	.string "Someone managed to fit entire Pokémon\n"
	.string "inside these tiny balls.\p"
	.string "The power of science is staggering!$"

SunriseVillage_Event_GuardForest_Text_0:
# 58 "data/maps/SunriseVillage/scripts.pory"
	.string "Oh, I see you received a Pokémon!\p"
	.string "You'll probably be able to manage the\n"
	.string "woods on your own, then.\p"
	.string "Be careful!$"

SunriseVillage_Event_GuardForest_Text_1:
# 66 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey, a friend of yours was looking for\n"
	.string "you.$"

SunriseVillage_Event_GuardForest_Text_2:
# 74 "data/maps/SunriseVillage/scripts.pory"
	.string "Stop right there!$"

SunriseVillage_Event_GuardForest_Text_3:
# 78 "data/maps/SunriseVillage/scripts.pory"
	.string "Wild POKéMON have been lashing out\n"
	.string "recently.\p"
	.string "I know you're used to walking around on\n"
	.string "your own, but the woods have become a\l"
	.string "dangerous place lately!\p"
	.string "I wouldn't go alone if I were you.\p"
	.string "Or, you know, if I were me.$"

SunriseVillage_Event_LittleGirl_Text_0:
# 93 "data/maps/SunriseVillage/scripts.pory"
	.string "I can't wait I can't wait I can't wait!!!\p"
	.string "AHHHHH I CAN'T WAIT!!!!$"

SunriseVillage_Event_Boy_Text_0:
# 104 "data/maps/SunriseVillage/scripts.pory"
	.string "My Happiny is the strongest of all! See\n"
	.string "how fierce it looks?$"

SunriseVillage_Event_Boy_Text_1:
# 109 "data/maps/SunriseVillage/scripts.pory"
	.string "Hey {PLAYER}{KUN}!\p"
	.string "So, d'you think we'll get to choose the\n"
	.string "one we want?$"

SunriseVillage_Event_Woman_Text_0:
# 122 "data/maps/SunriseVillage/scripts.pory"
	.string "I can see the Pokéballs from here… I've\n"
	.string "never seen so many in my life!$"

SunriseVillage_Event_Farmer_Text_0:
# 133 "data/maps/SunriseVillage/scripts.pory"
	.string "I've been waiting for hours!$"

SunriseVillage_Event_OldMan_Text_0:
# 144 "data/maps/SunriseVillage/scripts.pory"
	.string "The distribution is about to start.$"

SunriseVillage_Event_OldWoman_Text_0:
# 153 "data/maps/SunriseVillage/scripts.pory"
	.string "I'm tired of waiting!$"

SunriseVillage_Event_Happiny_Text_0:
# 164 "data/maps/SunriseVillage/scripts.pory"
	.string "Happi!$"

SunriseVillage_Event_Munchlax_Text_0:
# 178 "data/maps/SunriseVillage/scripts.pory"
	.string "Munch munch munch…$"

SunriseVillage_Event_Kirlia_Text_0:
# 190 "data/maps/SunriseVillage/scripts.pory"
	.string "…$"

SunriseVillage_Event_TownSign_Text_0:
# 207 "data/maps/SunriseVillage/scripts.pory"
	.string "Sunrise Village\n"
	.string "“A village bathing in soft light.”$"

SunriseVillage_Event_PlayersHouseSign_Text_0:
# 211 "data/maps/SunriseVillage/scripts.pory"
	.string "{PLAYER}'s house$"

SunriseVillage_Event_RivalsHouseSign_Text_0:
# 215 "data/maps/SunriseVillage/scripts.pory"
	.string "{RIVAL}'s house$"

SunriseVillage_Event_EldersHouseSign_Text_0:
# 219 "data/maps/SunriseVillage/scripts.pory"
	.string "Elder Kaba's house$"
