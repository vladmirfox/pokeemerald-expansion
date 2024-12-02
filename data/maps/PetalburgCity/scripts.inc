.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_MAY, 9
.set LOCALID_GYM_BOY, 7
.set LOCALID_SCOTT, 8

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

@ VAR_PETALBURG_CITY_STATE
@ 	0: Before beating rival in Rustboro City
@ 	1: Wally and May waiting outside for player
@ 	2: Wally back in gym

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	@ call_if_eq VAR_PETALBURG_CITY_STATE, 0, 
	@ call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
	@ call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	end

PetalburgCity_EventScript_SetGymDoorsUnlocked::
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_OnFrame:
	@ map_script_2 VAR_PETALBURG_CITY_STATE, 2, 
	@ map_script_2 VAR_PETALBURG_CITY_STATE, 4, 
	.2byte 0

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WallyWasAnnoying, MSGBOX_NPC
	end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

@ Unused
PetalburgCity_Movement_Delay48::
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott::
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit3:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_GymIsClosed, MSGBOX_NPC
	end

PetalburgCity_Text_WallyWasAnnoying:
	.string "That local boy WALLY used to be so\n"
	.string "annoying back in the day.$"

PetalburgCity_Text_GymIsClosed:
	.string "Hiya! Sorry, the GYM is closed.$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection:
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation:
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign:
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign:
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer:
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot:
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers:
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_HelpWally0::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay0
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HelpWally1::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay1
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HelpWally2::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay2
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HelpWally3::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay3
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HiPlayer::
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_MAY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PetalburgCity_Text_HiPlayer, MSGBOX_DEFAULT
	closemessage
	return

PetalburgCity_EventScript_ExplainLab::
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgCity_Text_IntroduceWally, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgCity_Text_WallyExplainsProblem, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgCity_Text_MayVolunteersPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgCity_Text_MayLeaves, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0 
	applymovement LOCALID_MAY, PetalburgCity_Movement_MayLeaves
	waitmovement 0 
	removeobject LOCALID_MAY
	setflag FLAG_HIDE_PETALBURG_CITY_MAY
	return

PetalburgCity_Movement_WalkToMay0:
	walk_right
	walk_down
	walk_down
	walk_right
	step_end

PetalburgCity_Movement_WalkToMay1:
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

PetalburgCity_Movement_WalkToMay2:
	walk_right
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_WalkToMay3:
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

PetalburgCity_Movement_MayLeaves:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

PetalburgCity_Text_HiPlayer:
	.string "MAY: Hey, {PLAYER}!$"

PetalburgCity_Text_IntroduceWally:
	.string "MAY: This is my friend Wally!\n"
	.string "He lives here in Rustboro.$"

PetalburgCity_Text_WallyExplainsProblem:
	.string "WALLY: Hi {PLAYER}, thanks for coming\n"
	.string "here so quickly.\p"
	.string "I noticed some weird activity\n"
	.string "NORTH of ROUTE 102.\p"
	.string "Strange men have been coming and going\n"
	.string "from the LAB there.\p"
	.string "I need you to go check on everything\n"
	.string "there for me, do you think you can\l"
	.string "do that {PLAYER}?$"

PetalburgCity_Text_MayVolunteersPlayer:
	.string "MAY: Of course, {PLAYER} is the\n"
	.string "perfect person to help you!\p"
	.string "They're an even stronger TRAINER\n"
	.string "than me!$"

PetalburgCity_Text_MayLeaves:
	.string "MAY: I have to go run an errand\n"
	.string "for my dad, I'm sure you can handle\l"
	.string "this on your own {PLAYER}!$"
