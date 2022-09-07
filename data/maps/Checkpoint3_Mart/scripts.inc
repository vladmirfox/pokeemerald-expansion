Checkpoint3_Mart_MapScripts::
	.byte 0


Checkpoint3_Pokemart_Employee::
	lock
	faceplayer
	message Checkpoint3_Pokemart_Employee_Text_0
	waitmessage
	pokemart MartInventory
	msgbox Checkpoint3_Pokemart_Employee_Text_1
	release
	return


Checkpoint3_Pokemart_Employee2::
	lock
	faceplayer
	message Checkpoint3_Pokemart_Employee2_Text_0
	waitmessage
	pokemart MartInventory2
	msgbox Checkpoint3_Pokemart_Employee2_Text_1
	release
	return


Checkpoint3_Pokemart_Employee_Text_0:
	.string "Welcome trainer.$"

Checkpoint3_Pokemart_Employee_Text_1:
	.string "Thank you, come again!$"

Checkpoint3_Pokemart_Employee2_Text_0:
	.string "I sell delicious berries!$"

Checkpoint3_Pokemart_Employee2_Text_1:
	.string "Good luck out there!$"
