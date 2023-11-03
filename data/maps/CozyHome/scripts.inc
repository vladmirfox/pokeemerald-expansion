CozyHome_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CozyHome_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CozyHome_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_LITTLEROOT_LEAVE, 0
	goto_if_eq CozyHome_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	setflag FLAG_JOHN_GIVE_DEX
	return

CozyHome_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_JOHN_GIVE_DEX
	return


doll_Interact::
	lockall
	msgbox doll_Interact_Text_0
	releaseall
	return


hearCrash::
	lockall
	msgbox hearCrash_Text_0
	setflag FLAG_JOHN_GIVE_DEX
	releaseall
	return


checkCrash::
	lockall
	msgbox checkCrash_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, stopEmilyCrash
	waitmovement 0
	releaseall
	return


giveEmilyDex1::
	lock
	applymovement 1, runToEmily1
	waitmovement 0
	call GivePokedex
	msgbox giveEmilyDex1_Text_0
	applymovement 1, runDownstairs
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, emilyStepForward
	waitmovement 0
	setvar VAR_LITTLEROOT_LEAVE, 1
	releaseall
	return


giveEmilyDex2::
	lock
	applymovement 1, runToEmily2
	waitmovement 0
	call GivePokedex
	msgbox giveEmilyDex1_Text_0
	applymovement 1, runDownstairs
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, emilyStepForward
	waitmovement 0
	setvar VAR_LITTLEROOT_LEAVE, 1
	releaseall
	return


giveEmilyDex3::
	lock
	applymovement 1, runToEmily3
	waitmovement 0
	call GivePokedex
	msgbox giveEmilyDex1_Text_0
	applymovement 1, runDownstairs
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, emilyStepForward
	waitmovement 0
	setvar VAR_LITTLEROOT_LEAVE, 1
	releaseall
	return


runToEmily1:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

runToEmily2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

runToEmily3:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

runDownstairs:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

stopEmilyCrash:
	walk_right
	step_end

emilyStepForward:
	walk_right
	walk_right
	walk_right
	step_end

GivePokedex::
	lock
	msgbox TakePokedex, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message GivePokedex_Text_0
	waitfanfare
	closemessage
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
	waitmessage
	release
	return


doll_Interact_Text_0:
	.string "An AZURILL doll!$"

hearCrash_Text_0:
	.string "You hear a loud crash from downstairs!$"

checkCrash_Text_0:
	.string "I should go meet JOHN downstairs...$"

giveEmilyDex1_Text_0:
	.string "JOHN: I've got something else for you\n"
	.string "downstairs... Race you!$"

GivePokedex_Text_0:
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_1:
	.string "Also take these with you$"

GivePokedex_Text_2:
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can\l"
	.string "collect research for the Pokedex$"

TakePokedex::
	.string "John: Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this POKéDEX.$"
