Checkpoint6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_SYS_REMOTE_POKEMON_STORAGE
	switch VAR_CHECKPOINT6_NPC_STATE
	case 0, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 1, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 4, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 5, Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_BEAUTY
	end

Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEAF
	end

Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SCIENTIST_2
	end

Checkpoint6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_WALLY
	end


Checkpoint6_EventScript_GameSign::
	lockall
	msgbox Checkpoint6_EventScript_GameSign_Text_0
	releaseall
	return


Checkpoint6_EventScript_GameSign2::
	lockall
	msgbox Checkpoint6_EventScript_GameSign2_Text_0
	msgbox Checkpoint6_EventScript_GameSign2_Text_1
	msgbox Checkpoint6_EventScript_GameSign2_Text_2
	msgbox Checkpoint6_EventScript_GameSign2_Text_3
	releaseall
	return


Random_NPC_CheckPoint6::
	switch VAR_CHECKPOINT6_NPC_STATE
	case 0, Random_NPC_CheckPoint6_3
	case 1, Random_NPC_CheckPoint6_3
	case 2, Random_NPC_CheckPoint6_4
	case 3, Random_NPC_CheckPoint6_4
	case 4, Random_NPC_CheckPoint6_5
	case 5, Random_NPC_CheckPoint6_6
Random_NPC_CheckPoint6_1:
	releaseall
	return

Random_NPC_CheckPoint6_3:
	checktrainerflag TRAINER_REF030A_BONUS_STONES_5
	goto_if 0, Random_NPC_CheckPoint6_7
	call Event_Script_NPC_Stones_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_4:
	checktrainerflag TRAINER_REF030B_BONUS_HELD_ITEMS_5
	goto_if 0, Random_NPC_CheckPoint6_10
	call Event_Script_NPC_Held_Items_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_5:
	checktrainerflag TRAINER_REF030C_BONUS_ABILITIES_5
	goto_if 0, Random_NPC_CheckPoint6_13
	call Event_Script_NPC_Abilities_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_6:
	checktrainerflag TRAINER_REF030D_BONUS_TMS_5
	goto_if 0, Random_NPC_CheckPoint6_16
	call Event_Script_NPC_TMS_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_7:
	msgbox Random_NPC_CheckPoint6_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint6_19
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_10:
	msgbox Random_NPC_CheckPoint6_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint6_21
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_13:
	msgbox Random_NPC_CheckPoint6_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint6_23
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_16:
	msgbox Random_NPC_CheckPoint6_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint6_25
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_19:
	call Event_Script_NPC_Stones_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_21:
	call Event_Script_NPC_Held_Items_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_23:
	call Event_Script_NPC_Abilities_CP6
	goto Random_NPC_CheckPoint6_1

Random_NPC_CheckPoint6_25:
	call Event_Script_NPC_TMS_CP6
	goto Random_NPC_CheckPoint6_1


Event_Script_NPC_Stones_CP6::
	trainerbattle_single TRAINER_REF030A_BONUS_STONES_5, Intro_CP6, Outro_CP6
	lock
	message Event_Script_NPC_Stones_CP6_Text_0
	waitmessage
	pokemart MartInventory_Stones
	release
	end


Event_Script_NPC_Held_Items_CP6::
	trainerbattle_single TRAINER_REF030B_BONUS_HELD_ITEMS_5, Intro_CP6, Outro_CP6
	lock
	message Event_Script_NPC_Stones_CP6_Text_0
	waitmessage
	pokemart MartInventory_Held_Items
	release
	end


Event_Script_NPC_Abilities_CP6::
	trainerbattle_single TRAINER_REF030C_BONUS_ABILITIES_5, Intro_CP6, Outro_CP6
	lock
	message Event_Script_NPC_Stones_CP6_Text_0
	waitmessage
	pokemart MartInventory_Abilities
	release
	end


Event_Script_NPC_TMS_CP6::
	trainerbattle_single TRAINER_REF030D_BONUS_TMS_5, Intro_CP6, Outro_CP6
	lock
	message Event_Script_NPC_Stones_CP6_Text_0
	waitmessage
	pokemart MartInventory_TMS
	release
	end


Checkpoint6_EventScript_GameSign_Text_0:
	.string "Checkpoint 6:/n The last bastion of\n"
	.string "hope.$"

Checkpoint6_EventScript_GameSign2_Text_0:
	.string "LOCK ROUTES: When you see these signs\n"
	.string "beware!$"

Checkpoint6_EventScript_GameSign2_Text_1:
	.string "You will lose access to your PC and\n"
	.string "there will be no free healing on the\l"
	.string "route!$"

Checkpoint6_EventScript_GameSign2_Text_2:
	.string "Choose your party carefully and bring\n"
	.string "healing items!$"

Checkpoint6_EventScript_GameSign2_Text_3:
	.string "PC access will be restored upon leaving\n"
	.string "the area.$"

Random_NPC_CheckPoint6_Text_0:
	.string "Battle for an opportunity to purchase\n"
	.string "EVOLUTION STONES?$"

Random_NPC_CheckPoint6_Text_1:
	.string "Battle for an opportunity to purchase\n"
	.string "HELD ITEMS?$"

Random_NPC_CheckPoint6_Text_2:
	.string "Battle for an opportunity to purchase\n"
	.string "ABILITY ITEMS?$"

Random_NPC_CheckPoint6_Text_3:
	.string "Battle for an opportunity to purchase\n"
	.string "TM ITEMS?$"

Event_Script_NPC_Stones_CP6_Text_0:
	.string "What will you choose?$"

Intro_CP6::
	.string "You've accepted the challenge!$"

Outro_CP6::
	.string "Access to the special items is granted!$"
