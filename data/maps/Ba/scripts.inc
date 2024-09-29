Ba_MapScripts::
	.byte 0


WalkingLady::
# 6 "data/maps/Ba/scripts.pory"
	applymovement 1, looktowards
# 7 "data/maps/Ba/scripts.pory"
	lockall
# 8 "data/maps/Ba/scripts.pory"
	msgbox SilphCoMsg
# 9 "data/maps/Ba/scripts.pory"
	releaseall
	return


# 11 "data/maps/Ba/scripts.pory"
looktowards:
# 12 "data/maps/Ba/scripts.pory"
	face_player
	step_end

BaSign::
# 16 "data/maps/Ba/scripts.pory"
	lockall
# 17 "data/maps/Ba/scripts.pory"
	msgbox BaSign_Text
# 18 "data/maps/Ba/scripts.pory"
	release
	return


SigillariaSign::
# 22 "data/maps/Ba/scripts.pory"
	lockall
# 23 "data/maps/Ba/scripts.pory"
	msgbox SigillariaSign_Text
# 24 "data/maps/Ba/scripts.pory"
	release
	return


UnownProgressBlock::
# 28 "data/maps/Ba/scripts.pory"
	lockall
# 29 "data/maps/Ba/scripts.pory"
	msgbox UnownSwarm
# 30 "data/maps/Ba/scripts.pory"
	release
	return


SilphCoMsg::
# 33 "data/maps/Ba/scripts.pory"
	.string "The Atlantia region used to be\n"
	.string "completely shut off the rest of the\l"
	.string "world. But then Silph Co. showed up in\l"
	.string "their fancy submarine! Now things are\l"
	.string "so much busier here.$"

BaSign_Text::
# 37 "data/maps/Ba/scripts.pory"
	.string "Welcome to the town of Ba, miles\n"
	.string "beneath Bel.$"

SigillariaSign_Text::
# 41 "data/maps/Ba/scripts.pory"
	.string "Prof. Sigillaria's lab.$"

UnownSwarm::
# 45 "data/maps/Ba/scripts.pory"
	.string "Looks like the Unown are swarming. Best\n"
	.string "not bother them...$"
