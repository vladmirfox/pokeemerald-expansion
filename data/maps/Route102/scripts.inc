Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_EventScript_GameSign::
	lockall
	msgbox Route102_EventScript_GameSign_Text_0
	msgbox Route102_EventScript_GameSign_Text_1
	releaseall
	return


Route102_EventScript_GameSign2::
	lockall
	msgbox Route102_EventScript_GameSign2_Text_0
	msgbox Route102_EventScript_GameSign2_Text_1
	releaseall
	return


Route102_EventScript_Trainer_003::
	trainerbattle_single TRAINER_REF003_RT102, Intro_003, Outro_003
	msgbox Route102_EventScript_Trainer_003_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route102_EventScript_Trainer_004::
	trainerbattle_single TRAINER_REF004_RT102, Intro_004, Outro_004
	msgbox Route102_EventScript_Trainer_004_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route102_ItemBall_Berries::
	finditem ITEM_PECHA_BERRY, 5
	finditem ITEM_CHERI_BERRY, 5
	finditem ITEM_CHESTO_BERRY, 5
	return


Route102_Healer::
	lock
	faceplayer
	msgbox Route102_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route102_Healer_1
	msgbox Route102_Healer_Text_2, MSGBOX_NPC
	return

Route102_Healer_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Route102_Healer_Text_1
	waitmessage
	release
	end


Route102_EventScript_GameSign_Text_0:
	.string "The level cap in this area is 10, you can\n"
	.string "exceed it with Rare Candy if desired.$"

Route102_EventScript_GameSign_Text_1:
	.string "Each area now has a GUARDIAN trainer\n"
	.string "who blocks access to a side area with\l"
	.string "extra encounters, you must defeat the\l"
	.string "ROUTE BOSS before challenging a\l"
	.string "GUARDIAN. .$"

Route102_EventScript_GameSign2_Text_0:
	.string "You must defeat a ROUTE BOSS first to\n"
	.string "challenge the GUARDIAN.$"

Route102_EventScript_GameSign2_Text_1:
	.string "GUARDIAN's are more difficult than\n"
	.string "regular trainers, but unlock new\l"
	.string "encounter areas.$"

Route102_EventScript_Trainer_003_Text_0:
	.string "I hope you're using your berries wisely.$"

Route102_EventScript_Trainer_004_Text_0:
	.string "You really think you have what it\n"
	.string "takes?$"

Route102_Healer_Text_0:
	.string "Would you like me to heal your party?$"

Route102_Healer_Text_1:
	.string "Good luck.$"

Route102_Healer_Text_2:
	.string "Alright then.$"

Intro_003::
	.string "So you think you can handle me?$"

Outro_003::
	.string "Tch! You're stronger than you look$"

Intro_004::
	.string "Time for us to fight!$"

Outro_004::
	.string "Not bad.$"
