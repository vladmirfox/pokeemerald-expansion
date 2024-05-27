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
	msgbox BelvedereRoute_EventScript_FindMareep_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/BelvedereRoute/scripts.pory"
	compare VAR_QUEST_MAREEP_STATE, 0
	goto_if_gt BelvedereRoute_EventScript_FindMareep_2
BelvedereRoute_EventScript_FindMareep_1:
# 64 "data/maps/BelvedereRoute/scripts.pory"
	release
	return

BelvedereRoute_EventScript_FindMareep_2:
# 42 "data/maps/BelvedereRoute/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/BelvedereRoute/scripts.pory"
	switch VAR_LAST_TALKED
# 45 "data/maps/BelvedereRoute/scripts.pory"
	case 1, BelvedereRoute_EventScript_FindMareep_6
# 48 "data/maps/BelvedereRoute/scripts.pory"
	case 2, BelvedereRoute_EventScript_FindMareep_7
# 51 "data/maps/BelvedereRoute/scripts.pory"
	case 3, BelvedereRoute_EventScript_FindMareep_8
# 54 "data/maps/BelvedereRoute/scripts.pory"
	case 4, BelvedereRoute_EventScript_FindMareep_9
# 57 "data/maps/BelvedereRoute/scripts.pory"
	case 5, BelvedereRoute_EventScript_FindMareep_10
BelvedereRoute_EventScript_FindMareep_4:
# 61 "data/maps/BelvedereRoute/scripts.pory"
	addvar VAR_QUEST_MAREEP_STATE, 1
	goto BelvedereRoute_EventScript_FindMareep_1

BelvedereRoute_EventScript_FindMareep_6:
# 46 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_1
# 47 "data/maps/BelvedereRoute/scripts.pory"
	addobject 6
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_7:
# 49 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_2
# 50 "data/maps/BelvedereRoute/scripts.pory"
	addobject 7
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_8:
# 52 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_3
# 53 "data/maps/BelvedereRoute/scripts.pory"
	addobject 8
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_9:
# 55 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_4
# 56 "data/maps/BelvedereRoute/scripts.pory"
	addobject 9
	goto BelvedereRoute_EventScript_FindMareep_4

BelvedereRoute_EventScript_FindMareep_10:
# 58 "data/maps/BelvedereRoute/scripts.pory"
	setflag FLAG_HIDE_LOST_MAREEP_5
# 59 "data/maps/BelvedereRoute/scripts.pory"
	addobject 10
	goto BelvedereRoute_EventScript_FindMareep_4


BelvedereRoute_EventScript_Rancher::
# 68 "data/maps/BelvedereRoute/scripts.pory"
	lock
# 69 "data/maps/BelvedereRoute/scripts.pory"
	faceplayer
# 70 "data/maps/BelvedereRoute/scripts.pory"
	switch VAR_QUEST_MAREEP_STATE
# 71 "data/maps/BelvedereRoute/scripts.pory"
	case 0, BelvedereRoute_EventScript_Rancher_3
# 95 "data/maps/BelvedereRoute/scripts.pory"
	case 1, BelvedereRoute_EventScript_Rancher_4
# 99 "data/maps/BelvedereRoute/scripts.pory"
	case 2, BelvedereRoute_EventScript_Rancher_5
# 103 "data/maps/BelvedereRoute/scripts.pory"
	case 3, BelvedereRoute_EventScript_Rancher_6
# 107 "data/maps/BelvedereRoute/scripts.pory"
	case 4, BelvedereRoute_EventScript_Rancher_7
# 111 "data/maps/BelvedereRoute/scripts.pory"
	case 5, BelvedereRoute_EventScript_Rancher_8
# 115 "data/maps/BelvedereRoute/scripts.pory"
	case 6, BelvedereRoute_EventScript_Rancher_9
# 125 "data/maps/BelvedereRoute/scripts.pory"
	case 7, BelvedereRoute_EventScript_Rancher_10
BelvedereRoute_EventScript_Rancher_1:
# 128 "data/maps/BelvedereRoute/scripts.pory"
	release
	return

BelvedereRoute_EventScript_Rancher_3:
# 72 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_0, MSGBOX_YESNO
# 78 "data/maps/BelvedereRoute/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/BelvedereRoute/scripts.pory"
	case YES, BelvedereRoute_EventScript_Rancher_12
# 86 "data/maps/BelvedereRoute/scripts.pory"
	case NO, BelvedereRoute_EventScript_Rancher_13
# 90 "data/maps/BelvedereRoute/scripts.pory"
	case MULTI_B_PRESSED, BelvedereRoute_EventScript_Rancher_14
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_4:
# 96 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_3, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_5:
# 100 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_4, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_6:
# 104 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_5, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_7:
# 108 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_6, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_8:
# 112 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_7, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_9:
# 116 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_8, MSGBOX_AUTOCLOSE
# 124 "data/maps/BelvedereRoute/scripts.pory"
	addvar VAR_QUEST_MAREEP_STATE, 1
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_10:
# 126 "data/maps/BelvedereRoute/scripts.pory"
	call BelvedereRoute_EventScript_Wool
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_12:
# 80 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_1, MSGBOX_AUTOCLOSE
# 85 "data/maps/BelvedereRoute/scripts.pory"
	addvar VAR_QUEST_MAREEP_STATE, 1
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_13:
# 87 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_2, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1

BelvedereRoute_EventScript_Rancher_14:
# 91 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Rancher_Text_2, MSGBOX_AUTOCLOSE
	goto BelvedereRoute_EventScript_Rancher_1


BelvedereRoute_EventScript_Wool::
# 133 "data/maps/BelvedereRoute/scripts.pory"
	msgbox BelvedereRoute_EventScript_Wool_Text_0, MSGBOX_AUTOCLOSE
	return


BelvedereRoute_EventScript_FindMareep_Text_0:
# 39 "data/maps/BelvedereRoute/scripts.pory"
	.string "Bêêêêêh!$"

BelvedereRoute_EventScript_Rancher_Text_0:
# 73 "data/maps/BelvedereRoute/scripts.pory"
	.string "Hey, you didn't happen to see a Mareep\n"
	.string "on your way here, did you? I'm\l"
	.string "desperate… All my Mareep escaped my\l"
	.string "ranch!\p"
	.string "You look like you're at least a\n"
	.string "semi-capable person…\p"
	.string "Would you mind helping me get them\n"
	.string "back?$"

BelvedereRoute_EventScript_Rancher_Text_1:
# 81 "data/maps/BelvedereRoute/scripts.pory"
	.string "Thank you so much!\p"
	.string "There are five Mareep in total.\p"
	.string "Hopefully they should all be not too far\n"
	.string "from the ranch…$"

BelvedereRoute_EventScript_Rancher_Text_2:
# 88 "data/maps/BelvedereRoute/scripts.pory"
	.string "Now that's not very nice…$"

BelvedereRoute_EventScript_Rancher_Text_3:
# 97 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing five Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_4:
# 101 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing four Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_5:
# 105 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing three Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_6:
# 109 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing two Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_7:
# 113 "data/maps/BelvedereRoute/scripts.pory"
	.string "I'm still missing one Mareep!$"

BelvedereRoute_EventScript_Rancher_Text_8:
# 117 "data/maps/BelvedereRoute/scripts.pory"
	.string "Finally, my herd is back together again!\p"
	.string "I'm so glad. Thank you, sincerely.\p"
	.string "Here's a small token of my appreciation.$"

BelvedereRoute_EventScript_Wool_Text_0:
# 134 "data/maps/BelvedereRoute/scripts.pory"
	.string "If you bring me enough wool, I'll knit\n"
	.string "you a nice warm cloak.$"
