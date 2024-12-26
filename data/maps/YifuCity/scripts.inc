YifuCity_MapScripts::
	.byte 0


YifuCity_EventScript_StoleMyMon::
# 10 "data/maps/YifuCity/scripts.pory"
	lock
# 11 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 12 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_StoleMyMon_Text_0
# 13 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_StoleMyMon_Text_1
# 17 "data/maps/YifuCity/scripts.pory"
	closemessage
# 18 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_IDontFeelSafe::
# 22 "data/maps/YifuCity/scripts.pory"
	lock
# 23 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 24 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_IDontFeelSafe_Text_0
# 25 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_IDontFeelSafe_Text_1
# 29 "data/maps/YifuCity/scripts.pory"
	closemessage
# 30 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_Samurai::
# 34 "data/maps/YifuCity/scripts.pory"
	lock
# 35 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 36 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Samurai_Text_0
# 37 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Samurai_Text_1
# 40 "data/maps/YifuCity/scripts.pory"
	closemessage
# 41 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_Samurai2::
# 45 "data/maps/YifuCity/scripts.pory"
	lock
# 46 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 47 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Samurai_Text_0
# 48 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Samurai2_Text_0
# 51 "data/maps/YifuCity/scripts.pory"
	closemessage
# 52 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_ShinySeller::
# 56 "data/maps/YifuCity/scripts.pory"
	lock
# 57 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 58 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 59 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_ShinySeller_Text_1
# 63 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3, TRUE
# 64 "data/maps/YifuCity/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
# 65 "data/maps/YifuCity/scripts.pory"
	waitmoncry
# 67 "data/maps/YifuCity/scripts.pory"
	waitbuttonpress
# 68 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 70 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 71 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_ShinySeller_Text_2
# 76 "data/maps/YifuCity/scripts.pory"
	goto YifuCity_ShinySellerChoice
# 78 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_ShinySellerChoice::
# 82 "data/maps/YifuCity/scripts.pory"
	showmoneybox 18, 0
# 84 "data/maps/YifuCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, YifuCity_ShinySellerChoice_Text_0, YifuCity_ShinySellerChoice_Text_1, YifuCity_ShinySellerChoice_Text_2
# 96 "data/maps/YifuCity/scripts.pory"
	closemessage
# 98 "data/maps/YifuCity/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/YifuCity/scripts.pory"
	case 0, YifuCity_ShinySellerChoice_3
# 201 "data/maps/YifuCity/scripts.pory"
	case 1, YifuCity_ShinySellerChoice_4
# 208 "data/maps/YifuCity/scripts.pory"
	case 2, YifuCity_ShinySellerChoice_5
YifuCity_ShinySellerChoice_1:
# 218 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 219 "data/maps/YifuCity/scripts.pory"
	release
	return

YifuCity_ShinySellerChoice_3:
	checkmoney 10000
# 0 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne YifuCity_ShinySellerChoice_6
# 195 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 196 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_8
# 199 "data/maps/YifuCity/scripts.pory"
	closemessage
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_4:
# 202 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 203 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 204 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_9
# 207 "data/maps/YifuCity/scripts.pory"
	closemessage
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_5:
# 209 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 210 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 211 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_10
# 215 "data/maps/YifuCity/scripts.pory"
	goto YifuCity_ShinySellerChoice
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_6:
# 101 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 102 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_3
# 106 "data/maps/YifuCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CATERPIE
# 107 "data/maps/YifuCity/scripts.pory"
	givemon SPECIES_CATERPIE, 5, isShiny = FALSE
# 109 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq YifuCity_ShinySellerChoice_10
YifuCity_ShinySellerChoice_9:
# 113 "data/maps/YifuCity/scripts.pory"
	removemoney 10000
# 114 "data/maps/YifuCity/scripts.pory"
	updatemoneybox
# 116 "data/maps/YifuCity/scripts.pory"
	closemessage
# 118 "data/maps/YifuCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/YifuCity/scripts.pory"
	message YifuCity_ShinySellerChoice_Text_4
# 120 "data/maps/YifuCity/scripts.pory"
	waitmessage
# 121 "data/maps/YifuCity/scripts.pory"
	waitfanfare
# 123 "data/maps/YifuCity/scripts.pory"
	hidemoneybox
# 125 "data/maps/YifuCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CATERPIE
# 126 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq YifuCity_ShinySellerChoice_13
# 132 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq YifuCity_ShinySellerChoice_14
YifuCity_ShinySellerChoice_12:
# 140 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 141 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_5
# 144 "data/maps/YifuCity/scripts.pory"
	closemessage
# 146 "data/maps/YifuCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq YifuCity_ShinySellerChoice_18
# 149 "data/maps/YifuCity/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_ShinySellerChoice_Movement_1
YifuCity_ShinySellerChoice_17:
# 151 "data/maps/YifuCity/scripts.pory"
	delay 24
# 152 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 153 "data/maps/YifuCity/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 154 "data/maps/YifuCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 156 "data/maps/YifuCity/scripts.pory"
	delay 48
# 157 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 158 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_6
# 163 "data/maps/YifuCity/scripts.pory"
	closemessage
# 165 "data/maps/YifuCity/scripts.pory"
	playse SE_PIN
# 166 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 167 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 168 "data/maps/YifuCity/scripts.pory"
	waitse
# 169 "data/maps/YifuCity/scripts.pory"
	delay 48
# 171 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3, TRUE
# 172 "data/maps/YifuCity/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
# 173 "data/maps/YifuCity/scripts.pory"
	waitmoncry
# 175 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_ShinySellerChoice_Text_7
# 179 "data/maps/YifuCity/scripts.pory"
	playse SE_M_MIST
# 180 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 181 "data/maps/YifuCity/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3
# 182 "data/maps/YifuCity/scripts.pory"
	waitse
# 184 "data/maps/YifuCity/scripts.pory"
	waitbuttonpress
# 185 "data/maps/YifuCity/scripts.pory"
	closemessage
# 186 "data/maps/YifuCity/scripts.pory"
	hidemonpic
# 188 "data/maps/YifuCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, YifuCity_ShinySellerChoice_27
YifuCity_ShinySellerChoice_26:
# 192 "data/maps/YifuCity/scripts.pory"
	setflag FLAG_BOUGHT_FAKE_SHINY
	goto YifuCity_ShinySellerChoice_1

YifuCity_ShinySellerChoice_10:
# 110 "data/maps/YifuCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto YifuCity_ShinySellerChoice_9

YifuCity_ShinySellerChoice_13:
# 127 "data/maps/YifuCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 128 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne YifuCity_ShinySellerChoice_21
	goto YifuCity_ShinySellerChoice_12

YifuCity_ShinySellerChoice_14:
# 133 "data/maps/YifuCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 134 "data/maps/YifuCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne YifuCity_ShinySellerChoice_24
YifuCity_ShinySellerChoice_23:
# 137 "data/maps/YifuCity/scripts.pory"
	setflag FLAG_TEMP_1
	goto YifuCity_ShinySellerChoice_12

YifuCity_ShinySellerChoice_18:
# 147 "data/maps/YifuCity/scripts.pory"
	applymovement VAR_LAST_TALKED, YifuCity_ShinySellerChoice_Movement_0
	goto YifuCity_ShinySellerChoice_17

YifuCity_ShinySellerChoice_21:
# 129 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 130 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto YifuCity_ShinySellerChoice_12

YifuCity_ShinySellerChoice_24:
# 135 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto YifuCity_ShinySellerChoice_23

YifuCity_ShinySellerChoice_27:
# 189 "data/maps/YifuCity/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto YifuCity_ShinySellerChoice_26


YifuCity_Trigger_CrobatGruntsScram::
# 223 "data/maps/YifuCity/scripts.pory"
	lockall
# 225 "data/maps/YifuCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 226 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 229 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsScram_Text_0
# 232 "data/maps/YifuCity/scripts.pory"
	closemessage
# 234 "data/maps/YifuCity/scripts.pory"
	playse SE_PIN
# 235 "data/maps/YifuCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 236 "data/maps/YifuCity/scripts.pory"
	delay 16
# 237 "data/maps/YifuCity/scripts.pory"
	playse SE_PIN
# 238 "data/maps/YifuCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 239 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/YifuCity/scripts.pory"
	waitse
# 241 "data/maps/YifuCity/scripts.pory"
	delay 48
# 242 "data/maps/YifuCity/scripts.pory"
	turnobject 9, DIR_WEST
# 243 "data/maps/YifuCity/scripts.pory"
	turnobject 10, DIR_WEST
# 244 "data/maps/YifuCity/scripts.pory"
	delay 48
# 245 "data/maps/YifuCity/scripts.pory"
	applymovement 9, YifuCity_Trigger_CrobatGruntsScram_Movement_0
# 246 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 249 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsScram_Text_1
# 253 "data/maps/YifuCity/scripts.pory"
	closemessage
# 255 "data/maps/YifuCity/scripts.pory"
	addobject 11
# 256 "data/maps/YifuCity/scripts.pory"
	applymovement 11, YifuCity_Trigger_CrobatGruntsScram_Movement_1
# 269 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Trigger_CrobatGruntsScram_Movement_2
# 272 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 275 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsScram_Text_2
# 278 "data/maps/YifuCity/scripts.pory"
	closemessage
# 280 "data/maps/YifuCity/scripts.pory"
	delay 24
# 281 "data/maps/YifuCity/scripts.pory"
	addobject 11
# 282 "data/maps/YifuCity/scripts.pory"
	applymovement 11, YifuCity_Trigger_CrobatGruntsScram_Movement_3
# 283 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/YifuCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 286 "data/maps/YifuCity/scripts.pory"
	turnobject 10, DIR_NORTH
# 288 "data/maps/YifuCity/scripts.pory"
	releaseall
	return


YifuCity_Trigger_CrobatGruntsEavesdropPassword::
# 292 "data/maps/YifuCity/scripts.pory"
	lockall
# 294 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_0
# 295 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsScram_Text_0
# 298 "data/maps/YifuCity/scripts.pory"
	closemessage
# 300 "data/maps/YifuCity/scripts.pory"
	special SpawnCameraObject
# 301 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_0
# 302 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/YifuCity/scripts.pory"
	delay 48
# 305 "data/maps/YifuCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 306 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 309 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_1
# 313 "data/maps/YifuCity/scripts.pory"
	closemessage
# 315 "data/maps/YifuCity/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 316 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 319 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_2
# 322 "data/maps/YifuCity/scripts.pory"
	closemessage
# 324 "data/maps/YifuCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 325 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 328 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_3
# 331 "data/maps/YifuCity/scripts.pory"
	closemessage
# 333 "data/maps/YifuCity/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 334 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 337 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_4
# 341 "data/maps/YifuCity/scripts.pory"
	applymovement 10, YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_1
# 342 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 343 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_5
# 346 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/YifuCity/scripts.pory"
	closemessage
# 349 "data/maps/YifuCity/scripts.pory"
	applymovement 9, YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_2
# 350 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_ShinySeller_Text_0
# 351 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_6
# 356 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/YifuCity/scripts.pory"
	closemessage
# 359 "data/maps/YifuCity/scripts.pory"
	applymovement 9, YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_3
# 360 "data/maps/YifuCity/scripts.pory"
	applymovement 10, YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_4
# 361 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/YifuCity/scripts.pory"
	removeobject 9
# 364 "data/maps/YifuCity/scripts.pory"
	removeobject 10
# 365 "data/maps/YifuCity/scripts.pory"
	setflag FLAG_GOT_CROBAT_PASSWORD_FIRST_HALF
# 367 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_5
# 368 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/YifuCity/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/YifuCity/scripts.pory"
	releaseall
	return


YifuCity_Trigger_CrobatGruntStuckInHole::
# 375 "data/maps/YifuCity/scripts.pory"
	lockall
# 377 "data/maps/YifuCity/scripts.pory"
	goto_if_set FLAG_GOT_CROBAT_PASSWORD_SECOND_HALF, YifuCity_Trigger_CrobatGruntStuckInHole_2
# 401 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_0
# 402 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntStuckInHole_Text_3
# 405 "data/maps/YifuCity/scripts.pory"
	closemessage
# 407 "data/maps/YifuCity/scripts.pory"
	delay 24
# 409 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Trigger_CrobatGruntStuckInHole_Movement_0
# 410 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 412 "data/maps/YifuCity/scripts.pory"
	delay 24
# 414 "data/maps/YifuCity/scripts.pory"
	playse SE_PIN
# 415 "data/maps/YifuCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, YifuCity_Trigger_CrobatGruntStuckInHole_Movement_1
# 416 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_0
# 417 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntStuckInHole_Text_4
# 424 "data/maps/YifuCity/scripts.pory"
	waitmovement 0
# 425 "data/maps/YifuCity/scripts.pory"
	waitse
# 426 "data/maps/YifuCity/scripts.pory"
	closemessage
# 428 "data/maps/YifuCity/scripts.pory"
	setflag FLAG_GOT_CROBAT_PASSWORD_SECOND_HALF
YifuCity_Trigger_CrobatGruntStuckInHole_1:
# 431 "data/maps/YifuCity/scripts.pory"
	releaseall
	return

YifuCity_Trigger_CrobatGruntStuckInHole_2:
# 378 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_0
# 380 "data/maps/YifuCity/scripts.pory"
	random 3
# 381 "data/maps/YifuCity/scripts.pory"
	switch VAR_RESULT
# 382 "data/maps/YifuCity/scripts.pory"
	case 0, YifuCity_Trigger_CrobatGruntStuckInHole_7
# 386 "data/maps/YifuCity/scripts.pory"
	case 1, YifuCity_Trigger_CrobatGruntStuckInHole_8
# 390 "data/maps/YifuCity/scripts.pory"
	case 2, YifuCity_Trigger_CrobatGruntStuckInHole_9
YifuCity_Trigger_CrobatGruntStuckInHole_5:
# 398 "data/maps/YifuCity/scripts.pory"
	closemessage
	goto YifuCity_Trigger_CrobatGruntStuckInHole_1

YifuCity_Trigger_CrobatGruntStuckInHole_7:
# 383 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntStuckInHole_Text_0
	goto YifuCity_Trigger_CrobatGruntStuckInHole_5

YifuCity_Trigger_CrobatGruntStuckInHole_8:
# 387 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntStuckInHole_Text_1
	goto YifuCity_Trigger_CrobatGruntStuckInHole_5

YifuCity_Trigger_CrobatGruntStuckInHole_9:
# 391 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_Trigger_CrobatGruntStuckInHole_Text_2
	goto YifuCity_Trigger_CrobatGruntStuckInHole_5


YifuCity_EventScript_Surskit::
# 435 "data/maps/YifuCity/scripts.pory"
	lock
# 436 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 437 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_Surskit_Text_0
# 438 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_Surskit_Text_1
# 441 "data/maps/YifuCity/scripts.pory"
	playmoncry SPECIES_SURSKIT, CRY_MODE_NORMAL
# 442 "data/maps/YifuCity/scripts.pory"
	waitmoncry
# 443 "data/maps/YifuCity/scripts.pory"
	release
	end


# 147 "data/maps/YifuCity/scripts.pory"
YifuCity_ShinySellerChoice_Movement_0:
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_down
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 147 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
	step_end

# 149 "data/maps/YifuCity/scripts.pory"
YifuCity_ShinySellerChoice_Movement_1:
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
# 149 "data/maps/YifuCity/scripts.pory"
	walk_faster_up
	step_end

# 245 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsScram_Movement_0:
# 245 "data/maps/YifuCity/scripts.pory"
	jump_in_place_left
	step_end

# 256 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsScram_Movement_1:
# 259 "data/maps/YifuCity/scripts.pory"
	exit_pokeball
# 260 "data/maps/YifuCity/scripts.pory"
	face_left
# 261 "data/maps/YifuCity/scripts.pory"
	lock_anim
# 262 "data/maps/YifuCity/scripts.pory"
	lock_facing_direction
# 263 "data/maps/YifuCity/scripts.pory"
	walk_faster_left
# 264 "data/maps/YifuCity/scripts.pory"
	walk_faster_right
# 265 "data/maps/YifuCity/scripts.pory"
	unlock_anim
# 266 "data/maps/YifuCity/scripts.pory"
	unlock_facing_direction
	step_end

# 271 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsScram_Movement_2:
# 271 "data/maps/YifuCity/scripts.pory"
	lock_facing_direction
# 271 "data/maps/YifuCity/scripts.pory"
	walk_left
# 271 "data/maps/YifuCity/scripts.pory"
	walk_left
# 271 "data/maps/YifuCity/scripts.pory"
	unlock_facing_direction
	step_end

# 282 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsScram_Movement_3:
# 282 "data/maps/YifuCity/scripts.pory"
	enter_pokeball
	step_end

# 301 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_0:
# 301 "data/maps/YifuCity/scripts.pory"
	walk_up
# 301 "data/maps/YifuCity/scripts.pory"
	walk_up
# 301 "data/maps/YifuCity/scripts.pory"
	walk_up
	step_end

# 341 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_1:
# 341 "data/maps/YifuCity/scripts.pory"
	jump_in_place_up
	step_end

# 349 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_2:
# 349 "data/maps/YifuCity/scripts.pory"
	jump_in_place_down
	step_end

# 359 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_3:
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
# 359 "data/maps/YifuCity/scripts.pory"
	walk_left
	step_end

# 360 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_4:
# 360 "data/maps/YifuCity/scripts.pory"
	walk_up
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
# 360 "data/maps/YifuCity/scripts.pory"
	walk_left
	step_end

# 367 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntsEavesdropPassword_Movement_5:
# 367 "data/maps/YifuCity/scripts.pory"
	walk_down
# 367 "data/maps/YifuCity/scripts.pory"
	walk_down
# 367 "data/maps/YifuCity/scripts.pory"
	walk_down
	step_end

# 409 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntStuckInHole_Movement_0:
# 409 "data/maps/YifuCity/scripts.pory"
	face_left
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	face_up
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	face_down
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	face_right
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	delay_16
# 409 "data/maps/YifuCity/scripts.pory"
	face_up
	step_end

# 415 "data/maps/YifuCity/scripts.pory"
YifuCity_Trigger_CrobatGruntStuckInHole_Movement_1:
# 415 "data/maps/YifuCity/scripts.pory"
	emote_exclamation_mark
# 415 "data/maps/YifuCity/scripts.pory"
	face_down
	step_end

YifuCity_EventScript_StoleMyMon_Text_0:
# 12 "data/maps/YifuCity/scripts.pory"
	.string "Man$"

YifuCity_EventScript_StoleMyMon_Text_1:
# 14 "data/maps/YifuCity/scripts.pory"
	.string "When I got my Shiftry back from the\n"
	.string "nurse, it had somehow changed into a\l"
	.string "Pidgey…\p"
	.string "Each day, Pokémon never cease to\n"
	.string "amaze me!$"

YifuCity_EventScript_IDontFeelSafe_Text_0:
# 24 "data/maps/YifuCity/scripts.pory"
	.string "Woman$"

YifuCity_EventScript_IDontFeelSafe_Text_1:
# 26 "data/maps/YifuCity/scripts.pory"
	.string "I don't feel safe with those Crobat\n"
	.string "dudes creeping around the city…\p"
	.string "I can't imagine how much worse it'd be\n"
	.string "if it were not for the patrolling\l"
	.string "Samurai!$"

YifuCity_EventScript_Samurai_Text_0:
# 36 "data/maps/YifuCity/scripts.pory"
	.string "Samurai$"

YifuCity_EventScript_Samurai_Text_1:
# 38 "data/maps/YifuCity/scripts.pory"
	.string "The Crobat Shadows' reign of terror\n"
	.string "will cease!$"

YifuCity_EventScript_Samurai2_Text_0:
# 49 "data/maps/YifuCity/scripts.pory"
	.string "Please be vigilant! Should you\n"
	.string "witness any suspicious situation,\l"
	.string "report it immediately!$"

YifuCity_EventScript_ShinySeller_Text_0:
# 58 "data/maps/YifuCity/scripts.pory"
	.string "Shady man$"

YifuCity_EventScript_ShinySeller_Text_1:
# 60 "data/maps/YifuCity/scripts.pory"
	.string "Hey, uh… Wanna buy this Pokémon 'ere?\n"
	.string "'Parently it's super rare or somethin',\l"
	.string "but I don't really need it, so…$"

YifuCity_EventScript_ShinySeller_Text_2:
# 72 "data/maps/YifuCity/scripts.pory"
	.string "So whadyasay?\n"
	.string "It's yours for only ¥10000.$"

YifuCity_ShinySellerChoice_Text_0:
# 91 "data/maps/YifuCity/scripts.pory"
	.string "I'll buy it!$"

YifuCity_ShinySellerChoice_Text_1:
# 92 "data/maps/YifuCity/scripts.pory"
	.string "No, thanks.$"

YifuCity_ShinySellerChoice_Text_2:
# 93 "data/maps/YifuCity/scripts.pory"
	.string "Are you a criminal?$"

YifuCity_ShinySellerChoice_Text_3:
# 103 "data/maps/YifuCity/scripts.pory"
	.string "Alright yeah, gimme the cash.$"

YifuCity_ShinySellerChoice_Text_4:
# 119 "data/maps/YifuCity/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "Caterpie!$"

YifuCity_ShinySellerChoice_Text_5:
# 142 "data/maps/YifuCity/scripts.pory"
	.string "Heheheehe… I'm rich! Finally rich!$"

YifuCity_ShinySellerChoice_Text_6:
# 161 "data/maps/YifuCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

YifuCity_ShinySellerChoice_Text_7:
# 176 "data/maps/YifuCity/scripts.pory"
	.string "Some gold paint came off the\n"
	.string "Caterpie…$"

YifuCity_ShinySellerChoice_Text_8:
# 197 "data/maps/YifuCity/scripts.pory"
	.string "You, uh… You don't got enough cash,\n"
	.string "kid.$"

YifuCity_ShinySellerChoice_Text_9:
# 205 "data/maps/YifuCity/scripts.pory"
	.string "Then why are ya bothering me? Scram,\n"
	.string "kid!$"

YifuCity_ShinySellerChoice_Text_10:
# 212 "data/maps/YifuCity/scripts.pory"
	.string "What? No! Why would ya even say that?\n"
	.string "Do I not look respectable to ya?\p"
	.string "So uh… You gonna buy it or not?$"

YifuCity_Trigger_CrobatGruntsScram_Text_0:
# 230 "data/maps/YifuCity/scripts.pory"
	.string "I tell ya man, damn password keeps\n"
	.string "changin'…$"

YifuCity_Trigger_CrobatGruntsScram_Text_1:
# 250 "data/maps/YifuCity/scripts.pory"
	.string "Are ya kiddin' me? Lookaddis\n"
	.string "eavesdroppin' moron!\p"
	.string "Want a taste of this?$"

YifuCity_Trigger_CrobatGruntsScram_Text_2:
# 276 "data/maps/YifuCity/scripts.pory"
	.string "Yeah, that's right, hightail it outta\n"
	.string "here!$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_0:
# 294 "data/maps/YifuCity/scripts.pory"
	.string "???$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_1:
# 310 "data/maps/YifuCity/scripts.pory"
	.string "Last time, I got it wrong and he didn'\n"
	.string "let me through!\p"
	.string "Like, brother, why I gotta tell ya\n"
	.string "some password for ya to let me in, we\l"
	.string "wen' to school together!$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_2:
# 320 "data/maps/YifuCity/scripts.pory"
	.string "Wait, ya didn't go to school though,\n"
	.string "didja?$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_3:
# 329 "data/maps/YifuCity/scripts.pory"
	.string "Who cares! It's a figger of speech!\n"
	.string "What's the newest password anyway?$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_4:
# 338 "data/maps/YifuCity/scripts.pory"
	.string "It's uh…\n"
	.string "Somethin' with Crobat…\l"
	.string "“{COLOR RED}Crobat is{COLOR DARK_GRAY}”… Uh…$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_5:
# 344 "data/maps/YifuCity/scripts.pory"
	.string "Aw man! I forgot it too!$"

YifuCity_Trigger_CrobatGruntsEavesdropPassword_Text_6:
# 352 "data/maps/YifuCity/scripts.pory"
	.string "Ya idjet! How're we gunna get back in\n"
	.string "now??\p"
	.string "Now we gotta find another Zubat an'\n"
	.string "hope he's got the full sent'nce!\p"
	.string "C'mon, lessgo!$"

YifuCity_Trigger_CrobatGruntStuckInHole_Text_0:
# 384 "data/maps/YifuCity/scripts.pory"
	.string "Yawn… I'm bored…$"

YifuCity_Trigger_CrobatGruntStuckInHole_Text_1:
# 388 "data/maps/YifuCity/scripts.pory"
	.string "Sure hope there ain't no Sharpedo in\n"
	.string "here…$"

YifuCity_Trigger_CrobatGruntStuckInHole_Text_2:
# 392 "data/maps/YifuCity/scripts.pory"
	.string "Echo! … … …\n"
	.string "… … …{FONT_SMALL}echo{FONT_NORMAL}…\p"
	.string "Hehe…\p"
	.string "…Sigh…$"

YifuCity_Trigger_CrobatGruntStuckInHole_Text_3:
# 403 "data/maps/YifuCity/scripts.pory"
	.string "Heyyy!! Help!$"

YifuCity_Trigger_CrobatGruntStuckInHole_Text_4:
# 418 "data/maps/YifuCity/scripts.pory"
	.string "I fell down the canal! I'm stuck down\n"
	.string "'ere!\p"
	.string "Damn me, couldn't remember the first\n"
	.string "half of the damn password…\l"
	.string "“Something something… {COLOR RED}is awesome{COLOR DARK_GRAY}”!\l"
	.string "But what?!\l"
	.string "And why'd I think it was a good idea to\l"
	.string "try gettin' in through the canal?\l"
	.string "This is a dead end!$"

YifuCity_EventScript_Surskit_Text_0:
# 437 "data/maps/YifuCity/scripts.pory"
	.string "Surskit$"

YifuCity_EventScript_Surskit_Text_1:
# 439 "data/maps/YifuCity/scripts.pory"
	.string "Sksksksk…$"
