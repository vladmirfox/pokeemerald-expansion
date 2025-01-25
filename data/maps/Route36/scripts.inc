.set LOCALID_SUDOWOODO, 1

Route36_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route36_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route36_OnTransition
	.byte 0

Route36_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route36_EventScript_TryRemoveSudowoodo
	end

Route36_EventScript_TryRemoveSudowoodo::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

Route36_OnTransition:
	call_if_unset FLAG_DEFEATED_JOHTO_SUDOWOODO, Route36_EventScript_ShowSudowoodo
	end

Route36_EventScript_ShowSudowoodo::
	clearflag FLAG_HIDE_JOHTO_SUDOWOODO
	return

Route36_EventScript_Sudowoodo::
	lock
	faceplayer
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_SUDOWOODO, Route36_Movement_SudowoodoShake
	waitmovement 0
	release
	end

Route36_EventScript_WaterSudowoodo::
	lock
	faceplayer
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_SUDOWOODO, Route36_Movement_SudowoodoShake
	waitmovement 0
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_SUDOWOODO
	setwildbattle SPECIES_SUDOWOODO, 20
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route36_EventScript_DefeatedSudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route36_EventScript_DefeatedSudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route36_EventScript_DefeatedSudowoodo
	setflag FLAG_DEFEATED_JOHTO_SUDOWOODO
	release
	end

Route36_EventScript_DefeatedSudowoodo::
	setflag FLAG_DEFEATED_JOHTO_SUDOWOODO
	goto Common_EventScript_RemoveStaticPokemon
	end

Route36_Movement_SudowoodoShake:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end