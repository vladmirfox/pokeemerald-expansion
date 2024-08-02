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

SilphCoMSg::
# 15 "data/maps/Ba/scripts.pory"
	.string "The Atlantia region used to be\n"
	.string "completely shut off the rest of the\l"
	.string "world.\n"
	.string "But then Silph Co. showed up in their\l"
	.string "fancy submarine!\n"
	.string "Now things are so much busier here.$"
