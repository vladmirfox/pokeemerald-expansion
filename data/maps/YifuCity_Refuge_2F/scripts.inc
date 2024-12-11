YifuCity_Refuge_2F_MapScripts::
	.byte 0


YifuCity_Refuge_2F_OricorioTrade::
	return


YifuCity_Refuge_2F_TravelingMerchant::
# 10 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	lock
# 11 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	faceplayer
# 12 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	speakername YifuCity_Refuge_2F_TravelingMerchant_Text_0
# 13 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	msgbox YifuCity_Refuge_2F_TravelingMerchant_Text_1
# 17 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	closemessage
# 18 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	release
	return


YifuCity_Refuge_2F_CoupleMan::
	return


YifuCity_Refuge_2F_CoupleWoman::
	return


YifuCity_Refuge_2F_TravelingMerchant_Text_0:
# 12 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	.string "Okada$"

YifuCity_Refuge_2F_TravelingMerchant_Text_1:
# 14 "data/maps/YifuCity_Refuge_2F/scripts.pory"
	.string "Oh, good evening, {PLAYER}! I'm\n"
	.string "exhausted! I've been walking since\l"
	.string "morning, I'm calling it a day.\p"
	.string "Never underestimate a good night's\n"
	.string "sleep!$"
