Basement_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_PICK_UP_MEI, Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_LITTLEROOT_LEAVE, 2
	goto_if_eq Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_FIRST_BATTLE
	setvar VAR_LITTLEROOT_LEAVE, 1
	return

Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	clearflag FLAG_FIRST_BATTLE
	return


Basement_EventScript_FirstBattle::
	trainerbattle_single TRAINER_SAWYER_1, firstIntro, firstOutro, endFirstBattle
	end


endFirstBattle::
	lockall
	msgbox endFirstBattle_Text_0
	applymovement 1, firstTrainerLeave
	waitmovement 0
	removeobject 1
	setflag FLAG_FIRST_BATTLE
	setvar VAR_LITTLEROOT_LEAVE, 3
	setVar VAR_AMELIA_RIVAL, 0
	releaseall
	return


firstTrainerLeave:
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

endFirstBattle_Text_0:
	.string "You win this time... But we captured\n"
	.string "John! Come with the cat and we will\l"
	.string "consider releasing him$"

firstIntro::
	.string "You! Give me the cat!$"

firstOutro::
	.string "How dare you!$"

firstPostBattle::
	.string "You'll regret this!$"
