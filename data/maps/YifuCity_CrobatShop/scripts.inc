YifuCity_CrobatShop_MapScripts::
# 6 "data/maps/YifuCity_CrobatShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, YifuCity_CrobatShop_SetupNpcs
	.byte 0


YifuCity_CrobatShop_SetupNpcs::
# 10 "data/maps/YifuCity_CrobatShop/scripts.pory"
	goto_if_set FLAG_CROBAT_PASSWORD_CORRECT, YifuCity_CrobatShop_SetupNpcs_1
	return

YifuCity_CrobatShop_SetupNpcs_1:
# 11 "data/maps/YifuCity_CrobatShop/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 12 "data/maps/YifuCity_CrobatShop/scripts.pory"
	setobjectxyperm 4, 7, 4
	return


YifuCity_CrobatShop_Cashier::
# 17 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 18 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 19 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Cashier_Text_0
# 20 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Cashier_Text_1
# 24 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 25 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	return


YifuCity_CrobatShop_Guard::
# 29 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 30 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 31 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_CrobatShop_Guard_Movement_0
# 32 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Guard_Text_0
# 33 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Guard_Text_1
# 37 "data/maps/YifuCity_CrobatShop/scripts.pory"
	goto_if_unset FLAG_GOT_CROBAT_PASSWORD_FIRST_HALF, YifuCity_CrobatShop_Guard_2
# 37 "data/maps/YifuCity_CrobatShop/scripts.pory"
	goto_if_unset FLAG_GOT_CROBAT_PASSWORD_SECOND_HALF, YifuCity_CrobatShop_Guard_2
# 75 "data/maps/YifuCity_CrobatShop/scripts.pory"
	goto_if_set FLAG_GOT_CROBAT_PASSWORD_FIRST_HALF, YifuCity_CrobatShop_Guard_11
YifuCity_CrobatShop_Guard_1:
# 137 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	return

YifuCity_CrobatShop_Guard_2:
# 38 "data/maps/YifuCity_CrobatShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_CrobatShop_Guard_Text_2, YifuCity_CrobatShop_Guard_Text_3, YifuCity_CrobatShop_Guard_Text_4
# 49 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 51 "data/maps/YifuCity_CrobatShop/scripts.pory"
	delay 24
# 53 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_CrobatShop_Guard_Movement_1
# 55 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Guard_Text_0
# 56 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Guard_Text_5
# 59 "data/maps/YifuCity_CrobatShop/scripts.pory"
	waitmovement 0
# 60 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 62 "data/maps/YifuCity_CrobatShop/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq YifuCity_CrobatShop_Guard_8
# 66 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_CrobatShop_Guard_Movement_2
# 67 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_CrobatShop_Guard_Movement_3
YifuCity_CrobatShop_Guard_7:
# 71 "data/maps/YifuCity_CrobatShop/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 72 "data/maps/YifuCity_CrobatShop/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 73 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	goto YifuCity_CrobatShop_Guard_1

YifuCity_CrobatShop_Guard_8:
# 63 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_CrobatShop_Guard_Movement_2
# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_CrobatShop_Guard_Movement_3
	goto YifuCity_CrobatShop_Guard_7

YifuCity_CrobatShop_Guard_11:
# 76 "data/maps/YifuCity_CrobatShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_CrobatShop_Guard_Text_6, YifuCity_CrobatShop_Guard_Text_7, YifuCity_CrobatShop_Guard_Text_8
# 87 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 89 "data/maps/YifuCity_CrobatShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq YifuCity_CrobatShop_Guard_14
YifuCity_CrobatShop_Guard_13:
# 93 "data/maps/YifuCity_CrobatShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_CrobatShop_Guard_Text_9, YifuCity_CrobatShop_Guard_Text_10, YifuCity_CrobatShop_Guard_Text_11
# 105 "data/maps/YifuCity_CrobatShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq YifuCity_CrobatShop_Guard_17
YifuCity_CrobatShop_Guard_16:
# 109 "data/maps/YifuCity_CrobatShop/scripts.pory"
	delay 24
# 111 "data/maps/YifuCity_CrobatShop/scripts.pory"
	goto_if_set FLAG_TEMP_2, YifuCity_CrobatShop_Guard_21
YifuCity_CrobatShop_Guard_20:
# 128 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Guard_Text_0
# 129 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Guard_Text_5
# 132 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
	goto YifuCity_CrobatShop_Guard_1

YifuCity_CrobatShop_Guard_14:
# 90 "data/maps/YifuCity_CrobatShop/scripts.pory"
	setflag FLAG_TEMP_1
	goto YifuCity_CrobatShop_Guard_13

YifuCity_CrobatShop_Guard_17:
# 106 "data/maps/YifuCity_CrobatShop/scripts.pory"
	setflag FLAG_TEMP_2
	goto YifuCity_CrobatShop_Guard_16

YifuCity_CrobatShop_Guard_19:
# 112 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Guard_Text_0
# 113 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Guard_Text_12
# 116 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 118 "data/maps/YifuCity_CrobatShop/scripts.pory"
	setflag FLAG_CROBAT_PASSWORD_CORRECT
# 120 "data/maps/YifuCity_CrobatShop/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq YifuCity_CrobatShop_Guard_25
YifuCity_CrobatShop_Guard_24:
# 124 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_CrobatShop_Guard_Movement_5
# 125 "data/maps/YifuCity_CrobatShop/scripts.pory"
	waitmovement 0
	goto YifuCity_CrobatShop_Guard_1

YifuCity_CrobatShop_Guard_21:
# 111 "data/maps/YifuCity_CrobatShop/scripts.pory"
	goto_if_set FLAG_TEMP_2, YifuCity_CrobatShop_Guard_19
	goto YifuCity_CrobatShop_Guard_20

YifuCity_CrobatShop_Guard_25:
# 121 "data/maps/YifuCity_CrobatShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_CrobatShop_Guard_Movement_4
	goto YifuCity_CrobatShop_Guard_24


YifuCity_CrobatShop_Customer1::
# 141 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 142 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 143 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Customer1_Text_0
# 144 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Customer1_Text_1
# 147 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 148 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	return


YifuCity_CrobatShop_Customer2::
# 152 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 153 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 154 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Customer1_Text_0
# 155 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Customer2_Text_0
# 158 "data/maps/YifuCity_CrobatShop/scripts.pory"
	closemessage
# 159 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	return


# 31 "data/maps/YifuCity_CrobatShop/scripts.pory"
YifuCity_CrobatShop_Guard_Movement_0:
# 31 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock_facing_direction
# 31 "data/maps/YifuCity_CrobatShop/scripts.pory"
	walk_in_place_faster_left
# 31 "data/maps/YifuCity_CrobatShop/scripts.pory"
	unlock_facing_direction
	step_end

# 53 "data/maps/YifuCity_CrobatShop/scripts.pory"
YifuCity_CrobatShop_Guard_Movement_1:
# 53 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock_facing_direction
# 53 "data/maps/YifuCity_CrobatShop/scripts.pory"
	walk_in_place_faster_left
	step_end

# 63 "data/maps/YifuCity_CrobatShop/scripts.pory"
YifuCity_CrobatShop_Guard_Movement_2:
# 63 "data/maps/YifuCity_CrobatShop/scripts.pory"
	walk_left
# 63 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock_facing_direction
# 63 "data/maps/YifuCity_CrobatShop/scripts.pory"
	walk_right
# 63 "data/maps/YifuCity_CrobatShop/scripts.pory"
	unlock_facing_direction
	step_end

# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
YifuCity_CrobatShop_Guard_Movement_3:
# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock_facing_direction
# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock_anim
# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
	jump_2_left
# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
	unlock_facing_direction
# 64 "data/maps/YifuCity_CrobatShop/scripts.pory"
	unlock_anim
	step_end

# 121 "data/maps/YifuCity_CrobatShop/scripts.pory"
YifuCity_CrobatShop_Guard_Movement_4:
# 121 "data/maps/YifuCity_CrobatShop/scripts.pory"
	walk_left
# 121 "data/maps/YifuCity_CrobatShop/scripts.pory"
	face_right
	step_end

# 124 "data/maps/YifuCity_CrobatShop/scripts.pory"
YifuCity_CrobatShop_Guard_Movement_5:
# 124 "data/maps/YifuCity_CrobatShop/scripts.pory"
	walk_down
# 124 "data/maps/YifuCity_CrobatShop/scripts.pory"
	face_left
	step_end

YifuCity_CrobatShop_Cashier_Text_0:
# 19 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Cashier$"

YifuCity_CrobatShop_Cashier_Text_1:
# 21 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "G'day uh, welcome to the ye olde\n"
	.string "Crobat Shoppe!\p"
	.string "TODO EVA$"

YifuCity_CrobatShop_Guard_Text_0:
# 32 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Shady man$"

YifuCity_CrobatShop_Guard_Text_1:
# 34 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Password?$"

YifuCity_CrobatShop_Guard_Text_2:
# 45 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Uh…$"

YifuCity_CrobatShop_Guard_Text_3:
# 46 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Ehm…$"

YifuCity_CrobatShop_Guard_Text_4:
# 47 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Well…$"

YifuCity_CrobatShop_Guard_Text_5:
# 57 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "That ain't the password! Scram!$"

YifuCity_CrobatShop_Guard_Text_6:
# 83 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Noivern…$"

YifuCity_CrobatShop_Guard_Text_7:
# 84 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Crobat…$"

YifuCity_CrobatShop_Guard_Text_8:
# 85 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Swoobat…$"

YifuCity_CrobatShop_Guard_Text_9:
# 100 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "…is awesome!$"

YifuCity_CrobatShop_Guard_Text_10:
# 101 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "…is amazing!$"

YifuCity_CrobatShop_Guard_Text_11:
# 102 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "…is legendary!$"

YifuCity_CrobatShop_Guard_Text_12:
# 114 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Alright.$"

YifuCity_CrobatShop_Customer1_Text_0:
# 143 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Customer$"

YifuCity_CrobatShop_Customer1_Text_1:
# 145 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "This place is amazing!\n"
	.string "How is everything so cheap?!$"

YifuCity_CrobatShop_Customer2_Text_0:
# 156 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "These Super Balls looks… different,\n"
	.string "somehow…$"
