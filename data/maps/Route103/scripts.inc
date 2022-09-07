Route103_MapScripts::
	.byte 0

Route103_EventScript_Trainer_008::
	trainerbattle_single TRAINER_REF008_RT103, Intro_008, Outro_008
	msgbox Route103_EventScript_Trainer_008_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Trainer_009::
	trainerbattle_single TRAINER_REF009_RT103, Intro_009, Outro_009
	msgbox Route103_EventScript_Trainer_009_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Trainer_010::
	trainerbattle_single TRAINER_REF010_RT103_BOSS, Intro_010, Outro_010
	msgbox Route103_EventScript_Trainer_010_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Trainer_011::
	trainerbattle_single TRAINER_REF011_RT103_GUARDIAN, Intro_011, Outro_011
	msgbox Route103_EventScript_Trainer_011_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_PathBlocker::
	checktrainerflag TRAINER_REF010_RT103_BOSS
	goto_if 1, Route103_PathBlocker_1
	msgbox Route103_PathBlocker_Text_0
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_103
	waitmovement 0
	release
	return

Route103_PathBlocker_1:
	release
	end


Movement_103:
	walk_down
	step_end

Route103_Healer::
	lock
	faceplayer
	msgbox Route103_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route103_Healer_1
	msgbox Route103_Healer_Text_2, MSGBOX_NPC
	return

Route103_Healer_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Route103_Healer_Text_1
	waitmessage
	release
	end


Route103_EventScript_Trainer_008_Text_0:
	.string "Are you ready?$"

Route103_EventScript_Trainer_009_Text_0:
	.string "You've done well so far.$"

Route103_EventScript_Trainer_010_Text_0:
	.string "Congratulations on your victory.$"

Route103_EventScript_Trainer_011_Text_0:
	.string "We're worlds apart, you and I.$"

Route103_PathBlocker_Text_0:
	.string "I must defeat the ROUTE BOSS first.$"

Route103_Healer_Text_0:
	.string "Would you like me to heal your party?$"

Route103_Healer_Text_1:
	.string "Good luck.$"

Route103_Healer_Text_2:
	.string "Alright then.$"

Intro_008::
	.string "Are you ready?$"

Outro_008::
	.string "A fine performance!$"

Intro_009::
	.string "I've been waiting for this.$"

Outro_009::
	.string "Bravissimo!$"

Intro_010::
	.string "You've got to beat me first!$"

Outro_010::
	.string "So what's your next move?$"

Intro_011::
	.string "You wont get past me easily.$"

Outro_011::
	.string "You've proven yourself.$"
