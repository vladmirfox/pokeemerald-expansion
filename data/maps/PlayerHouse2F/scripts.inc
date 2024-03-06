PlayerHouse2F_MapScripts::
	.byte 0

PlayerHouse2F_EventScript_PC::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PlayerHouse2F_EventScript_CheckPlayersPC
	goto_if_eq VAR_RESULT, FEMALE, PlayerHouse2F_EventScript_CheckPlayersPC
	end

PlayerHouse2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

PlayerHouse2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end
