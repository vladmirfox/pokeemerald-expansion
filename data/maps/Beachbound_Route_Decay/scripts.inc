Beachbound_Route_Decay_MapScripts::
# 4 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script_2 VAR_DECAY_BEACHBOUND_ROUTE, 1, Beachbound_Route_Decay_SeeDecay
	.2byte 0


Beachbound_Route_Decay_SeeDecay::
# 10 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 11 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 2
# 13 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Beachbound_Route_Decay_SeeDecay_Movement_0
# 15 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 16 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special RemoveCameraObject
# 18 "data/maps/Beachbound_Route_Decay/scripts.pory"
	warpsilent MAP_BEACHBOUND_ROUTE_DECAY, 59, 16
# 20 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Shepherd::
# 24 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Shepherd_Text_0
# 25 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Karu::
# 31 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 32 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Karu_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Kin::
# 38 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 39 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Kin_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_BeanTrigger::
# 45 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 47 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 4
# 49 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 50 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 51 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 52 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 53 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 54 "data/maps/Beachbound_Route_Decay/scripts.pory"
	faceplayer
# 56 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanTrigger_Text_0
# 57 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanTrigger_Text_1
# 65 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 67 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 68 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 70 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Bean::
# 74 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanTrigger_Text_0
# 77 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Bean_Text_0
# 80 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 82 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger::
# 86 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 87 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 3
# 88 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 89 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1
# 93 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 94 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCareful::
# 98 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 99 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Samurai::
# 105 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 106 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Samurai_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe::
# 112 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 113 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0, MSGBOX_NPC
	return


# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
Beachbound_Route_Decay_SeeDecay_Movement_0:
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

BeachboundRoute_Decay_EventScript_Shepherd_Text_0:
# 24 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_Decay_EventScript_Shepherd_Text_1:
# 26 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Why are all the plants rotting?$"

BeachboundRoute_Decay_EventScript_Karu_Text_0:
# 31 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Girl$"

BeachboundRoute_Decay_EventScript_Karu_Text_1:
# 33 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I'm scared…$"

BeachboundRoute_Decay_EventScript_Kin_Text_0:
# 40 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's happening?$"

BeachboundRoute_Decay_EventScript_BeanTrigger_Text_0:
# 56 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Hariko$"

BeachboundRoute_Decay_EventScript_BeanTrigger_Text_1:
# 58 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Oh! Hello.\n"
	.string "{PLAYER}, right?\p"
	.string "I am Hariko, remember me? We had a\n"
	.string "chat in the Ginko Woods.\p"
	.string "What do you think is happening here?\n"
	.string "It looks like there is some sort of\l"
	.string "{COLOR RED}decay{COLOR DARK_GRAY} affecting this whole spot.\p"
	.string "The Samurai over there told me there\n"
	.string "are reports of this phenomenon\l"
	.string "hitting several areas over the last\l"
	.string "few days.\p"
	.string "That coincides with the start of the\n"
	.string "Volcano's rumbling spells, so both\l"
	.string "seem to be related.\p"
	.string "I want to learn as much as I can about\n"
	.string "this {COLOR RED}decay{COLOR DARK_GRAY}, which is why I am here.$"

BeachboundRoute_Decay_EventScript_Bean_Text_0:
# 78 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "… …$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0:
# 88 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Samurai$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1:
# 90 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful if you're crossing\n"
	.string "over the {COLOR RED}decayed{COLOR DARK_GRAY} area.\p"
	.string "We don't want anyone getting hurt!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0:
# 100 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful!$"

BeachboundRoute_Decay_EventScript_Samurai_Text_0:
# 107 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Don't panic!\n"
	.string "Don't touch the {COLOR RED}decay{COLOR DARK_GRAY}!$"

BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0:
# 114 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What could be the cause of this?!$"
