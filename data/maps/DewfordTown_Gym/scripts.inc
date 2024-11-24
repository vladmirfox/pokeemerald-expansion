.set LOCALID_ROCK_1, 8
.set LOCALID_ROCK_2, 9
.set LOCALID_ROCK_3, 10
.set LOCALID_ROCK_4, 11
.set LOCALID_ROCK_5, 12
.set LOCALID_ROCK_6, 13


DewfordTown_Gym_MapScripts::
	.byte 0

DewfordTown_Gym_EventScript_BreakRock1::
	applymovement LOCALID_ROCK_1, Movement_SmashRock
	waitmovement 0
	removeobject LOCALID_ROCK_1
	setflag FLAG_DEWFORD_GYM_ROCK_1
	return

DewfordTown_Gym_EventScript_BreakRock2::
	applymovement LOCALID_ROCK_2, Movement_SmashRock
	waitmovement 0
	removeobject LOCALID_ROCK_2
	setflag FLAG_DEWFORD_GYM_ROCK_2
	return

DewfordTown_Gym_EventScript_BreakRock3::
	applymovement LOCALID_ROCK_3, Movement_SmashRock
	waitmovement 0
	removeobject LOCALID_ROCK_3
	setflag FLAG_DEWFORD_GYM_ROCK_3
	return

DewfordTown_Gym_EventScript_BreakRock4::
	applymovement LOCALID_ROCK_4, Movement_SmashRock
	waitmovement 0
	removeobject LOCALID_ROCK_4
	setflag FLAG_DEWFORD_GYM_ROCK_4
	return

DewfordTown_Gym_EventScript_BreakRock5::
	applymovement LOCALID_ROCK_5, Movement_SmashRock
	waitmovement 0
	removeobject LOCALID_ROCK_5
	setflag FLAG_DEWFORD_GYM_ROCK_5
	return

DewfordTown_Gym_EventScript_BreakRock6::
	applymovement LOCALID_ROCK_6, Movement_SmashRock
	waitmovement 0
	removeobject LOCALID_ROCK_6
	setflag FLAG_DEWFORD_GYM_ROCK_6
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_StopCountingTrainers::
	return

DewfordTown_Gym_EventScript_Chuck::
	trainerbattle_single TRAINER_CHUCK_1, DewfordTown_Gym_Text_ChuckIntro, DewfordTown_Gym_Text_ChuckDefeat, DewfordTown_Gym_EventScript_ChuckDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_ChuckRematch
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
	msgbox DewfordTown_Gym_Text_ChuckPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_ChuckDefeated::
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	@ Custom state, have Brawly greet outside
	setvar VAR_DEWFORD_TOWN_STATE, 1
	clearflag FLAG_HIDE_DEWFORD_TOWN_BRAWLY_1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredChuck, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_CHUCK_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_GiveBulkUp::
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	return

DewfordTown_Gym_EventScript_GiveBulkUp2:
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	release
	end

DewfordTown_Gym_EventScript_ChuckRematch::
	trainerbattle_rematch_double TRAINER_CHUCK_1, DewfordTown_Gym_Text_ChuckPreRematch, DewfordTown_Gym_Text_ChuckRematchDefeat, DewfordTown_Gym_Text_ChuckRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_ChuckPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_BreakRock2
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_BreakRock6
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_BreakRock5
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BreakRock4
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_BreakRock3
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_BreakRock1
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "DEWFORD's GYM LEADER CHUCK commands\n"
	.string "FIGHTING-type POKéMON.\p"
	.string "Going against him with NORMAL-type\n"
	.string "POKéMON is asking for trouble.\p"
	.string "FIGHTING POKéMON will lay a serious\n"
	.string "smack down on NORMAL POKéMON,\l"
	.string "so be careful!\p"
	.string "As you defeat the TRAINERS in your way\n"
	.string "the breakable rocks will clear and\p"
	.string "open your path to victory!\n"
	.string "the TRAINERS in your way.$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "Your future is looking bright!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "There's no need for CHUCK to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "I can't let CHUCK down!$"

DewfordTown_Gym_Text_LilithIntro:
	.string "Ufufu…\n"
	.string "Are you ready for this?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "You deserve to get demolished\n"
	.string "by CHUCK!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

DewfordTown_Gym_Text_CristianIntro:
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Go after that BADGE!$"

DewfordTown_Gym_Text_ChuckIntro:
	.string "I'm CHUCK!\n"
	.string "DEWFORD's GYM LEADER!\p"
	.string "The old LEADER BRAWLY was such a skinny\n"
	.string "weakling, I crushed him into dust!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_ChuckDefeat:
	.string "Whoah, wow! You are way tougher than\n"
	.string "I expected!\p"
	.string "Here, this is for you.\n"
	.string "Take this GYM BADGE!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} received the KNUCKLE BADGE\n"
	.string "from CHUCK.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "The KNUCKLE BADGE makes all POKéMON\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

DewfordTown_Gym_Text_ExplainBulkUp:
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredChuck:
	.string "Registered GYM LEADER CHUCK\n"
	.string "in the POKéNAV.$"

DewfordTown_Gym_Text_ChuckPostBattle:
	.string "You've got a lot of talent, I'll be\n"
	.string "watching you kid!$"

DewfordTown_Gym_Text_GymStatue:
	.string "DEWFORD TOWN POKéMON GYM$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "DEWFORD TOWN POKéMON GYM\p"
	.string "CHUCK'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_ChuckPreRematch:
	.string "CHUCK: I knew you would return!\p"
	.string "I've been bulking up so don't\n"
	.string "expect this to be easy!$"

DewfordTown_Gym_Text_ChuckRematchDefeat:
	.string "Wow!\n"
	.string "Crushed again!$"

DewfordTown_Gym_Text_ChuckPostRematch:
	.string "CHUCK: Battling is all about raw power!$"

DewfordTown_Gym_Text_ChuckRematchNeedTwoMons:
	.string "CHUCK: I knew you would return!\p"
	.string "I've been bulking up so don't\n"
	.string "expect this to be easy!p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"
