YifuCity_MapScripts::
	.byte 0


YifuCity_EventScript_StoleMyMon::
# 6 "data/maps/YifuCity/scripts.pory"
	lock
# 7 "data/maps/YifuCity/scripts.pory"
	faceplayer
# 8 "data/maps/YifuCity/scripts.pory"
	speakername YifuCity_EventScript_StoleMyMon_Text_0
# 9 "data/maps/YifuCity/scripts.pory"
	msgbox YifuCity_EventScript_StoleMyMon_Text_1
# 13 "data/maps/YifuCity/scripts.pory"
	closemessage
# 14 "data/maps/YifuCity/scripts.pory"
	release
	return


YifuCity_EventScript_StoleMyMon_Text_0:
# 8 "data/maps/YifuCity/scripts.pory"
	.string "Man$"

YifuCity_EventScript_StoleMyMon_Text_1:
# 10 "data/maps/YifuCity/scripts.pory"
	.string "When I got my Shiftry back from the\n"
	.string "nurse, it had somehow changed into a\l"
	.string "Pidgey…\p"
	.string "Each day, Pokémon never cease to\n"
	.string "amaze me!$"
