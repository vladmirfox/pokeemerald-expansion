.set LOCALID_BAG, 1

ASPAKIA_MapScripts::
	.byte 0


LittlerootTown_HackSign::
	lockall
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_HackSign_2
	msgbox LittlerootTown_HackSign_Text_1
LittlerootTown_HackSign_1:
	releaseall
	return

LittlerootTown_HackSign_2:
	msgbox LittlerootTown_HackSign_Text_0
	goto LittlerootTown_HackSign_1


LittlerootTown_HackSign_Text_0:
	.string "You're Male$"

LittlerootTown_HackSign_Text_1:
	.string "You're Female$"

ASPAKIA_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	@setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	@removeobject LOCALID_ZIGZAGOON
	@setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	@applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	@waitmovement 0
	special ChooseStarter
	@waitstate
	@applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	@waitmovement 0
	@msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
	@special HealPlayerParty
	@setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	@clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_BAG
	@setvar VAR_BIRCH_LAB_STATE, 2
	@setvar VAR_ROUTE101_STATE, 3
	@clearflag FLAG_HIDE_MAP_NAME_POPUP
	@checkplayergender
	@compare VAR_RESULT, MALE
	@call_if_eq Route101_EventScript_HideMayInBedroom
	@compare VAR_RESULT, FEMALE
	@call_if_eq Route101_EventScript_HideBrendanInBedroom
	@warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
	@waitstate
	release
	end