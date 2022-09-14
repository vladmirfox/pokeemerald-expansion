Route106_MapScripts::
	.byte 0

Route106_EventScript_Trainer_025::
	trainerbattle_single TRAINER_REF025_RT106, Intro_025, Outro_025
	msgbox Route106_EventScript_Trainer_025_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route106_EventScript_Trainer_026::
	trainerbattle_single TRAINER_REF026_RT106, Intro_026, Outro_026
	msgbox Route106_EventScript_Trainer_026_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route106_EventScript_Trainer_027::
	trainerbattle_single TRAINER_REF027_RT106, Intro_027, Outro_027
	msgbox Route106_EventScript_Trainer_027_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route106_EventScript_Trainer_028::
	trainerbattle_single TRAINER_REF028_RT106_BOSS, Intro_028, Outro_028
	msgbox Route106_EventScript_Trainer_028_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route106_EventScript_Trainer_029::
	trainerbattle_single TRAINER_REF029_RT106_GUARDIAN, Intro_029, Outro_029
	msgbox Route106_EventScript_Trainer_029_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route106_Healer::
	lock
	faceplayer
	msgbox Route106_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route106_Healer_1
	msgbox Route106_Healer_Text_2, MSGBOX_NPC
	return

Route106_Healer_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Route106_Healer_Text_1
	waitmessage
	release
	end


Route106_EventScript_Trainer_025_Text_0:
	.string "You're one strong trainer.$"

Route106_EventScript_Trainer_026_Text_0:
	.string "I really dislike the weather here.$"

Route106_EventScript_Trainer_027_Text_0:
	.string "Nice strategy!$"

Route106_EventScript_Trainer_028_Text_0:
	.string "You've got permission to move on.$"

Route106_EventScript_Trainer_029_Text_0:
	.string "Masterful execution.$"

Route106_Healer_Text_0:
	.string "Would you like me to heal your party?$"

Route106_Healer_Text_1:
	.string "Good luck.$"

Route106_Healer_Text_2:
	.string "Alright then.$"

Intro_025::
	.string "Let's get started.$"

Outro_025::
	.string "You know your stuff.$"

Intro_026::
	.string "I challenge you!$"

Outro_026::
	.string "I've got a lot to learn.$"

Intro_027::
	.string "Finally, we meet.$"

Outro_027::
	.string "You just can't be stopped!$"

Intro_028::
	.string "Let me show you what I can do.$"

Outro_028::
	.string "I'm noticing a pattern here.$"

Intro_029::
	.string "You think you've got what it takes?$"

Outro_029::
	.string "I guess you did have what it takes.$"
