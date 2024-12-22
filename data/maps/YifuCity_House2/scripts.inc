YifuCity_House2_MapScripts::
	.byte 0


YifuCity_House2_Seamstress::
# 8 "data/maps/YifuCity_House2/scripts.pory"
	lock
# 9 "data/maps/YifuCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/YifuCity_House2/scripts.pory"
	speakername YifuCity_House2_Seamstress_Text_0
# 11 "data/maps/YifuCity_House2/scripts.pory"
	msgbox YifuCity_House2_Seamstress_Text_1
# 15 "data/maps/YifuCity_House2/scripts.pory"
	closemessage
# 17 "data/maps/YifuCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 18 "data/maps/YifuCity_House2/scripts.pory"
	waitmovement 0
# 20 "data/maps/YifuCity_House2/scripts.pory"
	speakername YifuCity_House2_Seamstress_Text_0
# 21 "data/maps/YifuCity_House2/scripts.pory"
	msgbox YifuCity_House2_Seamstress_Text_2
# 24 "data/maps/YifuCity_House2/scripts.pory"
	closemessage
# 26 "data/maps/YifuCity_House2/scripts.pory"
	applymovement 3, YifuCity_House2_Seamstress_Movement_0
# 27 "data/maps/YifuCity_House2/scripts.pory"
	waitmovement 0
# 29 "data/maps/YifuCity_House2/scripts.pory"
	release
	return


YifuCity_House2_Model::
# 33 "data/maps/YifuCity_House2/scripts.pory"
	lock
# 34 "data/maps/YifuCity_House2/scripts.pory"
	faceplayer
# 36 "data/maps/YifuCity_House2/scripts.pory"
	goto_if_set FLAG_OBTAINED_CHOICE_SCARF, YifuCity_House2_Model_2
# 42 "data/maps/YifuCity_House2/scripts.pory"
	speakername YifuCity_House2_Model_Text_1
# 43 "data/maps/YifuCity_House2/scripts.pory"
	msgbox YifuCity_House2_Model_Text_2
# 47 "data/maps/YifuCity_House2/scripts.pory"
	closemessage
# 49 "data/maps/YifuCity_House2/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 50 "data/maps/YifuCity_House2/scripts.pory"
	setflag FLAG_OBTAINED_CHOICE_SCARF
YifuCity_House2_Model_1:
# 53 "data/maps/YifuCity_House2/scripts.pory"
	release
	return

YifuCity_House2_Model_2:
# 37 "data/maps/YifuCity_House2/scripts.pory"
	msgbox YifuCity_House2_Model_Text_0
# 40 "data/maps/YifuCity_House2/scripts.pory"
	closemessage
	goto YifuCity_House2_Model_1


YifuCity_House2_Tarountula::
# 57 "data/maps/YifuCity_House2/scripts.pory"
	lock
# 58 "data/maps/YifuCity_House2/scripts.pory"
	faceplayer
# 59 "data/maps/YifuCity_House2/scripts.pory"
	playmoncry SPECIES_TAROUNTULA, CRY_MODE_NORMAL
# 60 "data/maps/YifuCity_House2/scripts.pory"
	speakername YifuCity_House2_Tarountula_Text_0
# 61 "data/maps/YifuCity_House2/scripts.pory"
	msgbox YifuCity_House2_Tarountula_Text_1
# 62 "data/maps/YifuCity_House2/scripts.pory"
	waitmoncry
# 63 "data/maps/YifuCity_House2/scripts.pory"
	closemessage
# 65 "data/maps/YifuCity_House2/scripts.pory"
	goto_if_unset FLAG_OBTAINED_DESTINY_KNOT, YifuCity_House2_Tarountula_2
YifuCity_House2_Tarountula_1:
# 72 "data/maps/YifuCity_House2/scripts.pory"
	release
	return

YifuCity_House2_Tarountula_2:
# 66 "data/maps/YifuCity_House2/scripts.pory"
	applymovement 3, YifuCity_House2_Tarountula_Movement_0
# 67 "data/maps/YifuCity_House2/scripts.pory"
	waitmovement 0
# 69 "data/maps/YifuCity_House2/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
# 70 "data/maps/YifuCity_House2/scripts.pory"
	setflag FLAG_OBTAINED_DESTINY_KNOT
	goto YifuCity_House2_Tarountula_1


# 26 "data/maps/YifuCity_House2/scripts.pory"
YifuCity_House2_Seamstress_Movement_0:
# 26 "data/maps/YifuCity_House2/scripts.pory"
	jump_in_place_right
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_right
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_right
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_up
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_right
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_right
# 26 "data/maps/YifuCity_House2/scripts.pory"
	face_up
# 26 "data/maps/YifuCity_House2/scripts.pory"
	delay_16
# 26 "data/maps/YifuCity_House2/scripts.pory"
	jump_in_place_up
# 26 "data/maps/YifuCity_House2/scripts.pory"
	delay_16
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_left
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_left
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_down
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_left
# 26 "data/maps/YifuCity_House2/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/YifuCity_House2/scripts.pory"
YifuCity_House2_Tarountula_Movement_0:
# 66 "data/maps/YifuCity_House2/scripts.pory"
	lock_facing_direction
# 66 "data/maps/YifuCity_House2/scripts.pory"
	jump_in_place_down
# 66 "data/maps/YifuCity_House2/scripts.pory"
	unlock_facing_direction
	step_end

YifuCity_House2_Seamstress_Text_0:
# 10 "data/maps/YifuCity_House2/scripts.pory"
	.string "Seamstress$"

YifuCity_House2_Seamstress_Text_1:
# 12 "data/maps/YifuCity_House2/scripts.pory"
	.string "I've been working day and night on a\n"
	.string "dress for the Samurai Chief's\l"
	.string "daugther.\p"
	.string "This will be my greatest work!$"

YifuCity_House2_Seamstress_Text_2:
# 22 "data/maps/YifuCity_House2/scripts.pory"
	.string "Tarountula, could you bring me some\n"
	.string "more of that red thread?$"

YifuCity_House2_Model_Text_0:
# 38 "data/maps/YifuCity_House2/scripts.pory"
	.string "That Tarountula creeps me out…\n"
	.string "It has so many legs…$"

YifuCity_House2_Model_Text_1:
# 42 "data/maps/YifuCity_House2/scripts.pory"
	.string "Model$"

YifuCity_House2_Model_Text_2:
# 44 "data/maps/YifuCity_House2/scripts.pory"
	.string "Yawn… Being a model is so tiring! My\n"
	.string "feet hurt from standing here for\l"
	.string "hours…\p"
	.string "I do get some sweet free stuff\n"
	.string "though! Here, you can have this, I\l"
	.string "already have this color!$"

YifuCity_House2_Tarountula_Text_0:
# 60 "data/maps/YifuCity_House2/scripts.pory"
	.string "Tarountula$"

YifuCity_House2_Tarountula_Text_1:
# 61 "data/maps/YifuCity_House2/scripts.pory"
	.string "Thshh!$"
