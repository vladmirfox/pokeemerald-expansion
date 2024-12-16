YifuCity_Dojo_MapScripts::
	.byte 0


YifuCity_Dojo_EventScript_Dance1_FromUp::
# 11 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance1_FromUp_Movement_0
# 13 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 14 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
	return


YifuCity_Dojo_EventScript_Dance1_FromDown::
# 18 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance1_FromDown_Movement_0
# 20 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 21 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
	return


YifuCity_Dojo_EventScript_Dance1::
# 25 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_0
# 26 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 27 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_1
# 34 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 36 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 37 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_1
# 38 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 40 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_2
# 43 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 44 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 46 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_2
# 51 "data/maps/YifuCity_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Dojo_EventScript_Dance1_Text_3, YifuCity_Dojo_EventScript_Dance1_Text_4, YifuCity_Dojo_EventScript_Dance1_Text_5
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 66 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1_Jump
# 68 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq YifuCity_Dojo_EventScript_Dance1_2
# 90 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_7
# 95 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 97 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, Common_Movement_TeleportAway
# 98 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 99 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 100 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 107 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_6
# 117 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 127 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 128 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_8
# 131 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 133 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_7
# 139 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_8
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 144 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
YifuCity_Dojo_EventScript_Dance1_1:
# 148 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 16, 31, METATILE_DojoYifu_YifuDojoDoorBottomLeft, TRUE
# 149 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 17, 31, METATILE_DojoYifu_YifuDojoDoorBottomRight, TRUE
# 150 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 16, 32, METATILE_DojoYifu_YifuDojoDoorTopLeft, TRUE
# 151 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 17, 32, METATILE_DojoYifu_YifuDojoDoorTopRight, TRUE
# 152 "data/maps/YifuCity_Dojo/scripts.pory"
	special DrawWholeMapView
# 154 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8004, 1
# 155 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8005, 1
# 156 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8006, 1
# 157 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8007, 4
# 158 "data/maps/YifuCity_Dojo/scripts.pory"
	special ShakeCamera
# 160 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_UNLOCK
# 162 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_9
# 163 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_9
# 164 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 165 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 166 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 168 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Dance1_2:
# 70 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 71 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_6
# 75 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 77 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, Common_Movement_TeleportAway
# 78 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 79 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 80 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 81 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 82 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_5
# 85 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 86 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 87 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 88 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
	goto YifuCity_Dojo_EventScript_Dance1_1


# 171 "data/maps/YifuCity_Dojo/scripts.pory"
Blabla1:
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 174 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

YifuCity_Dojo_Dance1_Jump::
# 178 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_BANG
# 179 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, YifuCity_Dojo_Movement_JumpInPlaceDown
# 180 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Movement_JumpInPlaceDown
# 181 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Movement_JumpInPlaceDown
# 182 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 183 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 184 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 185 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 187 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 16
	return


# 190 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Movement_JumpInPlaceDown:
# 191 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_in_place_down
	step_end

YifuCity_Dojo_Dance1::
# 195 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, YifuCity_Dojo_Dance1_Movement_0
# 211 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_Movement_1
# 223 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_Movement_2
# 237 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 238 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 239 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
	return


YifuCity_Dojo_EventScript_Advice::
# 243 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 244 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 245 "data/maps/YifuCity_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, YifuCity_Dojo_EventScript_Advice_2
# 251 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Advice_Text_1
YifuCity_Dojo_EventScript_Advice_1:
# 259 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Advice_2:
# 246 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Advice_Text_0
	goto YifuCity_Dojo_EventScript_Advice_1


YifuCity_Dojo_EventScript_DojoStatue::
# 263 "data/maps/YifuCity_Dojo/scripts.pory"
	lockall
# 264 "data/maps/YifuCity_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, YifuCity_Dojo_EventScript_DojoStatue_2
# 274 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_DojoStatue_Text_1, MSGBOX_SIGN
YifuCity_Dojo_EventScript_DojoStatue_1:
# 282 "data/maps/YifuCity_Dojo/scripts.pory"
	releaseall
	return

YifuCity_Dojo_EventScript_DojoStatue_2:
# 265 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_DojoStatue_Text_0, MSGBOX_SIGN
	goto YifuCity_Dojo_EventScript_DojoStatue_1


EvaPouet::
# 287 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 288 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
# 289 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return


# 12 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_FromUp_Movement_0:
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	face_up
# 12 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 19 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_FromDown_Movement_0:
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 19 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
	step_end

# 25 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_0:
# 25 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_in_place_fast_down
	step_end

# 37 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_1:
# 37 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 37 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_2:
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
	step_end

# 78 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_3:
# 78 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_4:
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 84 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_5:
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 107 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_6:
# 108 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 109 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 110 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

# 133 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_7:
# 134 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 136 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 137 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 139 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_8:
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 140 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 141 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 162 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_9:
# 162 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 195 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_0:
# 199 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 200 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 200 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 200 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 200 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 201 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 202 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 203 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_left
# 204 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 206 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 206 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 207 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 208 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 211 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_1:
# 215 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 215 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 216 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 217 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 217 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 217 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 217 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 218 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 219 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 219 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 219 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 219 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 220 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 223 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_2:
# 226 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 227 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 227 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 227 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 227 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 228 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 229 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 229 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 230 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 232 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 233 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

YifuCity_Dojo_EventScript_Dance1_Text_0:
# 26 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Kimono girls$"

YifuCity_Dojo_EventScript_Dance1_Text_1:
# 28 "data/maps/YifuCity_Dojo/scripts.pory"
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
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Well? Can you remember which one is\n"
	.string "the real Yutaka?$"

YifuCity_Dojo_EventScript_Dance1_Text_3:
# 58 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The left one.$"

YifuCity_Dojo_EventScript_Dance1_Text_4:
# 59 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The middle one.$"

YifuCity_Dojo_EventScript_Dance1_Text_5:
# 60 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The right one.$"

YifuCity_Dojo_EventScript_Dance1_Text_6:
# 72 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are correct!\p"
	.string "Very well. You may proceed to the next\n"
	.string "room.$"

YifuCity_Dojo_EventScript_Dance1_Text_7:
# 92 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are incorrect!\p"
	.string "We shall face you in battle before you\n"
	.string "proceed.$"

YifuCity_Dojo_EventScript_Dance1_Text_8:
# 129 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Very well! You may now proceed.$"

YifuCity_Dojo_EventScript_Advice_Text_0:
# 247 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Such grace! Such swiftness! I am\n"
	.string "wowed!\p"
	.string "{PLAYER}… That's a name to be\n"
	.string "remembered!$"

YifuCity_Dojo_EventScript_Advice_Text_1:
# 252 "data/maps/YifuCity_Dojo/scripts.pory"
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
# 266 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Dojo of Yifu City\p"
	.string "Certified wielders:\n"
	.string "Hariko,\l"
	.string "Natsuki,\l"
	.string "{PLAYER}$"

YifuCity_Dojo_EventScript_DojoStatue_Text_1:
# 275 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Dojo of Kura Village\p"
	.string "Certified wielders:\n"
	.string "Hariko,\l"
	.string "Natsuki$"
