.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_MAY, 9
.set LOCALID_GYM_BOY, 7
.set LOCALID_SCOTT, 8
.set LOCALID_DAD, 10

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

@ VAR_PETALBURG_CITY_STATE
@ 	0: Before beating rival in Rustboro City
@ 	1: Wally and May waiting outside for player
@ 	2: Wally registered and waiting for player to finish Lab A
@   3: Lab A cleared, Wally and Dad waiting for player to return
@   4: Reward pokemon given, Dad and Wally gone

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	@ call_if_eq VAR_PETALBURG_CITY_STATE, 0, 
	call_if_eq VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_MakeWallyFaceUp
	call_if_eq VAR_PETALBURG_CITY_STATE, 3, PetalburgCity_EventScript_PutWallyNextToDad
	@ call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	end

PetalburgCity_EventScript_MakeWallyFaceUp::
	@ goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
	@ setobjectxyperm LOCALID_TWIN, 10, 1
	setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_FACE_UP
	return

PetalburgCity_EventScript_PutWallyNextToDad::
	setobjectxyperm LOCALID_WALLY, 25, 16
	setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_FACE_DOWN
	return

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
	waitmovement 0
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HelpWally1::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay1
	waitmovement 0
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HelpWally2::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay2
	waitmovement 0
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HelpWally3::
	lock
	call PetalburgCity_EventScript_HiPlayer
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToMay3
	waitmovement 0
	call PetalburgCity_EventScript_ExplainLab
	release
	end

PetalburgCity_EventScript_HiPlayer::
	applymovement LOCALID_MAY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_MAY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PetalburgCity_Text_MayHiPlayer, MSGBOX_DEFAULT
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
	call PetalburgCity_EventScript_RegisterWallyPokenav
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

PetalburgCity_Text_MayHiPlayer:
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

PetalburgCity_EventScript_RegisterWallyPokenav::
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyApproachRegister
	waitmovement 0
	msgbox PetalburgCity_Text_WallyThanksLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox PetalburgCity_Text_RegisteredWally, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	msgbox PetalburgCity_Text_WallyBeInTouch, MSGBOX_DEFAULT
	closemessage
	setvar VAR_PETALBURG_CITY_STATE, 2
	setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_LOOK_AROUND
	return

PetalburgCity_Movement_WallyApproachRegister:
	walk_up
	walk_in_place_faster_left
	step_end

PetalburgCity_Text_WallyThanksLetsRegister:
	.string "WALLY: Hey {PLAYER}, thanks for\n"
	.string "your help with all this.\p"
	.string "Here, why don't we register\n"
	.string "each other so you can let me\l"
	.string "know how things are going.$"

PetalburgCity_Text_RegisteredWally:
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

PetalburgCity_Text_WallyBeInTouch:
	.string "WALLY: Thanks again {PLAYER}!\n"
	.string "I'll be in touch.$"

PetalburgCity_EventScript_Wally::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WallyGoodLuck, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Text_WallyGoodLuck:
	.string "WALLY: Good luck {PLAYER}!$"

PetalburgCity_EventScript_RewardFromDadAndWally0::
	lockall
	setvar VAR_0x8008, 0
	call PetalburgCity_EventScript_RewardFromDadAndWally
	releaseall
	end

PetalburgCity_EventScript_RewardFromDadAndWally1::
	lockall
	setvar VAR_0x8008, 1
	call PetalburgCity_EventScript_RewardFromDadAndWally
	releaseall
	end

PetalburgCity_EventScript_RewardFromDadAndWally2::
	lockall
	setvar VAR_0x8008, 2
	call PetalburgCity_EventScript_RewardFromDadAndWally
	releaseall
	end

PetalburgCity_EventScript_RewardFromDadAndWally3::
	lockall
	setvar VAR_0x8008, 3
	call PetalburgCity_EventScript_RewardFromDadAndWally
	releaseall
	end

PetalburgCity_EventScript_RewardFromDadAndWally::
	lockall
	applymovement LOCALID_DAD, Common_Movement_FaceRight
	applymovement LOCALID_DAD, Common_Movement_ExclamationMark
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
	waitmovement 0
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_WalkToDad0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_WalkToDad1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_WalkToDad2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_WalkToDad3
	applymovement LOCALID_DAD, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgCity_Text_DadAndWally, MSGBOX_DEFAULT
	closemessage
	call PetalburgCity_EventScript_WhichMon
	releaseall
	end

PetalburgCity_EventScript_WhichMon::
	hidemonpic
	msgbox PetalburgCity_Text_TwoFossilPokemon, MSGBOX_DEFAULT
	@ closemessage
	multichoice 0, 0, MULTI_FOSSIL_MON_GIFT, TRUE
	switch VAR_RESULT
	case 0, PetalburgCity_EventScript_PickTricerachop
	case 1, PetalburgCity_EventScript_PickVoltrex
	return

PetalburgCity_EventScript_PickTricerachop::
	showmonpic SPECIES_TRICERACHOP, 10, 3
	msgbox PetalburgCity_Text_WantTricerachop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_WhichMon
	goto PetalburgCity_EventScript_GiveTricerachop
	end

PetalburgCity_EventScript_PickVoltrex::
	showmonpic SPECIES_VOLTREX, 10, 3
	msgbox PetalburgCity_Text_WantVoltrex, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_WhichMon
	goto PetalburgCity_EventScript_GiveVoltrex
	end

PetalburgCity_EventScript_GiveTricerachop::
	bufferspeciesname STR_VAR_1, SPECIES_TRICERACHOP
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TRICERACHOP
	givemon SPECIES_TRICERACHOP, 10
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, PetalburgCity_EventScript_SendMonToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, PetalburgCity_EventScript_SendMonToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

PetalburgCity_EventScript_GiveVoltrex::
	bufferspeciesname STR_VAR_1, SPECIES_VOLTREX
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLTREX
	givemon SPECIES_VOLTREX, 10
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, PetalburgCity_EventScript_SendMonToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, PetalburgCity_EventScript_SendMonToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

PetalburgCity_EventScript_SendMonToParty::
	@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	@ removeobject LOCALID_BALL_CYNDAQUIL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	hidemonpic
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_GoodLuckNextGym
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto PetalburgCity_EventScript_GoodLuckNextGym
	end

PetalburgCity_EventScript_SendMonToPC::
	@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	@ removeobject LOCALID_BALL_CYNDAQUIL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	hidemonpic
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_MonSentToPC
	call Common_EventScript_NameReceivedBoxMon
	goto PetalburgCity_EventScript_MonSentToPC
	end

PetalburgCity_EventScript_MonSentToPC::
	call Common_EventScript_TransferredToPC
	goto PetalburgCity_EventScript_GoodLuckNextGym
	end

PetalburgCity_EventScript_GoodLuckNextGym::
	applymovement LOCALID_DAD, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgCity_Text_DadGoodbye, MSGBOX_DEFAULT
	closemessage
	@ TODO: dad running off animation
	setflag FLAG_HIDE_PETALBURG_CITY_DAD
	removeobject LOCALID_DAD
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgCity_Text_WallyNextGym, MSGBOX_DEFAULT
	closemessage
	@ TODO: wally running off animation
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
	removeobject LOCALID_WALLY
	setvar VAR_PETALBURG_CITY_STATE, 4
	releaseall
	end

PetalburgCity_EventScript_WalkToDad0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToDad0
	waitmovement 0
	return

PetalburgCity_EventScript_WalkToDad1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToDad1
	waitmovement 0
	return

PetalburgCity_EventScript_WalkToDad2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToDad2
	waitmovement 0
	return

PetalburgCity_EventScript_WalkToDad3::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToDad3
	waitmovement 0
	return

PetalburgCity_Movement_WalkToDad0:
	walk_left
	walk_down
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_WalkToDad1:
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_WalkToDad2:
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_WalkToDad3:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

PetalburgCity_Text_DadAndWally:
	.string "DAD: Hello {PLAYER}!\p"
	.string "WALLY: Hey {PLAYER}!\p"
	.string "DAD: WALLY here told me all about\n"
	.string "the mission he sent you on.\p"
	.string "Sounds like you're turning into\n"
	.string "quite the accomplished TRAINER!\p"
	.string "I actually just came by to give\n"
	.string "you a reward for beating your\l"
	.string "very first gym.$"

PetalburgCity_Text_TwoFossilPokemon:
	.string "DAD: I brought two never before\n"
	.string "seen fossil POKéMON with me,\l"
	.string "which one would you like?$"

PetalburgCity_Text_WantTricerachop:
	.string "DAD: That's the ROCK and FIGHTING\n"
	.string "fossil, is that what you want?$"

PetalburgCity_Text_WantVoltrex:
	.string "DAD: That's the ROCK and ELECTRIC\n"
	.string "fossil, is that what you want?$"

PetalburgCity_Text_DadGoodbye:
	.string "DAD: Great pick! I'll just keep\n"
	.string "this other one then…\p"
	.string "I hope you're excited to test\n"
	.string "them out on your travels!\p"
	.string "I should be off now, don't be\n"
	.string "a stranger, come by and say hi\l"
	.string "to your mom and I sometime!$"

PetalburgCity_Text_WallyNextGym:
	.string "WALLY: Thanks again for all of\n"
	.string "your help!\p"
	.string "I know you're going to crush your\n"
	.string "next GYM challenge in DEWFORD,\l"
	.string "just go and find MR. BRINEY whenever\l"
	.string "you're ready to set sail!$"
