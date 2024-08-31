# 1 "data/maps/LuxuraIsland/scripts.pory"

# 2 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts::
# 3 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 6 "data/maps/LuxuraIsland/scripts.pory"
	.byte 0
# 7 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/LuxuraIsland/scripts.pory"
map_script_2 VAR_ROUTE102_STATE, 9, stroll
# 9 "data/maps/LuxuraIsland/scripts.pory"
.2byte 0

ran::
# 12 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 13 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x496
# 14 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, cam
# 16 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 17 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, face
# 18 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 2, mol
# 19 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 20 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 21 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_0
# 22 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 23 "data/maps/LuxuraIsland/scripts.pory"
	namebox gardener
# 24 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1
# 25 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 26 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 27 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2
# 28 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 29 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 30 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3
# 31 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 32 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 33 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 34 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 35 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 36 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 37 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 38 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4
# 39 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 40 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 41 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5
# 42 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 43 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 44 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6
# 45 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 46 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 47 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 48 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 49 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 50 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7
# 51 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 52 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 53 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 54 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8
# 55 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 56 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 57 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 58 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 59 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 60 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9
# 61 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 62 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 63 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 64 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 65 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 66 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 67 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 68 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 69 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 70 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 71 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 72 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 73 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 74 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 75 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 76 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 77 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 78 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 79 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 80 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 81 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 82 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 83 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 84 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 85 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 86 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 87 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 88 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 89 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 90 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 91 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 92 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 93 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 94 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 96 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 97 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 98 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 99 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 100 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 101 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 102 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 104 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 105 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 106 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 107 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 108 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 109 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 110 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 111 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 112 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 113 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 114 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 115 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 116 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 117 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 118 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 119 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 120 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 121 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 123 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 124 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 125 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 40
# 126 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 127 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE102_STATE, 5
	return


# 130 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 131 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 131 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 131 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 132 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 135 "data/maps/LuxuraIsland/scripts.pory"
in:
# 136 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 136 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 136 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 137 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 139 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 140 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 141 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 141 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 142 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 143 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 145 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 146 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 148 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 149 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 151 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 152 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 153 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 155 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 156 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 157 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 159 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 160 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 161 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 163 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 164 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 164 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 167 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 168 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 169 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 171 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 172 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 173 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 174 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 177 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 178 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 178 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 178 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 180 "data/maps/LuxuraIsland/scripts.pory"
move:
# 181 "data/maps/LuxuraIsland/scripts.pory"
	emote_double_exclamation_mark
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 182 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 183 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 185 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 186 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 187 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 189 "data/maps/LuxuraIsland/scripts.pory"
run:
# 190 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 191 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 193 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/LuxuraIsland/scripts.pory"
face:
# 200 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 201 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 203 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 204 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 207 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 208 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 210 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 211 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 212 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 212 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 217 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 218 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 219 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 220 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 223 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 224 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 225 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 227 "data/maps/LuxuraIsland/scripts.pory"
player:
# 228 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 229 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 231 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 232 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 233 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 236 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 237 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 240 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 241 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 242 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 243 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 244 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 245 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 246 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 247 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 248 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 249 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 250 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 251 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 252 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 253 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 255 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 256 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 257 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 258 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE102_STATE, 6
	return


indo::
# 261 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 262 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innn
# 263 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indo_Text_0
# 264 "data/maps/LuxuraIsland/scripts.pory"
	goto indoor
	return


# 267 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 268 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 269 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 271 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 272 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 273 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 274 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 276 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 277 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

indoo::
# 281 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 282 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 283 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indo_Text_0
# 284 "data/maps/LuxuraIsland/scripts.pory"
	goto indoor
	return


# 286 "data/maps/LuxuraIsland/scripts.pory"
io:
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

ind::
# 290 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 291 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ioo
# 292 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indo_Text_0
# 293 "data/maps/LuxuraIsland/scripts.pory"
	goto indoor
	return


# 295 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 296 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 297 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 302 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 303 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, str
# 304 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 305 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 306 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 307 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 308 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 309 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 310 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 311 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 312 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 313 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, CAN_LEAVE_ROUTE
# 314 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 315 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE102_STATE, 10
	return


# 318 "data/maps/LuxuraIsland/scripts.pory"
str:
# 319 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 319 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 322 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 323 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 324 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 325 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 326 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 327 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


# 330 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 331 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 331 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 331 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 335 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_ROUTE102_STATE, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 341 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_ROUTE102_STATE, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 347 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_ROUTE102_STATE, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 353 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_ROUTE102_STATE, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 362 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_ROUTE102_STATE, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 336 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 337 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 338 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 339 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 342 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 343 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 344 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 345 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 348 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 349 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 350 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 351 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 354 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 355 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 356 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 357 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 358 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 359 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 360 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 363 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 364 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 365 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 366 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 367 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 368 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 369 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return


strolll::
# 374 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 375 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 376 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, strp
# 377 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 378 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 379 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 380 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 383 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 384 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 385 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 386 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 390 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 391 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 392 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 393 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 397 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 398 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 399 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 400 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 403 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 404 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 405 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4AA
# 406 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


bloodsee::
# 411 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 412 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 413 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, exclam
# 414 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 415 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 416 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 417 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 418 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 419 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return


blo::
# 423 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 424 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 425 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, io
# 426 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 427 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 428 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 429 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 434 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 435 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 436 "data/maps/LuxuraIsland/scripts.pory"
	doweather
	return


ran_Text_0:
# 21 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that's perfect.$"

ran_Text_1:
# 24 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow! Lady Mira,You really have a knack\n"
	.string "for this.\p"
	.string "It turned out so beautiful.$"

ran_Text_2:
# 27 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No no,It's all your hard wor..$"

ran_Text_3:
# 30 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Miiiirrrraaaa!!$"

ran_Text_4:
# 38 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with that Ramen,I ran\n"
	.string "down so fast and then they all started\l"
	.string "laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily$"

ran_Text_5:
# 41 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 44 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 50 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily,Mira.$"

ran_Text_8:
# 54 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can,Master Xylar.$"

ran_Text_9:
# 60 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 64 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 70 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well,this wasn't part of the plan.$"

ran_Text_12:
# 73 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha,Serves you right.\p"
	.string "I guess now I have to help you out,huh?$"

ran_Text_13:
# 78 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand,i'll pull you out.$"

ran_Text_14:
# 81 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 87 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 92 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 104 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 107 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 110 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 113 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make Ramen\n"
	.string "for you and this time for real.$"

ran_Text_21:
# 116 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 119 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Promise.Now,let's get inside before we\n"
	.string "catch a cold.$"

trig1_Text_0:
# 219 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 248 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar,You should take a bath and\n"
	.string "get changed before Lady Elysia sees\l"
	.string "you like this.$"

indoor_Text_1:
# 251 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.I'll do that.$"

indo_Text_0:
# 263 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should hurry$"

stroll_Text_0:
# 306 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 311 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

strolll_Text_0:
# 378 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

Sailor_Text_0:
# 385 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I have to tell you, your\n"
	.string "father is one of the bravest men I've\l"
	.string "ever known.\p"
	.string "The way he stood up against the Dark\n"
	.string "Force to protect us all,I've never seen\l"
	.string "courage like that.\p"
	.string "Without him, who knows what would have\n"
	.string "happened?\p"
	.string "He's a true hero, and it's an honor to\n"
	.string "serve him.$"

sailorr_Text_0:
# 392 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 399 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I'll never forget the day\n"
	.string "your Father faced the Dark Force.\p"
	.string "The skies turned dark, and portals\n"
	.string "opened everywhere, unleashing chaos.\p"
	.string "It was the most terrifying thing I've\n"
	.string "ever seen.\p"
	.string "But your father, he didn't even flinch.\p"
	.string "He stood firm, right in the face of that\n"
	.string "monster, and fought with a bravery I've\l"
	.string "never witnessed before.\p"
	.string "We all owe him our lives for what he did\n"
	.string "that day.$"

blood_Text_0:
# 404 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 416 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

gardener::
# 196 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
