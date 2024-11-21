Beachbound_Route_Decay_MapScripts::
# 6 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script_2 VAR_DECAY_BEACHBOUND_ROUTE, 1, Beachbound_Route_Decay_SeeDecay
	.2byte 0


Beachbound_Route_Decay_SeeDecay::
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 13 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 2
# 15 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 16 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 17 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 18 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 19 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Beachbound_Route_Decay_SeeDecay_Movement_0
# 23 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 24 "data/maps/Beachbound_Route_Decay/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/Beachbound_Route_Decay/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/Beachbound_Route_Decay/scripts.pory"
	warpsilent MAP_BEACHBOUND_ROUTE_DECAY, 59, 16
# 30 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Shepherd::
# 34 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Shepherd_Text_0
# 35 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Karu::
# 41 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 42 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Karu_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Kin::
# 48 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 49 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Kin_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_BeanDialogue::
# 55 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 4
# 56 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 57 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_1
# 66 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 68 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 12, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_0
# 69 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 71 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 72 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 73 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 74 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 76 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 78 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2
# 79 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_3
# 85 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 87 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 12, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_1
# 88 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 90 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 92 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 93 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 94 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 8
# 95 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 97 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 98 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_4
# 103 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 105 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway::
# 109 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 111 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 112 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 113 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 114 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 115 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 116 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 117 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 119 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway_Movement_0
# 120 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 122 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway::
# 126 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 128 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 130 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 131 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 132 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 133 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 134 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 136 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway_Movement_0
# 137 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 139 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_BeanTrigger::
# 143 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 145 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 147 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 148 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 149 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 150 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 151 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 152 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 8
# 153 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 155 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_Bean::
# 159 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 161 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 162 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Bean_Text_0
# 165 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 167 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Koishi::
# 171 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 173 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2
# 174 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Koishi_Text_0
# 178 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 180 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger::
# 184 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 185 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 3
# 187 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
# 188 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 189 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 10
# 190 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 192 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 193 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1
# 197 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 198 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCareful::
# 202 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 203 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Samurai::
# 209 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 210 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Samurai_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe::
# 216 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 217 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0, MSGBOX_NPC
	return


# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
Beachbound_Route_Decay_SeeDecay_Movement_0:
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
	step_end

# 68 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_0:
# 68 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_1:
# 87 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_up
	step_end

# 119 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway_Movement_0:
# 119 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 119 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

# 136 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway_Movement_0:
# 136 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

BeachboundRoute_Decay_EventScript_Shepherd_Text_0:
# 34 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_Decay_EventScript_Shepherd_Text_1:
# 36 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's goin' on? Why are all the plants\n"
	.string "rotting?$"

BeachboundRoute_Decay_EventScript_Karu_Text_0:
# 41 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Girl$"

BeachboundRoute_Decay_EventScript_Karu_Text_1:
# 43 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I'm scared…$"

BeachboundRoute_Decay_EventScript_Kin_Text_0:
# 50 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's happening?$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0:
# 56 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Hariko$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_1:
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
	.string "Whatever it is, it is not good. I want\n"
	.string "to learn as much as I can about this\l"
	.string "{COLOR RED}decay{COLOR DARK_GRAY}, which is why I am here.\p"
	.string "Did you also come here to investigate,\n"
	.string "{PLAYER}? We should team up!$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2:
# 78 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Koishi$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_3:
# 80 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I couldn't help but overhear your\n"
	.string "conversation. You two are way too\l"
	.string "young and inexperienced to be\l"
	.string "getting involved in this!\p"
	.string "We know nothing about this {COLOR RED}decay{COLOR DARK_GRAY} yet.\n"
	.string "We only know that it's dangerous.\p"
	.string "The Pokémon touched by the {COLOR RED}decay{COLOR DARK_GRAY}…\n"
	.string "They act strangely, like they are\l"
	.string "corrupted by it.\p"
	.string "We don't want to have to rescue you,\n"
	.string "so please let the adults handle the\l"
	.string "issue.$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_4:
# 99 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "This is unfair! How are we supposed to\n"
	.string "investigate if we're not allowed to?\p"
	.string "Well, I am going to stay here for a\n"
	.string "while, and hopefully glean some\l"
	.string "interesting stuff.\p"
	.string "I will catch up with you later,\n"
	.string "{PLAYER}.$"

BeachboundRoute_Decay_EventScript_Bean_Text_0:
# 163 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "… …$"

BeachboundRoute_Decay_EventScript_Koishi_Text_0:
# 175 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "The situation is dire…\p"
	.string "Please move along, and I repeat, do\n"
	.string "NOT get into trouble!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0:
# 192 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Samurai$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1:
# 194 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful if you're crossing\n"
	.string "over the {COLOR RED}decayed{COLOR DARK_GRAY} area.\p"
	.string "We don't want anyone getting hurt!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0:
# 204 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful!$"

BeachboundRoute_Decay_EventScript_Samurai_Text_0:
# 211 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Don't panic!\n"
	.string "Don't touch the {COLOR RED}decay{COLOR DARK_GRAY}!$"

BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0:
# 218 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What could be the cause of this?!$"
