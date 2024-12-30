CrobatHideout_1F_MapScripts::
	.byte 0


CrobatHideout_1F_EventScript_Grunt1::
# 7 "data/maps/CrobatHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_DUMMY, CrobatHideout_1F_EventScript_Grunt1_Text_0, CrobatHideout_1F_EventScript_Grunt1_Text_1
# 12 "data/maps/CrobatHideout_1F/scripts.pory"
	speakername CrobatHideout_1F_EventScript_Grunt1_Text_2
# 13 "data/maps/CrobatHideout_1F/scripts.pory"
	msgbox CrobatHideout_1F_EventScript_Grunt1_Text_3
# 16 "data/maps/CrobatHideout_1F/scripts.pory"
	closemessage
	end


CrobatHideout_1F_EventScript_Grunt1_Text_0:
# 9 "data/maps/CrobatHideout_1F/scripts.pory"
	.string "It's the intruder!!$"

CrobatHideout_1F_EventScript_Grunt1_Text_1:
# 10 "data/maps/CrobatHideout_1F/scripts.pory"
	.string "Boss, help us!$"

CrobatHideout_1F_EventScript_Grunt1_Text_2:
# 12 "data/maps/CrobatHideout_1F/scripts.pory"
	.string "Zubat Grunt$"

CrobatHideout_1F_EventScript_Grunt1_Text_3:
# 14 "data/maps/CrobatHideout_1F/scripts.pory"
	.string "You got nothin' on us!\n"
	.string "Err I mean, we done nothin' wrong!$"
