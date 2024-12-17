YifuCity_Dojo_MapScripts::
# 16 "data/maps/YifuCity_Dojo/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD
# 27 "data/maps/YifuCity_Dojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, YifuCity_Dojo_SetupNpcs
	.byte 0

YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD:
# 17 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 1
	goto_if_ge YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_2
YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 20 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 2
	goto_if_ge YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_5
YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 23 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 3
	goto_if_ge YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 18 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor1Metatiles
	goto YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_1

YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 21 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor2Metatiles
	goto YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_4

YifuCity_Dojo_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 24 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor3Metatiles
	return


YifuCity_Dojo_SetupNpcs::
# 31 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 1
	goto_if_ge YifuCity_Dojo_SetupNpcs_2
YifuCity_Dojo_SetupNpcs_1:
# 36 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 2
	goto_if_ge YifuCity_Dojo_SetupNpcs_5
YifuCity_Dojo_SetupNpcs_4:
# 40 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_YIFU_DOJO_STATE, 3
	goto_if_ge YifuCity_Dojo_SetupNpcs_7
	return

YifuCity_Dojo_SetupNpcs_2:
# 32 "data/maps/YifuCity_Dojo/scripts.pory"
	setobjectxyperm 2, 15, 33
# 33 "data/maps/YifuCity_Dojo/scripts.pory"
	setobjectxyperm 3, 18, 33
# 34 "data/maps/YifuCity_Dojo/scripts.pory"
	removeobject 1
	goto YifuCity_Dojo_SetupNpcs_1

YifuCity_Dojo_SetupNpcs_5:
# 37 "data/maps/YifuCity_Dojo/scripts.pory"
	setobjectxyperm 4, 42, 33
# 38 "data/maps/YifuCity_Dojo/scripts.pory"
	setobjectxyperm 6, 45, 33
	goto YifuCity_Dojo_SetupNpcs_4

YifuCity_Dojo_SetupNpcs_7:
# 41 "data/maps/YifuCity_Dojo/scripts.pory"
	setobjectxyperm 4, 42, 33
# 42 "data/maps/YifuCity_Dojo/scripts.pory"
	setobjectxyperm 6, 45, 33
	return


YifuCity_Dojo_EventScript_Dance2_FromUp::
# 47 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance2_FromUp_Movement_0
# 49 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 50 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance2
	return


YifuCity_Dojo_EventScript_Dance2_FromDown::
# 54 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance2_FromDown_Movement_0
# 56 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 57 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance2
	return


YifuCity_Dojo_EventScript_Dance3_FromUp::
# 61 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance3_FromUp_Movement_0
# 63 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 64 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance3
	return


YifuCity_Dojo_EventScript_Dance3_FromDown::
# 68 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance3_FromDown_Movement_0
# 70 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 71 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance3
	return


YifuCity_Dojo_EventScript_Dance1_FromUp::
# 75 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 76 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance2_FromUp_Movement_0
# 77 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 78 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
	return


YifuCity_Dojo_EventScript_Dance1_FromDown::
# 82 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 83 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Dojo_EventScript_Dance2_FromDown_Movement_0
# 84 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 85 "data/maps/YifuCity_Dojo/scripts.pory"
	goto YifuCity_Dojo_EventScript_Dance1
	return


YifuCity_Dojo_EventScript_Dance1::
# 89 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 90 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_1
# 98 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 100 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 101 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_0
# 102 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 104 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1
# 106 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_1
# 107 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 108 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 111 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_2
# 115 "data/maps/YifuCity_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Dojo_EventScript_Dance1_Text_3, YifuCity_Dojo_EventScript_Dance1_Text_4, YifuCity_Dojo_EventScript_Dance1_Text_5
# 126 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 130 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1_Jump
# 132 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq YifuCity_Dojo_EventScript_Dance1_2
# 145 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 146 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_7
# 150 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 152 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle
# 154 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_two_trainers TRAINER_AKARI, YifuCity_Dojo_EventScript_Dance1_Text_8, TRAINER_YUKA, YifuCity_Dojo_EventScript_Dance1_Text_9
# 161 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 1
# 163 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 164 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_10
# 167 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 170 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_EventScript_Dance1_Movement_2
# 176 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 182 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 183 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 185 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 186 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 187 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
YifuCity_Dojo_EventScript_Dance1_1:
# 190 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 193 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor1Metatiles
# 195 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_DoorAppears_Screenshake
# 197 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 198 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 199 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 200 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 201 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 203 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_5
# 206 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 207 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 209 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Dance1_2:
# 134 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 135 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_6
# 139 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 141 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 1
# 143 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor
	goto YifuCity_Dojo_EventScript_Dance1_1


YifuCity_Dojo_EventScript_Dance2::
# 213 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 214 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance2_Text_0
# 217 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 219 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 220 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_0
# 221 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 223 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance2
# 225 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_1
# 226 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 227 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 229 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 230 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance2_Text_1
# 234 "data/maps/YifuCity_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Dojo_EventScript_Dance2_Text_2, YifuCity_Dojo_EventScript_Dance2_Text_3, YifuCity_Dojo_EventScript_Dance2_Text_4
# 245 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 249 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance2_Jump
# 251 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq YifuCity_Dojo_EventScript_Dance2_2
# 264 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 265 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_7
# 269 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 271 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance2_GeishasSurroundPlayerToBattle
# 273 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_two_trainers TRAINER_KARIN, YifuCity_Dojo_EventScript_Dance2_Text_5, TRAINER_MIIKA, YifuCity_Dojo_EventScript_Dance2_Text_6
# 280 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 2
# 282 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 283 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_10
# 286 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 289 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, YifuCity_Dojo_EventScript_Dance1_Movement_2
# 295 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, YifuCity_Dojo_EventScript_Dance1_Movement_3
# 301 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 302 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 304 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 305 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 306 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
YifuCity_Dojo_EventScript_Dance2_1:
# 309 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 312 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor2Metatiles
# 314 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_DoorAppears_Screenshake
# 316 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 317 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 318 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 319 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 320 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 322 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 324 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_5
# 325 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 326 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 328 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Dance2_2:
# 253 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 254 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_6
# 258 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 260 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 2
# 262 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance2_GeishasGoDirectlyToDoor
	goto YifuCity_Dojo_EventScript_Dance2_1


YifuCity_Dojo_EventScript_Dance3::
# 332 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 333 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance3_Text_0
# 336 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 338 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 339 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_0
# 340 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 342 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance3
# 344 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_1
# 345 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 346 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 348 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 349 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance3_Text_1
# 353 "data/maps/YifuCity_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_Dojo_EventScript_Dance3_Text_2, YifuCity_Dojo_EventScript_Dance3_Text_3, YifuCity_Dojo_EventScript_Dance3_Text_4
# 364 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 366 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance3_Jump
# 368 "data/maps/YifuCity_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq YifuCity_Dojo_EventScript_Dance3_2
# 381 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 382 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_7
# 386 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 388 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle
# 390 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_two_trainers TRAINER_NANAMI, YifuCity_Dojo_EventScript_Dance3_Text_6, TRAINER_KANAE, YifuCity_Dojo_EventScript_Dance3_Text_7
# 397 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 3
# 399 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 400 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance1_Text_10
# 403 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 406 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 7, YifuCity_Dojo_EventScript_Dance3_Movement_0
# 407 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 9, YifuCity_Dojo_EventScript_Dance3_Movement_1
# 408 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 409 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 8, YifuCity_Dojo_EventScript_Dance3_Movement_2
# 416 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 10, YifuCity_Dojo_EventScript_Dance3_Movement_3
# 424 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 425 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 427 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 10
# 428 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
YifuCity_Dojo_EventScript_Dance3_1:
# 431 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 434 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_SetDoor3Metatiles
# 436 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_DoorAppears_Screenshake
# 438 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 439 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 440 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 441 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 442 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 444 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 32
# 446 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance3_Movement_4
# 447 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 448 "data/maps/YifuCity_Dojo/scripts.pory"
	special RemoveCameraObject
# 450 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Dance3_2:
# 370 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dance1_Text_0
# 371 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dance3_Text_5
# 375 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 377 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_YIFU_DOJO_STATE, 3
# 379 "data/maps/YifuCity_Dojo/scripts.pory"
	call YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor
	goto YifuCity_Dojo_EventScript_Dance3_1


YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle::
# 454 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, Common_Movement_TeleportAway
# 455 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 456 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 457 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 458 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 460 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 462 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_1
# 463 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_2
# 464 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 465 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
	return


YifuCity_Dojo_Dance2_GeishasSurroundPlayerToBattle::
# 469 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 470 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 471 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 472 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 474 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 476 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_1
# 477 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_2
# 478 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 479 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
	return


YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle::
# 483 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 7, YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle_Movement_0
# 484 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 8, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 485 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 9, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 486 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 10, YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle_Movement_1
# 487 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 7
# 488 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 8
# 489 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 9
# 490 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 10
# 492 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 494 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 8, YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle_Movement_2
# 495 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 9, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_2
# 496 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 8
# 497 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 9
	return


YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor::
# 501 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, Common_Movement_TeleportAway
# 502 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 503 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 504 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 505 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 507 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 508 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 510 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor_Movement_0
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor_Movement_1
# 513 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 514 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 515 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 516 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
	return


YifuCity_Dojo_Dance2_GeishasGoDirectlyToDoor::
# 520 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 521 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0
# 522 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 523 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 525 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 526 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_EventScript_Dance1_Movement_4
# 528 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_LEDGE
# 529 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor_Movement_0
# 530 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor_Movement_1
# 531 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 532 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 533 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 534 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
	return


YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor::
# 538 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 8, YifuCity_Dojo_EventScript_Dance3_Movement_0
# 539 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 9, YifuCity_Dojo_EventScript_Dance3_Movement_1
# 540 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 7, YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor_Movement_0
# 541 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 10, YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor_Movement_1
# 542 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 7
# 543 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 8
# 544 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 9
# 545 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 10
# 547 "data/maps/YifuCity_Dojo/scripts.pory"
	special SpawnCameraObject
# 548 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor_Movement_2
# 549 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 550 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
	return


YifuCity_Dojo_DoorAppears_Screenshake::
# 554 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8004, 1
# 555 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8005, 1
# 556 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8006, 2
# 557 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8007, 4
# 558 "data/maps/YifuCity_Dojo/scripts.pory"
	special ShakeCamera
# 559 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_UNLOCK
	return


YifuCity_Dojo_SetDoor1Metatiles::
# 563 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 16, 31, METATILE_DojoYifu_DoorTopLeft, TRUE
# 564 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 17, 31, METATILE_DojoYifu_DoorTopRight, TRUE
# 565 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 16, 32, METATILE_DojoYifu_DoorBottomLeft, TRUE
# 566 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 17, 32, METATILE_DojoYifu_DoorBottomRight, TRUE
# 567 "data/maps/YifuCity_Dojo/scripts.pory"
	special DrawWholeMapView
	return


YifuCity_Dojo_SetDoor2Metatiles::
# 571 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 43, 31, METATILE_DojoYifu_DoorTopLeft, TRUE
# 572 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 44, 31, METATILE_DojoYifu_DoorTopRight, TRUE
# 573 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 43, 32, METATILE_DojoYifu_DoorBottomLeft, TRUE
# 574 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 44, 32, METATILE_DojoYifu_DoorBottomRight, TRUE
# 575 "data/maps/YifuCity_Dojo/scripts.pory"
	special DrawWholeMapView
	return


YifuCity_Dojo_SetDoor3Metatiles::
# 579 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 22, 13, METATILE_DojoYifu_PassageTopLeft, TRUE
# 580 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 25, 13, METATILE_DojoYifu_PassageTopRight, TRUE
# 581 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 22, 14, METATILE_DojoYifu_PassageBottomLeft, TRUE
# 582 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 25, 14, METATILE_DojoYifu_PassageBottomRight, TRUE
# 584 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 23, 10, METATILE_DojoYifu_WoodFloorDark, FALSE
# 585 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 10, METATILE_DojoYifu_WoodFloor, FALSE
# 586 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 23, 11, METATILE_DojoYifu_WoodFloorDark, FALSE
# 587 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 11, METATILE_DojoYifu_WoodFloor, FALSE
# 588 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 23, 12, METATILE_DojoYifu_WoodFloorDark, FALSE
# 589 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 12, METATILE_DojoYifu_WoodFloor, FALSE
# 590 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 23, 13, METATILE_DojoYifu_WoodFloorDark, FALSE
# 591 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 23, 14, METATILE_DojoYifu_WoodFloorDark, FALSE
# 592 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 13, METATILE_DojoYifu_WoodFloor, FALSE
# 593 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 14, METATILE_DojoYifu_WoodFloor, FALSE
# 594 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 15, METATILE_DojoYifu_WoodFloor, FALSE
# 596 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 23, 18, METATILE_DojoYifu_Stairs, FALSE
# 597 "data/maps/YifuCity_Dojo/scripts.pory"
	setmetatile 24, 18, METATILE_DojoYifu_Stairs, FALSE
# 599 "data/maps/YifuCity_Dojo/scripts.pory"
	special DrawWholeMapView
	return


YifuCity_Dojo_Dance1_Jump::
# 603 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_BANG
# 604 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, YifuCity_Dojo_Movement_JumpInPlaceDown
# 605 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Movement_JumpInPlaceDown
# 606 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Movement_JumpInPlaceDown
# 607 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 608 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 609 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
# 610 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 612 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 16
	return


YifuCity_Dojo_Dance2_Jump::
# 616 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_BANG
# 617 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 4, YifuCity_Dojo_Movement_JumpInPlaceDown
# 618 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 5, YifuCity_Dojo_Movement_JumpInPlaceDown
# 619 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 6, YifuCity_Dojo_Movement_JumpInPlaceDown
# 620 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 4
# 621 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 5
# 622 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 6
# 623 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 625 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 16
	return


YifuCity_Dojo_Dance3_Jump::
# 629 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_BANG
# 630 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 7, YifuCity_Dojo_Movement_JumpInPlaceDown
# 631 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 8, YifuCity_Dojo_Movement_JumpInPlaceDown
# 632 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 9, YifuCity_Dojo_Movement_JumpInPlaceDown
# 633 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 10, YifuCity_Dojo_Movement_JumpInPlaceDown
# 634 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 7
# 635 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 8
# 636 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 9
# 637 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 10
# 638 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 640 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 16
	return


# 643 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Movement_JumpInPlaceDown:
# 644 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_in_place_down
	step_end

YifuCity_Dojo_Dance1::
# 648 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 1, YifuCity_Dojo_Dance1_Movement_0
# 664 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 2, YifuCity_Dojo_Dance1_Movement_1
# 676 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement 3, YifuCity_Dojo_Dance1_Movement_2
# 690 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 1
# 691 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 2
# 692 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 3
	return


YifuCity_Dojo_Dance2::
	return


YifuCity_Dojo_Dance3::
	return


YifuCity_Dojo_EventScript_Advice::
# 737 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 738 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 739 "data/maps/YifuCity_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, YifuCity_Dojo_EventScript_Advice_2
# 745 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Advice_Text_1
YifuCity_Dojo_EventScript_Advice_1:
# 752 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return

YifuCity_Dojo_EventScript_Advice_2:
# 740 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Advice_Text_0
	goto YifuCity_Dojo_EventScript_Advice_1


YifuCity_Dojo_EventScript_DojoStatue::
# 756 "data/maps/YifuCity_Dojo/scripts.pory"
	lockall
# 757 "data/maps/YifuCity_Dojo/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, YifuCity_Dojo_EventScript_DojoStatue_2
# 767 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_DojoStatue_Text_1, MSGBOX_SIGN
YifuCity_Dojo_EventScript_DojoStatue_1:
# 775 "data/maps/YifuCity_Dojo/scripts.pory"
	releaseall
	return

YifuCity_Dojo_EventScript_DojoStatue_2:
# 758 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_DojoStatue_Text_0, MSGBOX_SIGN
	goto YifuCity_Dojo_EventScript_DojoStatue_1


YifuCity_Dojo_EventScript_Akari::
# 779 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_AKARI, YifuCity_Dojo_EventScript_Akari_Text_0, YifuCity_Dojo_EventScript_Dance1_Text_8
# 784 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Akari_Text_1
# 785 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Akari_Text_2, MSGBOX_AUTOCLOSE
	end


YifuCity_Dojo_EventScript_Yuka::
# 790 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_YUKA, YifuCity_Dojo_EventScript_Yuka_Text_0, YifuCity_Dojo_EventScript_Yuka_Text_1
# 795 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Yuka_Text_2
# 796 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Yuka_Text_3, MSGBOX_AUTOCLOSE
	end


YifuCity_Dojo_EventScript_Nanami::
# 801 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_NANAMI, YifuCity_Dojo_EventScript_Nanami_Text_0, YifuCity_Dojo_EventScript_Dance3_Text_6
# 806 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Nanami_Text_1
# 807 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Nanami_Text_2, MSGBOX_AUTOCLOSE
	end


YifuCity_Dojo_EventScript_Kanae::
# 812 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_KANAE, YifuCity_Dojo_EventScript_Dance3_Text_7, YifuCity_Dojo_EventScript_Kanae_Text_0
# 817 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Kanae_Text_1
# 818 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Kanae_Text_2, MSGBOX_AUTOCLOSE
	end


YifuCity_Dojo_EventScript_Karin::
# 823 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_KARIN, YifuCity_Dojo_EventScript_Karin_Text_0, YifuCity_Dojo_EventScript_Karin_Text_1
# 828 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Karin_Text_2
# 829 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Karin_Text_3, MSGBOX_AUTOCLOSE
	end


YifuCity_Dojo_EventScript_Miika::
# 834 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_MIIKA, YifuCity_Dojo_EventScript_Miika_Text_0, YifuCity_Dojo_EventScript_Miika_Text_1
# 839 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Miika_Text_2
# 840 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Miika_Text_3, MSGBOX_AUTOCLOSE
	end


YifuCity_Dojo_EventScript_Dancer::
# 845 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 846 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 847 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dancer_Text_0
# 848 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dancer_Text_1
# 851 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return


YifuCity_Dojo_EventScript_Dancer2::
# 855 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 856 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 857 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dancer_Text_0
# 858 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Dancer2_Text_0
# 861 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return


YifuCity_Dojo_EventScript_ImpossibleDancer::
# 865 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 866 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 867 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Dancer_Text_0
# 868 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_ImpossibleDancer_Text_0
# 871 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	return


YifuCity_Dojo_EventScript_Yutaka::
# 875 "data/maps/YifuCity_Dojo/scripts.pory"
	lock
# 876 "data/maps/YifuCity_Dojo/scripts.pory"
	faceplayer
# 877 "data/maps/YifuCity_Dojo/scripts.pory"
	speakername YifuCity_Dojo_EventScript_Yutaka_Text_0
# 878 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Yutaka_Text_1
# 882 "data/maps/YifuCity_Dojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 883 "data/maps/YifuCity_Dojo/scripts.pory"
	playse SE_PIN
# 884 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmovement 0
# 885 "data/maps/YifuCity_Dojo/scripts.pory"
	waitse
# 886 "data/maps/YifuCity_Dojo/scripts.pory"
	delay 48
# 888 "data/maps/YifuCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_YUTAKA_1, YifuCity_Dojo_EventScript_Yutaka_Text_2, YifuCity_Dojo_EventScript_Yutaka_Text_3, YifuCity_Dojo_EventScript_YutakaDefeated, NO_MUSIC
# 921 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_Yutaka_Text_4
# 925 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	end


YifuCity_Dojo_EventScript_YutakaDefeated::
# 930 "data/maps/YifuCity_Dojo/scripts.pory"
	message YifuCity_Dojo_EventScript_YutakaDefeated_Text_0
# 933 "data/maps/YifuCity_Dojo/scripts.pory"
	waitmessage
# 934 "data/maps/YifuCity_Dojo/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 935 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_YutakaDefeated_Text_1, MSGBOX_DEFAULT
# 947 "data/maps/YifuCity_Dojo/scripts.pory"
	giveitem ITEM_TM_DOUBLE_TEAM
# 949 "data/maps/YifuCity_Dojo/scripts.pory"
	msgbox YifuCity_Dojo_EventScript_YutakaDefeated_Text_2, MSGBOX_DEFAULT
# 957 "data/maps/YifuCity_Dojo/scripts.pory"
	closemessage
# 959 "data/maps/YifuCity_Dojo/scripts.pory"
	setflag FLAG_BADGE03_GET
# 960 "data/maps/YifuCity_Dojo/scripts.pory"
	setvar VAR_0x8008, 3
# 961 "data/maps/YifuCity_Dojo/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 962 "data/maps/YifuCity_Dojo/scripts.pory"
	addvar VAR_PLAYER_REPUTATION, 5
# 966 "data/maps/YifuCity_Dojo/scripts.pory"
	release
	end


# 48 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance2_FromUp_Movement_0:
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	face_up
# 48 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 55 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance2_FromDown_Movement_0:
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 55 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 62 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_FromUp_Movement_0:
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 62 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 69 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_FromDown_Movement_0:
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 69 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 101 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_0:
# 101 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 101 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 101 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 101 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 106 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_1:
# 106 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 106 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 106 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 106 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
	step_end

# 170 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_2:
# 171 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 172 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 173 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 174 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 176 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_3:
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 177 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 178 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 183 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_4:
# 183 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 183 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 183 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 183 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

# 205 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance1_Movement_5:
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 205 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
	step_end

# 406 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_Movement_0:
# 406 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 406 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 407 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_Movement_1:
# 407 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 407 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 409 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_Movement_2:
# 410 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_up
# 411 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 412 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 413 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 414 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 416 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_Movement_3:
# 417 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_up
# 418 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 419 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 420 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 446 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_EventScript_Dance3_Movement_4:
# 446 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 446 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
	step_end

# 455 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_0:
# 455 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
	step_end

# 462 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_1:
# 462 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 462 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 462 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

# 463 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_GeishasSurroundPlayerToBattle_Movement_2:
# 463 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 463 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 463 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
	step_end

# 483 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle_Movement_0:
# 483 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 483 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 483 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 486 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle_Movement_1:
# 486 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 486 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 486 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 494 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance3_GeishasSurroundPlayerToBattle_Movement_2:
# 494 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 494 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 494 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 511 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor_Movement_0:
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 511 "data/maps/YifuCity_Dojo/scripts.pory"
	face_right
	step_end

# 512 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_GeishasGoDirectlyToDoor_Movement_1:
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_down
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	delay_16
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 512 "data/maps/YifuCity_Dojo/scripts.pory"
	face_left
	step_end

# 540 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor_Movement_0:
# 540 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 540 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
	step_end

# 541 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor_Movement_1:
# 541 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 541 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
	step_end

# 548 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance3_GeishasGoDirectlyToDoor_Movement_2:
# 548 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 548 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
	step_end

# 648 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_0:
# 652 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 653 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 653 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 653 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 653 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 654 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 655 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 656 "data/maps/YifuCity_Dojo/scripts.pory"
	jump_2_left
# 657 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 658 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 659 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 659 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 660 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 661 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 664 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_1:
# 668 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 668 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 669 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 670 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 670 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 670 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 670 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 671 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 672 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 672 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 672 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 672 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 673 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

# 676 "data/maps/YifuCity_Dojo/scripts.pory"
YifuCity_Dojo_Dance1_Movement_2:
# 679 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 680 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 680 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 680 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 680 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_left
# 681 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 682 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 682 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 683 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_down
# 684 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 684 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_right
# 685 "data/maps/YifuCity_Dojo/scripts.pory"
	walk_up
# 686 "data/maps/YifuCity_Dojo/scripts.pory"
	face_down
	step_end

YifuCity_Dojo_EventScript_Dance1_Text_0:
# 89 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Kimono girls$"

YifuCity_Dojo_EventScript_Dance1_Text_1:
# 91 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Welcome to the Yifu City Dojo. Here\n"
	.string "you will have the pleasure to watch\l"
	.string "three different dances, at the end of\l"
	.string "which you will be asked a different\l"
	.string "question.\p"
	.string "The first dance will soon commence!\l"
	.string "The real Miss Yutaka, the Dojo Master,\l"
	.string "is among us.\p"
	.string "She is the one on the left. If you\n"
	.string "haven't lost track of her by the end\l"
	.string "of our dance, we shall let you\l"
	.string "through.\p"
	.string "If you guess wrong, you shall have to\n"
	.string "battle us.\p"
	.string "Are you ready?$"

YifuCity_Dojo_EventScript_Dance1_Text_2:
# 112 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Well? Can you remember which one is\n"
	.string "the real Yutaka?$"

YifuCity_Dojo_EventScript_Dance1_Text_3:
# 122 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The left one.$"

YifuCity_Dojo_EventScript_Dance1_Text_4:
# 123 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The middle one.$"

YifuCity_Dojo_EventScript_Dance1_Text_5:
# 124 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The right one.$"

YifuCity_Dojo_EventScript_Dance1_Text_6:
# 136 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are correct!\p"
	.string "Very well. You may proceed to the next\n"
	.string "room.$"

YifuCity_Dojo_EventScript_Dance1_Text_7:
# 147 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are incorrect!\p"
	.string "We shall face you in battle before you\n"
	.string "proceed.$"

YifuCity_Dojo_EventScript_Dance1_Text_8:
# 156 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Oh!$"

YifuCity_Dojo_EventScript_Dance1_Text_9:
# 158 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I see.$"

YifuCity_Dojo_EventScript_Dance1_Text_10:
# 165 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Very well! You may now proceed.$"

YifuCity_Dojo_EventScript_Dance2_Text_0:
# 215 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Are you ready for a second dance?\n"
	.string "Follow each of our moves…$"

YifuCity_Dojo_EventScript_Dance2_Text_1:
# 231 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Do you remember where the dancer on\n"
	.string "the right was placed originally?$"

YifuCity_Dojo_EventScript_Dance2_Text_2:
# 241 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "She was on the left.$"

YifuCity_Dojo_EventScript_Dance2_Text_3:
# 242 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "She was in the middle.$"

YifuCity_Dojo_EventScript_Dance2_Text_4:
# 243 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "She was on the right.$"

YifuCity_Dojo_EventScript_Dance2_Text_5:
# 275 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I liked the dancing part better…$"

YifuCity_Dojo_EventScript_Dance2_Text_6:
# 277 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Oh, well.$"

YifuCity_Dojo_EventScript_Dance3_Text_0:
# 334 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Let the third dance begin! Pay close\n"
	.string "attention…$"

YifuCity_Dojo_EventScript_Dance3_Text_1:
# 350 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Can you tell us how many jumps there\n"
	.string "were in this dance?$"

YifuCity_Dojo_EventScript_Dance3_Text_2:
# 360 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Eight.$"

YifuCity_Dojo_EventScript_Dance3_Text_3:
# 361 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Ten.$"

YifuCity_Dojo_EventScript_Dance3_Text_4:
# 362 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Twelve.$"

YifuCity_Dojo_EventScript_Dance3_Text_5:
# 372 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are correct!\p"
	.string "Very well. You may proceed to the last\n"
	.string "room.$"

YifuCity_Dojo_EventScript_Dance3_Text_6:
# 392 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Pant… Hey, let me catch my breath!$"

YifuCity_Dojo_EventScript_Dance3_Text_7:
# 394 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You didn't see me trip over my own\n"
	.string "foot, did you?$"

YifuCity_Dojo_EventScript_Advice_Text_0:
# 741 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Such grace! Such swiftness! I am\n"
	.string "wowed!\p"
	.string "{PLAYER}… That's a name to be\n"
	.string "remembered!$"

YifuCity_Dojo_EventScript_Advice_Text_1:
# 746 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Hello, young challenger, and welcome\n"
	.string "to the Dance Hall Dojo! Think you've\l"
	.string "got what it takes to see through the\l"
	.string "dancer's intoxicating moves?\p"
	.string "Watch out though, Master Yutaka can\n"
	.string "be as critical as she is beautiful.\l"
	.string "She probably won't appreciate you\l"
	.string "walking around her Dojo with your\l"
	.string "clothes looking like… this…\l"
	.string "Uh, nevermind my babbling! Go get 'em,\l"
	.string "champ!$"

YifuCity_Dojo_EventScript_DojoStatue_Text_0:
# 759 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Dojo of Yifu City\p"
	.string "Certified wielders:\n"
	.string "Hariko,\l"
	.string "Natsuki,\l"
	.string "{PLAYER}$"

YifuCity_Dojo_EventScript_DojoStatue_Text_1:
# 768 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Dojo of Kura Village\p"
	.string "Certified wielders:\n"
	.string "Hariko,\l"
	.string "Natsuki$"

YifuCity_Dojo_EventScript_Akari_Text_0:
# 781 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You still wish to fight? Very well!$"

YifuCity_Dojo_EventScript_Akari_Text_1:
# 784 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Akari$"

YifuCity_Dojo_EventScript_Akari_Text_2:
# 785 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You are very graceful. Are you sure\n"
	.string "you're not a dancer?$"

YifuCity_Dojo_EventScript_Yuka_Text_0:
# 792 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You have a good eye! Let's see if that\n"
	.string "applies to Pokémon, as well!$"

YifuCity_Dojo_EventScript_Yuka_Text_1:
# 793 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You have many talents, I see!$"

YifuCity_Dojo_EventScript_Yuka_Text_2:
# 795 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Yuka$"

YifuCity_Dojo_EventScript_Yuka_Text_3:
# 796 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "The next dance should be more of a\n"
	.string "challenge.$"

YifuCity_Dojo_EventScript_Nanami_Text_0:
# 803 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Pant… I'm impressed… Pant… This last\n"
	.string "dance was… intense!$"

YifuCity_Dojo_EventScript_Nanami_Text_1:
# 806 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Nanami$"

YifuCity_Dojo_EventScript_Nanami_Text_2:
# 807 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I really need to exercise more…$"

YifuCity_Dojo_EventScript_Kanae_Text_0:
# 815 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "My dance wasn't perfect! I deserve\n"
	.string "this!$"

YifuCity_Dojo_EventScript_Kanae_Text_1:
# 817 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Kanae$"

YifuCity_Dojo_EventScript_Kanae_Text_2:
# 818 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Next time my dance will be perfect,\n"
	.string "you'll see!$"

YifuCity_Dojo_EventScript_Karin_Text_0:
# 825 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Oh good! A battle! I was getting\n"
	.string "bored.$"

YifuCity_Dojo_EventScript_Karin_Text_1:
# 826 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I am regretting this…$"

YifuCity_Dojo_EventScript_Karin_Text_2:
# 828 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Karin$"

YifuCity_Dojo_EventScript_Karin_Text_3:
# 829 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Miss Yutaka holds us to the highest\n"
	.string "standards, both in battle and\l"
	.string "onstage!$"

YifuCity_Dojo_EventScript_Miika_Text_0:
# 836 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Please admire my brand-new designer\n"
	.string "kimono!$"

YifuCity_Dojo_EventScript_Miika_Text_1:
# 837 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You don't look impressed at all!$"

YifuCity_Dojo_EventScript_Miika_Text_2:
# 839 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Miika$"

YifuCity_Dojo_EventScript_Miika_Text_3:
# 840 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Working here has its perks. We get the\n"
	.string "finest silk clothes for free!$"

YifuCity_Dojo_EventScript_Dancer_Text_0:
# 847 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Kimono girl$"

YifuCity_Dojo_EventScript_Dancer_Text_1:
# 849 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I have no Pokémon! I'm only a dancer.$"

YifuCity_Dojo_EventScript_Dancer2_Text_0:
# 859 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Come back to watch us dance\n"
	.string "sometimes!$"

YifuCity_Dojo_EventScript_ImpossibleDancer_Text_0:
# 869 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Hey! How did you get up here?!$"

YifuCity_Dojo_EventScript_Yutaka_Text_0:
# 877 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Yutaka$"

YifuCity_Dojo_EventScript_Yutaka_Text_1:
# 879 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Well done! Welcome to Yifu City's Doj-$"

YifuCity_Dojo_EventScript_Yutaka_Text_2:
# 891 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "Excuse me, what is this?\p"
	.string "Is there a reason for the\n"
	.string "accoutrement you're donning?\l"
	.string "A carnival, perhaps?\l"
	.string "Or have you lost a bet?\p"
	.string "Or do you simply lack a basic\n"
	.string "sense of style to such an\l"
	.string "extreme degree?\p"
	.string "Here you are, parading around\n"
	.string "in your peasant's clothes…\p"
	.string "(…Yutaka, you must not let this\n"
	.string "offend you so!\l"
	.string "You are stronger than that!)\p"
	.string "Ahem… Let us move on…\l"
	.string "You shall be fighting my\n"
	.string "exquisite assortment of Pokémon,\l"
	.string "in the hopes of obtaining\l"
	.string "an official Token from me.\p"
	.string "Please try not to be too\n"
	.string "overwhelmed by my strength and,\l"
	.string "most of all, by my impeccable\l"
	.string "sense of fashion.\p"
	.string "Let this battle begin!$"

YifuCity_Dojo_EventScript_Yutaka_Text_3:
# 915 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "How dare you!$"

YifuCity_Dojo_EventScript_Yutaka_Text_4:
# 922 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "You shall achieve great things. I hope\n"
	.string "we meet again.$"

YifuCity_Dojo_EventScript_YutakaDefeated_Text_0:
# 931 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "{PLAYER} received the Silk Token\n"
	.string "from Yutaka.$"

YifuCity_Dojo_EventScript_YutakaDefeated_Text_1:
# 937 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "I am outrée! Your techniques are\n"
	.string "rough and vulgar, yet…\l"
	.string "The victory is yours… That is\l"
	.string "undeniable.\p"
	.string "I guess what you lack in aesthetic\n"
	.string "values, you compensate in strength.\p"
	.string "With the Token I just gave you, your\n"
	.string "Pokémon will obey you without\l"
	.string "question, even those you trade with\l"
	.string "others.\p"
	.string "Do accept this, as well.$"

YifuCity_Dojo_EventScript_YutakaDefeated_Text_2:
# 951 "data/maps/YifuCity_Dojo/scripts.pory"
	.string "This scroll contains something\n"
	.string "something something.\p"
	.string "And, uh… We should go\n"
	.string "clothes-shopping together sometime.\l"
	.string "I cannot bear to see your image\l"
	.string "suffer so.$"
