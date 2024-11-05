.set LOCALID_GRUNT_1, 1

ZoneA_MapScripts::
	.byte 0

RouteA_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_ROUTE_A_1, RouteA_Text_Grunt1Intro, RouteA_Text_Grunt1Defeated, RouteA_EventScript_Grunt1Defeated
	msgbox RouteA_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	closemessage
	applymovement LOCALID_GRUNT_1, RouteA_Movement_Grunt1RunAway
	end

RouteA_EventScript_Grunt1Defeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox RouteA_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	applymovement LOCALID_GRUNT_1, RouteA_Movement_Grunt1RunAway
	waitmovement 0
	setflag FLAG_HIDE_ROUTE_A_GRUNT_1
	removeobject LOCALID_GRUNT_1
	release
	return

RouteA_Movement_Grunt1RunAway:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RouteA_EventScript_Scientist1::
	trainerbattle_single TRAINER_SCIENTIST_ROUTE_A_1, RouteA_Text_Scientist1Intro, RouteA_Text_Scientist1Defeated
	goto RouteA_Text_Scientist1PostBattle
	end

RouteA_EventScript_Scientist2::
	msgbox RouteA_Text_SoManyBoxes, MSGBOX_AUTOCLOSE
	end

RouteA_Text_Grunt1Intro:
	.string "Hey! What happened to our guard!$"

RouteA_Text_Grunt1Defeated:
	.string "Crap...$"

RouteA_Text_Grunt1PostBattle:
	.string "...\n"
	.string "...\n"
	.string "Gotta go tell the boss.$"

RouteA_Text_Scientist1Intro:
	.string "Our project is coming along nicely.$"

RouteA_Text_Scientist1Defeated:
	.string "A miscalculation.$"

RouteA_Text_Scientist1PostBattle:
	.string "Maybe we're not as far along"
	.string "as I thought.$"

RouteA_Text_SoManyBoxes:
	.string "So many boxes.$"
