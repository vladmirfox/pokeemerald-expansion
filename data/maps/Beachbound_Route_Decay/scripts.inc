Beachbound_Route_Decay_MapScripts::
# 5 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Beachbound_Route_Decay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Beachbound_Route_Decay/scripts.pory"
	map_script_2 VAR_DECAY_BEACHBOUND_ROUTE, 1, Beachbound_Route_Decay_SeeDecay
	.2byte 0


Beachbound_Route_Decay_SeeDecay::
# 11 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 12 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 2
# 14 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 15 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 16 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 17 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 18 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 20 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Beachbound_Route_Decay_SeeDecay_Movement_0
# 22 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 23 "data/maps/Beachbound_Route_Decay/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/Beachbound_Route_Decay/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/Beachbound_Route_Decay/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/Beachbound_Route_Decay/scripts.pory"
	warpsilent MAP_BEACHBOUND_ROUTE_DECAY, 59, 16
# 29 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Shepherd::
# 33 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Shepherd_Text_0
# 34 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Karu::
# 40 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 41 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Karu_Text_1, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Kin::
# 47 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_Karu_Text_0
# 48 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Kin_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_BeanDialogue::
# 54 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 4
# 55 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 56 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_1
# 65 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 67 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 12, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_0
# 68 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 70 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 71 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 72 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 73 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 75 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 77 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2
# 78 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_3
# 84 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 86 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 12, BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_1
# 87 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 89 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 91 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 92 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 94 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 95 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_BeanDialogue_Text_4
# 100 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 102 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway::
# 106 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 108 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 109 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 110 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 111 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 112 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 113 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 114 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 116 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway_Movement_0
# 117 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 119 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway::
# 123 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 125 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 127 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 128 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 129 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 130 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 131 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 133 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway_Movement_0
# 134 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 136 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_BeanTrigger::
# 140 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 142 "data/maps/Beachbound_Route_Decay/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 144 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitse
# 145 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 0
# 146 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay 48
# 147 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 148 "data/maps/Beachbound_Route_Decay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 149 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement 8
# 150 "data/maps/Beachbound_Route_Decay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 152 "data/maps/Beachbound_Route_Decay/scripts.pory"
	call BeachboundRoute_Decay_EventScript_BeanDialogue
	return


BeachboundRoute_Decay_EventScript_Bean::
# 156 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 158 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0
# 159 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Bean_Text_0
# 162 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 164 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_Koishi::
# 168 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 170 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_BeanDialogue_Text_2
# 171 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Koishi_Text_0
# 175 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 177 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger::
# 181 "data/maps/Beachbound_Route_Decay/scripts.pory"
	lock
# 182 "data/maps/Beachbound_Route_Decay/scripts.pory"
	setvar VAR_DECAY_BEACHBOUND_ROUTE, 3
# 183 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 184 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1
# 188 "data/maps/Beachbound_Route_Decay/scripts.pory"
	closemessage
# 189 "data/maps/Beachbound_Route_Decay/scripts.pory"
	release
	return


BeachboundRoute_Decay_EventScript_SamuraiBeCareful::
# 193 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 194 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_Samurai::
# 200 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 201 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_Samurai_Text_0, MSGBOX_NPC
	return


BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe::
# 207 "data/maps/Beachbound_Route_Decay/scripts.pory"
	speakername BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0
# 208 "data/maps/Beachbound_Route_Decay/scripts.pory"
	msgbox BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0, MSGBOX_NPC
	return


# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
Beachbound_Route_Decay_SeeDecay_Movement_0:
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
# 21 "data/maps/Beachbound_Route_Decay/scripts.pory"
	delay_16
	step_end

# 67 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_0:
# 67 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanDialogue_Movement_1:
# 86 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanTrigger2StepsAway_Movement_0:
# 116 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
# 116 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

# 133 "data/maps/Beachbound_Route_Decay/scripts.pory"
BeachboundRoute_Decay_EventScript_BeanTrigger1StepAway_Movement_0:
# 133 "data/maps/Beachbound_Route_Decay/scripts.pory"
	walk_left
	step_end

BeachboundRoute_Decay_EventScript_Shepherd_Text_0:
# 33 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_Decay_EventScript_Shepherd_Text_1:
# 35 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's goin' on? Why are all the plants\n"
	.string "rotting?$"

BeachboundRoute_Decay_EventScript_Karu_Text_0:
# 40 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Girl$"

BeachboundRoute_Decay_EventScript_Karu_Text_1:
# 42 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "I'm scared…$"

BeachboundRoute_Decay_EventScript_Kin_Text_0:
# 49 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What's happening?$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_0:
# 55 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Hariko$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_1:
# 57 "data/maps/Beachbound_Route_Decay/scripts.pory"
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
# 77 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Koishi$"

BeachboundRoute_Decay_EventScript_BeanDialogue_Text_3:
# 79 "data/maps/Beachbound_Route_Decay/scripts.pory"
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
# 96 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "This is unfair! How are we supposed to\n"
	.string "investigate if we're not allowed to?\p"
	.string "Well, I am going to stay here for a\n"
	.string "while, and hopefully glean some\l"
	.string "interesting stuff.\p"
	.string "I will catch up with you later,\n"
	.string "{PLAYER}.$"

BeachboundRoute_Decay_EventScript_Bean_Text_0:
# 160 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "… …$"

BeachboundRoute_Decay_EventScript_Koishi_Text_0:
# 172 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "The situation is dire…\p"
	.string "Please move along, and I repeat, do\n"
	.string "NOT get into trouble!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_0:
# 183 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Samurai$"

BeachboundRoute_Decay_EventScript_SamuraiBeCarefulTrigger_Text_1:
# 185 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful if you're crossing\n"
	.string "over the {COLOR RED}decayed{COLOR DARK_GRAY} area.\p"
	.string "We don't want anyone getting hurt!$"

BeachboundRoute_Decay_EventScript_SamuraiBeCareful_Text_0:
# 195 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Please be careful!$"

BeachboundRoute_Decay_EventScript_Samurai_Text_0:
# 202 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "Don't panic!\n"
	.string "Don't touch the {COLOR RED}decay{COLOR DARK_GRAY}!$"

BeachboundRoute_Decay_EventScript_SamuraiWhatCouldBe_Text_0:
# 209 "data/maps/Beachbound_Route_Decay/scripts.pory"
	.string "What could be the cause of this?!$"
