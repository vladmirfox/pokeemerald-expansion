.set LOCALID_SUICUNE, 1
.set LOCALID_ENTEI, 2
.set LOCALID_RAIKOU, 3

BurnedTowerF1_MapScripts::
	.byte 0

BurnedTowerF1_PlayerStepInCenter::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, BurnedTowerF1_Movement_PlayerCenter
	waitmovement 0
	goto BurnedTowerF1_BeastApproaching
	return

BurnedTowerF1_PlayerStepInLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, BurnedTowerF1_Movement_PlayerLeft
	waitmovement 0
	goto BurnedTowerF1_BeastApproaching
	return

BurnedTowerF1_PlayerStepInRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, BurnedTowerF1_Movement_PlayerRight
	waitmovement 0
	goto BurnedTowerF1_BeastApproaching
	return

BurnedTowerF1_BeastApproaching::
	applymovement LOCALID_SUICUNE, BurnedTowerF1_Movement_SuicuneApproaching
	applymovement LOCALID_ENTEI, BurnedTowerF1_Movement_EnteiApproaching
	applymovement LOCALID_RAIKOU, BurnedTowerF1_Movement_RaikouApproaching
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	waitmovement 0
	playmoncry SPECIES_RAIKOU, CRY_MODE_NORMAL
	waitmoncry
	msgbox BurnedTowerF1_Text_RaikouCry, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_ENTEI, CRY_MODE_NORMAL
	waitmoncry
	msgbox BurnedTowerF1_Text_EnteiCry, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	waitmoncry
	msgbox BurnedTowerF1_Text_SuicuneCry, MSGBOX_DEFAULT
	closemessage
	goto BurnedTowerF1_BeastLeaving
	return

BurnedTowerF1_BeastLeaving::
	applymovement LOCALID_SUICUNE, BurnedTowerF1_Movement_SuicuneFleeing
	applymovement LOCALID_ENTEI, BurnedTowerF1_Movement_EnteiFleeing
	applymovement LOCALID_RAIKOU, BurnedTowerF1_Movement_RaikouFleeing
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	delay 8
	playse SE_BIKE_HOP
	waitse
	waitmovement 0
	setvar VAR_BEASTAWAKENED, 0
	setflag FLAG_HIDE_LEGENDARY_BEASTS
	clearflag FLAG_HIDE_ENTEI
	clearflag FLAG_HIDE_RAIKOU
	clearflag FLAG_HIDE_SUICUNE
	return

BurnedTowerF1_Text_RaikouCry:
	.string "RAIKOU: WARGH!$"

BurnedTowerF1_Text_EnteiCry:
	.string "ENTEI: WOHFF!$"

BurnedTowerF1_Text_SuicuneCry:
	.string "SUICUNE: AUUUGH!$"

BurnedTowerF1_Movement_PlayerCenter:
	walk_up
	step_end

BurnedTowerF1_Movement_PlayerLeft:
	walk_right
	walk_up
	step_end

BurnedTowerF1_Movement_PlayerRight:
	walk_left
	walk_up
	step_end

BurnedTowerF1_Movement_SuicuneApproaching:
	jump_down
	step_end

BurnedTowerF1_Movement_EnteiApproaching:
	jump_down
	jump_down
	jump_down
	jump_down
	jump_down
	jump_down
	jump_right
	step_end

BurnedTowerF1_Movement_RaikouApproaching:
	jump_down
	jump_down
	jump_down
	jump_down
	jump_down
	jump_down
	jump_left
	step_end

BurnedTowerF1_Movement_SuicuneFleeing:
	jump_up
	jump_up
	jump_up
	jump_up
	jump_up
	set_invisible
	step_end

BurnedTowerF1_Movement_EnteiFleeing:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	set_invisible
	step_end

BurnedTowerF1_Movement_RaikouFleeing:
	jump_right
	jump_right
	jump_right
	jump_right
	jump_right
	jump_right
	jump_right
	jump_right
	set_invisible
	step_end