Checkpoint6_Mart_MapScripts::
	.byte 0


Checkpoint6_Pokemart_Employee::
	lock
	faceplayer
	message Checkpoint6_Pokemart_Employee_Text_0
	waitmessage
	pokemart MartInventory
	msgbox Checkpoint6_Pokemart_Employee_Text_1
	release
	return


Checkpoint6_Pokemart_Employee2::
	lock
	faceplayer
	message Checkpoint6_Pokemart_Employee2_Text_0
	waitmessage
	pokemart MartInventory2
	msgbox Checkpoint6_Pokemart_Employee2_Text_1
	release
	return


Checkpoint6_Pokemart_Employee_Text_0:
	.string "Welcome trainer.$"

Checkpoint6_Pokemart_Employee_Text_1:
	.string "Thank you, come again!$"

Checkpoint6_Pokemart_Employee2_Text_0:
	.string "I sell delicious berries!$"

Checkpoint6_Pokemart_Employee2_Text_1:
	.string "Good luck out there!$"
