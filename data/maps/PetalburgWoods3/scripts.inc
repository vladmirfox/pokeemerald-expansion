PetalburgWoods3_MapScripts::
	.byte 0

PetalburgWoods3_EventScript_Abel::
	trainerbattle_single TRAINER_ABEL, PetalburgWoods3_Text_BugsAreTheBest, PetalburgWoods3_Text_WipedOut
	msgbox PetalburgWoods3_Text_MoreTraining, MSGBOX_AUTOCLOSE
	end

PetalburgWoods3_EventScript_Maxwell::
	trainerbattle_single TRAINER_MAXWELL, PetalburgWoods3_Text_BugsAreTheBest, PetalburgWoods3_Text_WipedOut
	msgbox PetalburgWoods3_Text_MoreTraining, MSGBOX_AUTOCLOSE
	end

PetalburgWoods3_EventScript_Kit::
	trainerbattle_single TRAINER_KIT, PetalburgWoods3_Text_BugsAreTheBest, PetalburgWoods3_Text_WipedOut
	msgbox PetalburgWoods3_Text_MoreTraining, MSGBOX_AUTOCLOSE
	end

PetalburgWoods3_EventScript_Flynn::
	trainerbattle_single TRAINER_FLYNN, PetalburgWoods3_Text_HeyYouMadeIt, PetalburgWoods3_Text_WipedOut, PetalburgWoods3_EventScript_MoveAaronToExit
	msgbox PetalburgWoods3_Text_MoreTraining, MSGBOX_AUTOCLOSE
	end

PetalburgWoods3_EventScript_MoveAaronToExit::
	setflag FLAG_HIDE_PETALBURG_AARON_SOUTH
	clearflag FLAG_HIDE_PETALBURG_AARON_NORTH
	setvar VAR_AARON_STATE, 2
	return

@ PetalburgWoods3_EventScript_CountTrainersDefeated::
@ 	setvar VAR_0x8008, 0
@ 	goto_if_not_defeated TRAINER_ABEL, PetalburgWoods_EventScript_CheckDustin
@ 	addvar VAR_0x8008, 1
@ PetalburgWoods_EventScript_CheckDustin::
@ 	goto_if_not_defeated TRAINER_MAXWELL, PetalburgWoods_EventScript_CheckJames
@ 	addvar VAR_0x8008, 1
@ PetalburgWoods_EventScript_CheckDustin::
@ 	goto_if_not_defeated TRAINER_KIT, PetalburgWoods_EventScript_CheckJames
@ 	addvar VAR_0x8008, 1
@ PetalburgWoods_EventScript_CheckJames::
@ 	goto_if_not_defeated TRAINER_FLYNN, PetalburgWoods_EventScript_StopCountingTrainers
@ 	addvar VAR_0x8008, 1
@ PetalburgWoods_EventScript_StopCountingTrainers::
@ 	call_if_eq VAR_0x8008, 4, PetalburgWoods3_EventScript_CheckSection1
@ 	return

@ PetalburgWoods3_EventScript_CheckSection1::
@ 	call_if_eq var_0x8000, 3

PetalburgWoods3_Text_BugsAreTheBest:
	.string "BUG POKéMON are the best!$"

PetalburgWoods3_Text_HeyYouMadeIt:
	.string "Hey you made it to the end!$"

PetalburgWoods3_Text_WipedOut:
	.string "Whew, I'm wiped out…$"

PetalburgWoods3_Text_MoreTraining:
	.string "Guess I need some more training…$"
