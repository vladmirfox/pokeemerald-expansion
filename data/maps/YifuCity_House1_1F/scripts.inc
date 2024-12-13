YifuCity_House1_1F_MapScripts::
	.byte 0


YifuCity_House1_1F_EventScript_Dad::
# 6 "data/maps/YifuCity_House1_1F/scripts.pory"
	lock
# 7 "data/maps/YifuCity_House1_1F/scripts.pory"
	faceplayer
# 8 "data/maps/YifuCity_House1_1F/scripts.pory"
	speakername YifuCity_House1_1F_EventScript_Dad_Text_0
# 9 "data/maps/YifuCity_House1_1F/scripts.pory"
	msgbox YifuCity_House1_1F_EventScript_Dad_Text_1
# 13 "data/maps/YifuCity_House1_1F/scripts.pory"
	closemessage
# 14 "data/maps/YifuCity_House1_1F/scripts.pory"
	release
	return


YifuCity_House1_1F_EventScript_Mom::
# 18 "data/maps/YifuCity_House1_1F/scripts.pory"
	lock
# 19 "data/maps/YifuCity_House1_1F/scripts.pory"
	faceplayer
# 20 "data/maps/YifuCity_House1_1F/scripts.pory"
	speakername YifuCity_House1_1F_EventScript_Mom_Text_0
# 21 "data/maps/YifuCity_House1_1F/scripts.pory"
	msgbox YifuCity_House1_1F_EventScript_Mom_Text_1
# 26 "data/maps/YifuCity_House1_1F/scripts.pory"
	closemessage
# 27 "data/maps/YifuCity_House1_1F/scripts.pory"
	release
	return


YifuCity_House1_1F_EventScript_Dad_Text_0:
# 8 "data/maps/YifuCity_House1_1F/scripts.pory"
	.string "Man$"

YifuCity_House1_1F_EventScript_Dad_Text_1:
# 10 "data/maps/YifuCity_House1_1F/scripts.pory"
	.string "Our kids are constantly yelling and\n"
	.string "running and bickering…\p"
	.string "I can't ever get anything done!$"

YifuCity_House1_1F_EventScript_Mom_Text_0:
# 20 "data/maps/YifuCity_House1_1F/scripts.pory"
	.string "Woman$"

YifuCity_House1_1F_EventScript_Mom_Text_1:
# 22 "data/maps/YifuCity_House1_1F/scripts.pory"
	.string "I bought the children two different\n"
	.string "dolls at the festival in Hanabi City…\p"
	.string "But now they're fighting over who has\n"
	.string "which!\p"
	.string "I should have gotten two identical\n"
	.string "dolls…$"
