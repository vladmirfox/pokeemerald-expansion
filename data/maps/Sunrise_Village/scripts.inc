Sunrise_Village_MapScripts::
# 4 "data/maps/Sunrise_Village/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Sunrise_Village_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Sunrise_Village_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Sunrise_Village/scripts.pory"
	compare VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
	goto_if_lt Sunrise_Village_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 9 "data/maps/Sunrise_Village/scripts.pory"
	clearflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
	return

Sunrise_Village_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/Sunrise_Village/scripts.pory"
	setflag FLAG_HIDE_SUNRISE_VILLAGE_STANDARD_NPC_POSITIONS
	return


Sunrise_Village_Event_FatGuy::
# 16 "data/maps/Sunrise_Village/scripts.pory"
	lock
# 17 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 19 "data/maps/Sunrise_Village/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, Sunrise_Village_Event_FatGuy_2
# 26 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_FatGuy_Text_1
Sunrise_Village_Event_FatGuy_1:
# 32 "data/maps/Sunrise_Village/scripts.pory"
	release
	end

Sunrise_Village_Event_FatGuy_2:
# 20 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_FatGuy_Text_0
# 23 "data/maps/Sunrise_Village/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
	goto Sunrise_Village_Event_FatGuy_1


Sunrise_Village_Event_GuardForest::
# 38 "data/maps/Sunrise_Village/scripts.pory"
	lock
# 39 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 40 "data/maps/Sunrise_Village/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, Sunrise_Village_Event_GuardForest_2
# 48 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_GuardForest_Text_1
# 51 "data/maps/Sunrise_Village/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 52 "data/maps/Sunrise_Village/scripts.pory"
	waitmovement 0
# 53 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_GuardForest_Text_2
# 59 "data/maps/Sunrise_Village/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 60 "data/maps/Sunrise_Village/scripts.pory"
	waitmovement 0
Sunrise_Village_Event_GuardForest_1:
# 62 "data/maps/Sunrise_Village/scripts.pory"
	release
	end

Sunrise_Village_Event_GuardForest_2:
# 41 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_GuardForest_Text_0
	goto Sunrise_Village_Event_GuardForest_1


Sunrise_Village_Event_LittleGirl::
# 68 "data/maps/Sunrise_Village/scripts.pory"
	lockall
# 69 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 70 "data/maps/Sunrise_Village/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, Sunrise_Village_Event_LittleGirl_2
# 77 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_LittleGirl_Text_1
Sunrise_Village_Event_LittleGirl_1:
# 82 "data/maps/Sunrise_Village/scripts.pory"
	releaseall
	end

Sunrise_Village_Event_LittleGirl_2:
# 71 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_LittleGirl_Text_0
	goto Sunrise_Village_Event_LittleGirl_1


Sunrise_Village_Event_Boy::
# 88 "data/maps/Sunrise_Village/scripts.pory"
	lockall
# 89 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 90 "data/maps/Sunrise_Village/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, Sunrise_Village_Event_Boy_2
# 97 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_Boy_Text_1
Sunrise_Village_Event_Boy_1:
# 102 "data/maps/Sunrise_Village/scripts.pory"
	releaseall
	end

Sunrise_Village_Event_Boy_2:
# 91 "data/maps/Sunrise_Village/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
# 92 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_Boy_Text_0
	goto Sunrise_Village_Event_Boy_1


Sunrise_Village_Event_OldWoman::
# 108 "data/maps/Sunrise_Village/scripts.pory"
	lockall
# 109 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 110 "data/maps/Sunrise_Village/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, Sunrise_Village_Event_OldWoman_2
# 118 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_OldWoman_Text_1
Sunrise_Village_Event_OldWoman_1:
# 122 "data/maps/Sunrise_Village/scripts.pory"
	releaseall
	end

Sunrise_Village_Event_OldWoman_2:
# 111 "data/maps/Sunrise_Village/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KIRLIA
# 112 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_OldWoman_Text_0
	goto Sunrise_Village_Event_OldWoman_1


Sunrise_Village_Event_Azurill::
# 128 "data/maps/Sunrise_Village/scripts.pory"
	lock
# 129 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 130 "data/maps/Sunrise_Village/scripts.pory"
	waitse
# 131 "data/maps/Sunrise_Village/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 132 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_Azurill_Text_0
# 135 "data/maps/Sunrise_Village/scripts.pory"
	waitmoncry
# 136 "data/maps/Sunrise_Village/scripts.pory"
	release
	end


Sunrise_Village_Event_Kecleon::
# 142 "data/maps/Sunrise_Village/scripts.pory"
	lock
# 143 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 144 "data/maps/Sunrise_Village/scripts.pory"
	waitse
# 145 "data/maps/Sunrise_Village/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 146 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_Kecleon_Text_0
# 149 "data/maps/Sunrise_Village/scripts.pory"
	waitmoncry
# 150 "data/maps/Sunrise_Village/scripts.pory"
	release
	end


Sunrise_Village_Event_Kirlia::
# 156 "data/maps/Sunrise_Village/scripts.pory"
	lock
# 157 "data/maps/Sunrise_Village/scripts.pory"
	faceplayer
# 158 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_Kirlia_Text_0
# 161 "data/maps/Sunrise_Village/scripts.pory"
	release
	end


Sunrise_Village_Event_TownSign::
# 166 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_TownSign_Text_0, MSGBOX_SIGN
	return


Sunrise_Village_Event_PlayersHouseSign::
# 170 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


Sunrise_Village_Event_RivalsHouseSign::
# 174 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_RivalsHouseSign_Text_0, MSGBOX_SIGN
	return


Sunrise_Village_Event_EldersHouseSign::
# 178 "data/maps/Sunrise_Village/scripts.pory"
	msgbox Sunrise_Village_Event_EldersHouseSign_Text_0, MSGBOX_SIGN
	return


Sunrise_Village_Event_FatGuy_Text_0:
# 21 "data/maps/Sunrise_Village/scripts.pory"
	.string "My new Pokémon is so cute, I don't feel\n"
	.string "like leaving it in its Pokéball!$"

Sunrise_Village_Event_FatGuy_Text_1:
# 27 "data/maps/Sunrise_Village/scripts.pory"
	.string "Someone managed to fit entire POKéMON\n"
	.string "inside these tiny balls.\p"
	.string "The power of science is staggering!$"

Sunrise_Village_Event_GuardForest_Text_0:
# 42 "data/maps/Sunrise_Village/scripts.pory"
	.string "Oh, I see you received a POKéMON!\p"
	.string "You'll probably be able to manage the\n"
	.string "woods on your own, then.\p"
	.string "Be careful!$"

Sunrise_Village_Event_GuardForest_Text_1:
# 49 "data/maps/Sunrise_Village/scripts.pory"
	.string "Stop right there!$"

Sunrise_Village_Event_GuardForest_Text_2:
# 54 "data/maps/Sunrise_Village/scripts.pory"
	.string "Wild POKéMON have been lashing out\n"
	.string "recently.\p"
	.string "I know you're used to walking around on\n"
	.string "your own, but the woods have become a\l"
	.string "dangerous place lately!\p"
	.string "I wouldn't go alone if I were you.\p"
	.string "Or, you know, if I were me.$"

Sunrise_Village_Event_LittleGirl_Text_0:
# 72 "data/maps/Sunrise_Village/scripts.pory"
	.string "I'm so happy I'm so happy I'm so happy!!!\p"
	.string "LOOK AT IT, IT'S ADORABLE!!!!$"

Sunrise_Village_Event_LittleGirl_Text_1:
# 78 "data/maps/Sunrise_Village/scripts.pory"
	.string "I can't wait I can't wait I can't wait!!!\p"
	.string "AHHHHH I CAN'T WAIT!!!!$"

Sunrise_Village_Event_Boy_Text_0:
# 93 "data/maps/Sunrise_Village/scripts.pory"
	.string "My {STR_VAR_1} is the strongest of\n"
	.string "all! See how fierce it looks?$"

Sunrise_Village_Event_Boy_Text_1:
# 98 "data/maps/Sunrise_Village/scripts.pory"
	.string "Hey {PLAYER}{KUN}!\p"
	.string "So, d'you think we'll get to choose the\n"
	.string "one we want?$"

Sunrise_Village_Event_OldWoman_Text_0:
# 113 "data/maps/Sunrise_Village/scripts.pory"
	.string "{STR_VAR_1} here is the silent type.\p"
	.string "I'm okay with that.$"

Sunrise_Village_Event_OldWoman_Text_1:
# 119 "data/maps/Sunrise_Village/scripts.pory"
	.string "I'm tired of waiting!\p"
	.string "$"

Sunrise_Village_Event_Azurill_Text_0:
# 133 "data/maps/Sunrise_Village/scripts.pory"
	.string "Azuazu!$"

Sunrise_Village_Event_Kecleon_Text_0:
# 147 "data/maps/Sunrise_Village/scripts.pory"
	.string "Kleeeeh!$"

Sunrise_Village_Event_Kirlia_Text_0:
# 159 "data/maps/Sunrise_Village/scripts.pory"
	.string "...$"

Sunrise_Village_Event_TownSign_Text_0:
# 166 "data/maps/Sunrise_Village/scripts.pory"
	.string "SUNRISE VILLAGE\n"
	.string "“A village bathing in sunshine.”$"

Sunrise_Village_Event_PlayersHouseSign_Text_0:
# 170 "data/maps/Sunrise_Village/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

Sunrise_Village_Event_RivalsHouseSign_Text_0:
# 174 "data/maps/Sunrise_Village/scripts.pory"
	.string "{RIVAL}'s HOUSE$"

Sunrise_Village_Event_EldersHouseSign_Text_0:
# 178 "data/maps/Sunrise_Village/scripts.pory"
	.string "ELDER IWA's HOUSE$"
