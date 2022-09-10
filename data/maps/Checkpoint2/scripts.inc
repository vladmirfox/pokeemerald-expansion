Checkpoint2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Checkpoint2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_SYS_REMOTE_POKEMON_STORAGE
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
	checktrainerflag TRAINER_REF007A_BONUS_STONES_1
	goto_if 0, Random_NPC_CheckPoint2_7
	call Event_Script_NPC_Stones_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_4:
	checktrainerflag TRAINER_REF007B_BONUS_HELD_ITEMS_1
	goto_if 0, Random_NPC_CheckPoint2_10
	call Event_Script_NPC_Held_Items_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_5:
	checktrainerflag TRAINER_REF007C_BONUS_ABILITIES_1
	goto_if 0, Random_NPC_CheckPoint2_13
	call Event_Script_NPC_Abilities_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_6:
	checktrainerflag TRAINER_REF007D_BONUS_IVS_1
	goto_if 0, Random_NPC_CheckPoint2_16
	call Event_Script_NPC_IVS_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_7:
	msgbox Random_NPC_CheckPoint2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_19
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_10:
	msgbox Random_NPC_CheckPoint2_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_21
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_13:
	msgbox Random_NPC_CheckPoint2_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_23
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_16:
	msgbox Random_NPC_CheckPoint2_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Random_NPC_CheckPoint2_25
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_19:
	call Event_Script_NPC_Stones_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_21:
	call Event_Script_NPC_Held_Items_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_23:
	call Event_Script_NPC_Abilities_CP2
	goto Random_NPC_CheckPoint2_1

Random_NPC_CheckPoint2_25:
	call Event_Script_NPC_IVS_CP2
	goto Random_NPC_CheckPoint2_1


Event_Script_NPC_Stones_CP2::
	trainerbattle_single TRAINER_REF007A_BONUS_STONES_1, Intro_CP2, Outro_CP2
	lock
	message Event_Script_NPC_Stones_CP2_Text_0
	waitmessage
	pokemart MartInventory_Stones
	release
	end


Event_Script_NPC_Held_Items_CP2::
	trainerbattle_single TRAINER_REF007B_BONUS_HELD_ITEMS_1, Intro_CP2, Outro_CP2
	lock
	message Event_Script_NPC_Stones_CP2_Text_0
	waitmessage
	pokemart MartInventory_Held_Items
	release
	end


Event_Script_NPC_Abilities_CP2::
	trainerbattle_single TRAINER_REF007C_BONUS_ABILITIES_1, Intro_CP2, Outro_CP2
	lock
	message Event_Script_NPC_Stones_CP2_Text_0
	waitmessage
	pokemart MartInventory_Abilities
	release
	end


Event_Script_NPC_IVS_CP2::
	trainerbattle_single TRAINER_REF007D_BONUS_IVS_1, Intro_CP2, Outro_CP2
	lock
	message Event_Script_NPC_Stones_CP2_Text_0
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
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_NONE

	.align 2
MartInventory_Held_Items:
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_AMULET_COIN
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_CHARCOAL
	.2byte ITEM_DAMP_ROCK
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_EVIOLITE
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_HARD_STONE
	.2byte ITEM_HEAT_ROCK
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_IRON_BALL
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_MAGNET
	.2byte ITEM_METAL_COAT
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_POISON_BARB
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RED_CARD
	.2byte ITEM_RING_TARGET
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_SMOOTH_ROCK
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

	.align 2
MartInventory_Abilities:
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
MartInventory_IVS:
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

Random_NPC_CheckPoint2_Text_0:
	.string "Battle for an opportunity to purchase\n"
	.string "EVOLUTION STONES?$"

Random_NPC_CheckPoint2_Text_1:
	.string "Battle for an opportunity to purchase\n"
	.string "HELD ITEMS?$"

Random_NPC_CheckPoint2_Text_2:
	.string "Battle for an opportunity to purchase\n"
	.string "ABILITY ITEMS?$"

Random_NPC_CheckPoint2_Text_3:
	.string "Battle for an opportunity to purchase\n"
	.string "IV ITEMS?$"

Event_Script_NPC_Stones_CP2_Text_0:
	.string "What will you choose?$"

Event_Script_Checkpoint2_SignPost_Text_0:
	.string "At each checkpoint you will find one of\n"
	.string "four random characters.$"

Event_Script_Checkpoint2_SignPost_Text_1:
	.string "You may battle them to unlock access\n"
	.string "to a special {PKMN} Mart$"

Event_Script_Checkpoint2_SignPost_Text_2:
	.string "These marts contain powerful items\n"
	.string "that can enhance your team!$"

Event_Script_Checkpoint2_SignPost_Text_3:
	.string "Will you accept the risk?$"

Intro_CP2::
	.string "If you can beat me you'll get something\n"
	.string "special!$"

Outro_CP2::
	.string "I give up! You've earned this.$"
