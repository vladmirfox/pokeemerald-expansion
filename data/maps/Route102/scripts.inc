Route102_MapScripts::
	.byte 0

Route102_EventScript_GameSign::
	lockall
	msgbox Route102_EventScript_GameSign_Text_0
	msgbox Route102_EventScript_GameSign_Text_1
	releaseall
	return


Route102_EventScript_GameSign2::
	lockall
	msgbox Route102_EventScript_GameSign2_Text_0
	msgbox Route102_EventScript_GameSign2_Text_1
	releaseall
	return


Route102_EventScript_Trainer_003::
	trainerbattle_single TRAINER_REF003_RT102, Intro_003, Outro_003
	msgbox Route102_EventScript_Trainer_003_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route102_EventScript_Trainer_004::
	trainerbattle_single TRAINER_REF004_RT102, Intro_004, Outro_004
	msgbox Route102_EventScript_Trainer_004_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route102_EventScript_Trainer_005::
	trainerbattle_single TRAINER_REF005_RT102_BOSS, Intro_005, Outro_005
	msgbox Route102_EventScript_Trainer_005_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route102_EventScript_Trainer_006::
	trainerbattle_single TRAINER_REF006_RT102_GUARDIAN, Intro_006, Outro_006
	msgbox Route102_EventScript_Trainer_006_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route102_ItemBall_Berries::
	finditem ITEM_PECHA_BERRY, 5
	finditem ITEM_CHERI_BERRY, 5
	finditem ITEM_CHESTO_BERRY, 5
	return


Route102_PathBlocker::
	checktrainerflag TRAINER_REF005_RT102_BOSS
	goto_if 1, Route102_PathBlocker_1
	msgbox Route102_PathBlocker_Text_0
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MyMovement
	waitmovement 0
	release
	return

Route102_PathBlocker_1:
	release
	end


MyMovement:
	walk_down
	step_end

Route102_Healer::
	lock
	faceplayer
	msgbox Route102_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route102_Healer_1
	msgbox Route102_Healer_Text_2, MSGBOX_NPC
	return

Route102_Healer_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Route102_Healer_Text_1
	waitmessage
	release
	end


Route102_EventScript_GameSign_Text_0:
	.string "The level cap in this area is 10, you can\n"
	.string "exceed it with Rare Candy if desired.$"

Route102_EventScript_GameSign_Text_1:
	.string "Each area now has a GUARDIAN trainer\n"
	.string "who blocks access to a side area with\l"
	.string "extra encounters, you must defeat the\l"
	.string "ROUTE BOSS before challenging a\l"
	.string "GUARDIAN. .$"

Route102_EventScript_GameSign2_Text_0:
	.string "You must defeat a ROUTE BOSS first to\n"
	.string "challenge the GUARDIAN.$"

Route102_EventScript_GameSign2_Text_1:
	.string "GUARDIAN's are more difficult than\n"
	.string "regular trainers, but unlock new\l"
	.string "encounter areas.$"

Route102_EventScript_Trainer_003_Text_0:
	.string "I hope you're using your berries wisely.$"

Route102_EventScript_Trainer_004_Text_0:
	.string "You really think you have what it\n"
	.string "takes?$"

Route102_EventScript_Trainer_005_Text_0:
	.string "I need more training.$"

Route102_EventScript_Trainer_006_Text_0:
	.string "You may pass.$"

Route102_PathBlocker_Text_0:
	.string "I must defeat the ROUTE BOSS first.$"

Route102_Healer_Text_0:
	.string "Would you like me to heal your party?$"

Route102_Healer_Text_1:
	.string "Good luck.$"

Route102_Healer_Text_2:
	.string "Alright then.$"

Intro_003::
	.string "So you think you can handle me?$"

Outro_003::
	.string "Tch! You're stronger than you look$"

Intro_004::
	.string "Time for us to fight!$"

Outro_004::
	.string "Not bad.$"

Intro_005::
	.string "Time for a re-match {PLAYER}, you\n"
	.string "wont make it past me.$"

Outro_005::
	.string "Beaten again, I need to train more. So\n"
	.string "will you challenge the GUARDIAN now?$"

Intro_006::
	.string "So you've decided to challenge me?$"

Outro_006::
	.string "Well done, may your encounter be a good\n"
	.string "one.$"
