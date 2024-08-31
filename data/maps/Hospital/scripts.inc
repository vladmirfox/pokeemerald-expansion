# 1 "data/maps/Hospital/scripts.pory"

# 2 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts::
# 3 "data/maps/Hospital/scripts.pory"
# 2 "data/maps/Hospital/scripts.pory"
# 4 "data/maps/Hospital/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hospital_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Hospital/scripts.pory"
	.byte 0
# 6 "data/maps/Hospital/scripts.pory"

# 7 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Hospital/scripts.pory"
# 3 "data/maps/Hospital/scripts.pory"
# 9 "data/maps/Hospital/scripts.pory"
	map_script_2 VAR_ROUTE102_STATE, 0, Luxura
# 10 "data/maps/Hospital/scripts.pory"
	.2byte 0
# 11 "data/maps/Hospital/scripts.pory"

# 12 "data/maps/Hospital/scripts.pory"

# 13 "data/maps/Hospital/scripts.pory"
Luxura::
# 14 "data/maps/Hospital/scripts.pory"
playse MUS_DUMMY
# 15 "data/maps/Hospital/scripts.pory"
# 8 "data/maps/Hospital/scripts.pory"
# 16 "data/maps/Hospital/scripts.pory"
	lockall
# 17 "data/maps/Hospital/scripts.pory"
# 9 "data/maps/Hospital/scripts.pory"
# 18 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/Hospital/scripts.pory"
# 10 "data/maps/Hospital/scripts.pory"
# 20 "data/maps/Hospital/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LUXURA_ISLAND
# 21 "data/maps/Hospital/scripts.pory"
# 11 "data/maps/Hospital/scripts.pory"
# 22 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 23 "data/maps/Hospital/scripts.pory"
# 12 "data/maps/Hospital/scripts.pory"
# 24 "data/maps/Hospital/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/Hospital/scripts.pory"
# 13 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, boom
# 27 "data/maps/Hospital/scripts.pory"
# 14 "data/maps/Hospital/scripts.pory"
# 28 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 29 "data/maps/Hospital/scripts.pory"
# 15 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
	msgbox myloll
# 31 "data/maps/Hospital/scripts.pory"
# 16 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mylol
# 33 "data/maps/Hospital/scripts.pory"
# 17 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 35 "data/maps/Hospital/scripts.pory"
# 18 "data/maps/Hospital/scripts.pory"
# 36 "data/maps/Hospital/scripts.pory"
	msgbox scared
# 37 "data/maps/Hospital/scripts.pory"
# 19 "data/maps/Hospital/scripts.pory"
# 38 "data/maps/Hospital/scripts.pory"
	applymovement 11, thudd
# 39 "data/maps/Hospital/scripts.pory"
# 20 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
	applymovement 9, thud
# 41 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_0
# 43 "data/maps/Hospital/scripts.pory"
# 22 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 45 "data/maps/Hospital/scripts.pory"
# 23 "data/maps/Hospital/scripts.pory"
# 46 "data/maps/Hospital/scripts.pory"
	applymovement 10, thuddd
# 47 "data/maps/Hospital/scripts.pory"
# 24 "data/maps/Hospital/scripts.pory"
# 48 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, old
# 49 "data/maps/Hospital/scripts.pory"
# 25 "data/maps/Hospital/scripts.pory"
# 50 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 51 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_1
# 53 "data/maps/Hospital/scripts.pory"
# 27 "data/maps/Hospital/scripts.pory"
# 54 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, main
# 55 "data/maps/Hospital/scripts.pory"
# 28 "data/maps/Hospital/scripts.pory"
# 56 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 57 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
# 58 "data/maps/Hospital/scripts.pory"
    namebox(name1)
# 59 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_2
# 60 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 61 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
# 62 "data/maps/Hospital/scripts.pory"
    setvar VAR_0x8000, MUGSHOT_BABY
# 63 "data/maps/Hospital/scripts.pory"
    callnative DrawMugshot
# 64 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_3
# 65 "data/maps/Hospital/scripts.pory"
	callnative ClearMugshot
# 66 "data/maps/Hospital/scripts.pory"
# 31 "data/maps/Hospital/scripts.pory"
# 67 "data/maps/Hospital/scripts.pory"
	applymovement 2, heart
# 68 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
# 69 "data/maps/Hospital/scripts.pory"
	namebox(name2)
# 70 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_4
# 71 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 72 "data/maps/Hospital/scripts.pory"
# 33 "data/maps/Hospital/scripts.pory"
# 73 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 74 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
# 75 "data/maps/Hospital/scripts.pory"
    namebox(name3)
# 76 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_5
# 77 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 78 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
# 79 "data/maps/Hospital/scripts.pory"
    setvar VAR_0x8000, MUGSHOT_BABY
# 80 "data/maps/Hospital/scripts.pory"
    callnative DrawMugshot
# 81 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_6
# 82 "data/maps/Hospital/scripts.pory"
	callnative ClearMugshot
# 83 "data/maps/Hospital/scripts.pory"
# 36 "data/maps/Hospital/scripts.pory"
# 84 "data/maps/Hospital/scripts.pory"
	applymovement 4, bye
# 85 "data/maps/Hospital/scripts.pory"
# 37 "data/maps/Hospital/scripts.pory"
# 86 "data/maps/Hospital/scripts.pory"
	applymovement 3, bye
# 87 "data/maps/Hospital/scripts.pory"
# 38 "data/maps/Hospital/scripts.pory"
# 88 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 89 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
# 90 "data/maps/Hospital/scripts.pory"
    namebox(name2)
# 91 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_7
# 92 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 93 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
# 94 "data/maps/Hospital/scripts.pory"
    namebox(name3)
# 95 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_8
# 96 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 97 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
# 98 "data/maps/Hospital/scripts.pory"
    setvar VAR_0x8000, MUGSHOT_BABY
# 99 "data/maps/Hospital/scripts.pory"
    callnative DrawMugshot
# 100 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_9
# 101 "data/maps/Hospital/scripts.pory"
	callnative ClearMugshot
# 102 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
# 103 "data/maps/Hospital/scripts.pory"
	namebox(name4)
# 104 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_10
# 105 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 106 "data/maps/Hospital/scripts.pory"
# 43 "data/maps/Hospital/scripts.pory"
# 107 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
# 109 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_11
# 110 "data/maps/Hospital/scripts.pory"
	applymovement 1,heart
# 111 "data/maps/Hospital/scripts.pory"
	applymovement 2,heart
# 112 "data/maps/Hospital/scripts.pory"
	applymovement 5,heart
# 113 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 114 "data/maps/Hospital/scripts.pory"
# 45 "data/maps/Hospital/scripts.pory"
# 115 "data/maps/Hospital/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 116 "data/maps/Hospital/scripts.pory"
# 46 "data/maps/Hospital/scripts.pory"
# 117 "data/maps/Hospital/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LUXURA_INDOOR
# 118 "data/maps/Hospital/scripts.pory"
# 47 "data/maps/Hospital/scripts.pory"
# 119 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/Hospital/scripts.pory"
# 48 "data/maps/Hospital/scripts.pory"
# 121 "data/maps/Hospital/scripts.pory"
	setvar VAR_ROUTE102_STATE, 1
# 122 "data/maps/Hospital/scripts.pory"
# 49 "data/maps/Hospital/scripts.pory"
# 123 "data/maps/Hospital/scripts.pory"
	releaseall
# 124 "data/maps/Hospital/scripts.pory"
	return
# 125 "data/maps/Hospital/scripts.pory"

# 126 "data/maps/Hospital/scripts.pory"

# 127 "data/maps/Hospital/scripts.pory"
# 51 "data/maps/Hospital/scripts.pory"
# 128 "data/maps/Hospital/scripts.pory"
boom:
# 129 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 130 "data/maps/Hospital/scripts.pory"
	walk_up
# 131 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 132 "data/maps/Hospital/scripts.pory"
	walk_up
# 133 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 134 "data/maps/Hospital/scripts.pory"
	walk_up
# 135 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 136 "data/maps/Hospital/scripts.pory"
	walk_up
# 137 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 138 "data/maps/Hospital/scripts.pory"
	walk_up
# 139 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 140 "data/maps/Hospital/scripts.pory"
	walk_up
# 141 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 142 "data/maps/Hospital/scripts.pory"
	walk_up
# 143 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 144 "data/maps/Hospital/scripts.pory"
	walk_up
# 145 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 146 "data/maps/Hospital/scripts.pory"
	walk_up
# 147 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 148 "data/maps/Hospital/scripts.pory"
	walk_up
# 149 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 150 "data/maps/Hospital/scripts.pory"
	walk_up
# 151 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 152 "data/maps/Hospital/scripts.pory"
	walk_up
# 153 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 154 "data/maps/Hospital/scripts.pory"
	walk_up
# 155 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 156 "data/maps/Hospital/scripts.pory"
	walk_up
# 157 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 158 "data/maps/Hospital/scripts.pory"
	walk_up
# 159 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 160 "data/maps/Hospital/scripts.pory"
	walk_up
# 161 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 162 "data/maps/Hospital/scripts.pory"
	walk_up
# 163 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 164 "data/maps/Hospital/scripts.pory"
	walk_up
# 165 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 166 "data/maps/Hospital/scripts.pory"
	walk_up
# 167 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 168 "data/maps/Hospital/scripts.pory"
	walk_up
# 169 "data/maps/Hospital/scripts.pory"
	step_end
# 170 "data/maps/Hospital/scripts.pory"

# 171 "data/maps/Hospital/scripts.pory"
# 54 "data/maps/Hospital/scripts.pory"
# 172 "data/maps/Hospital/scripts.pory"
bye:
# 173 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 174 "data/maps/Hospital/scripts.pory"
	walk_down
# 175 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 176 "data/maps/Hospital/scripts.pory"
	walk_down
# 177 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 178 "data/maps/Hospital/scripts.pory"
	walk_down
# 179 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 180 "data/maps/Hospital/scripts.pory"
	walk_down
# 181 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 182 "data/maps/Hospital/scripts.pory"
	walk_down
# 183 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 184 "data/maps/Hospital/scripts.pory"
	walk_down
# 185 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 186 "data/maps/Hospital/scripts.pory"
	walk_down
# 187 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 188 "data/maps/Hospital/scripts.pory"
	walk_down
# 189 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 190 "data/maps/Hospital/scripts.pory"
	walk_down
# 191 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 192 "data/maps/Hospital/scripts.pory"
	walk_down
# 193 "data/maps/Hospital/scripts.pory"
	step_end
# 194 "data/maps/Hospital/scripts.pory"

# 195 "data/maps/Hospital/scripts.pory"
# 58 "data/maps/Hospital/scripts.pory"
# 196 "data/maps/Hospital/scripts.pory"
mylol:
# 197 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 198 "data/maps/Hospital/scripts.pory"
	walk_right
# 199 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 200 "data/maps/Hospital/scripts.pory"
	walk_right
# 201 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 202 "data/maps/Hospital/scripts.pory"
	walk_right
# 203 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 204 "data/maps/Hospital/scripts.pory"
	walk_right
# 205 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 206 "data/maps/Hospital/scripts.pory"
	walk_right
# 207 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 208 "data/maps/Hospital/scripts.pory"
	walk_right
# 209 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 210 "data/maps/Hospital/scripts.pory"
	walk_right
# 211 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 212 "data/maps/Hospital/scripts.pory"
	walk_right
# 213 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 214 "data/maps/Hospital/scripts.pory"
	walk_right
# 215 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 216 "data/maps/Hospital/scripts.pory"
	walk_right
# 217 "data/maps/Hospital/scripts.pory"
	step_end
# 218 "data/maps/Hospital/scripts.pory"

# 219 "data/maps/Hospital/scripts.pory"
# 62 "data/maps/Hospital/scripts.pory"
# 220 "data/maps/Hospital/scripts.pory"
thud:
# 221 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 222 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 223 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 224 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 225 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 226 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 227 "data/maps/Hospital/scripts.pory"
# 64 "data/maps/Hospital/scripts.pory"
# 228 "data/maps/Hospital/scripts.pory"
	walk_fast_right
# 229 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
# 230 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 231 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
# 232 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 233 "data/maps/Hospital/scripts.pory"
	step_end
# 234 "data/maps/Hospital/scripts.pory"

# 235 "data/maps/Hospital/scripts.pory"
# 67 "data/maps/Hospital/scripts.pory"
# 236 "data/maps/Hospital/scripts.pory"
main:
# 237 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 238 "data/maps/Hospital/scripts.pory"
	walk_right
# 239 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 240 "data/maps/Hospital/scripts.pory"
	walk_right
# 241 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 242 "data/maps/Hospital/scripts.pory"
	walk_right
# 243 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 244 "data/maps/Hospital/scripts.pory"
	walk_right
# 245 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 246 "data/maps/Hospital/scripts.pory"
	walk_right
# 247 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 248 "data/maps/Hospital/scripts.pory"
	walk_right
# 249 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 250 "data/maps/Hospital/scripts.pory"
	walk_right
# 251 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 252 "data/maps/Hospital/scripts.pory"
	walk_right
# 253 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 254 "data/maps/Hospital/scripts.pory"
	walk_right
# 255 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 256 "data/maps/Hospital/scripts.pory"
	walk_right
# 257 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 258 "data/maps/Hospital/scripts.pory"
	walk_right
# 259 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 260 "data/maps/Hospital/scripts.pory"
	walk_right
# 261 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 262 "data/maps/Hospital/scripts.pory"
	walk_right
# 263 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 264 "data/maps/Hospital/scripts.pory"
	walk_right
# 265 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 266 "data/maps/Hospital/scripts.pory"
	walk_right
# 267 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 268 "data/maps/Hospital/scripts.pory"
	walk_right
# 269 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 270 "data/maps/Hospital/scripts.pory"
	walk_right
# 271 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 272 "data/maps/Hospital/scripts.pory"
	walk_right
# 273 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 274 "data/maps/Hospital/scripts.pory"
	walk_right
# 275 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 276 "data/maps/Hospital/scripts.pory"
	walk_right
# 277 "data/maps/Hospital/scripts.pory"
	step_end
# 278 "data/maps/Hospital/scripts.pory"

# 279 "data/maps/Hospital/scripts.pory"
# 70 "data/maps/Hospital/scripts.pory"
# 280 "data/maps/Hospital/scripts.pory"
old:
# 281 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 282 "data/maps/Hospital/scripts.pory"
	walk_right
# 283 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 284 "data/maps/Hospital/scripts.pory"
	walk_right
# 285 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 286 "data/maps/Hospital/scripts.pory"
	walk_right
# 287 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 288 "data/maps/Hospital/scripts.pory"
	walk_right
# 289 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 290 "data/maps/Hospital/scripts.pory"
	walk_right
# 291 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 292 "data/maps/Hospital/scripts.pory"
	walk_right
# 293 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 294 "data/maps/Hospital/scripts.pory"
	walk_right
# 295 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 296 "data/maps/Hospital/scripts.pory"
	walk_right
# 297 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 298 "data/maps/Hospital/scripts.pory"
	walk_right
# 299 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 300 "data/maps/Hospital/scripts.pory"
	walk_right
# 301 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 302 "data/maps/Hospital/scripts.pory"
	walk_right
# 303 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 304 "data/maps/Hospital/scripts.pory"
	walk_right
# 305 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 306 "data/maps/Hospital/scripts.pory"
	walk_right
# 307 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 308 "data/maps/Hospital/scripts.pory"
	walk_right
# 309 "data/maps/Hospital/scripts.pory"
	step_end
# 310 "data/maps/Hospital/scripts.pory"

# 311 "data/maps/Hospital/scripts.pory"
# 73 "data/maps/Hospital/scripts.pory"
# 312 "data/maps/Hospital/scripts.pory"
thudd:
# 313 "data/maps/Hospital/scripts.pory"
# 74 "data/maps/Hospital/scripts.pory"
# 314 "data/maps/Hospital/scripts.pory"
	jump_2_left
# 315 "data/maps/Hospital/scripts.pory"
# 75 "data/maps/Hospital/scripts.pory"
# 316 "data/maps/Hospital/scripts.pory"
	face_right
# 317 "data/maps/Hospital/scripts.pory"
	step_end
# 318 "data/maps/Hospital/scripts.pory"

# 319 "data/maps/Hospital/scripts.pory"
# 79 "data/maps/Hospital/scripts.pory"
# 320 "data/maps/Hospital/scripts.pory"
thuddd:
# 321 "data/maps/Hospital/scripts.pory"
# 80 "data/maps/Hospital/scripts.pory"
# 322 "data/maps/Hospital/scripts.pory"
	walk_left
# 323 "data/maps/Hospital/scripts.pory"
	step_end
# 324 "data/maps/Hospital/scripts.pory"

# 325 "data/maps/Hospital/scripts.pory"
# 83 "data/maps/Hospital/scripts.pory"
# 326 "data/maps/Hospital/scripts.pory"
heart:
# 327 "data/maps/Hospital/scripts.pory"
# 84 "data/maps/Hospital/scripts.pory"
# 328 "data/maps/Hospital/scripts.pory"
	emote_heart
# 329 "data/maps/Hospital/scripts.pory"
	step_end
# 330 "data/maps/Hospital/scripts.pory"

# 331 "data/maps/Hospital/scripts.pory"
Luxura_Text_0:
# 332 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
# 333 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY} Nurses, grab her don't let her\n"
# 334 "data/maps/Hospital/scripts.pory"
	.string "run away!$"
# 335 "data/maps/Hospital/scripts.pory"

# 336 "data/maps/Hospital/scripts.pory"
Luxura_Text_1:
# 337 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
# 338 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't worry you will feel better\n"
# 339 "data/maps/Hospital/scripts.pory"
	.string "after taking the medicine.\p"
# 340 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Old woman:{COLOR RED}{SHADOW LIGHT_GRAY}Will he be alright?\p"
# 341 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nurse:{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Ma'am.$"
# 342 "data/maps/Hospital/scripts.pory"

# 343 "data/maps/Hospital/scripts.pory"
Luxura_Text_2:
# 344 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
# 345 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Congratulations, it's a boy!\p"
# 346 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(The nurse gently hands baby to his\n"
# 347 "data/maps/Hospital/scripts.pory"
	.string "mother.)$"
# 348 "data/maps/Hospital/scripts.pory"

# 349 "data/maps/Hospital/scripts.pory"
Luxura_Text_3:
# 350 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
# 351 "data/maps/Hospital/scripts.pory"
	.string "Baby:Wahh...Wahh$"
# 352 "data/maps/Hospital/scripts.pory"

# 353 "data/maps/Hospital/scripts.pory"
Luxura_Text_4:
# 354 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
# 355 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's so small...\n"
# 356 "data/maps/Hospital/scripts.pory"
	.string "and perfect.\p"
# 357 "data/maps/Hospital/scripts.pory"
	.string "What should we name him?$"
# 358 "data/maps/Hospital/scripts.pory"

# 359 "data/maps/Hospital/scripts.pory"
Luxura_Text_5:
# 360 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
# 361 "data/maps/Hospital/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We'll name him Xylar. He's\n"
# 362 "data/maps/Hospital/scripts.pory"
	.string "destined for great things, I can feel\l"
# 363 "data/maps/Hospital/scripts.pory"
	.string "it.$"
# 364 "data/maps/Hospital/scripts.pory"

# 365 "data/maps/Hospital/scripts.pory"
Luxura_Text_6:
# 366 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
# 367 "data/maps/Hospital/scripts.pory"
	.string "Baby:Hehh...Hehh$"
# 368 "data/maps/Hospital/scripts.pory"

# 369 "data/maps/Hospital/scripts.pory"
Luxura_Text_7:
# 370 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
# 371 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar... Our precious little Xylar.\n"
# 372 "data/maps/Hospital/scripts.pory"
	.string "We'll protect you, always.$"
# 373 "data/maps/Hospital/scripts.pory"

# 374 "data/maps/Hospital/scripts.pory"
Luxura_Text_8:
# 375 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
# 376 "data/maps/Hospital/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This world is full of challenges,\n"
# 377 "data/maps/Hospital/scripts.pory"
	.string "but you won't face them alone. We'll be\l"
# 378 "data/maps/Hospital/scripts.pory"
	.string "with you, every step of the way.$"
# 379 "data/maps/Hospital/scripts.pory"

# 380 "data/maps/Hospital/scripts.pory"
Luxura_Text_9:
# 381 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
# 382 "data/maps/Hospital/scripts.pory"
	.string "Baby:Goo...Gahh$"
# 383 "data/maps/Hospital/scripts.pory"

# 384 "data/maps/Hospital/scripts.pory"
Luxura_Text_10:
# 385 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
# 386 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's a strong one already. I can\n"
# 387 "data/maps/Hospital/scripts.pory"
	.string "tell he'll grow up to be someone special.$"
# 388 "data/maps/Hospital/scripts.pory"

# 389 "data/maps/Hospital/scripts.pory"
Luxura_Text_11:
# 390 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
# 391 "data/maps/Hospital/scripts.pory"
	.string "12 years later$"
# 392 "data/maps/Hospital/scripts.pory"

# 393 "data/maps/Hospital/scripts.pory"
myloll::
# 394 "data/maps/Hospital/scripts.pory"
# 87 "data/maps/Hospital/scripts.pory"
# 395 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY}Say Aaaaaa\p"
# 396 "data/maps/Hospital/scripts.pory"
	.string "$"
# 397 "data/maps/Hospital/scripts.pory"

# 398 "data/maps/Hospital/scripts.pory"
scared::
# 399 "data/maps/Hospital/scripts.pory"
# 91 "data/maps/Hospital/scripts.pory"
# 400 "data/maps/Hospital/scripts.pory"
	.string "Girl:{COLOR RED}{SHADOW LIGHT_GRAY}I can't take that injection! I have\n"
# 401 "data/maps/Hospital/scripts.pory"
	.string "to get out of here!\p"
# 402 "data/maps/Hospital/scripts.pory"
	.string "THUUDDD!!!$"

name1::
# 404 "data/maps/Hospital/scripts.pory"
	.string "Nurse$"

name2::
# 408 "data/maps/Hospital/scripts.pory"
	.string "Elysia$"

name3::
# 411 "data/maps/Hospital/scripts.pory"
	.string "Aurther$"

name4::
# 415 "data/maps/Hospital/scripts.pory"
	.string "Mira$"
