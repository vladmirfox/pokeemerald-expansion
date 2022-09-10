Checkpoint4_Mart_MapScripts::
	.byte 0


Checkpoint4_Pokemart_Employee::
	lock
	faceplayer
	message Checkpoint4_Pokemart_Employee_Text_0
	waitmessage
	pokemart MartInventory
	msgbox Checkpoint4_Pokemart_Employee_Text_1
	release
	return


Checkpoint4_Pokemart_Employee2::
	lock
	faceplayer
	message Checkpoint4_Pokemart_Employee2_Text_0
	waitmessage
	pokemart MartInventory2
	msgbox Checkpoint4_Pokemart_Employee2_Text_1
	release
	return


Checkpoint4_Pokemart_Employee_Text_0:
	.string "Welcome trainer.$"

Checkpoint4_Pokemart_Employee_Text_1:
	.string "Thank you, come again!$"

Checkpoint4_Pokemart_Employee2_Text_0:
	.string "I sell delicious berries!$"

Checkpoint4_Pokemart_Employee2_Text_1:
	.string "Good luck out there!$"
