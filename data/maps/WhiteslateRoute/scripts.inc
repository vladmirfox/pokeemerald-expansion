WhiteslateRoute_MapScripts::
	.byte 0


WhiteslateRoute_EventScript_Shuckle::
# 9 "data/maps/WhiteslateRoute/scripts.pory"
	lock
# 10 "data/maps/WhiteslateRoute/scripts.pory"
	faceplayer
# 11 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 12 "data/maps/WhiteslateRoute/scripts.pory"
	playmoncry SPECIES_SHUCKLE, CRY_MODE_NORMAL
# 13 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_EventScript_Shuckle_Text_0
# 16 "data/maps/WhiteslateRoute/scripts.pory"
	waitmoncry
# 17 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 20 "data/maps/WhiteslateRoute/scripts.pory"
	goto_if_unset FLAG_DAILY_SHUCKLE_BERRY_JUICE, WhiteslateRoute_EventScript_Shuckle_2
WhiteslateRoute_EventScript_Shuckle_1:
# 32 "data/maps/WhiteslateRoute/scripts.pory"
	release
	return

WhiteslateRoute_EventScript_Shuckle_2:
# 21 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 22 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 0
# 23 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_EventScript_Shuckle_Text_1
# 26 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 28 "data/maps/WhiteslateRoute/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 30 "data/maps/WhiteslateRoute/scripts.pory"
	setflag FLAG_DAILY_SHUCKLE_BERRY_JUICE
	goto WhiteslateRoute_EventScript_Shuckle_1


WhiteslateRoute_Trigger_SecretBase::
# 36 "data/maps/WhiteslateRoute/scripts.pory"
	lockall
# 37 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 38 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_1
# 41 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 43 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_0
# 44 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
# 46 "data/maps/WhiteslateRoute/scripts.pory"
	delay 24
# 48 "data/maps/WhiteslateRoute/scripts.pory"
	playse SE_BALL_OPEN
# 49 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 8, WhiteslateRoute_Trigger_SecretBase_Movement_1
# 50 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 8
# 51 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 52 "data/maps/WhiteslateRoute/scripts.pory"
	playmoncry SPECIES_GROVYLE, CRY_MODE_NORMAL
# 53 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 8, WhiteslateRoute_Trigger_SecretBase_Movement_2
# 57 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 8
# 59 "data/maps/WhiteslateRoute/scripts.pory"
	playse SE_M_ROCK_THROW
# 61 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 8, WhiteslateRoute_Trigger_SecretBase_Movement_3
# 69 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 8
# 70 "data/maps/WhiteslateRoute/scripts.pory"
	setmetatile 26, 34, METATILE_PorytilesPrimaryTutorial_CaveEntrance, TRUE
# 71 "data/maps/WhiteslateRoute/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 74 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 75 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_2
# 78 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 80 "data/maps/WhiteslateRoute/scripts.pory"
	playmoncry SPECIES_GROVYLE, CRY_MODE_NORMAL
# 81 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 8, WhiteslateRoute_Trigger_SecretBase_Movement_4
# 86 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 8
# 87 "data/maps/WhiteslateRoute/scripts.pory"
	playse SE_BALL_OPEN
# 88 "data/maps/WhiteslateRoute/scripts.pory"
	waitmoncry
# 89 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 91 "data/maps/WhiteslateRoute/scripts.pory"
	delay 24
# 93 "data/maps/WhiteslateRoute/scripts.pory"
	playse SE_PIN
# 94 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_5
# 95 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
# 96 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 97 "data/maps/WhiteslateRoute/scripts.pory"
	delay 48
# 99 "data/maps/WhiteslateRoute/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 100 "data/maps/WhiteslateRoute/scripts.pory"
	switch VAR_TEMP_0
# 101 "data/maps/WhiteslateRoute/scripts.pory"
	case 25, WhiteslateRoute_Trigger_SecretBase_3
# 105 "data/maps/WhiteslateRoute/scripts.pory"
	case 26, WhiteslateRoute_Trigger_SecretBase_4
# 108 "data/maps/WhiteslateRoute/scripts.pory"
	case 27, WhiteslateRoute_Trigger_SecretBase_5
WhiteslateRoute_Trigger_SecretBase_1:
# 113 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 114 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_3
# 118 "data/maps/WhiteslateRoute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, WhiteslateRoute_Trigger_SecretBase_Text_4, WhiteslateRoute_Trigger_SecretBase_Text_5, WhiteslateRoute_Trigger_SecretBase_Text_6
# 129 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 131 "data/maps/WhiteslateRoute/scripts.pory"
	switch VAR_RESULT
# 132 "data/maps/WhiteslateRoute/scripts.pory"
	case 0, WhiteslateRoute_Trigger_SecretBase_8
# 141 "data/maps/WhiteslateRoute/scripts.pory"
	case 1, WhiteslateRoute_Trigger_SecretBase_9
# 150 "data/maps/WhiteslateRoute/scripts.pory"
	case 2, WhiteslateRoute_Trigger_SecretBase_10
WhiteslateRoute_Trigger_SecretBase_6:
# 160 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 162 "data/maps/WhiteslateRoute/scripts.pory"
	giveitem ITEM_TM_SECRET_POWER
# 164 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 165 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_10
# 168 "data/maps/WhiteslateRoute/scripts.pory"
	closemessage
# 170 "data/maps/WhiteslateRoute/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 172 "data/maps/WhiteslateRoute/scripts.pory"
	switch VAR_TEMP_0
# 173 "data/maps/WhiteslateRoute/scripts.pory"
	case 25, WhiteslateRoute_Trigger_SecretBase_13
# 176 "data/maps/WhiteslateRoute/scripts.pory"
	case 26, WhiteslateRoute_Trigger_SecretBase_14
# 179 "data/maps/WhiteslateRoute/scripts.pory"
	case 27, WhiteslateRoute_Trigger_SecretBase_15
WhiteslateRoute_Trigger_SecretBase_11:
# 184 "data/maps/WhiteslateRoute/scripts.pory"
	playse SE_M_ROCK_THROW
# 185 "data/maps/WhiteslateRoute/scripts.pory"
	setmetatile 26, 34, METATILE_PorytilesPrimaryTutorial_SecretBaseCaveEntrance, TRUE
# 186 "data/maps/WhiteslateRoute/scripts.pory"
	special DrawWholeMapView
# 187 "data/maps/WhiteslateRoute/scripts.pory"
	waitse
# 189 "data/maps/WhiteslateRoute/scripts.pory"
	switch VAR_TEMP_0
# 190 "data/maps/WhiteslateRoute/scripts.pory"
	case 25, WhiteslateRoute_Trigger_SecretBase_18
# 193 "data/maps/WhiteslateRoute/scripts.pory"
	case 26, WhiteslateRoute_Trigger_SecretBase_19
# 196 "data/maps/WhiteslateRoute/scripts.pory"
	case 27, WhiteslateRoute_Trigger_SecretBase_20
WhiteslateRoute_Trigger_SecretBase_16:
# 200 "data/maps/WhiteslateRoute/scripts.pory"
	removeobject 7
# 201 "data/maps/WhiteslateRoute/scripts.pory"
	removeobject 8
# 202 "data/maps/WhiteslateRoute/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 204 "data/maps/WhiteslateRoute/scripts.pory"
	setflag FLAG_RECEIVED_SECRET_POWER
# 206 "data/maps/WhiteslateRoute/scripts.pory"
	releaseall
	return

WhiteslateRoute_Trigger_SecretBase_3:
# 102 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_6
# 103 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
# 104 "data/maps/WhiteslateRoute/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto WhiteslateRoute_Trigger_SecretBase_1

WhiteslateRoute_Trigger_SecretBase_4:
# 106 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_7
# 107 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_1

WhiteslateRoute_Trigger_SecretBase_5:
# 109 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_8
# 110 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_1

WhiteslateRoute_Trigger_SecretBase_8:
# 133 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 134 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_7
	goto WhiteslateRoute_Trigger_SecretBase_6

WhiteslateRoute_Trigger_SecretBase_9:
# 142 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 143 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_8
	goto WhiteslateRoute_Trigger_SecretBase_6

WhiteslateRoute_Trigger_SecretBase_10:
# 151 "data/maps/WhiteslateRoute/scripts.pory"
	speakername WhiteslateRoute_Trigger_SecretBase_Text_0
# 152 "data/maps/WhiteslateRoute/scripts.pory"
	msgbox WhiteslateRoute_Trigger_SecretBase_Text_9
	goto WhiteslateRoute_Trigger_SecretBase_6

WhiteslateRoute_Trigger_SecretBase_13:
# 174 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_9
# 175 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_11

WhiteslateRoute_Trigger_SecretBase_14:
# 177 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_10
# 178 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_11

WhiteslateRoute_Trigger_SecretBase_15:
# 180 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_11
# 181 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_11

WhiteslateRoute_Trigger_SecretBase_18:
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_12
# 192 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_16

WhiteslateRoute_Trigger_SecretBase_19:
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_13
# 195 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_16

WhiteslateRoute_Trigger_SecretBase_20:
# 197 "data/maps/WhiteslateRoute/scripts.pory"
	applymovement 7, WhiteslateRoute_Trigger_SecretBase_Movement_12
# 198 "data/maps/WhiteslateRoute/scripts.pory"
	waitmovement 7
	goto WhiteslateRoute_Trigger_SecretBase_16


# 43 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_0:
# 43 "data/maps/WhiteslateRoute/scripts.pory"
	walk_right
# 43 "data/maps/WhiteslateRoute/scripts.pory"
	face_left
	step_end

# 49 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_1:
# 49 "data/maps/WhiteslateRoute/scripts.pory"
	exit_pokeball
# 49 "data/maps/WhiteslateRoute/scripts.pory"
	face_up
	step_end

# 53 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_2:
# 54 "data/maps/WhiteslateRoute/scripts.pory"
	jump_in_place_up
# 55 "data/maps/WhiteslateRoute/scripts.pory"
	delay_16
# 55 "data/maps/WhiteslateRoute/scripts.pory"
	delay_16
	step_end

# 61 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_3:
# 62 "data/maps/WhiteslateRoute/scripts.pory"
	lock_anim
# 63 "data/maps/WhiteslateRoute/scripts.pory"
	lock_facing_direction
# 64 "data/maps/WhiteslateRoute/scripts.pory"
	walk_faster_up
# 65 "data/maps/WhiteslateRoute/scripts.pory"
	walk_faster_down
# 66 "data/maps/WhiteslateRoute/scripts.pory"
	unlock_anim
# 67 "data/maps/WhiteslateRoute/scripts.pory"
	unlock_facing_direction
	step_end

# 81 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_4:
# 82 "data/maps/WhiteslateRoute/scripts.pory"
	jump_in_place_right
# 83 "data/maps/WhiteslateRoute/scripts.pory"
	delay_16
# 83 "data/maps/WhiteslateRoute/scripts.pory"
	delay_16
# 84 "data/maps/WhiteslateRoute/scripts.pory"
	enter_pokeball
	step_end

# 94 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_5:
# 94 "data/maps/WhiteslateRoute/scripts.pory"
	face_down
# 94 "data/maps/WhiteslateRoute/scripts.pory"
	emote_exclamation_mark
	step_end

# 102 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_6:
# 102 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 102 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 102 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 102 "data/maps/WhiteslateRoute/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_7:
# 106 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 106 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 106 "data/maps/WhiteslateRoute/scripts.pory"
	walk_left
# 106 "data/maps/WhiteslateRoute/scripts.pory"
	face_down
	step_end

# 109 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_8:
# 109 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 109 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
	step_end

# 174 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_9:
# 174 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
# 174 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
# 174 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
	step_end

# 177 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_10:
# 177 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
# 177 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_11:
# 180 "data/maps/WhiteslateRoute/scripts.pory"
	walk_left
# 180 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
# 180 "data/maps/WhiteslateRoute/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_12:
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 191 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/WhiteslateRoute/scripts.pory"
WhiteslateRoute_Trigger_SecretBase_Movement_13:
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_left
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
# 194 "data/maps/WhiteslateRoute/scripts.pory"
	walk_down
	step_end

WhiteslateRoute_EventScript_Shuckle_Text_0:
# 14 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Cklckl!$"

WhiteslateRoute_EventScript_Shuckle_Text_1:
# 24 "data/maps/WhiteslateRoute/scripts.pory"
	.string "…Oh? Shuckle is giving you something.$"

WhiteslateRoute_Trigger_SecretBase_Text_0:
# 37 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Man$"

WhiteslateRoute_Trigger_SecretBase_Text_1:
# 39 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Hehe… Looks like the perfect spot!$"

WhiteslateRoute_Trigger_SecretBase_Text_2:
# 76 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Good job, Grovyle!$"

WhiteslateRoute_Trigger_SecretBase_Text_3:
# 115 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Oh, man! You were here this whole time!\n"
	.string "My secret base is no longer secret!$"

WhiteslateRoute_Trigger_SecretBase_Text_4:
# 125 "data/maps/WhiteslateRoute/scripts.pory"
	.string "What were you doing?$"

WhiteslateRoute_Trigger_SecretBase_Text_5:
# 126 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Sorry for interrupting!$"

WhiteslateRoute_Trigger_SecretBase_Text_6:
# 127 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Are you a criminal?$"

WhiteslateRoute_Trigger_SecretBase_Text_7:
# 135 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Alright, you seem interested, so I'll\n"
	.string "let you in on the secret!\p"
	.string "I taught my Grovyle a secret\n"
	.string "technique to open passages to hidden\l"
	.string "natural caves!\p"
	.string "Not only that! Trees with low-hanging\n"
	.string "vines, bushes… That kind of place is\l"
	.string "perfect to build a secret base!\p"
	.string "I wrote this technique down just in\n"
	.string "case. Here, now you can teach your\l"
	.string "Pokémon too!$"

WhiteslateRoute_Trigger_SecretBase_Text_8:
# 144 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Ah, it's alright. You look like you're a\n"
	.string "good kid. I'm sure you have what it\l"
	.string "takes to become a secret base\l"
	.string "master. I'll let you in on the secret!\p"
	.string "I taught my Grovyle a secret\n"
	.string "technique to open passages to hidden\l"
	.string "natural caves!\p"
	.string "Not only that! Trees with low-hanging\n"
	.string "vines, bushes… That kind of place is\l"
	.string "perfect to build a secret base!\p"
	.string "I wrote this technique down just in\n"
	.string "case. Here, now you can teach your\l"
	.string "Pokémon too!$"

WhiteslateRoute_Trigger_SecretBase_Text_9:
# 153 "data/maps/WhiteslateRoute/scripts.pory"
	.string "Of course not, this is perfectly\n"
	.string "legal! You know what? I'll let you in\l"
	.string "on the secret!\p"
	.string "I taught my Grovyle a secret\n"
	.string "technique to open passages to hidden\l"
	.string "natural caves!\p"
	.string "Not only that! Trees with low-hanging\n"
	.string "vines, bushes… That kind of place is\l"
	.string "perfect to build a secret base!\p"
	.string "I wrote this technique down just in\n"
	.string "case. Here, now you can teach your\l"
	.string "Pokémon too!$"

WhiteslateRoute_Trigger_SecretBase_Text_10:
# 166 "data/maps/WhiteslateRoute/scripts.pory"
	.string "I'll keep looking for the perfect\n"
	.string "secret base spot! Maybe I'll see you\l"
	.string "around!$"
