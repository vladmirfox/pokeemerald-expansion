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
# 67 "data/maps/Silveridge_EldersHouse/scripts.pory"
	setflag FLAG_HIDE_OLD_MEN_ELDERS_HOUSE_SILVERIDGE
# 69 "data/maps/Silveridge_EldersHouse/scripts.pory"
	delay 48
# 71 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Silveridge_EldersHouse_EventScript_Conversation_Movement_2
# 72 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 74 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 75 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_7
# 79 "data/maps/Silveridge_EldersHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, Silveridge_EldersHouse_EventScript_Conversation_Text_8
# 88 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 90 "data/maps/Silveridge_EldersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Silveridge_EldersHouse_EventScript_Conversation_Movement_3
# 91 "data/maps/Silveridge_EldersHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 93 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 94 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Conversation_Text_9
# 99 "data/maps/Silveridge_EldersHouse/scripts.pory"
	release
	return


Silveridge_EldersHouse_EventScript_Elder::
# 104 "data/maps/Silveridge_EldersHouse/scripts.pory"
	lock
# 105 "data/maps/Silveridge_EldersHouse/scripts.pory"
	faceplayer
# 107 "data/maps/Silveridge_EldersHouse/scripts.pory"
	checkitem ITEM_SKY_PLATE
# 108 "data/maps/Silveridge_EldersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Silveridge_EldersHouse_EventScript_Elder_2
# 116 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 117 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Elder_Text_1
# 125 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 128 "data/maps/Silveridge_EldersHouse/scripts.pory"
	giveitem ITEM_SKY_PLATE
# 130 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 131 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Elder_Text_2
# 136 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
# 138 "data/maps/Silveridge_EldersHouse/scripts.pory"
	clearflag FLAG_KURA_DOJO_CLOSED
# 139 "data/maps/Silveridge_EldersHouse/scripts.pory"
	setflag FLAG_HIDE_BONSAI_SHOP_OWNER
Silveridge_EldersHouse_EventScript_Elder_1:
# 141 "data/maps/Silveridge_EldersHouse/scripts.pory"
	release
	return

Silveridge_EldersHouse_EventScript_Elder_2:
# 109 "data/maps/Silveridge_EldersHouse/scripts.pory"
	speakername Silveridge_EldersHouse_EventScript_Conversation_Text_4
# 110 "data/maps/Silveridge_EldersHouse/scripts.pory"
	msgbox Silveridge_EldersHouse_EventScript_Elder_Text_0
# 113 "data/maps/Silveridge_EldersHouse/scripts.pory"
	closemessage
	goto Silveridge_EldersHouse_EventScript_Elder_1


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

# 71 "data/maps/Silveridge_EldersHouse/scripts.pory"
Silveridge_EldersHouse_EventScript_Conversation_Movement_2:
# 71 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_up
# 71 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_up
# 71 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_right
# 71 "data/maps/Silveridge_EldersHouse/scripts.pory"
	face_up
	step_end

# 90 "data/maps/Silveridge_EldersHouse/scripts.pory"
Silveridge_EldersHouse_EventScript_Conversation_Movement_3:
# 90 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_up
# 90 "data/maps/Silveridge_EldersHouse/scripts.pory"
	delay_16
# 90 "data/maps/Silveridge_EldersHouse/scripts.pory"
	walk_down
# 90 "data/maps/Silveridge_EldersHouse/scripts.pory"
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
# 76 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Yes?$"

Silveridge_EldersHouse_EventScript_Conversation_Text_8:
# 86 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Give the letter$"

Silveridge_EldersHouse_EventScript_Conversation_Text_9:
# 95 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "I see…$"

Silveridge_EldersHouse_EventScript_Elder_Text_0:
# 111 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Go forth, my child.$"

Silveridge_EldersHouse_EventScript_Elder_Text_1:
# 118 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "Hello, child. I am Iwa, the elder of\n"
	.string "Silveridge. What brings you to me?\p"
	.string "……………\p"
	.string "Oh, I see! So Kaba sent you! Insert\n"
	.string "interesting dialog about the Pokémon\l"
	.string "attacking people here\p"
	.string "……………Yes… I can see why Kaba has\n"
	.string "trusted you with coming to see me.\p"
	.string "Perhaps you've seen or heard about\n"
	.string "bigger, stronger Pokémon that have\l"
	.string "gone mad; we call them the TODO EVA.\l"
	.string "They are very difficult to stop.\p"
	.string "That is, unless you have this in your\n"
	.string "posession.$"

Silveridge_EldersHouse_EventScript_Elder_Text_2:
# 132 "data/maps/Silveridge_EldersHouse/scripts.pory"
	.string "This is a copy of one of the very\n"
	.string "ancient Tablets of Power. It is said\l"
	.string "that to possess all the Tablets of\l"
	.string "Power grants one with absolute power\l"
	.string "over Pokémon.\p"
	.string "I am entrusting this one to you. It\n"
	.string "should grant you enough power to be\l"
	.string "able to battle a TODO EVA.\p"
	.string "I am convinced that by gathering\n"
	.string "these Tablets of Power, we will find\l"
	.string "the answer to why the Pokémon are\l"
	.string "attacking us.\p"
	.string "$"
