WhiteslateRoute_MapScripts::
	.byte 0


WhiteslateRoute_EventScript_Shuckle::
# 6 "data/maps/WhiteslateRoute/scripts.pory"
	lock
# 7 "data/maps/WhiteslateRoute/scripts.pory"
	faceplayer
# 8 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 9 "data/maps/WhiteslateRoute/scripts.pory"
	playmoncry SPECIES_SHUCKLE, CRY_MODE_NORMAL
# 10 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_EventScript_Shuckle_Text_0
# 13 "data/maps/WhiteslateRoute/scripts.pory"
	waitmoncry
# 14 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 17 "data/maps/WhiteslateRoute/scripts.pory"
	goto_if_unset FLAG_DAILY_SHUCKLE_BERRY_JUICE, WhiteslateRoute_EventScript_Shuckle_2
WhiteslateRoute_EventScript_Shuckle_1:
# 28 "data/maps/WhiteslateRoute/scripts.pory"
	release
	return

WhiteslateRoute_EventScript_Shuckle_2:
# 18 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 19 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 0
# 20 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_EventScript_Shuckle_Text_1, MSGBOX_AUTOCLOSE
# 24 "data/maps/WhiteslateRoute/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 26 "data/maps/WhiteslateRoute/scripts.pory"
	setflag FLAG_DAILY_SHUCKLE_BERRY_JUICE
	goto WhiteslateRoute_EventScript_Shuckle_1


WhiteslateRoute_EventScript_Shuckle_Text_0:
# 11 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Cklckl!$"

WhiteslateRoute_EventScript_Shuckle_Text_1:
# 21 "data/maps/WhiteslateRoute/scripts.pory"
	.string "…Oh? Shuckle is giving you something.$"
