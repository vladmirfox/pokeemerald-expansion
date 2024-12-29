Agriville_MapScripts::
	.byte 0


AgrivilleZigzagoon1::
# 13 "data/maps/Agriville/scripts.pory"
	lockall
# 14 "data/maps/Agriville/scripts.pory"
	msgbox AgrivilleZigzagoon1_Text_0
# 15 "data/maps/Agriville/scripts.pory"
	msgbox AgrivilleZigzagoon1_Text_1
# 16 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Agriville_NPC_1::
# 20 "data/maps/Agriville/scripts.pory"
	applymovement 5, NPC_faceplayer
# 21 "data/maps/Agriville/scripts.pory"
	lockall
# 22 "data/maps/Agriville/scripts.pory"
	msgbox Agriville_NPC_1_Msg
# 23 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Agriville_NPC_2::
# 27 "data/maps/Agriville/scripts.pory"
	applymovement 3, NPC_faceplayer
# 28 "data/maps/Agriville/scripts.pory"
	lockall
# 29 "data/maps/Agriville/scripts.pory"
	msgbox Agriville_NPC_2_Msg
# 30 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Agriville_NPC_3::
# 34 "data/maps/Agriville/scripts.pory"
	applymovement 4, NPC_faceplayer
# 35 "data/maps/Agriville/scripts.pory"
	lockall
# 36 "data/maps/Agriville/scripts.pory"
	msgbox Agriville_NPC_3_Msg
# 37 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Agriville_NPC_4::
# 41 "data/maps/Agriville/scripts.pory"
	applymovement 6, NPC_faceplayer
# 42 "data/maps/Agriville/scripts.pory"
	lockall
# 43 "data/maps/Agriville/scripts.pory"
	msgbox Agriville_NPC_4_Msg
# 44 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Agriville_NPC_5::
# 48 "data/maps/Agriville/scripts.pory"
	applymovement 7, NPC_faceplayer
# 49 "data/maps/Agriville/scripts.pory"
	lockall
# 51 "data/maps/Agriville/scripts.pory"
	msgbox Agriville_NPC_5_Msg
# 52 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Pumpkin_Seller::
# 56 "data/maps/Agriville/scripts.pory"
	applymovement 8, NPC_faceplayer
# 57 "data/maps/Agriville/scripts.pory"
	lockall
# 58 "data/maps/Agriville/scripts.pory"
	msgbox Pumpkin_Seller_Msg_1
# 59 "data/maps/Agriville/scripts.pory"
	releaseall
	return


Gym1Custscene::
# 63 "data/maps/Agriville/scripts.pory"
	lockall
# 65 "data/maps/Agriville/scripts.pory"
	releaseall
# 66 "data/maps/Agriville/scripts.pory"
	applymovement 12, TalkUp
# 67 "data/maps/Agriville/scripts.pory"
	waitmovement 12
# 68 "data/maps/Agriville/scripts.pory"
	lockall
# 69 "data/maps/Agriville/scripts.pory"
	msgbox Gym1CustsceneText1
# 72 "data/maps/Agriville/scripts.pory"
	releaseall
# 73 "data/maps/Agriville/scripts.pory"
	applymovement 9, TalkDown
# 74 "data/maps/Agriville/scripts.pory"
	waitmovement 9
# 75 "data/maps/Agriville/scripts.pory"
	lockall
# 76 "data/maps/Agriville/scripts.pory"
	msgbox Gym1CustsceneText2
# 79 "data/maps/Agriville/scripts.pory"
	releaseall
# 80 "data/maps/Agriville/scripts.pory"
	applymovement 12, TalkUp
# 81 "data/maps/Agriville/scripts.pory"
	waitmovement 12
# 82 "data/maps/Agriville/scripts.pory"
	lockall
# 83 "data/maps/Agriville/scripts.pory"
	msgbox Gym1Custscene_Text_0
# 84 "data/maps/Agriville/scripts.pory"
	releaseall
# 85 "data/maps/Agriville/scripts.pory"
	applymovement 12, NPC_facedown
# 86 "data/maps/Agriville/scripts.pory"
	waitmovement 12
# 87 "data/maps/Agriville/scripts.pory"
	lockall
# 88 "data/maps/Agriville/scripts.pory"
	msgbox Gym1Custscene_Text_1
# 89 "data/maps/Agriville/scripts.pory"
	releaseall
# 90 "data/maps/Agriville/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerCutsceneMovement
# 91 "data/maps/Agriville/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 92 "data/maps/Agriville/scripts.pory"
	lockall
# 93 "data/maps/Agriville/scripts.pory"
	releaseall
# 94 "data/maps/Agriville/scripts.pory"
	applymovement 12, MayaWalkOffScreen
# 95 "data/maps/Agriville/scripts.pory"
	waitmovement 12
# 96 "data/maps/Agriville/scripts.pory"
	removeobject 12
# 99 "data/maps/Agriville/scripts.pory"
	applymovement 9, Gym_Walk_to_player
# 100 "data/maps/Agriville/scripts.pory"
	applymovement 9, NPC_faceplayer
# 101 "data/maps/Agriville/scripts.pory"
	waitmovement 9
# 102 "data/maps/Agriville/scripts.pory"
	lockall
# 103 "data/maps/Agriville/scripts.pory"
	msgbox Gym1CustsceneText3
# 104 "data/maps/Agriville/scripts.pory"
	releaseall
# 105 "data/maps/Agriville/scripts.pory"
	applymovement 9, WalkOffSceen
# 106 "data/maps/Agriville/scripts.pory"
	waitmovement 9
# 107 "data/maps/Agriville/scripts.pory"
	removeobject 9
# 108 "data/maps/Agriville/scripts.pory"
	setflag FLAG_AGRIVILLE_GYM
# 109 "data/maps/Agriville/scripts.pory"
	setvar VAR_AGRIVILLE_STATE, 1
# 110 "data/maps/Agriville/scripts.pory"
	releaseall
	return


# 113 "data/maps/Agriville/scripts.pory"
NPC_faceplayer:
# 114 "data/maps/Agriville/scripts.pory"
	face_player
	step_end

# 116 "data/maps/Agriville/scripts.pory"
NPC_facedown:
# 117 "data/maps/Agriville/scripts.pory"
	face_down
	step_end

# 120 "data/maps/Agriville/scripts.pory"
Gym_Walk_to_player:
# 121 "data/maps/Agriville/scripts.pory"
	walk_down
# 121 "data/maps/Agriville/scripts.pory"
	walk_down
# 121 "data/maps/Agriville/scripts.pory"
	walk_down
# 122 "data/maps/Agriville/scripts.pory"
	face_right
	step_end

# 125 "data/maps/Agriville/scripts.pory"
WalkOffSceen:
# 126 "data/maps/Agriville/scripts.pory"
	walk_down
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 127 "data/maps/Agriville/scripts.pory"
	walk_left
# 128 "data/maps/Agriville/scripts.pory"
	walk_up
# 129 "data/maps/Agriville/scripts.pory"
	walk_left
	step_end

# 172 "data/maps/Agriville/scripts.pory"
TalkUp:
# 173 "data/maps/Agriville/scripts.pory"
	walk_in_place_fast_up
	step_end

# 176 "data/maps/Agriville/scripts.pory"
TalkDown:
# 177 "data/maps/Agriville/scripts.pory"
	walk_in_place_down
	step_end

# 179 "data/maps/Agriville/scripts.pory"
PlayerCutsceneMovement:
# 180 "data/maps/Agriville/scripts.pory"
	face_down
# 181 "data/maps/Agriville/scripts.pory"
	walk_down
# 182 "data/maps/Agriville/scripts.pory"
	face_right
# 183 "data/maps/Agriville/scripts.pory"
	walk_right
# 184 "data/maps/Agriville/scripts.pory"
	face_left
	step_end

# 187 "data/maps/Agriville/scripts.pory"
MayaWalkOffScreen:
# 188 "data/maps/Agriville/scripts.pory"
	face_down
# 189 "data/maps/Agriville/scripts.pory"
	walk_down
# 190 "data/maps/Agriville/scripts.pory"
	walk_down
# 191 "data/maps/Agriville/scripts.pory"
	walk_down
# 192 "data/maps/Agriville/scripts.pory"
	face_left
# 193 "data/maps/Agriville/scripts.pory"
	walk_left
# 194 "data/maps/Agriville/scripts.pory"
	walk_left
# 195 "data/maps/Agriville/scripts.pory"
	walk_left
# 196 "data/maps/Agriville/scripts.pory"
	walk_left
# 197 "data/maps/Agriville/scripts.pory"
	walk_left
# 198 "data/maps/Agriville/scripts.pory"
	walk_left
# 199 "data/maps/Agriville/scripts.pory"
	walk_left
# 200 "data/maps/Agriville/scripts.pory"
	face_up
# 201 "data/maps/Agriville/scripts.pory"
	walk_up
# 202 "data/maps/Agriville/scripts.pory"
	face_left
# 203 "data/maps/Agriville/scripts.pory"
	walk_left
	step_end

AgrivilleZigzagoon1_Text_0:
# 14 "data/maps/Agriville/scripts.pory"
	.string "CRUNCH! MUNCH!$"

AgrivilleZigzagoon1_Text_1:
# 15 "data/maps/Agriville/scripts.pory"
	.string "The Zigzagoon is chowing down on\na pumpkin.$"

Gym1Custscene_Text_0:
# 83 "data/maps/Agriville/scripts.pory"
	.string "Please save him, Ms. Tessa!$"

Gym1Custscene_Text_1:
# 88 "data/maps/Agriville/scripts.pory"
	.string "Excuse me.$"

Agriville_NPC_1_Msg::
# 132 "data/maps/Agriville/scripts.pory"
	.string "Agriville is known in the region for its\n"
	.string "fantastic pumpkins.$"

Agriville_NPC_2_Msg::
# 136 "data/maps/Agriville/scripts.pory"
	.string "Can't chat now! I'm gonna to beat my\n"
	.string "record!$"

Agriville_NPC_3_Msg::
# 140 "data/maps/Agriville/scripts.pory"
	.string "Silph Co. set up the Pokemon League\n"
	.string "program here. Agriville was one of the\l"
	.string "first towns to get a gym.$"

Agriville_NPC_4_Msg::
# 144 "data/maps/Agriville/scripts.pory"
	.string "I love training on the beach in the\n"
	.string "morning!$"

Agriville_NPC_5_Msg::
# 148 "data/maps/Agriville/scripts.pory"
	.string "Tessa's bug type Pokemon destroyed my\n"
	.string "psychic type Pokemon. Maybe I should\l"
	.string "branch out to a rock or fire type...$"

Pumpkin_Seller_Msg_1::
# 152 "data/maps/Agriville/scripts.pory"
	.string "Hey, you're a pokemon trainer right?\n"
	.string "Sal found a strange Pokemon in the\l"
	.string "fields recently. They might be willing to\l"
	.string "let you take it off their hand.$"

Pumpkin_Seller_Msg_2::
# 156 "data/maps/Agriville/scripts.pory"
	.string "I head Sal gave you that Pokemon! I\n"
	.string "hope you are getting along$"

Gym1CustsceneText1::
# 160 "data/maps/Agriville/scripts.pory"
	.string "Tessa! The scientists stole my Scyther!$"

Gym1CustsceneText2::
# 164 "data/maps/Agriville/scripts.pory"
	.string "No worries, Maya. I won't let anybody\n"
	.string "steal Pokemon in out forest. Wait for me\l"
	.string "at your Mother's.$"

Gym1CustsceneText3::
# 168 "data/maps/Agriville/scripts.pory"
	.string "Oh, a gym challenger? I'm sorry but I\n"
	.string "hase business in Appel Forest. I'll be\l"
	.string "back later.$"
