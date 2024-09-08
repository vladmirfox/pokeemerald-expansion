BaMart_MapScripts::
	.byte 0


Ba_Mart_Employee::
# 6 "data/maps/BaMart/scripts.pory"
	lock
# 7 "data/maps/BaMart/scripts.pory"
	faceplayer
# 8 "data/maps/BaMart/scripts.pory"
	goto_if_unset FLAG_STATER_GET, Ba_Mart_Employee_2
# 12 "data/maps/BaMart/scripts.pory"
	message Ba_Mart_Employee_Text_0
# 13 "data/maps/BaMart/scripts.pory"
	waitmessage
# 14 "data/maps/BaMart/scripts.pory"
	pokemart Ba_Mart_Items
# 15 "data/maps/BaMart/scripts.pory"
	msgbox Ba_Mart_Employee_Text_1
Ba_Mart_Employee_1:
# 17 "data/maps/BaMart/scripts.pory"
	release
	end

Ba_Mart_Employee_2:
# 9 "data/maps/BaMart/scripts.pory"
	msgbox BaMartEmployeeBeforeStarter
	goto Ba_Mart_Employee_1


	.align 2
# 21 "data/maps/BaMart/scripts.pory"
Ba_Mart_Items:
# 22 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 25 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 27 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 28 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 29 "data/maps/BaMart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NONE

Ba_Mart_Employee_Text_0:
# 12 "data/maps/BaMart/scripts.pory"
	.string "How may I serve you?$"

Ba_Mart_Employee_Text_1:
# 15 "data/maps/BaMart/scripts.pory"
	.string "Please Come Again.$"

BaMartEmployeeBeforeStarter::
# 32 "data/maps/BaMart/scripts.pory"
	.string "Hey, I heard Prof. Sigillaria was looking\n"
	.string "for you.$"
