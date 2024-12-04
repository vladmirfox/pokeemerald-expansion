.set LOCALID_DAD, 1
.set LOCALID_ANORITH_BALL, 2
.set LOCALID_LILEEP_BALL, 3

Route101_NormansLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_NormansLab_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_NormansLab_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route101_NormansLab_OnWarp
	.byte 0

Route101_NormansLab_OnTransition:
	call_if_eq VAR_NORMAN_STATE, 0, Route101_NormansLab_EventScript_MoveDadToPokeballs
	end

Route101_NormansLab_EventScript_MoveDadToPokeballs::
	setobjectxyperm LOCALID_DAD, 6, 6
	setobjectmovementtype LOCALID_DAD, MOVEMENT_TYPE_NONE
	end

Route101_NormansLab_OnFrame:
	map_script_2 VAR_NORMAN_STATE, 0, Route101_NormansLab_EventScript_GiveStarterMon
	.2byte 0

Route101_NormansLab_EventScript_GiveStarterMon::
	lockall
	msgbox Route101_NormansLab_Text_GiveStarterMon, MSGBOX_DEFAULT
	setvar VAR_NORMAN_STATE, 1
	releaseall
	end

Route101_NormansLab_OnWarp:
	map_script_2 VAR_NORMAN_STATE, 0, Route101_NormansLab_EventScript_PlayerFaceRight
	.2byte 0

Route101_NormansLab_EventScript_PlayerFaceRight::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject LOCALID_DAD, DIR_WEST
	end

Route101_NormansLab_EventScript_Norman::
	lock
	faceplayer
	goto_if_eq VAR_NORMAN_STATE, 1, Route101_NormansLab_EventScript_PickOne
	goto_if_eq VAR_NORMAN_STATE, 2, Route101_NormansLab_EventScript_GoodLuck
	end

Route101_NormansLab_EventScript_PickOne::
	msgbox Route101_NormansLab_Text_PickOne, MSGBOX_DEFAULT
	closemessage
	release
	end

Route101_NormansLab_EventScript_GoodLuck::
	msgbox Route101_NormansLab_Text_GoodLuck, MSGBOX_DEFAULT
	closemessage
	release
	end

Route101_NormansLab_EventScript_PokeballAnorith::
	lock
	msgbox Route101_NormansLab_Text_PickAnorith, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route101_NormansLab_EventScript_TakeAnorith
	release
	end

Route101_NormansLab_EventScript_TakeAnorith::
	givemon SPECIES_ANORITH_DELTA, 5, item=ITEM_ORAN_BERRY, isShiny=TRUE
	msgbox Route101_NormansLab_Text_ReceivedAnorith, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	removeobject LOCALID_ANORITH_BALL
	call Route101_NormansLab_EventScript_TookStarter
	return

Route101_NormansLab_EventScript_PokeballLileep::
	lock
	msgbox Route101_NormansLab_Text_PickLileep, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route101_NormansLab_EventScript_TakeLileep
	release
	end

Route101_NormansLab_EventScript_TakeLileep::
	givemon SPECIES_LILEEP_DELTA, 5, item=ITEM_ORAN_BERRY, isShiny=TRUE
	msgbox Route101_NormansLab_Text_ReceivedLileep, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	removeobject LOCALID_LILEEP_BALL
	setflag FLAG_PICKED_LILEEP
	call Route101_NormansLab_EventScript_TookStarter
	return

Route101_NormansLab_EventScript_TookStarter::
	@ TODO: Cleanup unneeded flags
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	applymovement LOCALID_DAD, Route101_NormansLab_Movement_WalkInPlaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Route101_NormansLab_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox Route101_NormansLab_Text_Excellent, MSGBOX_AUTOCLOSE
	applymovement LOCALID_DAD, Route101_NormansLab_Movement_WalkInPlaceLeft
	waitmovement 0
	removeobject LOCALID_ANORITH_BALL
	removeobject LOCALID_LILEEP_BALL

	@ Nickname code from Birch's Lab
	bufferleadmonspeciesname STR_VAR_1
	msgbox Route101_NormansLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route101_NormansLab_EventScript_NicknameStarter
	@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival

	call Route101_NormansLab_EventScript_GiveItems
	msgbox Route101_NormansLab_Text_GoSeeBirch, MSGBOX_AUTOCLOSE
	setvar VAR_NORMAN_STATE, 2
	setvar VAR_BIRCH_LAB_STATE, 2
	return

Route101_NormansLab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	@ goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
	return

Route101_NormansLab_EventScript_GiveItems::
	msgbox Route101_NormansLab_Text_TakeThese, MSGBOX_DEFAULT
	giveitem ITEM_POTION, 5
	giveitem ITEM_EXP_SHARE
	@ call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
	@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
	@ setvar VAR_RESULT, 0
	return

Route101_NormansLab_EventScript_PickAMonDown::
	lock
	msgbox Route101_NormansLab_Text_PickAMon, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Route101_NormansLab_Movement_WalkUp
	waitmovement 0
	release
	end

Route101_NormansLab_EventScript_PickAMonLeft::
	lock
	msgbox Route101_NormansLab_Text_PickAMon, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Route101_NormansLab_Movement_WalkRight
	waitmovement 0
	release
	end

Route101_NormansLab_Movement_WalkInPlaceLeft:
	walk_in_place_faster_left
	step_end

Route101_NormansLab_Movement_WalkInPlaceRight:
	walk_in_place_faster_right
	step_end

Route101_NormansLab_Movement_WalkUp:
	walk_up
	step_end

Route101_NormansLab_Movement_WalkRight:
	walk_right
	step_end

Route101_NormansLab_Text_GiveStarterMon:
	.string "DAD: I've been doing lots of research\n"
	.string "into fossils lately with some help\l"
	.string "from my friend PROF. BIRCH.\p"
	.string "We've been making lots of amazing\n"
	.string "new discoveries, it's very exciting!\p"
	.string "I want you to have one of these two\n"
	.string "POKéMON that I recently revived!\p"
	.string "They're both much stronger than the\n"
	.string "normal versions of their species.\p"
	.string "Go ahead and pick whichever one\n"
	.string "you would like!$"

Route101_NormansLab_Text_PickOne:
	.string "DAD: Go ahead and pick whichever\n"
	.string "one you would like!$"

Route101_NormansLab_Text_PickAnorith:
	.string "Pick ANORITH?$"

Route101_NormansLab_Text_PickLileep:
	.string "Pick LILEEP?$"

Route101_NormansLab_Text_ReceivedAnorith:
	.string "{PLAYER} received an ANORITH!$"

Route101_NormansLab_Text_ReceivedLileep:
	.string "{PLAYER} received an LILEEP!$"

Route101_NormansLab_Text_Excellent:
	.string "DAD: Excellent choice! I'll go\n"
	.string "ahead and take this other one then.$"

Route101_NormansLab_Text_WhyNotGiveNicknameToMon:
	.string "DAD: While you're at it, why not\n"
	.string "give a nickname to that {STR_VAR_1}?$"

Route101_NormansLab_Text_GoSeeBirch:
	.string "DAD: You should go check in with\n"
	.string "PROF. BIRCH too when you get a\l"
	.string "chance, he's been excited to\l"
	.string "meet you.$"

Route101_NormansLab_Text_GoodLuck:
	.string "DAD: Good luck!$"

Route101_NormansLab_Text_TakeThese:
	.string "DAD: Here, take these as well.$"

Route101_NormansLab_Text_PickAMon:
	.string "DAD: Come pick one!$"
