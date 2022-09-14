Checkpoint5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_SYS_REMOTE_POKEMON_STORAGE
	switch VAR_CHECKPOINT5_NPC_STATE
	case 0, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 1, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 4, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 5, Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_BEAUTY
	end

Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEAF
	end

Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SCIENTIST_2
	end

Checkpoint5_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_WALLY
	end


Random_NPC_CheckPoint5::
	switch VAR_CHECKPOINT5_NPC_STATE
	case 0, Random_NPC_CheckPoint5_3
	case 1, Random_NPC_CheckPoint5_3
	case 2, Random_NPC_CheckPoint5_4
	case 3, Random_NPC_CheckPoint5_4
	case 4, Random_NPC_CheckPoint5_5
	case 5, Random_NPC_CheckPoint5_6
Random_NPC_CheckPoint5_1:
	releaseall
	return

Random_NPC_CheckPoint5_3:
	checktrainerflag TRAINER_REF024A_BONUS_STONES_4
	goto_if 0, Random_NPC_CheckPoint5_7
	call Event_Script_NPC_Stones_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_4:
	checktrainerflag TRAINER_REF024B_BONUS_HELD_ITEMS_4
	goto_if 0, Random_NPC_CheckPoint5_10
	call Event_Script_NPC_Held_Items_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_5:
	checktrainerflag TRAINER_REF024C_BONUS_ABILITIES_4
	goto_if 0, Random_NPC_CheckPoint5_13
	call Event_Script_NPC_Abilities_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_6:
	checktrainerflag TRAINER_REF024D_BONUS_TMS_4
	goto_if 0, Random_NPC_CheckPoint5_16
	call Event_Script_NPC_TMS_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_7:
	msgbox Random_NPC_CheckPoint5_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint5_19
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_10:
	msgbox Random_NPC_CheckPoint5_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint5_21
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_13:
	msgbox Random_NPC_CheckPoint5_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint5_23
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_16:
	msgbox Random_NPC_CheckPoint5_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint5_25
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_19:
	call Event_Script_NPC_Stones_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_21:
	call Event_Script_NPC_Held_Items_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_23:
	call Event_Script_NPC_Abilities_CP5
	goto Random_NPC_CheckPoint5_1

Random_NPC_CheckPoint5_25:
	call Event_Script_NPC_TMS_CP5
	goto Random_NPC_CheckPoint5_1


Event_Script_NPC_Stones_CP5::
	trainerbattle_single TRAINER_REF024A_BONUS_STONES_4, Intro_CP5, Outro_CP5
	lock
	message Event_Script_NPC_Stones_CP5_Text_0
	waitmessage
	pokemart MartInventory_Stones
	release
	end


Event_Script_NPC_Held_Items_CP5::
	trainerbattle_single TRAINER_REF024B_BONUS_HELD_ITEMS_4, Intro_CP5, Outro_CP5
	lock
	message Event_Script_NPC_Stones_CP5_Text_0
	waitmessage
	pokemart MartInventory_Held_Items
	release
	end


Event_Script_NPC_Abilities_CP5::
	trainerbattle_single TRAINER_REF024C_BONUS_ABILITIES_4, Intro_CP5, Outro_CP5
	lock
	message Event_Script_NPC_Stones_CP5_Text_0
	waitmessage
	pokemart MartInventory_Abilities
	release
	end


Event_Script_NPC_TMS_CP5::
	trainerbattle_single TRAINER_REF024D_BONUS_TMS_4, Intro_CP5, Outro_CP5
	lock
	message Event_Script_NPC_Stones_CP5_Text_0
	waitmessage
	pokemart MartInventory_TMS
	release
	end


Random_NPC_CheckPoint5_Text_0:
	.string "Battle for an opportunity to purchase\n"
	.string "EVOLUTION STONES?$"

Random_NPC_CheckPoint5_Text_1:
	.string "Battle for an opportunity to purchase\n"
	.string "HELD ITEMS?$"

Random_NPC_CheckPoint5_Text_2:
	.string "Battle for an opportunity to purchase\n"
	.string "ABILITY ITEMS?$"

Random_NPC_CheckPoint5_Text_3:
	.string "Battle for an opportunity to purchase\n"
	.string "TM ITEMS?$"

Event_Script_NPC_Stones_CP5_Text_0:
	.string "What will you choose?$"

Intro_CP5::
	.string "You've accepted the challenge!$"

Outro_CP5::
	.string "Access to the special items is granted!$"
