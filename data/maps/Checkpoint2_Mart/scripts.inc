Checkpoint2_Mart_MapScripts::
	.byte 0

Checkpoint2_Pokemart_Employee::
	lock
	faceplayer
	message Checkpoint2_Pokemart_Employee_Text_0
	waitmessage
	pokemart MartInventory
	msgbox Checkpoint2_Pokemart_Employee_Text_1
	release
	return


Checkpoint2_Pokemart_Employee2::
	lock
	faceplayer
	message Checkpoint2_Pokemart_Employee2_Text_0
	waitmessage
	pokemart MartInventory2
	msgbox Checkpoint2_Pokemart_Employee_Text_1
	release
	return


	.align 2
MartInventory:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

	.align 2
MartInventory2:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Checkpoint2_Pokemart_Employee_Text_0:
	.string "Welcome trainer.$"

Checkpoint2_Pokemart_Employee_Text_1:
	.string "Good luck out there!$"

Checkpoint2_Pokemart_Employee2_Text_0:
	.string "I sell delicious berries!$"
