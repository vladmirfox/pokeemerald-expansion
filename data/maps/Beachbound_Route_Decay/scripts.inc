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


BeachboundRoute_Decay_EventScript_BeanSeesPlayer::
# 45 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 47 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 48 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 49 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 50 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 51 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 52 "data/maps/Beachbound_Route_Decay/scripts.pory"
	faceplayer
# 54 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanSeesPlayer_Text_0
# 55 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanSeesPlayer_Text_1
# 58 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 60 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Bean::
# 64 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 66 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanSeesPlayer_Text_0
# 67 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Bean_Text_0
# 70 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 72 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
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

BeachboundRoute_Decay_EventScript_BeanSeesPlayer_Text_0:
# 54 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Hariko$"

BeachboundRoute_Decay_EventScript_BeanSeesPlayer_Text_1:
# 56 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Oh! Hello. {PLAYER}, right? I'm\n"
	.string "Hariko, remember me? We had a chat in\l"
	.string "the Ginko Woods.$"

BeachboundRoute_Decay_EventScript_Bean_Text_0:
# 68 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "… …$"
