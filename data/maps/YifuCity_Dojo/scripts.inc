YifuCity_Dojo_MapScripts::
# 7 "data/maps/YifuCity_Dojo/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 1
	goto_if_eq YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor1Metatiles
	return


YifuCity_Dojo_EventScript_Dance1_FromUp::
# 16 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance1_FromUp_Movement_0
# 18 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
	return


YifuCity_Dojo_EventScript_Dance1_FromDown::
# 23 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance1_FromDown_Movement_0
# 25 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 26 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
	return


YifuCity_Dojo_EventScript_Dance1::
# 30 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_0
# 31 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 32 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_1
# 39 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 41 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_1
# 43 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 45 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_2
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 49 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 51 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 52 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_2
# 56 "data/maps/YifuCity_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Dojo_EventScript_Dance1_Text_3, YifuCity_Dojo_EventScript_Dance1_Text_4, YifuCity_Dojo_EventScript_Dance1_Text_5
# 67 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 71 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1_Jump
# 73 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq YifuCity_Dojo_EventScript_Dance1_2
# 101 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 102 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_7
# 106 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 108 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, Common_Movement_TeleportAway
# 109 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 110 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 111 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 112 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 114 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 116 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_7
# 117 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_8
# 118 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 119 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 121 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_two_trainers TRAINER_AKARI, YifuCity_Dojo_EventScript_Dance1_Text_8, TRAINER_YUKA, YifuCity_Dojo_EventScript_Dance1_Text_9
# 128 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 1
# 130 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 131 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_10
# 134 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 136 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_9
# 142 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_10
# 147 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 148 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 150 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 151 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 152 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
YifuCity_Dojo_EventScript_Dance1_1:
# 155 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 158 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor1Metatiles
# 160 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8004, 1
# 161 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8005, 1
# 162 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8006, 2
# 163 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8007, 4
# 164 "data/maps/YifuCity_Dojo/scripts.pory"
	special ShakeCamera
# 166 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_UNLOCK
# 168 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 169 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 170 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 171 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 174 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 176 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_11
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 178 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 180 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Dance1_2:
# 75 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 76 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_6
# 80 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 82 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 1
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, Common_Movement_TeleportAway
# 85 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 86 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 87 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 88 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 90 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 93 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_5
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_6
# 96 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 97 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 98 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 99 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
	goto YifuCity_Dojo_EventScript_Dance1_1


YifuCity_Dojo_SetDoor1Metatiles::
# 184 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 16, 31, METATILE_DojoYifu_YifuDojoDoorTopLeft, TRUE
# 185 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 17, 31, METATILE_DojoYifu_YifuDojoDoorTopRight, TRUE
# 186 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 16, 32, METATILE_DojoYifu_YifuDojoDoorBottomLeft, TRUE
# 187 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 17, 32, METATILE_DojoYifu_YifuDojoDoorBottomRight, TRUE
# 188 "data/maps/YifuCity_Dojo/scripts.pory"
	special DrawWholeMapView
	return


YifuCity_Dojo_Dance1_Jump::
# 192 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_BANG
# 193 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, YifuCity_Dojo_Movement_JumpInPlaceDown
# 194 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Movement_JumpInPlaceDown
# 195 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Movement_JumpInPlaceDown
# 196 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 197 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 198 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 199 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 201 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 16
	return


# 204 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Movement_JumpInPlaceDown:
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_in_place_down
	step_end

YifuCity_Dojo_Dance1::
# 209 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, YifuCity_Dojo_Dance1_Movement_0
# 225 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_Movement_1
# 237 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_Movement_2
# 251 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 252 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 253 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
	return


YifuCity_Dojo_EventScript_Advice::
# 257 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 258 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 259 "data/maps/YifuCity_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, YifuCity_Dojo_EventScript_Advice_2
# 265 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Advice_Text_1
YifuCity_Dojo_EventScript_Advice_1:
# 273 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Advice_2:
# 260 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Advice_Text_0
	goto YifuCity_Dojo_EventScript_Advice_1


YifuCity_Dojo_EventScript_DojoStatue::
# 277 "data/maps/YifuCity_Dojo/scripts.pory"
	lockall
# 278 "data/maps/YifuCity_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, YifuCity_Dojo_EventScript_DojoStatue_2
# 288 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_DojoStatue_Text_1, MSGBOX_SIGN
YifuCity_Dojo_EventScript_DojoStatue_1:
# 296 "data/maps/YifuCity_Dojo/scripts.pory"
	releaseall
	return

YifuCity_Dojo_EventScript_DojoStatue_2:
# 279 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_DojoStatue_Text_0, MSGBOX_SIGN
	goto YifuCity_Dojo_EventScript_DojoStatue_1


EvaPouet::
# 301 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 302 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
# 303 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return


# 17 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_FromUp_Movement_0:
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	face_up
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 24 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_FromDown_Movement_0:
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_0:
# 30 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_in_place_fast_down
	step_end

# 42 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_1:
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 47 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_2:
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 85 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_3:
# 85 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
	step_end

# 91 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_4:
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_5:
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 94 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 95 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_6:
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 116 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_7:
# 116 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 116 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 116 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

# 117 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_8:
# 117 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 117 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 117 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
	step_end

# 136 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_9:
# 137 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 138 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 139 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 142 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_10:
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 144 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 176 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_11:
# 176 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 176 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 176 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 176 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
	step_end

# 209 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_0:
# 213 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 214 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 214 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 214 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 214 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 215 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 216 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 217 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_left
# 218 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 219 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 220 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 220 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 221 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 222 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 225 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_1:
# 229 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 229 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 230 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 232 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 233 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 233 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 233 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 233 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 234 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 237 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_2:
# 240 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 241 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 241 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 241 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 241 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 242 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 243 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 243 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 244 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 245 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 245 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 246 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 247 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

YifuCity_Dojo_EventScript_Dance1_Text_0:
# 31 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Kimono girls$"

YifuCity_Dojo_EventScript_Dance1_Text_1:
# 33 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Welcome to the Yifu City Dojo.\n"
	.string "Miss Yutaka, the Dojo Master, is among\l"
	.string "us.\p"
	.string "She is the one on the left. If you\n"
	.string "haven't lost track of her by the end\l"
	.string "of our dance, we shall let you\l"
	.string "through. If you have, you shall have\l"
	.string "to battle us.\p"
	.string "Are you ready?$"

YifuCity_Dojo_EventScript_Dance1_Text_2:
# 53 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Well? Can you remember which one is\n"
	.string "the real Yutaka?$"

YifuCity_Dojo_EventScript_Dance1_Text_3:
# 63 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The left one.$"

YifuCity_Dojo_EventScript_Dance1_Text_4:
# 64 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The middle one.$"

YifuCity_Dojo_EventScript_Dance1_Text_5:
# 65 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The right one.$"

YifuCity_Dojo_EventScript_Dance1_Text_6:
# 77 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are correct!\p"
	.string "Very well. You may proceed to the next\n"
	.string "room.$"

YifuCity_Dojo_EventScript_Dance1_Text_7:
# 103 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are incorrect!\p"
	.string "We shall face you in battle before you\n"
	.string "proceed.$"

YifuCity_Dojo_EventScript_Dance1_Text_8:
# 123 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Oh!$"

YifuCity_Dojo_EventScript_Dance1_Text_9:
# 125 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I see.$"

YifuCity_Dojo_EventScript_Dance1_Text_10:
# 132 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Very well! You may now proceed.$"

YifuCity_Dojo_EventScript_Advice_Text_0:
# 261 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Such grace! Such swiftness! I am\n"
	.string "wowed!\p"
	.string "{PLAYER}… That's a name to be\n"
	.string "remembered!$"

YifuCity_Dojo_EventScript_Advice_Text_1:
# 266 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Hello, young challenger! Are you going\n"
	.string "to be fighting for your first Token?\p"
	.string "Welcome to the Koi Pond Dojo!\p"
	.string "Koishi, the Master of this place,\n"
	.string "favors water-type moves. Her\l"
	.string "battling style is strong, yet\l"
	.string "graceful… Sigh…\p"
	.string "I am her biggest fan! It's true! Maybe\n"
	.string "one day, I'll become your biggest fan,\l"
	.string "who knows?\p"
	.string "Go get 'em!$"

YifuCity_Dojo_EventScript_DojoStatue_Text_0:
# 280 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Dojo of Yifu City\p"
	.string "Certified wielders:\n"
	.string "Hariko,\l"
	.string "Natsuki,\l"
	.string "{PLAYER}$"

YifuCity_Dojo_EventScript_DojoStatue_Text_1:
# 289 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Dojo of Kura Village\p"
	.string "Certified wielders:\n"
	.string "Hariko,\l"
	.string "Natsuki$"
