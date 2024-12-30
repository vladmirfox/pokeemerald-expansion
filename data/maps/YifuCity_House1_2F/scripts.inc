YifuCity_House1_2F_MapScripts::
	.byte 0


YifuCity_House1_2F_EventScript_ChildGiveDoll::
# 6 "data/maps/YifuCity_House1_2F/scripts.pory"
	lock
# 7 "data/maps/YifuCity_House1_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_FROM_CHILD, YifuCity_House1_2F_EventScript_ChildGiveDoll_2
# 15 "data/maps/YifuCity_House1_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, YifuCity_House1_2F_EventScript_ChildGiveDoll_5
# 32 "data/maps/YifuCity_House1_2F/scripts.pory"
	speakername YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_0
# 33 "data/maps/YifuCity_House1_2F/scripts.pory"
	msgbox YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_4
# 36 "data/maps/YifuCity_House1_2F/scripts.pory"
	closemessage
YifuCity_House1_2F_EventScript_ChildGiveDoll_1:
# 40 "data/maps/YifuCity_House1_2F/scripts.pory"
	release
	return

YifuCity_House1_2F_EventScript_ChildGiveDoll_2:
# 8 "data/maps/YifuCity_House1_2F/scripts.pory"
	faceplayer
# 9 "data/maps/YifuCity_House1_2F/scripts.pory"
	speakername YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_0
# 10 "data/maps/YifuCity_House1_2F/scripts.pory"
	msgbox YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_1
# 13 "data/maps/YifuCity_House1_2F/scripts.pory"
	closemessage
	goto YifuCity_House1_2F_EventScript_ChildGiveDoll_1

YifuCity_House1_2F_EventScript_ChildGiveDoll_5:
# 16 "data/maps/YifuCity_House1_2F/scripts.pory"
	faceplayer
# 17 "data/maps/YifuCity_House1_2F/scripts.pory"
	speakername YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_0
# 18 "data/maps/YifuCity_House1_2F/scripts.pory"
	msgbox YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_2
# 21 "data/maps/YifuCity_House1_2F/scripts.pory"
	closemessage
# 24 "data/maps/YifuCity_House1_2F/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 26 "data/maps/YifuCity_House1_2F/scripts.pory"
	speakername YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_0
# 27 "data/maps/YifuCity_House1_2F/scripts.pory"
	msgbox YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_3
# 30 "data/maps/YifuCity_House1_2F/scripts.pory"
	closemessage
	goto YifuCity_House1_2F_EventScript_ChildGiveDoll_1


YifuCity_House1_2F_EventScript_ChildStolenDoll::
# 45 "data/maps/YifuCity_House1_2F/scripts.pory"
	lock
# 46 "data/maps/YifuCity_House1_2F/scripts.pory"
	faceplayer
# 47 "data/maps/YifuCity_House1_2F/scripts.pory"
	speakername YifuCity_House1_2F_EventScript_ChildStolenDoll_Text_0
# 48 "data/maps/YifuCity_House1_2F/scripts.pory"
	msgbox YifuCity_House1_2F_EventScript_ChildStolenDoll_Text_1
# 51 "data/maps/YifuCity_House1_2F/scripts.pory"
	closemessage
# 52 "data/maps/YifuCity_House1_2F/scripts.pory"
	release
	return


YifuCity_House1_2F_EventScript_Vulpix::
# 56 "data/maps/YifuCity_House1_2F/scripts.pory"
	lock
# 57 "data/maps/YifuCity_House1_2F/scripts.pory"
	faceplayer
# 58 "data/maps/YifuCity_House1_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 59 "data/maps/YifuCity_House1_2F/scripts.pory"
	speakername YifuCity_House1_2F_EventScript_Vulpix_Text_0
# 60 "data/maps/YifuCity_House1_2F/scripts.pory"
	msgbox YifuCity_House1_2F_EventScript_Vulpix_Text_1
# 63 "data/maps/YifuCity_House1_2F/scripts.pory"
	waitmoncry
# 64 "data/maps/YifuCity_House1_2F/scripts.pory"
	closemessage
# 65 "data/maps/YifuCity_House1_2F/scripts.pory"
	release
	return


YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_0:
# 9 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Little boy$"

YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_1:
# 11 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Keep your mouth shut about it!$"

YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_2:
# 19 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Quick, take this!$"

YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_3:
# 28 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Tell no one! I was never here!$"

YifuCity_House1_2F_EventScript_ChildGiveDoll_Text_4:
# 34 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Quit following me around!!$"

YifuCity_House1_2F_EventScript_ChildStolenDoll_Text_0:
# 47 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Little girl$"

YifuCity_House1_2F_EventScript_ChildStolenDoll_Text_1:
# 49 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "My brother is meaaannnn!\n"
	.string "He won't give me my doll back!!$"

YifuCity_House1_2F_EventScript_Vulpix_Text_0:
# 59 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Vulpix$"

YifuCity_House1_2F_EventScript_Vulpix_Text_1:
# 61 "data/maps/YifuCity_House1_2F/scripts.pory"
	.string "Yap!$"
