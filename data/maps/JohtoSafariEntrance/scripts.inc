JohtoSafariEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JohtoSafariEntrance_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, JohtoSafariEntrance_OnTransition
	.byte 0

JohtoSafariEntrance_OnTransition:
	setvar VAR_SAFARI_LOCATION, 2
	end

JohtoSafariEntrance_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, JohtoSafariEntrance_EventScript_ExitSafariZone
	.2byte 0

JohtoSafariEntrance_EventScript_ExitSafariZone::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, JohtoSafariEntrance_Movement_ExitSafariZone
	waitmovement 0
	setvar VAR_SAFARI_ZONE_STATE, 0
	releaseall
	end

JohtoSafariEntrance_Movement_ExitSafariZone:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

JohtoSafariEntrance_EventScript_EntranceCounterMovementTrigger2:
	walk_right
	step_end

JohtoSafariEntrance_EventScript_EntranceCounterMovementTrigger3:
	walk_right
	walk_right
	step_end

JohtoSafariEntrance_EventScript_WelcomeAttendant::
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
	end

JohtoSafariEntrance_EventScript_InfoAttendant::
	lock
	faceplayer
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, JohtoSafariEntrance_EventScript_FirstTimeInfo
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
	release
	end

JohtoSafariEntrance_EventScript_FirstTimeInfo::
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
	release
	end

JohtoSafariEntrance_EventScript_EntranceCounterTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmoneybox 0, 0
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, JohtoSafariEntrance_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter
	end

JohtoSafariEntrance_EventScript_EntranceCounterTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, JohtoSafariEntrance_EventScript_EntranceCounterMovementTrigger2
	waitmovement 0
	showmoneybox 0, 0
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, JohtoSafariEntrance_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter
	end

JohtoSafariEntrance_EventScript_EntranceCounterTrigger3::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, JohtoSafariEntrance_EventScript_EntranceCounterMovementTrigger3
	waitmovement 0
	showmoneybox 0, 0
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, JohtoSafariEntrance_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter
	end

JohtoSafariEntrance_EventScript_TryEnterSafariZone::
	checkitem ITEM_POKEBLOCK_CASE
	goto_if_eq VAR_RESULT, 0, JohtoSafariEntrance_EventScript_NoPokeblockCase
	call JohtoSafariEntrance_EventScript_CheckHasRoomForPokemon
	checkmoney 500
	goto_if_eq VAR_RESULT, 0, JohtoSafariEntrance_EventScript_NotEnoughMoney
	playse SE_SHOP
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
	removemoney 500
	updatemoneybox
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
	waitfanfare
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, JohtoSafariEntrance_Movement_EnterSafariZone
	waitmovement 0
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 2
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
	warp MAP_JOHTO_SAFARI_F1, 15, 22
	waitstate
	end

JohtoSafariEntrance_EventScript_CheckHasRoomForPokemon::
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, JohtoSafariEntrance_EventScript_HasRoomForPokemon
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	goto_if_eq VAR_RESULT, 1, JohtoSafariEntrance_EventScript_HasRoomForPokemon
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
	goto JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter
	end

JohtoSafariEntrance_EventScript_HasRoomForPokemon::
	return

JohtoSafariEntrance_EventScript_NoPokeblockCase::
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
	goto JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter
	end

JohtoSafariEntrance_EventScript_NotEnoughMoney::
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter
	end

JohtoSafariEntrance_EventScript_MovePlayerBackFromCounter::
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, JohtoSafariEntrance_Movement_BackAwayFromCounter
	waitmovement 0
	releaseall
	end

JohtoSafariEntrance_Movement_BackAwayFromCounter:
	walk_down
	step_end

JohtoSafariEntrance_Movement_EnterSafariZone:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	delay_16
	step_end

JohtoSafariEntrance_EventScript_TrainerTipSign::
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
	end

JohtoSafariEntrance_Checkvar::
goto_if_eq VAR_SAFARI_LOCATION, 2 , JohtoSafariEntrance_CheckTrue
end

JohtoSafariEntrance_CheckTrue::
    msgbox CheckVarText, MSGBOX_DEFAULT
    release
    end

CheckVarText:
    .string "La Var è 2"

