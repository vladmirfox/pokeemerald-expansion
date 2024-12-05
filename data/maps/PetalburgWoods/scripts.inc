.set LOCALID_GRUNT, 3
.set LOCALID_DEVON_EMPLOYEE, 4
.set LOCALID_AARON_SOUTH, 12

PetalburgWoods_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_OnTransition
	.byte 0

PetalburgWoods_OnTransition:
	call_if_eq VAR_AARON_STATE, 1, PetalburgWoods_EventScript_CountTrainersDefeated
	end

PetalburgWoods_EventScript_DevonResearcherLeft::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherRight::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherIntro::
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
	waitmovement 0
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_DevonResearcherPostBattle::
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
	waitmovement 0
	removeobject LOCALID_GRUNT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_BagFull::
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_DevonResearcherFinish::
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
	waitmovement 0
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_RemoveDevonResearcher::
	removeobject LOCALID_DEVON_EMPLOYEE
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_DevonResearcherLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_DevonResearcherExitLeft:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
	delay_16
	face_player
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
	delay_16
	face_player
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

PetalburgWoods_Movement_DevonResearcherExitRight:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_WatchResearcherLeave:
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
	walk_fast_down
	walk_fast_right
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherStartExit:
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_AquaApproachResearcherLeft:
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaBackOff:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_AquaRunAway:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachResearcherRight:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaEntrance:
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachPlayer:
	walk_down
	step_end

PetalburgWoods_EventScript_Boy2::
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_ExplainMiracleSeed::
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_Sign1::
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin, PetalburgWoods_EventScript_CountTrainersDefeated
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_Dustin::
	trainerbattle_single TRAINER_DUSTIN, PetalburgWoods_Text_AwesomeBugPokemon, PetalburgWoods_Text_NotAwesomeEnough, PetalburgWoods_EventScript_CountTrainersDefeated
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
	setvar VAR_0x8004, TRAINER_JAMES_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	call PetalburgWoods_EventScript_CountTrainersDefeated
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
	release
	end

PetalburgWoods_EventScript_RegisterJames::
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_TryRegisterJames2::
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_RegisterJames2::
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_JamesRematch::
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Text_NotAOneToBeFound:
	.string "Hmmm…\n"
	.string "Not a one to be found…$"

PetalburgWoods_Text_HaveYouSeenShroomish:
	.string "Hello, have you seen any POKéMON\n"
	.string "called SHROOMISH around here?\p"
	.string "I really love that POKéMON.$"

PetalburgWoods_Text_IWasGoingToAmbushYou:
	.string "I was going to ambush you, but you\n"
	.string "had to dawdle in PETALBURG WOODS\l"
	.string "forever, didn't you?\p"
	.string "I got sick of waiting, so here I am!$"

PetalburgWoods_Text_HandOverThosePapers:
	.string "You! DEVON RESEARCHER!\p"
	.string "Hand over those papers!$"

PetalburgWoods_Text_YouHaveToHelpMe:
	.string "Aiyeeeh!\p"
	.string "You're a POKéMON TRAINER, aren't you?\n"
	.string "You've got to help me, please!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua:
	.string "Hunh? What do you think you're doing?\n"
	.string "What, you're going to protect him?\p"
	.string "No one who crosses TEAM AQUA\n"
	.string "gets any mercy, not even a kid!\p"
	.string "Come on and battle me!$"

PetalburgWoods_Text_YoureKiddingMe:
	.string "You're kidding me! You're tough!$"

PetalburgWoods_Text_YouveGotSomeNerve:
	.string "Grrr… You've got some nerve\n"
	.string "meddling with TEAM AQUA!\l"
	.string "Come on and battle me again!\p"
	.string "I wish I could say that, but I'm out of\n"
	.string "POKéMON…\p"
	.string "And, hey, we of TEAM AQUA are also\n"
	.string "after something in RUSTBORO.\p"
	.string "I'll let you go today!$"

PetalburgWoods_Text_ThatWasAwfullyClose:
	.string "Whew…\n"
	.string "That was awfully close!\p"
	.string "Thanks to you, he didn't rob me of\n"
	.string "these important papers.\p"
	.string "I know, I'll give you a GREAT BALL as\n"
	.string "my thanks!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
	.string "Didn't that TEAM AQUA thug say\n"
	.string "they were after something in\l"
	.string "RUSTBORO, too?$"

PetalburgWoods_Text_ICantBeWastingTime:
	.string "Uh-oh! It's a crisis!\n"
	.string "I can't be wasting time!$"

PetalburgWoods_Text_YoureLoadedWithItems:
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My BUG POKéMON team!$"

PetalburgWoods_Text_AwesomeBugPokemon:
	.string "Check out my awesome BUG POKéMON!$"

PetalburgWoods_Text_NotAwesomeEnough:
	.string "Not awesome enough!$"

PetalburgWoods_Text_ICouldntWin:
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_PeopleRespectYou:
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_Text_IWantRematch1:
	.string "I want a rematch when my BUG\n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_IWantRematch2:
	.string "I want a rematch when my BUG \n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_MyPokemonHaveGrown:
	.string "My BUG POKéMON have grown.\n"
	.string "I'll be popular again.$"

PetalburgWoods_Text_CantBePopularIfLose:
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_IveBeenTrainingHard:
	.string "You get to be popular if you have\n"
	.string "strong POKéMON, right?\l"
	.string "So, I've been training hard.$"

PetalburgWoods_Text_StayOutOfTallGrass:
	.string "Yo, there!\n"
	.string "Your POKéMON doing okay?\p"
	.string "If your POKéMON are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

PetalburgWoods_Text_HiddenItemsExplanation:
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"

PetalburgWoods_Text_TryUsingThisItem:
	.string "Oh, neat!\n"
	.string "That's the BADGE from RUSTBORO GYM!\p"
	.string "You must be a TRAINER.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation:
	.string "It's a MIRACLE SEED.\n"
	.string "If a POKéMON holds that item, its\l"
	.string "GRASS-type moves become stronger.\p"
	.string "Besides MIRACLE SEED, I think there are\n"
	.string "other convenient items for POKéMON\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience:
	.string "TRAINER TIPS\p"
	.string "Any POKéMON that appears even once\n"
	.string "in a battle is awarded EXP Points.\p"
	.string "To raise a weak POKéMON, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn EXP Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "TRAINER TIPS\p"
	.string "In addition to Hit Points (HP), POKéMON\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a POKéMON runs out of PP, it must be\n"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_EventScript_Aaron::
	lockall
	faceplayer
	call_if_eq VAR_AARON_STATE, 1, PetalburgWoods_EventScript_HealYourPokemon
	call_if_eq VAR_AARON_STATE, 2, PetalburgWoods_EventScript_GiveReward
	call_if_eq VAR_AARON_STATE, 3, PetalburgWoods_EventScript_ComeBackSoon
	releaseall
	end

PetalburgWoods_EventScript_HealYourPokemon::
	msgbox PetalburgWoods_Text_WouldYouLikeHeal, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgWoods_EventScript_Healed
	release
	end

PetalburgWoods_EventScript_Healed::
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	msgbox PetalburgWoods_Text_Healed, MSGBOX_AUTOCLOSE
	release
	end

PetalburgWoods_EventScript_MeetAaronLeft::
	lock
	applymovement LOCALID_AARON_SOUTH, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_AARON_SOUTH, PetalburgWoods_Movement_AaronWalkOverLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_AaronIntro, MSGBOX_AUTOCLOSE
	applymovement LOCALID_AARON_SOUTH, PetaburgWoods_Movement_AaronWalkBackLeft
	waitmovement 0
	setvar VAR_AARON_STATE, 1
	end

PetalburgWoods_EventScript_MeetAaronRight::
	lock
	applymovement LOCALID_AARON_SOUTH, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_AARON_SOUTH, PetalburgWoods_Movement_AaronWalkOverRight
	waitmovement 0
	msgbox PetalburgWoods_Text_AaronIntro, MSGBOX_AUTOCLOSE
	applymovement LOCALID_AARON_SOUTH, PetaburgWoods_Movement_AaronWalkBackRight
	waitmovement 0
	setvar VAR_AARON_STATE, 1
	end

PetalburgWoods_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_LYLE, PetalburgWoods_EventScript_CheckDustin
	addvar VAR_0x8000, 1
PetalburgWoods_EventScript_CheckDustin::
	goto_if_not_defeated TRAINER_DUSTIN, PetalburgWoods_EventScript_CheckJames
	addvar VAR_0x8000, 1
PetalburgWoods_EventScript_CheckJames::
	goto_if_not_defeated TRAINER_JAMES_1, PetalburgWoods_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
PetalburgWoods_EventScript_StopCountingTrainers::
	call_if_eq VAR_0x8000, 3, PetalburgWoods_EventScript_MoveAaronToExit
	return

PetalburgWoods_EventScript_MoveAaronToExit::
	@ setflag FLAG_HIDE_PETALBURG_AARON_SOUTH
	@ clearflag FLAG_HIDE_PETALBURG_AARON_NORTH
	@ setvar VAR_AARON_STATE, 2
	return

PetalburgWoods_EventScript_GiveReward::
	msgbox PetalburgWoods_Text_GiveReward, MSGBOX_AUTOCLOSE
	giveitem ITEM_SILVER_POWDER
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_NoRoomForReward
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	call PetalburgWoods_EventScript_ComeBackSoon
	setvar VAR_AARON_STATE, 3
	releaseall
	end

PetalburgWoods_EventScript_ComeBackSoon::
	msgbox PetalburgWoods_Text_ComeBackSoon, MSGBOX_AUTOCLOSE
	return

PetalburgWoods_EventScript_NoRoomForReward::
	msgbox PetalburgWoods_Text_NoRoomForReward, MSGBOX_AUTOCLOSE
	release
	end	

PetalburgWoods_Movement_AaronWalkOverLeft:
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

PetaburgWoods_Movement_AaronWalkBackLeft:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

PetalburgWoods_Movement_AaronWalkOverRight:
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

PetaburgWoods_Movement_AaronWalkBackRight:
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

PetalburgWoods_Text_AaronIntro:
	.string "???: Hello TRAINER!\p"
	.string "My name is AARON, BUG-type\n"
	.string "extraordinaire!\p"
	.string "I'm running a challenge for new\n"
	.string "TRAINERS, defeat all seven BUG \l"
	.string "CATCHERS on your way through the\l"
	.string "forest and I'll give you a\l"
	.string "fabulous prize!\p"
	.string "Come back to me at any time and\n"
	.string "I can heal your pokemon for you.\p"
	.string "Best of luck!$"

PetalburgWoods_Text_WouldYouLikeHeal:
	.string "AARON: How is the challenge going?\n"
	.string "Do you need me to heal your\l"
	.string "POKéMON?$"

PetalburgWoods_Text_Healed:
	.string "AARON: All healed up, go get 'em!$"

PetalburgWoods_Text_GiveReward:
	.string "AARON: Congratulations!\n"
	.string "You beat all of my TRAINERS!\p"
	.string "As promised, here's your reward!$"

PetalburgWoods_Text_NoRoomForReward:
	.string "AARON: Oh, you don't have enough\n"
	.string "room.$"

PetalburgWoods_Text_ComeBackSoon:
	.string "AARON: Come back soon and I'll\n"
	.string "have another challenge for you!$"
