YifuCity_CrobatShop_MapScripts::
	.byte 0


YifuCity_CrobatShop_Cashier::
# 6 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 7 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 8 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Cashier_Text_0
# 9 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Cashier_Text_1
# 13 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	return


YifuCity_CrobatShop_Cashier_Text_0:
# 8 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Cashier$"

YifuCity_CrobatShop_Cashier_Text_1:
# 10 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "G'day uh, welcome to the ye olde\n"
	.string "Crobat Shoppe!\p"
	.string "TODO EVA$"
