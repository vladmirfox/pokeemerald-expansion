Silveridge_EldersHouse_MapScripts::
# 6 "data/maps/Silveridge_EldersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Silveridge_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Silveridge_EldersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Silveridge_EldersHouse/scripts.pory"
	map_script_2 VAR_DECAY_BEACHBOUND_ROUTE, 1, Silveridge_EldersHouse_EventScript_Conversation
	.2byte 0


Silveridge_EldersHouse_EventScript_Conversation::
# 12 "data/maps/Silveridge_EldersHouse/scripts.pory"
	lock
# 14 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 15 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_0
# 18 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_1
# 21 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 23 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 24 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 0
# 26 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_2
# 27 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_3
# 30 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 32 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 33 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 0
# 35 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 36 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_5
# 39 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 41 "data/maps/Silveridge_EldersHouse/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 43 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitse
# 44 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 0
# 46 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 47 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_6
# 50 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 52 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 53 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 54 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 3
# 55 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 2
# 56 "data/maps/Silveridge_EldersHouse/scripts.pory"
	delay 48
# 58 "data/maps/Silveridge_EldersHouse/scripts.pory"
	delay 48
# 59 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 3, Silveridge_EldersHouse_EventScript_Conversation_Movement_0
# 60 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement 2, Silveridge_EldersHouse_EventScript_Conversation_Movement_1
# 61 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 3
# 62 "data/maps/Silveridge_EldersHouse/scripts.pory"
	removeobject 3
# 63 "data/maps/Silveridge_EldersHouse/scripts.pory"
	playse SE_EXIT
# 64 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement 2
# 65 "data/maps/Silveridge_EldersHouse/scripts.pory"
	playse SE_EXIT
# 66 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitse
# 68 "data/maps/Silveridge_EldersHouse/scripts.pory"
	setflag FLAG_GAVE_LETTER_ELDER_SILVERIDGE
# 70 "data/maps/Silveridge_EldersHouse/scripts.pory"
	delay 48
# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Silveridge_EldersHouse_EventScript_Conversation_Movement_2
# 73 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 75 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 76 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_7
# 80 "data/maps/Silveridge_EldersHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, Silveridge_EldersHouse_EventScript_Conversation_Text_8
# 89 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Silveridge_EldersHouse_EventScript_Conversation_Movement_3
# 92 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 94 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 96 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_9
# 104 "data/maps/Silveridge_EldersHouse/scripts.pory"
	clearflag FLAG_KURA_DOJO_CLOSED
# 105 "data/maps/Silveridge_EldersHouse/scripts.pory"
	setflag FLAG_HIDE_BONSAI_SHOP_OWNER
# 107 "data/maps/Silveridge_EldersHouse/scripts.pory"
	release
	return


Silveridge_EldersHouse_EventScript_Elder::
# 112 "data/maps/Silveridge_EldersHouse/scripts.pory"
	lock
# 113 "data/maps/Silveridge_EldersHouse/scripts.pory"
	faceplayer
# 114 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 115 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Elder_Text_0
# 118 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 154 "data/maps/Silveridge_EldersHouse/scripts.pory"
	release
	return


# 59 "data/maps/Silveridge_EldersHouse/scripts.pory"
Silveridge_EldersHouse_EventScript_Conversation_Movement_0:
# 59 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
# 59 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
	step_end

# 60 "data/maps/Silveridge_EldersHouse/scripts.pory"
Silveridge_EldersHouse_EventScript_Conversation_Movement_1:
# 60 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_right
# 60 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
# 60 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
# 60 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
Silveridge_EldersHouse_EventScript_Conversation_Movement_2:
# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_up
# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_up
# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_right
# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
	face_up
	step_end

# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
Silveridge_EldersHouse_EventScript_Conversation_Movement_3:
# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_up
# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
	delay_16
# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
	face_up
	step_end

Silveridge_EldersHouse_EventScript_Conversation_Text_0:
# 17 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Old man$"

Silveridge_EldersHouse_EventScript_Conversation_Text_1:
# 19 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Yet another area is decaying on\n"
	.string "Beachbound Route…$"

Silveridge_EldersHouse_EventScript_Conversation_Text_2:
# 26 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Old woman$"

Silveridge_EldersHouse_EventScript_Conversation_Text_3:
# 28 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "We have yet to receive tidings from\n"
	.string "the Elder in Sunrise Village…$"

Silveridge_EldersHouse_EventScript_Conversation_Text_4:
# 35 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Elder Iwa$"

Silveridge_EldersHouse_EventScript_Conversation_Text_5:
# 37 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Let us not surrender to panic.$"

Silveridge_EldersHouse_EventScript_Conversation_Text_6:
# 48 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Excuse me… Can I help you?$"

Silveridge_EldersHouse_EventScript_Conversation_Text_7:
# 77 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Yes? I am Iwa, the Elder of Silveridge.\n"
	.string "What brings you to me?$"

Silveridge_EldersHouse_EventScript_Conversation_Text_8:
# 87 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Give the letter$"

Silveridge_EldersHouse_EventScript_Conversation_Text_9:
# 97 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "I see…\p"
	.string "blah blah shit's fucked everywhere\n"
	.string "then\p"
	.string "Could you go investigate the decayed\n"
	.string "area in Uume Forest near Yifu City for\l"
	.string "me plz kthx$"

Silveridge_EldersHouse_EventScript_Elder_Text_0:
# 116 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Go forth, my child.$"
