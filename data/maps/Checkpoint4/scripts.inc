Checkpoint4_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_SYS_REMOTE_POKEMON_STORAGE
	switch VAR_CHECKPOINT4_NPC_STATE
	case 0, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 1, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 4, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 5, Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_BEAUTY
	end

Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEAF
	end

Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SCIENTIST_2
	end

Checkpoint4_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_WALLY
	end


Checkpoint4_EventScript_GameSign::
	lockall
	msgbox Checkpoint4_EventScript_GameSign_Text_0
	releaseall
	return


Random_NPC_CheckPoint4::
	switch VAR_CHECKPOINT4_NPC_STATE
	case 0, Random_NPC_CheckPoint4_3
	case 1, Random_NPC_CheckPoint4_3
	case 2, Random_NPC_CheckPoint4_4
	case 3, Random_NPC_CheckPoint4_4
	case 4, Random_NPC_CheckPoint4_5
	case 5, Random_NPC_CheckPoint4_6
Random_NPC_CheckPoint4_1:
	releaseall
	return

Random_NPC_CheckPoint4_3:
	checktrainerflag TRAINER_REF018A_BONUS_STONES_3
	goto_if 0, Random_NPC_CheckPoint4_7
	call Event_Script_NPC_Stones_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_4:
	checktrainerflag TRAINER_REF018B_BONUS_HELD_ITEMS_3
	goto_if 0, Random_NPC_CheckPoint4_10
	call Event_Script_NPC_Held_Items_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_5:
	checktrainerflag TRAINER_REF018C_BONUS_ABILITIES_3
	goto_if 0, Random_NPC_CheckPoint4_13
	call Event_Script_NPC_Abilities_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_6:
	checktrainerflag TRAINER_REF018D_BONUS_TMS_3
	goto_if 0, Random_NPC_CheckPoint4_16
	call Event_Script_NPC_TMS_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_7:
	msgbox Random_NPC_CheckPoint4_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint4_19
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_10:
	msgbox Random_NPC_CheckPoint4_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint4_21
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_13:
	msgbox Random_NPC_CheckPoint4_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint4_23
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_16:
	msgbox Random_NPC_CheckPoint4_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint4_25
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_19:
	call Event_Script_NPC_Stones_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_21:
	call Event_Script_NPC_Held_Items_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_23:
	call Event_Script_NPC_Abilities_CP4
	goto Random_NPC_CheckPoint4_1

Random_NPC_CheckPoint4_25:
	call Event_Script_NPC_TMS_CP4
	goto Random_NPC_CheckPoint4_1


Event_Script_NPC_Stones_CP4::
	trainerbattle_single TRAINER_REF018A_BONUS_STONES_3, Intro_CP4, Outro_CP4
	lock
	message Event_Script_NPC_Stones_CP4_Text_0
	waitmessage
	pokemart MartInventory_Stones
	release
	end


Event_Script_NPC_Held_Items_CP4::
	trainerbattle_single TRAINER_REF018B_BONUS_HELD_ITEMS_3, Intro_CP4, Outro_CP4
	lock
	message Event_Script_NPC_Stones_CP4_Text_0
	waitmessage
	pokemart MartInventory_Held_Items
	release
	end


Event_Script_NPC_Abilities_CP4::
	trainerbattle_single TRAINER_REF018C_BONUS_ABILITIES_3, Intro_CP4, Outro_CP4
	lock
	message Event_Script_NPC_Stones_CP4_Text_0
	waitmessage
	pokemart MartInventory_Abilities
	release
	end


Event_Script_NPC_TMS_CP4::
	trainerbattle_single TRAINER_REF018D_BONUS_TMS_3, Intro_CP4, Outro_CP4
	lock
	message Event_Script_NPC_Stones_CP4_Text_0
	waitmessage
	pokemart MartInventory_TMS
	release
	end


Checkpoint4_EventScript_GameSign_Text_0:
	.string "Checkpoint 4: Honestly we can't believe\n"
	.string "you made it this far!$"

Random_NPC_CheckPoint4_Text_0:
	.string "Battle for an opportunity to purchase\n"
	.string "EVOLUTION STONES?$"

Random_NPC_CheckPoint4_Text_1:
	.string "Battle for an opportunity to purchase\n"
	.string "HELD ITEMS?$"

Random_NPC_CheckPoint4_Text_2:
	.string "Battle for an opportunity to purchase\n"
	.string "ABILITY ITEMS?$"

Random_NPC_CheckPoint4_Text_3:
	.string "Battle for an opportunity to purchase\n"
	.string "TM ITEMS?$"

Event_Script_NPC_Stones_CP4_Text_0:
	.string "What will you choose?$"

Intro_CP4::
	.string "You've accepted the challenge!$"

Outro_CP4::
	.string "Access to the special items is granted!$"
