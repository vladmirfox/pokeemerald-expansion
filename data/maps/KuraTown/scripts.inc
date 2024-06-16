KuraTown_MapScripts::
# 7 "data/maps/KuraTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, KuraTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/KuraTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KuraTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KuraTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/KuraTown/scripts.pory"
	goto_if_set FLAG_KURA_DOJO_CLOSED, KuraTown_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

KuraTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/KuraTown/scripts.pory"
	setmetatile 23, 18, METATILE_SakuKura_ClosedDojoDoor, TRUE
	return

KuraTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


KuraTown_EventScript_GuardStopsYou::
# 16 "data/maps/KuraTown/scripts.pory"
	lock
# 17 "data/maps/KuraTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 18 "data/maps/KuraTown/scripts.pory"
	waitmovement 0
# 19 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_GuardStopsYou_Text_0
# 20 "data/maps/KuraTown/scripts.pory"
	closemessage
# 21 "data/maps/KuraTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 22 "data/maps/KuraTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 23 "data/maps/KuraTown/scripts.pory"
	delay 20
# 25 "data/maps/KuraTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 1
	goto_if_eq KuraTown_EventScript_GuardStopsYou_2
# 33 "data/maps/KuraTown/scripts.pory"
	compare VAR_SAKU_KURA_VILLAGES_STATE, 2
	goto_if_eq KuraTown_EventScript_GuardStopsYou_3
KuraTown_EventScript_GuardStopsYou_1:
# 42 "data/maps/KuraTown/scripts.pory"
	release
	return

KuraTown_EventScript_GuardStopsYou_2:
# 26 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_GuardStopsYou_Text_1
# 31 "data/maps/KuraTown/scripts.pory"
	closemessage
# 32 "data/maps/KuraTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 2
	goto KuraTown_EventScript_GuardStopsYou_1

KuraTown_EventScript_GuardStopsYou_3:
# 34 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_GuardStopsYou_Text_2
# 39 "data/maps/KuraTown/scripts.pory"
	closemessage
# 40 "data/maps/KuraTown/scripts.pory"
	setvar VAR_SAKU_KURA_VILLAGES_STATE, 3
	goto KuraTown_EventScript_GuardStopsYou_1


KuraTown_EventScript_DojoChallenger::
# 46 "data/maps/KuraTown/scripts.pory"
	lock
# 47 "data/maps/KuraTown/scripts.pory"
	faceplayer
# 48 "data/maps/KuraTown/scripts.pory"
	goto_if_set FLAG_KURA_DOJO_CLOSED, KuraTown_EventScript_DojoChallenger_2
# 57 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_DojoChallenger_Text_1
KuraTown_EventScript_DojoChallenger_1:
# 66 "data/maps/KuraTown/scripts.pory"
	closemessage
# 67 "data/maps/KuraTown/scripts.pory"
	release
	return

KuraTown_EventScript_DojoChallenger_2:
# 49 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_DojoChallenger_Text_0
	goto KuraTown_EventScript_DojoChallenger_1


KuraTown_EventScript_SingingFarmer::
# 71 "data/maps/KuraTown/scripts.pory"
	lock
# 72 "data/maps/KuraTown/scripts.pory"
	faceplayer
# 73 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_SingingFarmer_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/KuraTown/scripts.pory"
	release
	return


KuraTown_EventScript_Guard::
# 83 "data/maps/KuraTown/scripts.pory"
	lock
# 84 "data/maps/KuraTown/scripts.pory"
	faceplayer
# 85 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_Guard_Text_0, MSGBOX_DEFAULT
# 93 "data/maps/KuraTown/scripts.pory"
	release
	return


SakuTown_EventScript_ClosedGymDoor::
# 98 "data/maps/KuraTown/scripts.pory"
	goto_if_set FLAG_KURA_DOJO_CLOSED, SakuTown_EventScript_ClosedGymDoor_1
	return

SakuTown_EventScript_ClosedGymDoor_1:
# 99 "data/maps/KuraTown/scripts.pory"
	msgbox SakuTown_EventScript_ClosedGymDoor_Text_0, MSGBOX_SIGN
	return


KuraTown_EventScript_TownSign::
# 107 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


KuraTown_EventScript_DirectionsSign::
# 111 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_DirectionsSign_Text_0, MSGBOX_SIGN
	return


KuraTown_EventScript_GymSign::
# 115 "data/maps/KuraTown/scripts.pory"
	msgbox KuraTown_EventScript_GymSign_Text_0, MSGBOX_SIGN
	return


KuraTown_EventScript_GuardStopsYou_Text_0:
# 19 "data/maps/KuraTown/scripts.pory"
	.string "Hey!$"

KuraTown_EventScript_GuardStopsYou_Text_1:
# 27 "data/maps/KuraTown/scripts.pory"
	.string "You think I don't see you trying to\n"
	.string "sneak in from Saku Village?\p"
	.string "…Wait, you're a regular traveler, aren't\n"
	.string "you…\p"
	.string "Welcome to Kura Village then!$"

KuraTown_EventScript_GuardStopsYou_Text_2:
# 35 "data/maps/KuraTown/scripts.pory"
	.string "You're not trying to sneak into Saku\n"
	.string "Village, are you?\p"
	.string "…My bad, you're that traveler again.\n"
	.string "Didn't recognize ya.\p"
	.string "You can go through, though I'm not sure\n"
	.string "why you'd want to.$"

KuraTown_EventScript_DojoChallenger_Text_0:
# 51 "data/maps/KuraTown/scripts.pory"
	.string "Looks like the dojo is closed again…\p"
	.string "Gah, when will I get a chance to crush\n"
	.string "Hana in a fiery battle?\p"
	.string "Could it be that she is scared of me?$"

KuraTown_EventScript_DojoChallenger_Text_1:
# 59 "data/maps/KuraTown/scripts.pory"
	.string "The dojo is open! I can finally defeat\n"
	.string "its leader in a fiery battle!\p"
	.string "…Hm? When, you ask?\p"
	.string "In… In a minute…\p"
	.string "No, go right ahead, I'm just… preparing…$"

KuraTown_EventScript_SingingFarmer_Text_0:
# 75 "data/maps/KuraTown/scripts.pory"
	.string "Doo doo… Just waterin' the crops… Yeah,\n"
	.string "waterin' the crops… Doo doo doo…$"

KuraTown_EventScript_Guard_Text_0:
# 87 "data/maps/KuraTown/scripts.pory"
	.string "Hope you didn't have too much trouble\n"
	.string "passing the gate.\p"
	.string "That Saku Village guard is such a jerk,\n"
	.string "he won't let anyone from our village\l"
	.string "cross to theirs.\p"
	.string "So of course we're not gonna let anyone\n"
	.string "from theirs in ours! Hah!$"

SakuTown_EventScript_ClosedGymDoor_Text_0:
# 100 "data/maps/KuraTown/scripts.pory"
	.string "“BE BACK SOON\n"
	.string "- Hana”$"

KuraTown_EventScript_TownSign_Text_0:
# 107 "data/maps/KuraTown/scripts.pory"
	.string "Kura Village\n"
	.string "“A village where the mountains meet the\l"
	.string "woods.”$"

KuraTown_EventScript_DirectionsSign_Text_0:
# 111 "data/maps/KuraTown/scripts.pory"
	.string "{UP_ARROW} Silver Tunnel\n"
	.string "This way for Silveridge$"

KuraTown_EventScript_GymSign_Text_0:
# 117 "data/maps/KuraTown/scripts.pory"
	.string "Kura Village Pokémon Dojo\n"
	.string "Leader: Hana\p"
	.string "“Strong as a maple rooted in wisdom.”$"
