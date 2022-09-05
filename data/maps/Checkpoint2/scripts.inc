Checkpoint2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_CHECKPOINT_2_RANDOM_NPC, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	random 5
	setflag FLAG_CHECKPOINT_2_RANDOM_NPC
	setvar VAR_RANDOM_NPC_STATE, VAR_RESULT
	switch VAR_RESULT
	case 0, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 1, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 2, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	case 3, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	case 4, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	case 5, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar OBJ_EVENT_GFX_VAR_0, OBJ_EVENT_GFX_BEAUTY
	return

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar OBJ_EVENT_GFX_VAR_0, OBJ_EVENT_GFX_LEAF
	return

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	setvar OBJ_EVENT_GFX_VAR_0, OBJ_EVENT_GFX_SCIENTIST_2
	return

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setvar OBJ_EVENT_GFX_VAR_0, OBJ_EVENT_GFX_WALLY
	return


Random_NPC_CheckPoint2::
	switch VAR_RANDOM_NPC_STATE
	case 0, Random_NPC_CheckPoint2_3
	case 1, Random_NPC_CheckPoint2_3
	case 2, Random_NPC_CheckPoint2_4
	case 3, Random_NPC_CheckPoint2_4
	case 4, Random_NPC_CheckPoint2_5
	case 5, Random_NPC_CheckPoint2_6
Random_NPC_CheckPoint2_1:
	releaseall
	return

Random_NPC_CheckPoint2_3:
	msgbox Random_NPC_CheckPoint2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_7
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_4:
	msgbox Random_NPC_CheckPoint2_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_10
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_5:
	msgbox Random_NPC_CheckPoint2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_13
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_6:
	msgbox Random_NPC_CheckPoint2_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_16
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_7:
	call Event_Script_NPC_Stones
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_10:
	call Event_Script_NPC_Held_Items
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_13:
	call Event_Script_NPC_Abilities
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_16:
	call Event_Script_NPC_IVS
	goto Random_NPC_CheckPoint2_1


Event_Script_NPC_Stones::
	trainerbattle_single TRAINER_REF007A_BONUS_STONES_1, Intro, Outro
	lock
	message Event_Script_NPC_Stones_Text_0
	waitmessage
	pokemart MartInventory_Stones
	release
	end


Event_Script_NPC_Held_Items::
	trainerbattle_single TRAINER_REF007B_BONUS_HELD_ITEMS_1, Intro, Outro
	lock
	message Event_Script_NPC_Stones_Text_0
	waitmessage
	pokemart MartInventory_Held_Items
	release
	end


Event_Script_NPC_Abilities::
	trainerbattle_single TRAINER_REF007C_BONUS_ABILITIES_1, Intro, Outro
	lock
	message Event_Script_NPC_Stones_Text_0
	waitmessage
	pokemart MartInventory_Abilities
	release
	end


Event_Script_NPC_IVS::
	trainerbattle_single TRAINER_REF007D_BONUS_IVS_1, Intro, Outro
	lock
	message Event_Script_NPC_Stones_Text_0
	waitmessage
	pokemart MartInventory_IVS
	release
	end


	.align 2
MartInventory_Stones:
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_NONE

	.align 2
MartInventory_Held_Items:
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_NONE

	.align 2
MartInventory_Abilities:
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
MartInventory_IVS:
	.2byte ITEM_CALCIUM
	.2byte ITEM_NONE

Random_NPC_CheckPoint2_Text_0:
	.string "Battle Beauty for an opportunity to\n"
	.string "purchase EVOLUTION STONES?$"

Random_NPC_CheckPoint2_Text_1:
	.string "Battle Leaf for an opportunity to\n"
	.string "purchase HELD ITEMS?$"

Random_NPC_CheckPoint2_Text_2:
	.string "Battle Scientist for an opportunity to\n"
	.string "purchase ABILITY ITEMS?$"

Random_NPC_CheckPoint2_Text_3:
	.string "Battle Wally for an opportunity to\n"
	.string "purchase IV ITEMS?$"

Event_Script_NPC_Stones_Text_0:
	.string "What will you choose?$"

Intro::
	.string "If you can beat me you'll get something\n"
	.string "special!$"

Outro::
	.string "I give up! You've earned this.$"
