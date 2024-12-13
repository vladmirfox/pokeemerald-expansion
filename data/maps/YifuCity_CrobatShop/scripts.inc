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


YifuCity_CrobatShop_Customer1::
# 17 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 18 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 19 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Customer1_Text_0
# 20 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Customer1_Text_1
# 23 "data/maps/YifuCity_CrobatShop/scripts.pory"
	release
	return


YifuCity_CrobatShop_Customer2::
# 27 "data/maps/YifuCity_CrobatShop/scripts.pory"
	lock
# 28 "data/maps/YifuCity_CrobatShop/scripts.pory"
	faceplayer
# 29 "data/maps/YifuCity_CrobatShop/scripts.pory"
	speakername YifuCity_CrobatShop_Customer1_Text_0
# 30 "data/maps/YifuCity_CrobatShop/scripts.pory"
	msgbox YifuCity_CrobatShop_Customer2_Text_0
# 33 "data/maps/YifuCity_CrobatShop/scripts.pory"
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

YifuCity_CrobatShop_Customer1_Text_0:
# 19 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "Customer$"

YifuCity_CrobatShop_Customer1_Text_1:
# 21 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "This place is amazing!\n"
	.string "How is everything so cheap?!$"

YifuCity_CrobatShop_Customer2_Text_0:
# 31 "data/maps/YifuCity_CrobatShop/scripts.pory"
	.string "These Super Balls looks… different,\n"
	.string "somehow…$"
