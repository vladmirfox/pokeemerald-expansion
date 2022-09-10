Route105_MapScripts::
	.byte 0

Route105_PathBlocker::
	checktrainerflag TRAINER_REF022_RT105_BOSS
	goto_if 1, Route105_PathBlocker_1
	msgbox Route105_PathBlocker_Text_0
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_104
	waitmovement 0
	release
	return

Route105_PathBlocker_1:
	release
	end


Movement_105:
	walk_down
	step_end

Route105_EventScript_Trainer_019::
	trainerbattle_single TRAINER_REF019_RT105, Intro_019, Outro_019
	msgbox Route105_EventScript_Trainer_019_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route105_EventScript_Trainer_020::
	trainerbattle_single TRAINER_REF020_RT105, Intro_020, Outro_020
	msgbox Route105_EventScript_Trainer_020_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route105_EventScript_Trainer_021::
	trainerbattle_single TRAINER_REF021_RT105, Intro_021, Outro_021
	msgbox Route105_EventScript_Trainer_021_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route105_EventScript_Trainer_022::
	trainerbattle_single TRAINER_REF022_RT105_BOSS, Intro_022, Outro_022
	msgbox Route105_EventScript_Trainer_022_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route105_EventScript_Trainer_023::
	trainerbattle_single TRAINER_REF023_RT105_GUARDIAN, Intro_023, Outro_023
	msgbox Route105_EventScript_Trainer_023_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route105_Healer::
	lock
	faceplayer
	msgbox Route105_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route105_Healer_1
	msgbox Route105_Healer_Text_2, MSGBOX_NPC
	return

Route105_Healer_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Route105_Healer_Text_1
	waitmessage
	release
	end


Route105_PathBlocker_Text_0:
	.string "I must defeat the ROUTE BOSS first.$"

Route105_EventScript_Trainer_019_Text_0:
	.string "You're pretty impressive.$"

Route105_EventScript_Trainer_020_Text_0:
	.string "Can you beat all of us?$"

Route105_EventScript_Trainer_021_Text_0:
	.string "Color me surprised.$"

Route105_EventScript_Trainer_022_Text_0:
	.string "You beat me fair and square.$"

Route105_EventScript_Trainer_023_Text_0:
	.string "I wonder what you will catch?$"

Route105_Healer_Text_0:
	.string "Would you like me to heal your party?$"

Route105_Healer_Text_1:
	.string "Good luck.$"

Route105_Healer_Text_2:
	.string "Alright then.$"

Intro_019::
	.string "Finally, it's my turn!$"

Outro_019::
	.string "Shocking!$"

Intro_020::
	.string "I'm your second challenge here.$"

Outro_020::
	.string "Two down, I'm knocked out.$"

Intro_021::
	.string "Third and best, let's put you to the\n"
	.string "test.$"

Outro_021::
	.string "Crazy win, what a turn around.$"

Intro_022::
	.string "This time things are different.$"

Outro_022::
	.string "Lost again? Jeez'!$"

Intro_023::
	.string "You're a brave one to challenge me.$"

Outro_023::
	.string "You secured yourself a bonus\n"
	.string "encounter!$"
