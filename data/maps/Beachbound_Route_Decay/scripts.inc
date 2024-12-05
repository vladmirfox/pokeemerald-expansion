Beachbound_Route_Decay_MapScripts::
# 8 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script_2 VAR_DECAY_BEACHBOUND_ROUTE, 1, Beachbound_Route_Decay_SeeDecay
	.2byte 0


Beachbound_Route_Decay_SeeDecay::
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 15 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 2
# 17 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/Beachbound_Route_Decay/scripts.pory"
	removeobject 13
# 20 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 23 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 24 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 26 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Beachbound_Route_Decay_SeeDecay_Movement_0
# 28 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 29 "data/maps/Beachbound_Route_Decay/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special RemoveCameraObject
# 31 "data/maps/Beachbound_Route_Decay/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/Beachbound_Route_Decay/scripts.pory"
	warpsilent MAP_BEACHBOUND_ROUTE_DECAY, 59, 16
# 35 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Shepherd::
# 39 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Shepherd_Text_0
# 40 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Karu::
# 46 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 47 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Karu_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Kin::
# 53 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 54 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Kin_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_BeanDialogue::
# 60 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 4
# 61 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 62 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_1
# 71 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 73 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setflag FLAG_TEMP_1
# 74 "data/maps/Beachbound_Route_Decay/scripts.pory"
	addobject 13
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 13, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_0
# 77 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 79 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 80 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 81 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 82 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 83 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 13, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_1
# 86 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 88 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2
# 89 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_3
# 93 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 95 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 12, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_2
# 96 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 98 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 99 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 100 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 101 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 103 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 105 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_4
# 106 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_5
# 113 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 115 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 12, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_3
# 116 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 118 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 120 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 121 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 122 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 8
# 123 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 125 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 126 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_6
# 130 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_4
# 133 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 134 "data/maps/Beachbound_Route_Decay/scripts.pory"
	removeobject 8
# 136 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2
# 137 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_7
# 140 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 13, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_5
# 143 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 144 "data/maps/Beachbound_Route_Decay/scripts.pory"
	removeobject 13
# 146 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway::
# 150 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 152 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 153 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 154 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 155 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 156 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 157 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 158 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 160 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway_Movement_0
# 161 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 163 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway::
# 167 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 169 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 171 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 172 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 173 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 174 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 175 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 177 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway_Movement_0
# 178 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 180 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_BeanTrigger::
# 184 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 186 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 187 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 188 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 189 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 190 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 191 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 192 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 193 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 8
# 194 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 196 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_Bean::
# 200 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 202 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 203 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Bean_Text_0
# 206 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 208 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Koishi::
# 212 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 214 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_4
# 215 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Koishi_Text_0
# 219 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 221 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger::
# 225 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 226 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 3
# 228 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
# 229 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 10
# 231 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 233 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 234 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1
# 238 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 239 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCareful::
# 243 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 244 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Samurai::
# 250 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 251 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Samurai_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe::
# 257 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 258 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0, MSGBOX_NPC
	return


# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
Beachbound_Route_Decay_SeeDecay_Movement_0:
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
	step_end

# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_0:
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
	step_end

# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_1:
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_right
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	face_down
	step_end

# 95 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_2:
# 95 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_down
	step_end

# 115 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_3:
# 115 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_4:
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_5:
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

# 160 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway_Movement_0:
# 160 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 160 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway_Movement_0:
# 177 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

BeachboundRoute_Decay_EventScript_Shepherd_Text_0:
# 39 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_Decay_EventScript_Shepherd_Text_1:
# 41 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's goin' on? Why are all the plants\n"
	.string "rotting?$"

BeachboundRoute_Decay_EventScript_Karu_Text_0:
# 46 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Girl$"

BeachboundRoute_Decay_EventScript_Karu_Text_1:
# 48 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I'm scared…$"

BeachboundRoute_Decay_EventScript_Kin_Text_0:
# 55 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's happening?$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0:
# 61 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Hariko$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_1:
# 63 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Oh! Hello.\n"
	.string "{PLAYER}, right?\p"
	.string "I am Hariko, remember me? We had a\n"
	.string "chat in the Ginko Woods.$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2:
# 88 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Natsuki$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_3:
# 90 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "{PLAYER}! What's going on?\p"
	.string "Who is this, blah blah blah$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_4:
# 105 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Koishi$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_5:
# 107 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I heard you, do not get involved in\n"
	.string "this$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_6:
# 127 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "This is unfair! How are we supposed to\n"
	.string "investigate if we're not allowed to?\p"
	.string "Let's leave now.$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_7:
# 138 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I'm leaving too$"

BeachboundRoute_Decay_EventScript_Bean_Text_0:
# 204 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "… …$"

BeachboundRoute_Decay_EventScript_Koishi_Text_0:
# 216 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "The situation is dire…\p"
	.string "Please move along, and I repeat, do\n"
	.string "NOT get into trouble!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0:
# 233 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Samurai$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1:
# 235 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful if you're crossing\n"
	.string "over the {COLOR RED}decayed{COLOR DARK_GRAY} area.\p"
	.string "We don't want anyone getting hurt!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0:
# 245 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful!$"

BeachboundRoute_Decay_EventScript_Samurai_Text_0:
# 252 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Don't panic!\n"
	.string "Don't touch the {COLOR RED}decay{COLOR DARK_GRAY}!$"

BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0:
# 259 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What could be the cause of this?!$"
