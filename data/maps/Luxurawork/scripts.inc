# 1 "data/maps/Luxurawork/scripts.pory"

# 2 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts::
# 3 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Luxurawork/scripts.pory"
	.byte 0
# 6 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 11, trage
# 8 "data/maps/Luxurawork/scripts.pory"
.2byte 0

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 11 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 30 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 48 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 13 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 14 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 15 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 16 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 17 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 18 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 19 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 20 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 21 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 22 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 23 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 24 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 25 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 26 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 27 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 28 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 31 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 32 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 33 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 34 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 35 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 36 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 37 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 38 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 39 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 40 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 41 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 42 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 43 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 44 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 45 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 46 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 47 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 49 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 50 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 51 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 52 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 53 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 54 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 55 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 56 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 57 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 58 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 59 "data/maps/Luxurawork/scripts.pory"
	addobject 11
# 60 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 61 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 62 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 63 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 64 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 65 "data/maps/Luxurawork/scripts.pory"
	addobject 17
# 66 "data/maps/Luxurawork/scripts.pory"
	addobject 18
# 67 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 68 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 69 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 70 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 30 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 76 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 114 "data/maps/Luxurawork/scripts.pory"
	lockall
# 115 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 116 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 117 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 118 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 119 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 77 "data/maps/Luxurawork/scripts.pory"
	lockall
# 78 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 79 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 80 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 81 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 82 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 83 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 84 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 85 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 86 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 87 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 88 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 89 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 90 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 91 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 92 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 93 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 94 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 95 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 96 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 97 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 98 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 99 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 100 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 101 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 102 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 103 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 104 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 105 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 106 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 107 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 108 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 109 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 110 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 111 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 112 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 122 "data/maps/Luxurawork/scripts.pory"
exclam:
# 123 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 127 "data/maps/Luxurawork/scripts.pory"
	lockall
# 128 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, players
# 129 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 130 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 131 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 132 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 133 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 134 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 135 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0, MSGBOX_AUTOCLOSE
# 136 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 137 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 138 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 139 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1, MSGBOX_AUTOCLOSE
# 140 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 141 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 142 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 143 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 144 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 145 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 146 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 147 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 148 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, finish
# 149 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 150 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 151 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 152 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 153 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 154 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 155 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, atk
# 156 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 157 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, faint
# 158 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 159 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 160 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, invisible
# 161 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 162 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 163 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 164 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 165 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2, MSGBOX_AUTOCLOSE
# 166 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 167 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 168 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3, MSGBOX_AUTOCLOSE
# 169 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 170 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 171 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 172 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, run
# 173 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 174 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 175 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 176 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 177 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, visible
# 178 "data/maps/Luxurawork/scripts.pory"
	applymovement 18, invisible
# 179 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 181 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, exclam
# 182 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 183 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5, MSGBOX_AUTOCLOSE
# 184 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 185 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 186 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, ded
# 187 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 188 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6, MSGBOX_AUTOCLOSE
# 189 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 190 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 191 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7, MSGBOX_AUTOCLOSE
# 192 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 193 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, revert
# 194 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, reverte
# 195 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 196 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 197 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 198 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 199 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 200 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9, MSGBOX_AUTOCLOSE
# 201 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 202 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 203 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 204 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 208 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 209 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 210 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 211 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 212 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 213 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 214 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 215 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 216 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 217 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 218 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 219 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 220 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12, MSGBOX_AUTOCLOSE
# 221 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 222 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 223 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13, MSGBOX_AUTOCLOSE
# 224 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 225 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 226 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14, MSGBOX_AUTOCLOSE
# 227 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 228 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15, MSGBOX_AUTOCLOSE
# 229 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, capture
# 230 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, capture
# 231 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 232 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 233 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16, MSGBOX_AUTOCLOSE
# 234 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 235 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 236 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 237 "data/maps/Luxurawork/scripts.pory"
	warp MAP_LUXURA_INDOOR, 7, 6
# 238 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 241 "data/maps/Luxurawork/scripts.pory"
capture:
# 242 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 242 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/Luxurawork/scripts.pory"
back:
# 253 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 253 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 253 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 253 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 255 "data/maps/Luxurawork/scripts.pory"
reverte:
# 256 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 257 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 258 "data/maps/Luxurawork/scripts.pory"
	face_up
# 259 "data/maps/Luxurawork/scripts.pory"
	face_left
# 260 "data/maps/Luxurawork/scripts.pory"
	face_down
# 261 "data/maps/Luxurawork/scripts.pory"
	face_right
# 262 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 266 "data/maps/Luxurawork/scripts.pory"
revert:
# 267 "data/maps/Luxurawork/scripts.pory"
	face_left
# 268 "data/maps/Luxurawork/scripts.pory"
	face_down
# 269 "data/maps/Luxurawork/scripts.pory"
	face_right
# 270 "data/maps/Luxurawork/scripts.pory"
	face_up
# 271 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 273 "data/maps/Luxurawork/scripts.pory"
moq:
# 274 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 274 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 274 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 276 "data/maps/Luxurawork/scripts.pory"
faint:
# 277 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 278 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 279 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 281 "data/maps/Luxurawork/scripts.pory"
players:
# 282 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 283 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 285 "data/maps/Luxurawork/scripts.pory"
atk:
# 286 "data/maps/Luxurawork/scripts.pory"
	face_right
# 287 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 288 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 288 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 288 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 289 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 289 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 289 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 290 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 292 "data/maps/Luxurawork/scripts.pory"
visible:
# 293 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 295 "data/maps/Luxurawork/scripts.pory"
invisible:
# 296 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 298 "data/maps/Luxurawork/scripts.pory"
mo:
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 299 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 301 "data/maps/Luxurawork/scripts.pory"
finish:
# 302 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 302 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 302 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 303 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 303 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 303 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 305 "data/maps/Luxurawork/scripts.pory"
ded:
# 306 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 306 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 306 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

dad_Text_0:
# 80 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 83 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 86 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 89 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 92 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask, son.$"

dad_Text_5:
# 97 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in\n"
	.string "two days.$"

dad_Text_6:
# 100 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 103 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 106 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 109 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 117 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 135 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trage_Text_1:
# 139 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trage_Text_2:
# 165 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trage_Text_3:
# 168 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge.Pathetically so.\p"
	.string "Now it's the end for you.$"

trage_Text_4:
# 175 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

trage_Text_5:
# 183 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_6:
# 188 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_7:
# 191 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_8:
# 197 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_9:
# 200 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa, your powers... they're sealed!\n"
	.string "You're too weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_10:
# 209 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_11:
# 214 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_12:
# 220 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(He stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_13:
# 223 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_14:
# 226 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_15:
# 228 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_16:
# 233 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

surge::
# 245 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 248 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
