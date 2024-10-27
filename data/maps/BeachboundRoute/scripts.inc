BeachboundRoute_MapScripts::
# 13 "data/maps/BeachboundRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BeachboundRoute_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BeachboundRoute_MapScripts_MAP_SCRIPT_ON_LOAD:
# 14 "data/maps/BeachboundRoute/scripts.pory"
	call BeachboundRoute_EventScript_TimeBasedEvents
	return


BeachboundRoute_EventScript_TimeBasedEvents::
# 19 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_6
# 20 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_7
# 22 "data/maps/BeachboundRoute/scripts.pory"
	gettimeofday
# 23 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_2
BeachboundRoute_EventScript_TimeBasedEvents_1:
# 27 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_5
	return

BeachboundRoute_EventScript_TimeBasedEvents_2:
# 24 "data/maps/BeachboundRoute/scripts.pory"
	clearflag FLAG_TEMP_6
	goto BeachboundRoute_EventScript_TimeBasedEvents_1

BeachboundRoute_EventScript_TimeBasedEvents_4:
# 28 "data/maps/BeachboundRoute/scripts.pory"
	clearflag FLAG_TEMP_7
	return

BeachboundRoute_EventScript_TimeBasedEvents_5:
# 27 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_ne BeachboundRoute_EventScript_TimeBasedEvents_4
	return


BeachboundRoute_EventScript_RunningBoy::
# 33 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_RunningBoy_Text_0
# 34 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_RunningBoy_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_RunningGirl::
# 41 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_RunningGirl_Text_0
# 42 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_RunningGirl_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_AnnoyedGirl::
# 48 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_AnnoyedGirl_Text_0
# 49 "data/maps/BeachboundRoute/scripts.pory"
	goto_if_set FLAG_TEMP_7, BeachboundRoute_EventScript_AnnoyedGirl_1
# 54 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedGirl_Text_2, MSGBOX_NPC
	return

BeachboundRoute_EventScript_AnnoyedGirl_1:
# 50 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedGirl_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_AnnoyedBoy::
# 61 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_AnnoyedBoy_Text_0
# 62 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_AnnoyedBoy_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_Hoppip::
# 69 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 70 "data/maps/BeachboundRoute/scripts.pory"
	faceplayer
# 71 "data/maps/BeachboundRoute/scripts.pory"
	ismonseen SPECIES_HOPPIP
# 72 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BeachboundRoute_EventScript_Hoppip_2
# 75 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Hoppip_Text_1
BeachboundRoute_EventScript_Hoppip_1:
# 77 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Hoppip_Text_2
# 80 "data/maps/BeachboundRoute/scripts.pory"
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
# 81 "data/maps/BeachboundRoute/scripts.pory"
	waitmoncry
# 82 "data/maps/BeachboundRoute/scripts.pory"
	release
	end

BeachboundRoute_EventScript_Hoppip_2:
# 73 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Hoppip_Text_0
	goto BeachboundRoute_EventScript_Hoppip_1


BeachboundRoute_EventScript_Wooloo::
# 88 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 89 "data/maps/BeachboundRoute/scripts.pory"
	faceplayer
# 90 "data/maps/BeachboundRoute/scripts.pory"
	ismonseen SPECIES_WOOLOO
# 91 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BeachboundRoute_EventScript_Wooloo_2
# 94 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Wooloo_Text_1
BeachboundRoute_EventScript_Wooloo_1:
# 96 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Wooloo_Text_2
# 99 "data/maps/BeachboundRoute/scripts.pory"
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
# 100 "data/maps/BeachboundRoute/scripts.pory"
	waitmoncry
# 101 "data/maps/BeachboundRoute/scripts.pory"
	release
	end

BeachboundRoute_EventScript_Wooloo_2:
# 92 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Wooloo_Text_0
	goto BeachboundRoute_EventScript_Wooloo_1


BeachboundRoute_EventScript_Shepherd::
# 106 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Shepherd_Text_0
# 107 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Shepherd_Text_1, MSGBOX_NPC
	return


BeachboundRoute_EventScript_Karu::
# 113 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_single TRAINER_KARU, BeachboundRoute_EventScript_Karu_Text_0, BeachboundRoute_EventScript_Karu_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 119 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Karu_Text_2
# 120 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Karu_Text_3, MSGBOX_AUTOCLOSE
	end


BeachboundRoute_EventScript_Karu_PostBattle::
# 125 "data/maps/BeachboundRoute/scripts.pory"
	setflag FLAG_TEMP_5
# 126 "data/maps/BeachboundRoute/scripts.pory"
	removeobject 10
	return


BeachboundRoute_EventScript_Kin::
# 131 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_single TRAINER_KIN_1, BeachboundRoute_EventScript_Kin_Text_0, BeachboundRoute_EventScript_Kin_Text_1
# 136 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Kin_Text_2
# 137 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Kin_Text_3, MSGBOX_AUTOCLOSE
	end


BeachboundRoute_EventScript_SomeoneCallingForHelp::
# 142 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 144 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_SomeoneCallingForHelp_Text_0
# 145 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_SomeoneCallingForHelp_Text_1
# 149 "data/maps/BeachboundRoute/scripts.pory"
	playse SE_PIN
# 150 "data/maps/BeachboundRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 151 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 152 "data/maps/BeachboundRoute/scripts.pory"
	waitse
# 154 "data/maps/BeachboundRoute/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 156 "data/maps/BeachboundRoute/scripts.pory"
	release
	return


BeachboundRoute_EventScript_WhereAreYouGoing::
# 160 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 162 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_SomeoneCallingForHelp_Text_0
# 163 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_WhereAreYouGoing_Text_0
# 169 "data/maps/BeachboundRoute/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 170 "data/maps/BeachboundRoute/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/BeachboundRoute/scripts.pory"
	case DIR_EAST, BeachboundRoute_EventScript_WhereAreYouGoing_3
# 173 "data/maps/BeachboundRoute/scripts.pory"
	case DIR_WEST, BeachboundRoute_EventScript_WhereAreYouGoing_4
# 175 "data/maps/BeachboundRoute/scripts.pory"
	case DIR_SOUTH, BeachboundRoute_EventScript_WhereAreYouGoing_5
BeachboundRoute_EventScript_WhereAreYouGoing_1:
# 178 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 180 "data/maps/BeachboundRoute/scripts.pory"
	release
	return

BeachboundRoute_EventScript_WhereAreYouGoing_3:
# 172 "data/maps/BeachboundRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Movement_PlayerWalksLeft
	goto BeachboundRoute_EventScript_WhereAreYouGoing_1

BeachboundRoute_EventScript_WhereAreYouGoing_4:
# 174 "data/maps/BeachboundRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Movement_PlayerWalksRight
	goto BeachboundRoute_EventScript_WhereAreYouGoing_1

BeachboundRoute_EventScript_WhereAreYouGoing_5:
# 176 "data/maps/BeachboundRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Movement_PlayerWalksUp
	goto BeachboundRoute_EventScript_WhereAreYouGoing_1


BeachboundRoute_EventScript_Mugging_Left::
# 184 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 185 "data/maps/BeachboundRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Movement_PlayerWalksRight
# 186 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 187 "data/maps/BeachboundRoute/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 188 "data/maps/BeachboundRoute/scripts.pory"
	call BeachboundRoute_EventScript_Mugging
# 189 "data/maps/BeachboundRoute/scripts.pory"
	release
	return


BeachboundRoute_EventScript_Mugging_Right::
# 193 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 194 "data/maps/BeachboundRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeachboundRoute_Movement_PlayerWalksLeft
# 195 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 196 "data/maps/BeachboundRoute/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 197 "data/maps/BeachboundRoute/scripts.pory"
	call BeachboundRoute_EventScript_Mugging
# 198 "data/maps/BeachboundRoute/scripts.pory"
	release
	return


BeachboundRoute_EventScript_Mugging_Center::
# 202 "data/maps/BeachboundRoute/scripts.pory"
	lock
# 203 "data/maps/BeachboundRoute/scripts.pory"
	call BeachboundRoute_EventScript_Mugging
# 204 "data/maps/BeachboundRoute/scripts.pory"
	release
	return


BeachboundRoute_EventScript_Mugging::
# 209 "data/maps/BeachboundRoute/scripts.pory"
	compare VAR_CROBAT_SHADOWS_FIRST_ENCOUNTERS_STATE, 3
	goto_if_eq BeachboundRoute_EventScript_Mugging_2
# 323 "data/maps/BeachboundRoute/scripts.pory"
	turnobject 24, DIR_SOUTH
# 324 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_16
# 325 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_17
BeachboundRoute_EventScript_Mugging_1:
# 332 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 24, BeachboundRoute_Movement_BossToTheSide
# 333 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 23, BeachboundRoute_Movement_GruntWalksToPlayer
# 334 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 26, BeachboundRoute_Movement_GruntWalksToPlayer
# 335 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 24
# 336 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 23
# 337 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 26
# 340 "data/maps/BeachboundRoute/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_BEACHBOUND_ROUTE_1, BeachboundRoute_EventScript_Mugging_Text_18, TRAINER_GRUNT_BEACHBOUND_ROUTE_2, BeachboundRoute_EventScript_Mugging_Text_19
# 347 "data/maps/BeachboundRoute/scripts.pory"
	setvar VAR_CROBAT_SHADOWS_FIRST_ENCOUNTERS_STATE, 4
# 349 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceFasterRight
# 350 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 23
# 351 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_20
# 352 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_21
# 355 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 357 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceFasterRight
# 358 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 26
# 359 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_20
# 360 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_22
# 363 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 365 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_14
# 366 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_23
# 371 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 373 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFasterDown
# 374 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 375 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_10
# 376 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_24
# 379 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 381 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_14
# 382 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_25
# 385 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 387 "data/maps/BeachboundRoute/scripts.pory"
	delay 40
# 389 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_14
# 390 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_26
# 395 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 397 "data/maps/BeachboundRoute/scripts.pory"
	turnobject 24, DIR_NORTH
# 399 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_14
# 400 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_27
# 403 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 405 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 23, BeachboundRoute_Movement_ZubatsAlign
# 406 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 26, BeachboundRoute_Movement_ZubatsAlign
# 407 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 25, BeachboundRoute_Movement_ZubatsAlign
# 408 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 23
# 409 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 26
# 410 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 25
# 412 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 24, BeachboundRoute_Movement_BossExits
# 413 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 23, BeachboundRoute_Movement_Grunt1Exits
# 414 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 26, BeachboundRoute_Movement_Grunt2Exits
# 415 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 25, BeachboundRoute_Movement_Grunt3Exits
# 416 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 24
# 417 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 23
# 418 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 26
# 419 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 25
# 421 "data/maps/BeachboundRoute/scripts.pory"
	delay 60
# 423 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 22, BeachboundRoute_Movement_WomanWalksDown
# 424 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 22
# 426 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_28
# 427 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_29
# 432 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 435 "data/maps/BeachboundRoute/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 437 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_28
# 438 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_30
# 443 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 445 "data/maps/BeachboundRoute/scripts.pory"
	addvar VAR_PLAYER_REPUTATION, 1
# 447 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 22, BeachboundRoute_Movement_WomanExits
# 448 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 22
# 449 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
	return

BeachboundRoute_EventScript_Mugging_2:
# 210 "data/maps/BeachboundRoute/scripts.pory"
	setvar VAR_CROBAT_SHADOWS_FIRST_ENCOUNTERS_STATE, 3
# 211 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceFasterUp
# 212 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 214 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_0
# 215 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_1
# 218 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 220 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceFasterUp
# 221 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 223 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_0
# 224 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_2
# 227 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 229 "data/maps/BeachboundRoute/scripts.pory"
	delay 40
# 231 "data/maps/BeachboundRoute/scripts.pory"
	turnobject 24, DIR_SOUTH
# 232 "data/maps/BeachboundRoute/scripts.pory"
	playse SE_PIN
# 233 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 234 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 235 "data/maps/BeachboundRoute/scripts.pory"
	waitse
# 237 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_0
# 238 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_3
# 243 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 244 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 245 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 25, Common_Movement_FaceDown
# 246 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 23
# 247 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 26
# 248 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 25
# 250 "data/maps/BeachboundRoute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 10, 0, DYN_MULTICHOICE_CB_NONE, BeachboundRoute_EventScript_Mugging_Text_4, BeachboundRoute_EventScript_Mugging_Text_5, BeachboundRoute_EventScript_Mugging_Text_6
# 261 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 263 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_0
# 264 "data/maps/BeachboundRoute/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/BeachboundRoute/scripts.pory"
	case 0, BeachboundRoute_EventScript_Mugging_7
# 275 "data/maps/BeachboundRoute/scripts.pory"
	case 1, BeachboundRoute_EventScript_Mugging_8
# 285 "data/maps/BeachboundRoute/scripts.pory"
	case 2, BeachboundRoute_EventScript_Mugging_9
BeachboundRoute_EventScript_Mugging_5:
# 296 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 298 "data/maps/BeachboundRoute/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFasterDown
# 299 "data/maps/BeachboundRoute/scripts.pory"
	waitmovement 0
# 300 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_10
# 301 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_11
# 304 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 306 "data/maps/BeachboundRoute/scripts.pory"
	turnobject 24, DIR_NORTH
# 307 "data/maps/BeachboundRoute/scripts.pory"
	delay 40
# 309 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_12
# 310 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_13
# 313 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
# 315 "data/maps/BeachboundRoute/scripts.pory"
	turnobject 24, DIR_SOUTH
# 317 "data/maps/BeachboundRoute/scripts.pory"
	speakername BeachboundRoute_EventScript_Mugging_Text_14
# 318 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_15
# 321 "data/maps/BeachboundRoute/scripts.pory"
	closemessage
	goto BeachboundRoute_EventScript_Mugging_1

BeachboundRoute_EventScript_Mugging_7:
# 266 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_7
	goto BeachboundRoute_EventScript_Mugging_5

BeachboundRoute_EventScript_Mugging_8:
# 276 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_8
	goto BeachboundRoute_EventScript_Mugging_5

BeachboundRoute_EventScript_Mugging_9:
# 286 "data/maps/BeachboundRoute/scripts.pory"
	msgbox BeachboundRoute_EventScript_Mugging_Text_9
	goto BeachboundRoute_EventScript_Mugging_5


# 452 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_WomanWalksDown:
# 453 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 453 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
	step_end

# 456 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_WomanExits:
# 457 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 458 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 458 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 458 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 458 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 458 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 459 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
	step_end

# 462 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_BossExits:
# 463 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 463 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 463 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 463 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 463 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 464 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
	step_end

# 467 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_Grunt1Exits:
# 468 "data/maps/BeachboundRoute/scripts.pory"
	walk_right
# 468 "data/maps/BeachboundRoute/scripts.pory"
	walk_right
# 469 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 469 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 469 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 469 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 469 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 469 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 470 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
	step_end

# 473 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_Grunt2Exits:
# 474 "data/maps/BeachboundRoute/scripts.pory"
	walk_right
# 475 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 475 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 475 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 475 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 475 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 475 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 476 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
	step_end

# 479 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_Grunt3Exits:
# 480 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 480 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 480 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 480 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 480 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 480 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
# 481 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
	step_end

# 484 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_ZubatsAlign:
# 485 "data/maps/BeachboundRoute/scripts.pory"
	jump_in_place_down
	step_end

# 488 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_GruntWalksToPlayer:
# 489 "data/maps/BeachboundRoute/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_BossToTheSide:
# 493 "data/maps/BeachboundRoute/scripts.pory"
	walk_right
# 494 "data/maps/BeachboundRoute/scripts.pory"
	face_left
	step_end

# 497 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_PlayerWalksLeft:
# 498 "data/maps/BeachboundRoute/scripts.pory"
	walk_left
	step_end

# 501 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_PlayerWalksUp:
# 502 "data/maps/BeachboundRoute/scripts.pory"
	walk_up
	step_end

# 505 "data/maps/BeachboundRoute/scripts.pory"
BeachboundRoute_Movement_PlayerWalksRight:
# 506 "data/maps/BeachboundRoute/scripts.pory"
	walk_right
	step_end

BeachboundRoute_EventScript_RunningBoy_Text_0:
# 33 "data/maps/BeachboundRoute/scripts.pory"
	.string "Little boy$"

BeachboundRoute_EventScript_RunningBoy_Text_1:
# 35 "data/maps/BeachboundRoute/scripts.pory"
	.string "Running running running!!\p"
	.string "Yaaaaaaaay!!!$"

BeachboundRoute_EventScript_RunningGirl_Text_0:
# 41 "data/maps/BeachboundRoute/scripts.pory"
	.string "Little girl$"

BeachboundRoute_EventScript_RunningGirl_Text_1:
# 43 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wait for me!! It's not fair!!!$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_0:
# 48 "data/maps/BeachboundRoute/scripts.pory"
	.string "Annoyed girl$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_1:
# 51 "data/maps/BeachboundRoute/scripts.pory"
	.string "Hum… Could you maybe, like, leave?$"

BeachboundRoute_EventScript_AnnoyedGirl_Text_2:
# 55 "data/maps/BeachboundRoute/scripts.pory"
	.string "I wish those kids would leave…$"

BeachboundRoute_EventScript_AnnoyedBoy_Text_0:
# 61 "data/maps/BeachboundRoute/scripts.pory"
	.string "Annoyed boy$"

BeachboundRoute_EventScript_AnnoyedBoy_Text_1:
# 63 "data/maps/BeachboundRoute/scripts.pory"
	.string "I brought my date to the Lover's\n"
	.string "Meadow, but I kind of thought we'd be\l"
	.string "alone…$"

BeachboundRoute_EventScript_Hoppip_Text_0:
# 73 "data/maps/BeachboundRoute/scripts.pory"
	.string "Hoppip$"

BeachboundRoute_EventScript_Hoppip_Text_1:
# 75 "data/maps/BeachboundRoute/scripts.pory"
	.string "Leafy cat$"

BeachboundRoute_EventScript_Hoppip_Text_2:
# 78 "data/maps/BeachboundRoute/scripts.pory"
	.string "Pip!$"

BeachboundRoute_EventScript_Wooloo_Text_0:
# 92 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wooloo$"

BeachboundRoute_EventScript_Wooloo_Text_1:
# 94 "data/maps/BeachboundRoute/scripts.pory"
	.string "Wool ball$"

BeachboundRoute_EventScript_Wooloo_Text_2:
# 97 "data/maps/BeachboundRoute/scripts.pory"
	.string "Bah…$"

BeachboundRoute_EventScript_Shepherd_Text_0:
# 106 "data/maps/BeachboundRoute/scripts.pory"
	.string "Shepherd$"

BeachboundRoute_EventScript_Shepherd_Text_1:
# 108 "data/maps/BeachboundRoute/scripts.pory"
	.string "I bring my Wooloo here to graze\n"
	.string "everyday.$"

BeachboundRoute_EventScript_Karu_Text_0:
# 115 "data/maps/BeachboundRoute/scripts.pory"
	.string "Please allow me to introduce you to\n"
	.string "your own defeat!$"

BeachboundRoute_EventScript_Karu_Text_1:
# 116 "data/maps/BeachboundRoute/scripts.pory"
	.string "N-nice to meet you…$"

BeachboundRoute_EventScript_Karu_Text_2:
# 119 "data/maps/BeachboundRoute/scripts.pory"
	.string "Karu$"

BeachboundRoute_EventScript_Karu_Text_3:
# 120 "data/maps/BeachboundRoute/scripts.pory"
	.string "You wiped me away there. How long\n"
	.string "have you been a wielder?$"

BeachboundRoute_EventScript_Kin_Text_0:
# 133 "data/maps/BeachboundRoute/scripts.pory"
	.string "I run several hours everyday! You\n"
	.string "literally cannot defeat me!$"

BeachboundRoute_EventScript_Kin_Text_1:
# 134 "data/maps/BeachboundRoute/scripts.pory"
	.string "Ow! I pulled a muscle!$"

BeachboundRoute_EventScript_Kin_Text_2:
# 136 "data/maps/BeachboundRoute/scripts.pory"
	.string "Kin$"

BeachboundRoute_EventScript_Kin_Text_3:
# 137 "data/maps/BeachboundRoute/scripts.pory"
	.string "You really don't look strong at all,\n"
	.string "and yet…$"

BeachboundRoute_EventScript_SomeoneCallingForHelp_Text_0:
# 144 "data/maps/BeachboundRoute/scripts.pory"
	.string "???$"

BeachboundRoute_EventScript_SomeoneCallingForHelp_Text_1:
# 146 "data/maps/BeachboundRoute/scripts.pory"
	.string "Help! Someone help me!$"

BeachboundRoute_EventScript_WhereAreYouGoing_Text_0:
# 164 "data/maps/BeachboundRoute/scripts.pory"
	.string "Hey, you! In the red and blue clothes!\p"
	.string "Are you… Are you leaving?!\p"
	.string "Can't you be a decent human being and\n"
	.string "help me out?$"

BeachboundRoute_EventScript_Mugging_Text_0:
# 214 "data/maps/BeachboundRoute/scripts.pory"
	.string "Shady Man$"

BeachboundRoute_EventScript_Mugging_Text_1:
# 216 "data/maps/BeachboundRoute/scripts.pory"
	.string "Stop yappin', lady! Just give us yer\n"
	.string "Pokémon already!$"

BeachboundRoute_EventScript_Mugging_Text_2:
# 225 "data/maps/BeachboundRoute/scripts.pory"
	.string "C'mon, don't make this difficult! Just\n"
	.string "hand it over!$"

BeachboundRoute_EventScript_Mugging_Text_3:
# 239 "data/maps/BeachboundRoute/scripts.pory"
	.string "Just what d'you think yer doin'?\p"
	.string "Can't ya see we're in the middle of\n"
	.string "something 'ere?$"

BeachboundRoute_EventScript_Mugging_Text_4:
# 257 "data/maps/BeachboundRoute/scripts.pory"
	.string "Leave her alone!$"

BeachboundRoute_EventScript_Mugging_Text_5:
# 258 "data/maps/BeachboundRoute/scripts.pory"
	.string "Actually, I was just leaving!$"

BeachboundRoute_EventScript_Mugging_Text_6:
# 259 "data/maps/BeachboundRoute/scripts.pory"
	.string "Uh…$"

BeachboundRoute_EventScript_Mugging_Text_7:
# 267 "data/maps/BeachboundRoute/scripts.pory"
	.string "Ooh, feelin' heroic today, are we?\p"
	.string "D'ya know what we do to nosy brats\n"
	.string "who're not clever enough to mind their\l"
	.string "own business?\p"
	.string "Ya have no self-preservation\n"
	.string "instinct whatsoever, do ya?\p"
	.string "D'ya even know who we are?\p"
	.string "We're the world-famous Crobat\n"
	.string "Shadows!\p"
	.string "Thievin', muggin', wreakin' havoc… Ya\n"
	.string "name it!\p"
	.string "We're basically the allegory of crime!$"

BeachboundRoute_EventScript_Mugging_Text_8:
# 277 "data/maps/BeachboundRoute/scripts.pory"
	.string "'S a little too late fer that, don't ya\n"
	.string "think? D'ya know what we do to nosy\l"
	.string "brats who're not clever enough to\l"
	.string "mind their own business?\p"
	.string "Ya have no self-preservation\n"
	.string "instinct whatsoever, do ya?\p"
	.string "D'ya even know who we are?\p"
	.string "We're the world-famous Crobat\n"
	.string "Shadows!\p"
	.string "Thievin', muggin', wreakin' havoc… Ya\n"
	.string "name it!\p"
	.string "We're basically the allegory of crime!$"

BeachboundRoute_EventScript_Mugging_Text_9:
# 287 "data/maps/BeachboundRoute/scripts.pory"
	.string "Got nothin' to say, huh?\p"
	.string "D'ya know what we do to nosy brats\n"
	.string "who're not clever enough to mind their\l"
	.string "own business?\p"
	.string "Ya have no self-preservation\n"
	.string "instinct whatsoever, do ya?\p"
	.string "D'ya even know who we are?\p"
	.string "We're the world-famous Crobat\n"
	.string "Shadows!\p"
	.string "Thievin', muggin', wreakin' havoc… Ya\n"
	.string "name it!\p"
	.string "We're basically the allegory of crime!$"

BeachboundRoute_EventScript_Mugging_Text_10:
# 300 "data/maps/BeachboundRoute/scripts.pory"
	.string "Crobat Shadow$"

BeachboundRoute_EventScript_Mugging_Text_11:
# 302 "data/maps/BeachboundRoute/scripts.pory"
	.string "Uh… What's an allergory, boss?$"

BeachboundRoute_EventScript_Mugging_Text_12:
# 309 "data/maps/BeachboundRoute/scripts.pory"
	.string "Crobat boss$"

BeachboundRoute_EventScript_Mugging_Text_13:
# 311 "data/maps/BeachboundRoute/scripts.pory"
	.string "…Nevermind that!$"

BeachboundRoute_EventScript_Mugging_Text_14:
# 317 "data/maps/BeachboundRoute/scripts.pory"
	.string "Crobat Boss$"

BeachboundRoute_EventScript_Mugging_Text_15:
# 319 "data/maps/BeachboundRoute/scripts.pory"
	.string "'nuff yappin' already! Take care of\n"
	.string "this clown, boys!$"

BeachboundRoute_EventScript_Mugging_Text_16:
# 324 "data/maps/BeachboundRoute/scripts.pory"
	.string "Crobat Shadow Boss$"

BeachboundRoute_EventScript_Mugging_Text_17:
# 326 "data/maps/BeachboundRoute/scripts.pory"
	.string "Can't believe it! Look who's back!\p"
	.string "Back fer another whoopin', are we?\p"
	.string "Take care of this clown, boys!$"

BeachboundRoute_EventScript_Mugging_Text_18:
# 342 "data/maps/BeachboundRoute/scripts.pory"
	.string "Aw, man!$"

BeachboundRoute_EventScript_Mugging_Text_19:
# 344 "data/maps/BeachboundRoute/scripts.pory"
	.string "Mama!$"

BeachboundRoute_EventScript_Mugging_Text_20:
# 351 "data/maps/BeachboundRoute/scripts.pory"
	.string "Zubat Grunt$"

BeachboundRoute_EventScript_Mugging_Text_21:
# 353 "data/maps/BeachboundRoute/scripts.pory"
	.string "Sorry, boss!$"

BeachboundRoute_EventScript_Mugging_Text_22:
# 361 "data/maps/BeachboundRoute/scripts.pory"
	.string "We got stomped proper, boss!$"

BeachboundRoute_EventScript_Mugging_Text_23:
# 367 "data/maps/BeachboundRoute/scripts.pory"
	.string "Ya gotta be kiddin' me…\p"
	.string "Can't even do no regular muggin' in\n"
	.string "peace anymore!\p"
	.string "Well, I ain't gonna stoop to fighting\n"
	.string "you myself!$"

BeachboundRoute_EventScript_Mugging_Text_24:
# 377 "data/maps/BeachboundRoute/scripts.pory"
	.string "Boss, what's a stoop?$"

BeachboundRoute_EventScript_Mugging_Text_25:
# 383 "data/maps/BeachboundRoute/scripts.pory"
	.string "For the love of god, Kevin…$"

BeachboundRoute_EventScript_Mugging_Text_26:
# 391 "data/maps/BeachboundRoute/scripts.pory"
	.string "Movin' on! You've not seen the last of\n"
	.string "us, ya annoying brat!\p"
	.string "Ya better steer clear of the Crobat\n"
	.string "Shadows from now on!\p"
	.string "Let's move it, boys!$"

BeachboundRoute_EventScript_Mugging_Text_27:
# 401 "data/maps/BeachboundRoute/scripts.pory"
	.string "ZUBATS, ALIGN!!$"

BeachboundRoute_EventScript_Mugging_Text_28:
# 426 "data/maps/BeachboundRoute/scripts.pory"
	.string "Woman$"

BeachboundRoute_EventScript_Mugging_Text_29:
# 428 "data/maps/BeachboundRoute/scripts.pory"
	.string "Thank you so much for helping me!\p"
	.string "Those ruffians were about to steal my\n"
	.string "Pokémon!\p"
	.string "I don't have much to offer you as a\n"
	.string "thanks, but please take this!$"

BeachboundRoute_EventScript_Mugging_Text_30:
# 439 "data/maps/BeachboundRoute/scripts.pory"
	.string "What's your name?\n"
	.string "{PLAYER}?\p"
	.string "I'll be sure to tell everyone what a\n"
	.string "hero you are!$"
