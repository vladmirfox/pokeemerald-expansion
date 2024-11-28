Luxurawoods_MapScripts::
# 2 "data/maps/Luxurawoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, mewtwofind
	.byte 0


mewtwofind::
# 5 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_eq mewtwofind_1
# 20 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 16
	goto_if_eq mewtwofind_2
# 44 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_eq mewtwofind_3
# 68 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_gt mewtwofind_4
	return

mewtwofind_1:
# 6 "data/maps/Luxurawoods/scripts.pory"
	addobject 1
# 7 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4AF
# 8 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 9 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 10 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 11 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 12 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 13 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 14 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 15 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 16 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 17 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 18 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B3
	return

mewtwofind_2:
# 21 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 22 "data/maps/Luxurawoods/scripts.pory"
	addobject 2
# 23 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 24 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 25 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 26 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 27 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 28 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 29 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 30 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B3
# 31 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 32 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_ITEM_ROUTE_102_POTION
# 33 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 34 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 35 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 36 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 37 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 38 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 39 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 40 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 41 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 42 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_3:
# 45 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 46 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 47 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 48 "data/maps/Luxurawoods/scripts.pory"
	addobject 4
# 49 "data/maps/Luxurawoods/scripts.pory"
	addobject 5
# 50 "data/maps/Luxurawoods/scripts.pory"
	addobject 6
# 51 "data/maps/Luxurawoods/scripts.pory"
	addobject 10
# 52 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B2
# 53 "data/maps/Luxurawoods/scripts.pory"
	addobject 7
# 54 "data/maps/Luxurawoods/scripts.pory"
	addobject 8
# 55 "data/maps/Luxurawoods/scripts.pory"
	addobject 9
# 56 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B3
# 57 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 58 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 59 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 60 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 61 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 62 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 63 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 64 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 65 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 66 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_4:
# 69 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 70 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 71 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 72 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 73 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 74 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 75 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 76 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 77 "data/maps/Luxurawoods/scripts.pory"
	addobject 7
# 78 "data/maps/Luxurawoods/scripts.pory"
	addobject 8
# 79 "data/maps/Luxurawoods/scripts.pory"
	addobject 9
# 80 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B3
# 81 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 82 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 83 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 84 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 85 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 86 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 87 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 88 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 89 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 90 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return


mewtwotend::
# 95 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 96 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 97 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 98 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_0
# 99 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 100 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 101 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 102 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mw
# 103 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 104 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 105 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_1, MSGBOX_AUTOCLOSE
# 106 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 107 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mw
# 108 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_FAINT
# 111 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 112 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 113 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 115 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 116 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 117 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 118 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_3, MSGBOX_AUTOCLOSE
# 119 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 120 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 121 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 122 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 123 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 15
	return


nocave::
# 127 "data/maps/Luxurawoods/scripts.pory"
	lock
# 128 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, nol
# 129 "data/maps/Luxurawoods/scripts.pory"
	msgbox nocave_Text_0
# 130 "data/maps/Luxurawoods/scripts.pory"
	release
	return


mewtwotendq::
# 133 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 134 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, thuddd
# 135 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotendq_Text_0
# 136 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


mewtwotende::
# 139 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 140 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mq
# 141 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotendq_Text_0
# 142 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


# 144 "data/maps/Luxurawoods/scripts.pory"
mq:
# 145 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 145 "data/maps/Luxurawoods/scripts.pory"
	walk_left
	step_end

miradr::
# 148 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 149 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 150 "data/maps/Luxurawoods/scripts.pory"
	msgbox miradr_Text_0, MSGBOX_AUTOCLOSE
# 151 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 153 "data/maps/Luxurawoods/scripts.pory"
nol:
# 154 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewherb::
# 158 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, mewherb_10
mewherb_8:
# 164 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_7
mewherb_5:
# 170 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_4
	return

mewherb_1:
# 159 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 160 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 161 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_2:
# 165 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 166 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 167 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_1, MSGBOX_AUTOCLOSE
# 168 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_3:
# 171 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 172 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 173 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 174 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_4:
# 170 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, mewherb_3
	return

mewherb_7:
# 164 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_2
	goto mewherb_5

mewherb_10:
# 158 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_1
	goto mewherb_8


mewrev::
# 178 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 179 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 180 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 181 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 183 "data/maps/Luxurawoods/scripts.pory"
no:
# 184 "data/maps/Luxurawoods/scripts.pory"
	walk_right
	step_end

# 186 "data/maps/Luxurawoods/scripts.pory"
mw:
# 187 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 187 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 187 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 187 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 187 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

revivalherb::
# 190 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 191 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 192 "data/maps/Luxurawoods/scripts.pory"
	msgbox revivalherb_Text_0, MSGBOX_AUTOCLOSE
# 193 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 194 "data/maps/Luxurawoods/scripts.pory"
	finditem ITEM_REVIVAL_HERB, 1
# 195 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 196 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 197 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


revive::
# 202 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, revive_20
revive_16:
# 230 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_15
revive_11:
# 262 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_10
revive_6:
# 294 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_5
	return

revive_1:
# 203 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 204 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_REVIVAL_HERB, 1
# 205 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_26
# 224 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 225 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_3, MSGBOX_AUTOCLOSE
# 226 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
revive_25:
# 228 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_2:
# 231 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 232 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 233 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_30
# 255 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 256 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 257 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_9, MSGBOX_AUTOCLOSE
# 258 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
revive_29:
# 260 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_3:
# 263 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 264 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 265 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_10, MSGBOX_AUTOCLOSE
# 266 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 267 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 268 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_11, MSGBOX_AUTOCLOSE
# 269 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 270 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 271 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_12, MSGBOX_AUTOCLOSE
# 272 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 273 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 274 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_PSYBEAM2
# 275 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 276 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_13, MSGBOX_AUTOCLOSE
# 277 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 278 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 279 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_14, MSGBOX_AUTOCLOSE
# 280 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 281 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 282 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_15, MSGBOX_AUTOCLOSE
# 283 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 284 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 285 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_HEAL
# 286 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_16, MSGBOX_AUTOCLOSE
# 287 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 288 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 289 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x479
# 290 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 291 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 17
	return

revive_4:
# 295 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 296 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 297 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_17, MSGBOX_AUTOCLOSE
# 298 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 299 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_5:
# 294 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_7
	return

revive_7:
# 294 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, revive_4
	return

revive_10:
# 262 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_12
	goto revive_6

revive_12:
# 262 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_3
	goto revive_6

revive_15:
# 230 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_17
	goto revive_11

revive_17:
# 230 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_2
	goto revive_11

revive_20:
# 202 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_22
	goto revive_16

revive_22:
# 202 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_1
	goto revive_16

revive_26:
# 206 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 207 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_0, MSGBOX_AUTOCLOSE
# 208 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 209 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_REVIVAL_HERB, 1
# 211 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_HEAL
# 212 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 213 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 214 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 215 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_1, MSGBOX_AUTOCLOSE
# 216 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 217 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 218 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 219 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 221 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B0
	goto revive_25

revive_30:
# 234 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 235 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_4, MSGBOX_AUTOCLOSE
# 236 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 237 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 238 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 239 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_HEAL
# 240 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 241 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 242 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 243 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_5, MSGBOX_AUTOCLOSE
# 244 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 245 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_6, MSGBOX_AUTOCLOSE
# 247 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_7, MSGBOX_AUTOCLOSE
# 248 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 249 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 250 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_8, MSGBOX_AUTOCLOSE
# 251 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 252 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B1
	goto revive_29


gruntsded::
# 307 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 308 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, invisible
# 309 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, invisible
# 310 "data/maps/Luxurawoods/scripts.pory"
	applymovement 8, invisible
# 311 "data/maps/Luxurawoods/scripts.pory"
	applymovement 9, invisible
# 312 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, invisible
# 313 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dd
# 314 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 315 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_0, MSGBOX_AUTOCLOSE
# 316 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 317 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 318 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 319 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 320 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, in
# 321 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_1, MSGBOX_AUTOCLOSE
# 322 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_2, MSGBOX_AUTOCLOSE
# 323 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_3, MSGBOX_AUTOCLOSE
# 324 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_4, MSGBOX_AUTOCLOSE
# 325 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 326 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_5, MSGBOX_AUTOCLOSE
# 327 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 328 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_6, MSGBOX_AUTOCLOSE
# 329 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_7, MSGBOX_AUTOCLOSE
# 330 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 331 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_8, MSGBOX_AUTOCLOSE
# 332 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 333 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, dds
# 334 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_9, MSGBOX_AUTOCLOSE
# 335 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_10, MSGBOX_AUTOCLOSE
# 336 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_11, MSGBOX_AUTOCLOSE
# 337 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_12, MSGBOX_AUTOCLOSE
# 338 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 339 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_13, MSGBOX_AUTOCLOSE
# 340 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 341 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_14, MSGBOX_AUTOCLOSE
# 342 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_15, MSGBOX_AUTOCLOSE
# 343 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 344 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_16, MSGBOX_AUTOCLOSE
# 345 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 346 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_17, MSGBOX_AUTOCLOSE
# 347 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, visible
# 348 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_18, MSGBOX_AUTOCLOSE
# 349 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 350 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19
# 351 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 352 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 353 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_20, MSGBOX_AUTOCLOSE
# 354 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 355 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 356 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 357 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 358 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_21, MSGBOX_AUTOCLOSE
# 359 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 360 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 361 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_22, MSGBOX_AUTOCLOSE
# 362 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 363 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_23, MSGBOX_AUTOCLOSE
# 364 "data/maps/Luxurawoods/scripts.pory"
	namebox unknown
# 365 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_24, MSGBOX_AUTOCLOSE
# 366 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 367 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 368 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, visible
# 369 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 370 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_25, MSGBOX_AUTOCLOSE
# 371 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 372 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19
# 373 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 374 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_COSMIC_POWER
# 375 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 376 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_26
# 377 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_27, MSGBOX_AUTOCLOSE
# 378 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 379 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_28, MSGBOX_AUTOCLOSE
# 380 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 381 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, ee
# 382 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 383 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 384 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 385 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_29, MSGBOX_AUTOCLOSE
# 386 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_30, MSGBOX_AUTOCLOSE
# 387 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 388 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 389 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_31, MSGBOX_AUTOCLOSE
# 390 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 391 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_EXPLOSION
# 393 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 394 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 395 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 396 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 397 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, visible
# 398 "data/maps/Luxurawoods/scripts.pory"
	applymovement 8, visible
# 399 "data/maps/Luxurawoods/scripts.pory"
	applymovement 9, visible
# 400 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 401 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, strp
# 402 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 403 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, sss
# 404 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 405 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_32, MSGBOX_AUTOCLOSE
# 406 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 407 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 408 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 409 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 410 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 411 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 412 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 413 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 414 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 18
	return


# 418 "data/maps/Luxurawoods/scripts.pory"
sss:
# 419 "data/maps/Luxurawoods/scripts.pory"
	face_down
	step_end

# 422 "data/maps/Luxurawoods/scripts.pory"
dds:
# 423 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 423 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 423 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 423 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 424 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 424 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 425 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 427 "data/maps/Luxurawoods/scripts.pory"
ss:
# 428 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 428 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 428 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 428 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 428 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 430 "data/maps/Luxurawoods/scripts.pory"
dd:
# 431 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 434 "data/maps/Luxurawoods/scripts.pory"
ee:
# 435 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

gruntded::
# 439 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 440 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rr
# 441 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 442 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


# 444 "data/maps/Luxurawoods/scripts.pory"
rr:
# 445 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 446 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 449 "data/maps/Luxurawoods/scripts.pory"
cm:
# 450 "data/maps/Luxurawoods/scripts.pory"
	walk_right
# 451 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

grut::
# 454 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 455 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cm
# 456 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 457 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


nio::
# 461 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 462 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, csm
# 463 "data/maps/Luxurawoods/scripts.pory"
	msgbox nio_Text_0, MSGBOX_AUTOCLOSE
# 464 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 467 "data/maps/Luxurawoods/scripts.pory"
csm:
# 468 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewtwotend_Text_0:
# 98 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Why isn't Mira here yet? She said she'd\n"
	.string "catch up… Did something happen?\p"
	.string "She's strong, I know she can handle\n"
	.string "them… right? But how?\p"
	.string "No… I can't stop now, she told me to run.\n"
	.string "She'll be okay…\p"
	.string "She has to be okay.$"

mewtwotend_Text_1:
# 105 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the...?\p"
	.string "Is that... a Pokémon?\p"
	.string "What happened to you...?$"

mewtwotend_Text_2:
# 113 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're hurt... bad. I can't just leave you\n"
	.string "here.\p"
	.string "I don't know if you can understand me,\n"
	.string "but...\p"
	.string "I'll definitely save you. I promise.$"

mewtwotend_Text_3:
# 118 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I've lost too much already.I won't let\n"
	.string "you die here,too.$"

nocave_Text_0:
# 129 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}I should not go into the cave alone.$"

mewtwotendq_Text_0:
# 135 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}I'm worried.$"

miradr_Text_0:
# 150 "data/maps/Luxurawoods/scripts.pory"
	.string "No! I have to get away.$"

mewherb_Text_0:
# 161 "data/maps/Luxurawoods/scripts.pory"
	.string "I should search for the herbs.$"

mewherb_Text_1:
# 167 "data/maps/Luxurawoods/scripts.pory"
	.string "I should look for water.$"

mewherb_Text_2:
# 173 "data/maps/Luxurawoods/scripts.pory"
	.string "I can't leave him alone.$"

revivalherb_Text_0:
# 192 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found it... This is it!\p"
	.string "Mira, you were right, these herbs really\n"
	.string "do grow everywhere.$"

revive_Text_0:
# 207 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should apply the herb on the wounds.$"

revive_Text_1:
# 215 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This should help stop the bleeding...\p"
	.string "But it's not enough. You need water too.$"

revive_Text_2:
# 219 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there, I'll be back in no time.$"

revive_Text_3:
# 225 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should go search for the herbs\p"
	.string "the wounds look pretty painful.$"

revive_Text_4:
# 235 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there, I've got the water.$"

revive_Text_5:
# 243 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Finally... This should do.\p"
	.string "You've been through so much... Just a\n"
	.string "little longer.\p"
	.string "We'll get through this together.$"

revive_Text_6:
# 246 "data/maps/Luxurawoods/scripts.pory"
	.string "Xylar continued to take care of the\n"
	.string "pokemon for a few days hoping it would\l"
	.string "open it's eyes.$"

revive_Text_7:
# 247 "data/maps/Luxurawoods/scripts.pory"
	.string "A few days later...$"

revive_Text_8:
# 250 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't... I can't keep going like this.\n"
	.string "How many days has it been... since I last\l"
	.string "ate anything real? These plants... they\l"
	.string "barely keep me standing\p"
	.string "but he looks better than before.$"

revive_Text_9:
# 257 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have to find some water for him.$"

revive_Text_10:
# 265 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Who... are you?$"

revive_Text_11:
# 268 "data/maps/Luxurawoods/scripts.pory"
	.string "(Is this telepathy?)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I...\p"
	.string "I found you.You were hurt, bleeding...\p"
	.string "I couldn't just leave you there.$"

revive_Text_12:
# 271 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Why would you help me?\p"
	.string "Humans are nothing but deceivers...$"

revive_Text_13:
# 276 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo used his psychic powers to read\n"
	.string "Xylar's mind$"

revive_Text_14:
# 279 "data/maps/Luxurawoods/scripts.pory"
	.string "(He's... telling the truth. His concern...\n"
	.string "it's genu...)$"

revive_Text_15:
# 282 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fainted.\p"
	.string "Maybe using telepathy strained him,\n"
	.string "since he hasn't fully recovered yet.\p"
	.string "I should also rest for a bit.$"

revive_Text_16:
# 286 "data/maps/Luxurawoods/scripts.pory"
	.string "Zzzzzz.....$"

revive_Text_17:
# 297 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He's still recovering, I should look for\n"
	.string "more herbs.$"

gruntsded_Text_0:
# 315 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It's a relief i remembered about the\n"
	.string "herbs.\p"
	.string "I'm worried about Mira, It's been almost\n"
	.string "a week.\p"
	.string "I hope she is okay.$"

gruntsded_Text_1:
# 321 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look who we have here...$"

gruntsded_Text_2:
# 322 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The little runaway.\p"
	.string "And all alone this time...$"

gruntsded_Text_3:
# 323 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Poor little rich boy... you think you can\n"
	.string "run? Think you can hide? No, no, no...\l"
	.string "your fate is written, carved in the same\l"
	.string "blood as your family's.$"

gruntsded_Text_4:
# 324 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at him... so lost, so angry.\p"
	.string "We can almost taste it, can't we?$"

gruntsded_Text_5:
# 326 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira? What did you do to her?$"

gruntsded_Text_6:
# 328 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira... such a sweet girl.\p"
	.string "Brave.\p"
	.string "Too brave for her own good.$"

gruntsded_Text_7:
# 329 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She fought so hard.\p"
	.string "But do you know what broke her? It\n"
	.string "wasn't the pain\p"
	.string "...\p"
	.string "It was You.\p"
	.string "Her hope in you... shattered like glass.\n"
	.string "She screamed for you, right before we\l"
	.string "made her...\p"
	.string "Disappear.$"

gruntsded_Text_8:
# 331 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop... stop lying!$"

gruntsded_Text_9:
# 334 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lie? Why would we lie? It was beautiful.\p"
	.string "The way her eyes widened when she\n"
	.string "realized... you weren't coming.\p"
	.string "You couldn't save her, just like you\n"
	.string "couldn't save anyone!$"

gruntsded_Text_10:
# 335 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think this all started today? Oh,\n"
	.string "no... it's always been you, Xylar. Your\l"
	.string "weakness... your failure. They're dead\l"
	.string "because of you.$"

gruntsded_Text_11:
# 336 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your father... your mother... Mira... They\n"
	.string "all died... waiting for you.$"

gruntsded_Text_12:
# 337 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You couldn't save her. You couldn't save\n"
	.string "any of them.\p"
	.string "And now you're alone... Just like you\n"
	.string "were always meant to be.\p"
	.string "Alone in the dark, where no one will hear\n"
	.string "you scream.$"

gruntsded_Text_13:
# 339 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll kill you! I'll fucking kill you all!$"

gruntsded_Text_14:
# 341 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Kill us?\p"
	.string "You?\p"
	.string "You can't even save yourself! You're\n"
	.string "drowning in your own guilt.\p"
	.string "And the deeper you sink, the closer you\n"
	.string "get to her... to all of them, waiting for\l"
	.string "you in the dark.$"

gruntsded_Text_15:
# 342 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, join them! Let the guilt consume\n"
	.string "you. Soon... you'll hear their voices too,\l"
	.string "whispering your name. Waiting for you to\l"
	.string "fall... just like them.$"

gruntsded_Text_16:
# 344 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I SAID SHUT UP!$"

gruntsded_Text_17:
# 346 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They died because of you. And now...\n"
	.string "you'll join them.\p"
	.string "Let's see how strong you really are\n"
	.string "when you can't even save yourself.\p"
	.string "Electrode!$"

gruntsded_Text_18:
# 348 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let's end this...\p"
	.string "Electrode, EXPLODE!$"

gruntsded_Text_19:
# 350 "data/maps/Luxurawoods/scripts.pory"
	.string "Bzzz$"

gruntsded_Text_20:
# 353 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}HAHAHAHAHAHAHA!$"

gruntsded_Text_21:
# 358 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What... what the hell is wrong with you?$"

gruntsded_Text_22:
# 361 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think I couldn't save her? You\n"
	.string "think it's over? It's never over!\p"
	.string "I'LL TEAR THIS WORLD APART! RIP EVERY\n"
	.string "ONE OF YOU TO SHREDS!\p"
	.string "YOU'RE DEAD! DEAD! DEAD!\p"
	.string "I'LL KILL EVERY LAST ONE OF YOU! I'LL\n"
	.string "MAKE YOU FEEL EVERYTHING I'VE FELT!\l"
	.string "YOU HEAR ME?!$"

gruntsded_Text_23:
# 363 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's... he's broken.$"

gruntsded_Text_24:
# 365 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}This ends now!$"

gruntsded_Text_25:
# 370 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the...\p"
	.string "Electrode finish both of them.\p"
	.string "Use Explosion!$"

gruntsded_Text_26:
# 376 "data/maps/Luxurawoods/scripts.pory"
	.string "Electrode, frozen mid-charge, begins to\n"
	.string "tremble under Mewtwo's control.$"

gruntsded_Text_27:
# 377 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Do something you stupid ball.$"

gruntsded_Text_28:
# 379 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You know what to do.$"

gruntsded_Text_29:
# 385 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}W-What?! No! What's happening?!$"

gruntsded_Text_30:
# 386 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Stop it, you stupid ball! Listen to us!$"

gruntsded_Text_31:
# 389 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Now...\p"
	.string "Explode.$"

gruntsded_Text_32:
# 405 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Let's go, Human.$"

gruntded_Text_0:
# 441 "data/maps/Luxurawoods/scripts.pory"
	.string "I'm glad he's fine.$"

nio_Text_0:
# 463 "data/maps/Luxurawoods/scripts.pory"
	.string "That's not where herbs grow.$"

mewtwo::
# 302 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"
