.set LOCALID_HEAD_SCIENTIST, 3

ZoneA_Warehouse_1F_MapScripts::
	.byte 0

@ Future: alternatively, have him run to player when returning from downstairs
@ after defeating magma admin, explain machine functions to user
ZoneA_Warehouse_1F_EventScript_HeadScientist::
	lock
	applymovement LOCALID_HEAD_SCIENTIST, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ZoneA_Warehouse_1F_Text_HeadScientistAnnoyed, MSGBOX_DEFAULT
	release
	end

ZoneA_Warehouse_1F_Text_HeadScientistAnnoyed:
	.string "All these grunts are slowing\n"
	.string "down my research.$"

@ Delta Scientist
ZoneA_Warehouse_1F_EventScript_DeltaConverterScientist::
	lockall
	applymovement LOCALID_HEAD_SCIENTIST, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ZoneA_Warehouse_1F_Text_ICanMakeDeltaSpecies, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, ZoneA_Warehouse_1F_EventScript_ConfirmDeltaConversion
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

ZoneA_Warehouse_1F_EventScript_ConfirmDeltaConversion::
	msgbox ZoneA_Warehouse_1F_Text_ConfirmDeltaConversion, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, ZoneA_Warehouse_1F_EventScript_ChooseMonToConvert
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	end

ZoneA_Warehouse_1F_EventScript_ChooseMonToConvert::
	msgbox ZoneA_Warehouse_1F_Text_WhichMonShouldConvert, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
	@ special GetNumMovesSelectedMonHas
	@ goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
	@ msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special UpgradeToDeltaSpecies
	fadescreen FADE_FROM_BLACK
	@ goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	@ special BufferMoveDeleterNicknameAndMove
	@ msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	@ switch VAR_RESULT
	@ case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
	@ case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

ZoneA_Warehouse_1F_Text_ICanMakeDeltaSpecies:
	.string "Oh, hi, yes, did you bring me a new\n"
	.string "specimen for our tests?$"

ZoneA_Warehouse_1F_Text_ConfirmDeltaConversion:
	.string "Just a reminder, this transformation\n"
	.string "cannot be undone, and all of their\p"
	.string "current moves will be replaced.\n"
	.string "Does that still sound okay to you?$"

ZoneA_Warehouse_1F_Text_WhichMonShouldConvert:
	.string "Which pokemon should I convert?$"

@ ARCO MEMBERS
ZoneA_Warehouse_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WAREHOUSE_A_1, ZoneA_Warehouse_1F_Text_SilentTreatment, ZoneA_Warehouse_1F_Text_SilentTreatment
	msgbox ZoneA_Warehouse_1F_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneA_Warehouse_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WAREHOUSE_A_2, ZoneA_Warehouse_1F_Text_SilentTreatment, ZoneA_Warehouse_1F_Text_SilentTreatment
	msgbox ZoneA_Warehouse_1F_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

@ ZoneAlpha_Text_

ZoneA_Warehouse_1F_Text_SilentTreatment:
	.string "…$"
