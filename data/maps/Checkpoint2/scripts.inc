Checkpoint2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_CHECKPOINT2_NPC_STATE
	case 0, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 1, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 4, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 5, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_BEAUTY
	end

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEAF
	end

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SCIENTIST_2
	end

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_WALLY
	end


Random_NPC_CheckPoint2::
	switch VAR_CHECKPOINT2_NPC_STATE
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
	goto_if_eq Random_NPC_CheckPoint2_9
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_5:
	msgbox Random_NPC_CheckPoint2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_11
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_6:
	msgbox Random_NPC_CheckPoint2_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_13
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_7:
	call Event_Script_NPC_Stones
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_9:
	call Event_Script_NPC_Held_Items
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_11:
	call Event_Script_NPC_Abilities
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_13:
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


Event_Script_Checkpoint2_SignPost::
	lockall
	msgbox Event_Script_Checkpoint2_SignPost_Text_0
	msgbox Event_Script_Checkpoint2_SignPost_Text_1
	msgbox Event_Script_Checkpoint2_SignPost_Text_2
	msgbox Event_Script_Checkpoint2_SignPost_Text_3
	releaseall
	return


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

Event_Script_Checkpoint2_SignPost_Text_0:
	.string "At each checkpoint there is a special\n"
	.string "random character.$"

Event_Script_Checkpoint2_SignPost_Text_1:
	.string "You may battle them to unlock access\n"
	.string "to a special {PKMN} Mart$"

Event_Script_Checkpoint2_SignPost_Text_2:
	.string "These marts contain powerful items\n"
	.string "that can enhance your team!$"

Event_Script_Checkpoint2_SignPost_Text_3:
	.string "Will you accept the risk?$"

Intro::
	.string "If you can beat me you'll get something\n"
	.string "special!$"

Outro::
	.string "I give up! You've earned this.$"
