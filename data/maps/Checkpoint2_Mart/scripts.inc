Checkpoint2_Mart_MapScripts::
	.byte 0

Checkpoint2_Pokemart_Employee::
	lock
	message Checkpoint2_Pokemart_Employee_Text_0
	waitmessage
	pokemart MartInventory
	msgbox Checkpoint2_Pokemart_Employee_Text_1
	release
	return


Checkpoint2_Pokemart_Employee2::
	lock
	message Checkpoint2_Pokemart_Employee2_Text_0
	waitmessage
	pokemart MartInventory
	msgbox Checkpoint2_Pokemart_Employee_Text_1
	release
	return


	.align 2
MartInventory:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
MartInventory2:
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Checkpoint2_Pokemart_Employee_Text_0:
	.string "Welcome trainer.$"

Checkpoint2_Pokemart_Employee_Text_1:
	.string "Good luck out there!$"

Checkpoint2_Pokemart_Employee2_Text_0:
	.string "I sell {PKMN} enhancements!$"
