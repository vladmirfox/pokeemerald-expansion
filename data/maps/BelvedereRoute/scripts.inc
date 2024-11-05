BelvedereRoute_MapScripts::
# 13 "data/maps/BelvedereRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data/maps/BelvedereRoute/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 16 "data/maps/BelvedereRoute/scripts.pory"
	goto_if_unset FLAG_HIDE_LOST_MAREEP_1, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 19 "data/maps/BelvedereRoute/scripts.pory"
	goto_if_unset FLAG_HIDE_LOST_MAREEP_2, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_5
BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4:
# 22 "data/maps/BelvedereRoute/scripts.pory"
	goto_if_unset FLAG_HIDE_LOST_MAREEP_3, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_8
BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_7:
# 25 "data/maps/BelvedereRoute/scripts.pory"
	goto_if_unset FLAG_HIDE_LOST_MAREEP_4, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_11
BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_10:
# 28 "data/maps/BelvedereRoute/scripts.pory"
	goto_if_unset FLAG_HIDE_LOST_MAREEP_5, BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_13
	return

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 17 "data/maps/BelvedereRoute/scripts.pory"
	removeobject 6
	goto BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_5:
# 20 "data/maps/BelvedereRoute/scripts.pory"
	removeobject 7
	goto BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_8:
# 23 "data/maps/BelvedereRoute/scripts.pory"
	removeobject 8
	goto BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_7

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_11:
# 26 "data/maps/BelvedereRoute/scripts.pory"
	removeobject 9
	goto BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_10

BelvedereRoute_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_13:
# 29 "data/maps/BelvedereRoute/scripts.pory"
	removeobject 10
	return


BelvedereRoute_EventScript_FindMareep::
# 36 "data/maps/BelvedereRoute/scripts.pory"
	lock
# 37 "data/maps/BelvedereRoute/scripts.pory"
	faceplayer
# 38 "data/maps/BelvedereRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 39 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_FindMareep_Text_0
# 40 "data/maps/BelvedereRoute/scripts.pory"
	closemessage
# 41 "data/maps/BelvedereRoute/scripts.pory"
	compare VAR_QUEST_MAREEP_STATE, 0
	goto_if_gt BelvedereRoute_EventScript_FindMareep_2
BelvedereRoute_EventScript_FindMareep_1:
# 65 "data/maps/BelvedereRoute/scripts.pory"
	release
	return

BelvedereRoute_EventScript_FindMareep_2:
# 43 "data/maps/BelvedereRoute/scripts.pory"
	removeobject VAR_LAST_TALKED
# 45 "data/maps/BelvedereRoute/scripts.pory"
	switch VAR_LAST_TALKED
# 46 "data/maps/BelvedereRoute/scripts.pory"
	case 1, BelvedereRoute_EventScript_FindMareep_6
# 49 "data/maps/BelvedereRoute/scripts.pory"
	case 2, BelvedereRoute_EventScript_FindMareep_7
# 52 "data/maps/BelvedereRoute/scripts.pory"
	case 3, BelvedereRoute_EventScript_FindMareep_8
# 55 "data/maps/BelvedereRoute/scripts.pory"
	case 4, BelvedereRoute_EventScript_FindMareep_9
# 58 "data/maps/BelvedereRoute/scripts.pory"
	case 5, BelvedereRoute_EventScript_FindMareep_10
BelvedereRoute_EventScript_FindMareep_4:
# 62 "data/maps/BelvedereRoute/scripts.pory"
	addvar VAR_QUEST_MAREEP_STATE, 1
	goto BelvedereRoute_EventScript_FindMareep_1

BelvedereRoute_EventScript_FindMareep_6:
# 47 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_1
# 48 "data/maps/BelvedereRoute/scripts.pory"
	addobject 6
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_7:
# 50 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_2
# 51 "data/maps/BelvedereRoute/scripts.pory"
	addobject 7
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_8:
# 53 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_3
# 54 "data/maps/BelvedereRoute/scripts.pory"
	addobject 8
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_9:
# 56 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_4
# 57 "data/maps/BelvedereRoute/scripts.pory"
	addobject 9
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_10:
# 59 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_5
# 60 "data/maps/BelvedereRoute/scripts.pory"
	addobject 10
	goto BelvedereRoute_EventScript_FindMareep_4


BelvedereRoute_EventScript_Rancher::
# 69 "data/maps/BelvedereRoute/scripts.pory"
	lock
# 70 "data/maps/BelvedereRoute/scripts.pory"
	faceplayer
# 71 "data/maps/BelvedereRoute/scripts.pory"
	switch VAR_QUEST_MAREEP_STATE
# 72 "data/maps/BelvedereRoute/scripts.pory"
	case 0, BelvedereRoute_EventScript_Rancher_3
# 99 "data/maps/BelvedereRoute/scripts.pory"
	case 1, BelvedereRoute_EventScript_Rancher_4
# 103 "data/maps/BelvedereRoute/scripts.pory"
	case 2, BelvedereRoute_EventScript_Rancher_5
# 107 "data/maps/BelvedereRoute/scripts.pory"
	case 3, BelvedereRoute_EventScript_Rancher_6
# 111 "data/maps/BelvedereRoute/scripts.pory"
	case 4, BelvedereRoute_EventScript_Rancher_7
# 115 "data/maps/BelvedereRoute/scripts.pory"
	case 5, BelvedereRoute_EventScript_Rancher_8
# 119 "data/maps/BelvedereRoute/scripts.pory"
	case 6, BelvedereRoute_EventScript_Rancher_9
# 129 "data/maps/BelvedereRoute/scripts.pory"
	case 7, BelvedereRoute_EventScript_Rancher_10
BelvedereRoute_EventScript_Rancher_1:
# 132 "data/maps/BelvedereRoute/scripts.pory"
	release
	return

BelvedereRoute_EventScript_Rancher_3:
# 73 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_0, MSGBOX_YESNO
# 79 "data/maps/BelvedereRoute/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/BelvedereRoute/scripts.pory"
	case YES, BelvedereRoute_EventScript_Rancher_12
# 88 "data/maps/BelvedereRoute/scripts.pory"
	case NO, BelvedereRoute_EventScript_Rancher_13
# 93 "data/maps/BelvedereRoute/scripts.pory"
	case MULTI_B_PRESSED, BelvedereRoute_EventScript_Rancher_14
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_4:
# 100 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_3
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_5:
# 104 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_4
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_6:
# 108 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_5
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_7:
# 112 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_6
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_8:
# 116 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_7
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_9:
# 120 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_8
# 128 "data/maps/BelvedereRoute/scripts.pory"
	addvar VAR_QUEST_MAREEP_STATE, 1
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_10:
# 130 "data/maps/BelvedereRoute/scripts.pory"
	call BelvedereRoute_EventScript_Wool
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_12:
# 81 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_1
# 86 "data/maps/BelvedereRoute/scripts.pory"
	closemessage
# 87 "data/maps/BelvedereRoute/scripts.pory"
	addvar VAR_QUEST_MAREEP_STATE, 1
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_13:
# 89 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_2
# 92 "data/maps/BelvedereRoute/scripts.pory"
	closemessage
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_14:
# 94 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_2
# 97 "data/maps/BelvedereRoute/scripts.pory"
	closemessage
	goto BelvedereRoute_EventScript_Rancher_1


BelvedereRoute_EventScript_Wool::
# 137 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Wool_Text_0, MSGBOX_NPC
	return


BelvedereRoute_EventScript_FindMareep_Text_0:
# 39 "data/maps/BelvedereRoute/scripts.pory"
	.string "Bêêêêêh!$"

BelvedereRoute_EventScript_Rancher_Text_0:
# 74 "data/maps/BelvedereRoute/scripts.pory"
	.string "Hey, you didn't happen to see a Mareep\n"
	.string "on your way here, did you? I'm\l"
	.string "desperate… All my Mareep escaped my\l"
	.string "ranch!\p"
	.string "You look like you're at least a\n"
	.string "semi-capable person…\p"
	.string "Would you mind helping me get them\n"
	.string "back?$"

BelvedereRoute_EventScript_Rancher_Text_1:
# 82 "data/maps/BelvedereRoute/scripts.pory"
	.string "Thank you so much!\p"
	.string "There are five Mareep in total.\p"
	.string "Hopefully they should all be not too\n"
	.string "far from the ranch…$"

BelvedereRoute_EventScript_Rancher_Text_2:
# 90 "data/maps/BelvedereRoute/scripts.pory"
	.string "Now that's not very nice…$"

BelvedereRoute_EventScript_Rancher_Text_3:
# 101 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing five Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_4:
# 105 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing four Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_5:
# 109 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing three Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_6:
# 113 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing two Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_7:
# 117 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing one Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_8:
# 121 "data/maps/BelvedereRoute/scripts.pory"
	.string "Finally, my herd is back together\n"
	.string "again!\p"
	.string "I'm so glad. Thank you, sincerely.\p"
	.string "Here's a small token of my\n"
	.string "appreciation.$"

BelvedereRoute_EventScript_Wool_Text_0:
# 138 "data/maps/BelvedereRoute/scripts.pory"
	.string "If you bring me enough wool, I'll knit\n"
	.string "you a nice warm cloak.$"
