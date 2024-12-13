YifuCity_ClothingShop_MapScripts::
	.byte 0


YifuCity_ClothingShop_EventScript_Yutaka::
	return


YifuCity_ClothingShop_EventScript_Cashier::
# 11 "data/maps/YifuCity_ClothingShop/scripts.pory"
	lock
# 12 "data/maps/YifuCity_ClothingShop/scripts.pory"
	faceplayer
# 13 "data/maps/YifuCity_ClothingShop/scripts.pory"
	speakername YifuCity_ClothingShop_EventScript_Cashier_Text_0
# 14 "data/maps/YifuCity_ClothingShop/scripts.pory"
	msgbox YifuCity_ClothingShop_EventScript_Cashier_Text_1
# 18 "data/maps/YifuCity_ClothingShop/scripts.pory"
	release
	return


YifuCity_ClothingShop_EventScript_Customer::
# 23 "data/maps/YifuCity_ClothingShop/scripts.pory"
	lock
# 24 "data/maps/YifuCity_ClothingShop/scripts.pory"
	faceplayer
# 25 "data/maps/YifuCity_ClothingShop/scripts.pory"
	speakername YifuCity_ClothingShop_EventScript_Customer_Text_0
# 26 "data/maps/YifuCity_ClothingShop/scripts.pory"
	msgbox YifuCity_ClothingShop_EventScript_Customer_Text_1
# 32 "data/maps/YifuCity_ClothingShop/scripts.pory"
	release
	return


YifuCity_ClothingShop_EventScript_Cashier_Text_0:
# 13 "data/maps/YifuCity_ClothingShop/scripts.pory"
	.string "Cashier$"

YifuCity_ClothingShop_EventScript_Cashier_Text_1:
# 15 "data/maps/YifuCity_ClothingShop/scripts.pory"
	.string "Sorry, everything's sold out at the\n"
	.string "moment!\p"
	.string "We'll be restocking soon.$"

YifuCity_ClothingShop_EventScript_Customer_Text_0:
# 25 "data/maps/YifuCity_ClothingShop/scripts.pory"
	.string "Girl$"

YifuCity_ClothingShop_EventScript_Customer_Text_1:
# 27 "data/maps/YifuCity_ClothingShop/scripts.pory"
	.string "Ohmigosh ohmigosh ohmigosh!!\n"
	.string "Master Yutaka is here!!\p"
	.string "She's sooo beautiful, and her clothes\n"
	.string "are amazing!\p"
	.string "Did you know she's a designer, too?\n"
	.string "There's a whole clothing line to her\l"
	.string "name!$"
