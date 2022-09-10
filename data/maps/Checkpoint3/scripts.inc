Checkpoint3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_SYS_REMOTE_POKEMON_STORAGE
	switch VAR_CHECKPOINT3_NPC_STATE
	case 0, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 1, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 4, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 5, Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_BEAUTY
	end

Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEAF
	end

Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SCIENTIST_2
	end

Checkpoint3_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_WALLY
	end


Route103_EventScript_GameSign::
	lockall
	msgbox Route103_EventScript_GameSign_Text_0
	msgbox Route103_EventScript_GameSign_Text_1
	msgbox Route103_EventScript_GameSign_Text_2
	msgbox Route103_EventScript_GameSign_Text_3
	releaseall
	return


Route103_EventScript_GameSign2::
	lockall
	msgbox Route103_EventScript_GameSign2_Text_0
	releaseall
	return


Random_NPC_CheckPoint3::
	switch VAR_CHECKPOINT3_NPC_STATE
	case 0, Random_NPC_CheckPoint3_3
	case 1, Random_NPC_CheckPoint3_3
	case 2, Random_NPC_CheckPoint3_4
	case 3, Random_NPC_CheckPoint3_4
	case 4, Random_NPC_CheckPoint3_5
	case 5, Random_NPC_CheckPoint3_6
Random_NPC_CheckPoint3_1:
	releaseall
	return

Random_NPC_CheckPoint3_3:
	checktrainerflag TRAINER_REF012A_BONUS_STONES_2
	goto_if 0, Random_NPC_CheckPoint3_7
	call Event_Script_NPC_Stones_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_4:
	checktrainerflag TRAINER_REF012B_BONUS_HELD_ITEMS_2
	goto_if 0, Random_NPC_CheckPoint3_10
	call Event_Script_NPC_Held_Items_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_5:
	checktrainerflag TRAINER_REF012C_BONUS_ABILITIES_2
	goto_if 0, Random_NPC_CheckPoint3_13
	call Event_Script_NPC_Abilities_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_6:
	checktrainerflag TRAINER_REF012D_BONUS_IVS_2
	goto_if 0, Random_NPC_CheckPoint3_16
	call Event_Script_NPC_IVS_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_7:
	msgbox Random_NPC_CheckPoint3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint3_19
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_10:
	msgbox Random_NPC_CheckPoint3_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint3_21
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_13:
	msgbox Random_NPC_CheckPoint3_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint3_23
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_16:
	msgbox Random_NPC_CheckPoint3_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint3_25
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_19:
	call Event_Script_NPC_Stones_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_21:
	call Event_Script_NPC_Held_Items_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_23:
	call Event_Script_NPC_Abilities_CP3
	goto Random_NPC_CheckPoint3_1

Random_NPC_CheckPoint3_25:
	call Event_Script_NPC_IVS_CP3
	goto Random_NPC_CheckPoint3_1


Event_Script_NPC_Stones_CP3::
	trainerbattle_single TRAINER_REF012A_BONUS_STONES_2, Intro_CP3, Outro_CP3
	lock
	message Event_Script_NPC_Stones_CP3_Text_0
	waitmessage
	pokemart MartInventory_Stones
	release
	end


Event_Script_NPC_Held_Items_CP3::
	trainerbattle_single TRAINER_REF012B_BONUS_HELD_ITEMS_2, Intro_CP3, Outro_CP3
	lock
	message Event_Script_NPC_Stones_CP3_Text_0
	waitmessage
	pokemart MartInventory_Held_Items
	release
	end


Event_Script_NPC_Abilities_CP3::
	trainerbattle_single TRAINER_REF012C_BONUS_ABILITIES_2, Intro_CP3, Outro_CP3
	lock
	message Event_Script_NPC_Stones_CP3_Text_0
	waitmessage
	pokemart MartInventory_Abilities
	release
	end


Event_Script_NPC_IVS_CP3::
	trainerbattle_single TRAINER_REF012D_BONUS_IVS_2, Intro_CP3, Outro_CP3
	lock
	message Event_Script_NPC_Stones_CP3_Text_0
	waitmessage
	pokemart MartInventory_IVS
	release
	end


Route103_EventScript_GameSign_Text_0:
	.string "LOCK ROUTES: When you see these signs\n"
	.string "beware!$"

Route103_EventScript_GameSign_Text_1:
	.string "You will lose access to your PC and\n"
	.string "there will be no free healing on the\l"
	.string "route!$"

Route103_EventScript_GameSign_Text_2:
	.string "Choose your party carefully and bring\n"
	.string "healing items!$"

Route103_EventScript_GameSign_Text_3:
	.string "PC access will be restored upon leaving\n"
	.string "the area.$"

Route103_EventScript_GameSign2_Text_0:
	.string "Checkpoint 3:/n Where the going gets\n"
	.string "rough.$"

Random_NPC_CheckPoint3_Text_0:
	.string "Battle for an opportunity to purchase\n"
	.string "EVOLUTION STONES?$"

Random_NPC_CheckPoint3_Text_1:
	.string "Battle for an opportunity to purchase\n"
	.string "HELD ITEMS?$"

Random_NPC_CheckPoint3_Text_2:
	.string "Battle for an opportunity to purchase\n"
	.string "ABILITY ITEMS?$"

Random_NPC_CheckPoint3_Text_3:
	.string "Battle for an opportunity to purchase\n"
	.string "IV ITEMS?$"

Event_Script_NPC_Stones_CP3_Text_0:
	.string "What will you choose?$"

Intro_CP3::
	.string "You've accepted the challenge!$"

Outro_CP3::
	.string "Access to the special items is granted!$"
