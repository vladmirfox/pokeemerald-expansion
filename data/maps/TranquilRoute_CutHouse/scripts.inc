TranquilRoute_CutHouse_MapScripts::
# 6 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TranquilRoute_CutHouse_EventScript_CheckCutGrassQuestComplete
# 7 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	goto_if_set FLAG_CUT_QUEST_COMPLETED, TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	gettime
# 10 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_ge TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	compare VAR_0x8000, 19
	goto_if_le TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

TranquilRoute_CutHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, TranquilRoute_CutHouse_EventScript_CutGrassCutscene
	.2byte 0


TranquilRoute_CutHouse_EventScript_CheckCutGrassQuestComplete::
# 21 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	goto_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_CutHouse_EventScript_CheckCutGrassQuestComplete_2
	return

TranquilRoute_CutHouse_EventScript_CheckCutGrassQuestComplete_1:
# 22 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

TranquilRoute_CutHouse_EventScript_CheckCutGrassQuestComplete_2:
# 21 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	goto_if_unset FLAG_CUT_QUEST_COMPLETED, TranquilRoute_CutHouse_EventScript_CheckCutGrassQuestComplete_1
	return


TranquilRoute_CutHouse_EventScript_CutGrassCutscene::
# 27 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	lock
# 28 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	setvar VAR_TEMP_0, 0
# 29 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	playse SE_PIN
# 30 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	applymovement 1, TranquilRoute_CutHouse_Movement_CutMasterSurprise
# 31 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	delay 48
# 34 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	msgbox TranquilRoute_CutHouse_EventScript_CutGrassCutscene_Text_0
# 38 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	closemessage
# 40 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	delay 48
# 42 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	warp MAP_TRANQUIL_ROUTE, 53, 33
# 43 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	release
	return


# 46 "data/maps/TranquilRoute_CutHouse/scripts.pory"
TranquilRoute_CutHouse_Movement_CutMasterSurprise:
# 47 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	face_down
# 48 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	delay_16
# 49 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	delay_16
# 49 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	delay_16
	step_end

TranquilRoute_CutHouse_EventScript_CutMaster::
# 53 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	lock
# 54 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	faceplayer
# 57 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, TranquilRoute_CutHouse_EventScript_CutMaster_2
# 76 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	msgbox TranquilRoute_CutHouse_EventScript_CutMaster_Text_2
# 83 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	closemessage
# 85 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 86 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 87 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	msgbox TranquilRoute_CutHouse_EventScript_CutMaster_Text_3
# 94 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	closemessage
TranquilRoute_CutHouse_EventScript_CutMaster_1:
# 97 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	release
	return

TranquilRoute_CutHouse_EventScript_CutMaster_2:
# 59 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	goto_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_CutHouse_EventScript_CutMaster_5
# 67 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	msgbox TranquilRoute_CutHouse_EventScript_CutMaster_Text_1
# 71 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	closemessage
	goto TranquilRoute_CutHouse_EventScript_CutMaster_1

TranquilRoute_CutHouse_EventScript_CutMaster_5:
# 60 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	msgbox TranquilRoute_CutHouse_EventScript_CutMaster_Text_0
# 64 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	closemessage
	goto TranquilRoute_CutHouse_EventScript_CutMaster_1


TranquilRoute_CutHouse_EventScript_CutGrassCutscene_Text_0:
# 35 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	.string "You actually cut ALL the tall grass?\p"
	.string "Wait, let us go outside. I want to see it\n"
	.string "for myself.$"

TranquilRoute_CutHouse_EventScript_CutMaster_Text_0:
# 61 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	.string "The sun is setting on another day.\p"
	.string "Life is good.$"

TranquilRoute_CutHouse_EventScript_CutMaster_Text_1:
# 68 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	.string "Are you finding the Cut technique\n"
	.string "useful?\p"
	.string "No, I still haven't trimmed my garden. I\n"
	.string "really should get to it…$"

TranquilRoute_CutHouse_EventScript_CutMaster_Text_2:
# 77 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	.string "Hello, there. I don't get many visitors,\n"
	.string "so sit down, have some tea!\p"
	.string "What? My garden is overrun by weeds?\p"
	.string "Ho ho ho…\p"
	.string "You're right, I have been neglecting it\n"
	.string "lately. You see, my old back isn't as\l"
	.string "strong as it used to be.\p"
	.string "Here, your Pokémon can trim them using\n"
	.string "this.$"

TranquilRoute_CutHouse_EventScript_CutMaster_Text_3:
# 88 "data/maps/TranquilRoute_CutHouse/scripts.pory"
	.string "This scroll contains an ancient\n"
	.string "technique created by the most talented\l"
	.string "samurai. Pokémon can learn that\l"
	.string "technique too.\p"
	.string "If you have a Pokémon capable of\n"
	.string "learning this move, it will be able to cut\l"
	.string "tall grass as well as little trees that\l"
	.string "block your path.\p"
	.string "In fact, now that you have read the\n"
	.string "scroll, you don't even need to teach\l"
	.string "them the actual move!\p"
	.string "Don't ask me how this works, it just\n"
	.string "does!\p"
	.string "Oh, you will need at least one official\n"
	.string "dojo badge to be able to cut trees and\l"
	.string "grass, though.$"
