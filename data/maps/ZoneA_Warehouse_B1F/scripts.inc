.set LOCALID_GRUNT1, 2
.set LOCALID_SCIENTIST1, 3
.set LOCALID_ADMIN, 5
.set LOCALID_GRUNT2, 6
.set LOCALID_SCIENTIST2, 7

ZoneA_Warehouse_B1F_MapScripts::
	.byte 0

@ ARCO MEMBERS
ZoneA_Warehouse_B1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WAREHOUSE_A_3, ZoneA_Warehouse_B1F_Text_SilentTreatment, ZoneA_Warehouse_B1F_Text_SilentTreatment
	msgbox ZoneA_Warehouse_B1F_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneA_Warehouse_B1F_EventScript_AdminBattle0::
	lock
	setvar VAR_0x8008, 0
	goto ZoneA_Warehouse_B1F_EventScript_AdminBattle
	end

ZoneA_Warehouse_B1F_EventScript_AdminBattle1::
	lock
	setvar VAR_0x8008, 1
	goto ZoneA_Warehouse_B1F_EventScript_AdminBattle
	end

ZoneA_Warehouse_B1F_EventScript_AdminBattle::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_GRUNT2, ZoneA_Warehouse_B1F_Movement_StepForward
	waitmovement 0
	@ check for loss?
	call ZoneA_Warehouse_B1F_EventScript_Grunt2
	releaseall
	end

ZoneA_Warehouse_B1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WAREHOUSE_A_4, ZoneA_Warehouse_B1F_Text_Stop, ZoneA_Warehouse_B1F_Text_SilentTreatment, ZoneA_Warehouse_B1F_EventScript_Grunt2Defeated
	return

ZoneA_Warehouse_B1F_EventScript_Grunt2Defeated::
	applymovement LOCALID_GRUNT2, ZoneA_Warehouse_B1F_Movement_StepBackward
	waitmovement 0
	applymovement LOCALID_ADMIN, ZoneA_Warehouse_B1F_Movement_StepForward
	waitmovement 0
	call ZoneA_Warehouse_B1F_EventScript_Admin
	return

ZoneA_Warehouse_B1F_EventScript_Admin::
	trainerbattle_single TRAINER_ADMIN_WAREHOUSE_A, ZoneA_Warehouse_B1F_Text_AdminIntro, ZoneA_Warehouse_B1F_Text_SilentTreatment, ZoneA_Warehouse_B1F_EventScript_AdminDefeated, NO_MUSIC
	return

ZoneA_Warehouse_B1F_EventScript_AdminDefeated::
	msgbox ZoneA_Warehouse_B1F_Text_AdminDefeated, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_TEAM_ARCO_ZONE_A
	removeobject LOCALID_GRUNT1
	removeobject LOCALID_GRUNT2
	removeobject LOCALID_ADMIN
	lockall
	turnobject LOCALID_SCIENTIST1, DIR_NORTH
	turnobject LOCALID_SCIENTIST2, DIR_NORTH
	fadescreen FADE_FROM_BLACK
	call_if_eq VAR_0x8008, 0, ZoneA_Warehouse_B1F_EventScript_ScientistApproachPlayer0
	call_if_eq VAR_0x8008, 1, ZoneA_Warehouse_B1F_EventScript_ScientistApproachPlayer1
	msgbox ZoneA_Warehouse_B1F_Text_ScientistsSaved, MSGBOX_AUTOCLOSE
	return

ZoneA_Warehouse_B1F_EventScript_ScientistApproachPlayer0::
	applymovement LOCALID_SCIENTIST1, ZoneA_Warehouse_B1F_Movement_ScientistApproach0
	waitmovement 0
	return

ZoneA_Warehouse_B1F_EventScript_ScientistApproachPlayer1::
	applymovement LOCALID_SCIENTIST1, ZoneA_Warehouse_B1F_Movement_ScientistApproach1
	waitmovement 0
	return

ZoneA_Warehouse_B1F_Movement_StepForward:
	walk_fast_right
	step_end

ZoneA_Warehouse_B1F_Movement_StepBackward:
	lock_facing_direction
	face_right
	walk_left
	step_end

ZoneA_Warehouse_B1F_Movement_ScientistApproach0:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

ZoneA_Warehouse_B1F_Movement_ScientistApproach1:
	walk_up
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

ZoneA_Warehouse_B1F_Text_Stop:
	.string "Stop right there.$"

ZoneA_Warehouse_B1F_Text_AdminIntro:
	.string "Enough, I'll do this myself.$"

ZoneA_Warehouse_B1F_Text_AdminDefeated:
	.string "We already got what we needed here.\p"
	.string "Don't try and follow us.$"

ZoneA_Warehouse_B1F_Text_SilentTreatment:
	.string "…$"

ZoneA_Warehouse_B1F_Text_ScientistsSaved:
	.string "Oh thank goodness you saved us!\n"
	.string "Please, follow me upstairs.$"
