# 1 "data/maps/Wyrmshire/scripts.pory"

# 2 "data/maps/Wyrmshire/scripts.pory"
Wyrmshire_MapScripts::
# 3 "data/maps/Wyrmshire/scripts.pory"
	.byte 0

Wyrmshire_Sign1::
# 7 "data/maps/Wyrmshire/scripts.pory"
	lockall
# 8 "data/maps/Wyrmshire/scripts.pory"
	msgbox Wyrmshire_Sign1_Text_0
# 9 "data/maps/Wyrmshire/scripts.pory"
	releaseall
	return


Wyrmshire_Sign1_Text_0:
# 8 "data/maps/Wyrmshire/scripts.pory"
	.string "Wyrmshire - The Birthplace of Dragons!$"
