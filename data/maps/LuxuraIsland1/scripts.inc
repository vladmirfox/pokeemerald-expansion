# 1 "data/maps/LuxuraIsland1/scripts.pory"

# 2 "data/maps/LuxuraIsland1/scripts.pory"
LuxuraIsland1_MapScripts::
# 3 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 4 "data/maps/LuxuraIsland1/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD,explosion
# 5 "data/maps/LuxuraIsland1/scripts.pory"
	.byte 0

luxuraisland::
# 7 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 8 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 9 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox luxuraisland_Text_0
# 10 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 13 "data/maps/LuxuraIsland1/scripts.pory"
notal:
# 14 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 14 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
# 14 "data/maps/LuxuraIsland1/scripts.pory"
	walk_left
	step_end

officer::
# 17 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 18 "data/maps/LuxuraIsland1/scripts.pory"
	faceplayer
# 19 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox officer_Text_0
# 20 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


forest::
# 24 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 25 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 5, exclam
# 26 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 27 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 28 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 29 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_0
# 30 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 31 "data/maps/LuxuraIsland1/scripts.pory"
	delay 60
# 32 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8004, 4
# 33 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8005, 6
# 34 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8006, 7
# 35 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_0x8007, 7
# 36 "data/maps/LuxuraIsland1/scripts.pory"
	special ShakeCamera
# 37 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_THUNDERBOLT
# 38 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 39 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 40 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 41 "data/maps/LuxuraIsland1/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 42 "data/maps/LuxuraIsland1/scripts.pory"
	doweather
# 43 "data/maps/LuxuraIsland1/scripts.pory"
	playse MUS_DUMMY
# 44 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AA
# 45 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 46 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, exclam
# 47 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 48 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_1
# 49 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 50 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_2
# 52 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 53 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 54 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, notal
# 55 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox forest_Text_3
# 57 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 58 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 59 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_AFTERTRAGEDY_MUSIC
# 60 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 11
# 61 "data/maps/LuxuraIsland1/scripts.pory"
	setvar VAR_ROUTE103_STATE, 3
	return


hurry::
# 66 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 67 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notal
# 68 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox hurry_Text_0
# 69 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


explosion::
# 72 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_lt explosion_1
# 94 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_eq explosion_2
# 115 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt explosion_6
explosion_5:
# 136 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq explosion_4
	return

explosion_1:
# 73 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 6
# 74 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 7
# 75 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 8
# 76 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 9
# 77 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 10
# 78 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 79 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 80 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 81 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 14
# 82 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 1
# 83 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 2
# 84 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 3
# 85 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 4
# 86 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 5
# 87 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AD
# 88 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AC
# 89 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
# 90 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 91 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_2:
# 95 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 96 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 97 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 98 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 99 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 100 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 101 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 102 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 103 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 104 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 105 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 11
# 106 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 12
# 107 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 13
# 108 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 109 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 110 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AE
# 111 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 112 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 113 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
	return

explosion_3:
# 116 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 117 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 118 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 119 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 120 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 121 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 122 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 123 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 124 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 125 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 126 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 127 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 128 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 129 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 130 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 15
# 131 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4B6
# 132 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 133 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 134 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_4:
# 137 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 1
# 138 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 2
# 139 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 3
# 140 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 4
# 141 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 5
# 142 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 6
# 143 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 7
# 144 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 8
# 145 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 9
# 146 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 10
# 147 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 14
# 148 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 11
# 149 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 12
# 150 "data/maps/LuxuraIsland1/scripts.pory"
	removeobject 13
# 151 "data/maps/LuxuraIsland1/scripts.pory"
	addobject 15
# 152 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4B6
# 153 "data/maps/LuxuraIsland1/scripts.pory"
	clearflag FLAG_UNUSED_0x4AC
# 154 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AD
# 155 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x4AE
	return

explosion_6:
# 115 "data/maps/LuxuraIsland1/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt explosion_3
	goto explosion_5


miraded::
# 160 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 161 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, invisible
# 162 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 163 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, boo
# 164 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, boo
# 165 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_0
# 167 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 168 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 169 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_1
# 170 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 171 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 172 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, exclam
# 173 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 174 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_2
# 176 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 177 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 178 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_3
# 179 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 180 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, run
# 181 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, run
# 182 "data/maps/LuxuraIsland1/scripts.pory"
	special SpawnCameraObject
# 183 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, bo
# 184 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_4, MSGBOX_AUTOCLOSE
# 186 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_5, MSGBOX_AUTOCLOSE
# 187 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 188 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, players
# 189 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, players
# 190 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 191 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, backes
# 192 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, backes
# 193 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, backes
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_6, MSGBOX_AUTOCLOSE
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_7, MSGBOX_AUTOCLOSE
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_8, MSGBOX_AUTOCLOSE
# 197 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_9
# 199 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_10, MSGBOX_AUTOCLOSE
# 201 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 202 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_11, MSGBOX_AUTOCLOSE
# 203 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_12, MSGBOX_AUTOCLOSE
# 205 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 206 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 207 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_13, MSGBOX_AUTOCLOSE
# 209 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_14, MSGBOX_AUTOCLOSE
# 210 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 211 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 212 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 213 "data/maps/LuxuraIsland1/scripts.pory"
	facefollower
# 214 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_15, MSGBOX_AUTOCLOSE
# 216 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 217 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_16
# 219 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 220 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_17, MSGBOX_AUTOCLOSE
# 222 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 223 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lok
# 224 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, lok
# 225 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 226 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_18, MSGBOX_AUTOCLOSE
# 227 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, heart
# 228 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_19, MSGBOX_AUTOCLOSE
# 229 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, talk
# 230 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, tak
# 231 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_20, MSGBOX_AUTOCLOSE
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_21, MSGBOX_AUTOCLOSE
# 234 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_22, MSGBOX_AUTOCLOSE
# 235 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 12, innnn
# 236 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 11, innnn
# 237 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 238 "data/maps/LuxuraIsland1/scripts.pory"
	facefollower
# 239 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_23, MSGBOX_AUTOCLOSE
# 241 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 242 "data/maps/LuxuraIsland1/scripts.pory"
	namebox Xylar
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_24
# 244 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 245 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_25, MSGBOX_AUTOCLOSE
# 247 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 248 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, byee
# 249 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 250 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, lok
# 251 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_26, MSGBOX_AUTOCLOSE
# 253 "data/maps/LuxuraIsland1/scripts.pory"
	namebox name4
# 254 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_27, MSGBOX_AUTOCLOSE
# 255 "data/maps/LuxuraIsland1/scripts.pory"
	hidenamebox
# 256 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_28
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_29, MSGBOX_AUTOCLOSE
# 258 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_30
# 259 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, visible
# 260 "data/maps/LuxuraIsland1/scripts.pory"
	waitmovement 0
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_31
# 262 "data/maps/LuxuraIsland1/scripts.pory"
	waitmessage
# 263 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, back
# 264 "data/maps/LuxuraIsland1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_32
# 266 "data/maps/LuxuraIsland1/scripts.pory"
	waitmoncry
# 267 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 268 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 269 "data/maps/LuxuraIsland1/scripts.pory"
	playse SE_M_EXPLOSION
# 270 "data/maps/LuxuraIsland1/scripts.pory"
	waitse
# 271 "data/maps/LuxuraIsland1/scripts.pory"
	destroyfollower
# 272 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 13, invisible
# 273 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement 14, visible
# 274 "data/maps/LuxuraIsland1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox miraded_Text_33, MSGBOX_AUTOCLOSE
# 276 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
# 277 "data/maps/LuxuraIsland1/scripts.pory"
	warp MAP_LUXURAWOODS, 3, 35
# 278 "data/maps/LuxuraIsland1/scripts.pory"
	setflag FLAG_UNUSED_0x26B
# 279 "data/maps/LuxuraIsland1/scripts.pory"
	setvar LUXURA_TRAGEDY, 14
	return


# 281 "data/maps/LuxuraIsland1/scripts.pory"
lok:
# 282 "data/maps/LuxuraIsland1/scripts.pory"
	face_up
	step_end

# 284 "data/maps/LuxuraIsland1/scripts.pory"
backes:
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 285 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 288 "data/maps/LuxuraIsland1/scripts.pory"
backe:
# 289 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 289 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 289 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
	step_end

# 292 "data/maps/LuxuraIsland1/scripts.pory"
byee:
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 293 "data/maps/LuxuraIsland1/scripts.pory"
	walk_faster_right
# 294 "data/maps/LuxuraIsland1/scripts.pory"
	set_invisible
	step_end

# 297 "data/maps/LuxuraIsland1/scripts.pory"
bo:
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 298 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
	step_end

# 300 "data/maps/LuxuraIsland1/scripts.pory"
boo:
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
# 301 "data/maps/LuxuraIsland1/scripts.pory"
	walk_right
	step_end

Mira::
# 304 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 305 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms
# 306 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, ms
# 307 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 308 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 309 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 311 "data/maps/LuxuraIsland1/scripts.pory"
ms:
# 312 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 313 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira2::
# 318 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 319 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms1
# 320 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, ms1
# 321 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 322 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 323 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 326 "data/maps/LuxuraIsland1/scripts.pory"
ms1:
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 327 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 328 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

Mira3::
# 333 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 334 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ms2
# 335 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, ms2
# 336 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 337 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 338 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 341 "data/maps/LuxuraIsland1/scripts.pory"
ms2:
# 342 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 342 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 342 "data/maps/LuxuraIsland1/scripts.pory"
	walk_down
# 343 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira1::
# 346 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 347 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m1
# 348 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, m1
# 349 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 350 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 351 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 354 "data/maps/LuxuraIsland1/scripts.pory"
m1:
# 355 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 355 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 356 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

mira2::
# 359 "data/maps/LuxuraIsland1/scripts.pory"
	lockall
# 360 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, m2
# 361 "data/maps/LuxuraIsland1/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, m2
# 362 "data/maps/LuxuraIsland1/scripts.pory"
	msgbox Mira_Text_0
# 363 "data/maps/LuxuraIsland1/scripts.pory"
	goto miraded
# 364 "data/maps/LuxuraIsland1/scripts.pory"
	releaseall
	return


# 367 "data/maps/LuxuraIsland1/scripts.pory"
m2:
# 368 "data/maps/LuxuraIsland1/scripts.pory"
	walk_up
# 369 "data/maps/LuxuraIsland1/scripts.pory"
	face_right
	step_end

luxuraisland_Text_0:
# 9 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I'm not allowed to go there alone.$"

officer_Text_0:
# 19 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, Young Master.$"

forest_Text_0:
# 29 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Young Master, you're not allowed to go\n"
	.string "the forest.\p"
	.string "It's filled with wild and dangerous\n"
	.string "Pokemon.$"

forest_Text_1:
# 48 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What was that?$"

forest_Text_2:
# 51 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, did you hear that? It\n"
	.string "sounded like a voice coming from the\l"
	.string "direction of the mansion.\p"
	.string "We should go check it out!$"

forest_Text_3:
# 56 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom and Dad are in the Mansion.$"

hurry_Text_0:
# 68 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry.$"

miraded_Text_0:
# 166 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let's ask the officer and sailors for\n"
	.string "help.\p"
	.string "They'll surely help us.$"

miraded_Text_1:
# 169 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Okay, Master Xylar.$"

miraded_Text_2:
# 175 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What happened here?$"

miraded_Text_3:
# 178 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's horrible.\p"
	.string "Why would they resort to this?$"

miraded_Text_4:
# 185 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The Shadow Slayers sure work fast.$"

miraded_Text_5:
# 186 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah, they killed everyone on the island\n"
	.string "in an instant.$"

miraded_Text_6:
# 194 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We really are lucky today.$"

miraded_Text_7:
# 195 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Yeah.\p"
	.string "We were ordered to capture you two but\n"
	.string "you two came running to us on your own.$"

miraded_Text_8:
# 196 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Now , Let's head back peacefully since\n"
	.string "I'm in a good mood today.$"

miraded_Text_9:
# 198 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Not gonna happen.$"

miraded_Text_10:
# 200 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Do you guys really think you can\n"
	.string "escape?$"

miraded_Text_11:
# 202 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}...$"

miraded_Text_12:
# 204 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You're joking? right?$"

miraded_Text_13:
# 208 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}They actually think they can escape.\p"
	.string "HAHAHAHA\p"
	.string "How stupid.$"

miraded_Text_14:
# 209 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It's ridiculous.\p"
	.string "HAHAHAHA!$"

miraded_Text_15:
# 215 "data/maps/LuxuraIsland1/scripts.pory"
	.string "(If we both try to escape we will end up\n"
	.string "getting captured.)\p"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'll slow them down.\p"
	.string "You should run towards the forest\n"
	.string "quickly.$"

miraded_Text_16:
# 218 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No, I'm not gonna leave you behind.$"

miraded_Text_17:
# 221 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'll join you soon.So, trust me and run.$"

miraded_Text_18:
# 226 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at the hero,trying to protect the\n"
	.string "little boy.\p"
	.string "How cute.$"

miraded_Text_19:
# 228 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But it's not gonna work since we are\n"
	.string "gonna kill her and take the child.$"

miraded_Text_20:
# 232 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}YEAH YEAH, make her explode like BOOM!\p"
	.string "Make her bleed.\p"
	.string "Make her scream.\p"
	.string "Oh, I can already hear it.$"

miraded_Text_21:
# 233 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}And kid's reaction...priceless i would\n"
	.string "say.$"

miraded_Text_22:
# 234 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now I'm really excited.$"

miraded_Text_23:
# 240 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Listen to me, from now no\n"
	.string "matter what happens don't look back\l"
	.string "and run as fast as you can\p"
	.string "Go! and remember it's not your fault.$"

miraded_Text_24:
# 243 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, why are you talking like this?$"

miraded_Text_25:
# 246 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Go hurry!$"

miraded_Text_26:
# 252 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Aww, how touching, He's running away.\p"
	.string "Too bad you won't get to see him grow up$"

miraded_Text_27:
# 254 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}And too bad for you since you won't be\n"
	.string "able to capture him.$"

miraded_Text_28:
# 256 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What?\p"
	.string "You dare mock me.\p"
	.string "Kill her this instant.$"

miraded_Text_29:
# 257 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Say goodbye, lady.This is the end of the\n"
	.string "road for you.$"

miraded_Text_30:
# 258 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Electrode!$"

miraded_Text_31:
# 261 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use EXPLOSION$"

miraded_Text_32:
# 265 "data/maps/LuxuraIsland1/scripts.pory"
	.string "Bzzz$"

miraded_Text_33:
# 275 "data/maps/LuxuraIsland1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh, look at that beautiful red... It's\n"
	.string "so vibrant, so alive!\p"
	.string "Blood always gets my heart racing. Don't\n"
	.string "you just love the smell?\p"
	.string "It's like... the essence of life\n"
	.string "escaping. I can't get enough of it.$"

Mira_Text_0:
# 307 "data/maps/LuxuraIsland1/scripts.pory"
	.string "I should hurry and ask for help.$"
