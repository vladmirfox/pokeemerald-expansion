LuxuraIndoor_MapScripts::
# 2 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, tragedy
	.byte 0


MaidZ::
# 5 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4A2, MaidZ_1
# 13 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 14 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 15 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 16 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 17 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 18 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 1, exclam
# 19 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_2
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 22 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 25 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_3
# 26 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 27 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 28 "data/maps/LuxuraIndoor/scripts.pory"
	playfanfare FANFARE_OBTAIN_ITEM
# 29 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_4
# 30 "data/maps/LuxuraIndoor/scripts.pory"
	waitfanfare
# 31 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE102_STATE, 8
# 32 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A2
# 33 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return

MaidZ_1:
# 6 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 7 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 8 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 9 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 10 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 11 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Maid::
# 38 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 39 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 40 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 41 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 42 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 43 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidG::
# 47 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 48 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 49 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 50 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidG_Text_0
# 51 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 52 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidD::
# 56 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 57 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 58 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 59 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidD_Text_0
# 60 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 61 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidB::
# 65 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 66 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 67 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidB_Text_0
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 70 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidM::
# 74 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 75 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 76 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidM_Text_0
# 78 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 79 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidE::
# 83 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49E, MaidE_1
# 91 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 92 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 93 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 94 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 95 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 96 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 2, exclam
# 97 "data/maps/LuxuraIndoor/scripts.pory"
	namebox felicia
# 98 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_1
# 99 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 100 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 101 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 102 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 103 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 104 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 105 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
# 106 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE102_STATE, 7
# 107 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE103_STATE, 1
	return

MaidE_1:
# 84 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 85 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 86 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 87 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 88 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 89 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidC::
# 112 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 113 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 114 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 115 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidC_Text_0
# 116 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 117 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Minccino::
# 121 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 122 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 123 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Minccino_Text_0
# 124 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 125 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Minccino_Text_1
# 126 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 127 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 128 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Grumpig::
# 132 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, Grumpig_1
# 145 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 146 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 147 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 148 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Grumpig_Text_0
# 149 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 150 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 151 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 152 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 153 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return

Grumpig_1:
# 133 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 134 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 135 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 136 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Grumpig_Text_0
# 137 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 138 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 139 "data/maps/LuxuraIndoor/scripts.pory"
	giveitem ITEM_TWISTED_SPOON, 1
# 140 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 141 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 142 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 143 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Blissey::
# 157 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 158 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 159 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Blissey_Text_0
# 160 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 161 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Blissey_Text_1
# 162 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 163 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 164 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


strol::
# 173 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 174 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 175 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox strol_Text_0
# 176 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


tragedy::
# 179 "data/maps/LuxuraIndoor/scripts.pory"
	compare VAR_ROUTE102_STATE, 9
	goto_if_lt tragedy_1
# 185 "data/maps/LuxuraIndoor/scripts.pory"
	compare VAR_ROUTE102_STATE, 9
	goto_if_eq tragedy_2
# 191 "data/maps/LuxuraIndoor/scripts.pory"
	compare VAR_ROUTE102_STATE, 10
	goto_if_eq tragedy_3
# 197 "data/maps/LuxuraIndoor/scripts.pory"
	compare VAR_ROUTE102_STATE, 11
	goto_if_eq tragedy_4
# 254 "data/maps/LuxuraIndoor/scripts.pory"
	compare VAR_ROUTE102_STATE, 11
	goto_if_gt tragedy_5
	return

tragedy_1:
# 180 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 181 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 182 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 183 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
	return

tragedy_2:
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 187 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 188 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 189 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
	return

tragedy_3:
# 192 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 193 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 194 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 195 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
	return

tragedy_4:
# 198 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 199 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 200 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 201 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 202 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 203 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 204 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 205 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 206 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 207 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 208 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 209 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 210 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 211 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 212 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 213 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 214 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 215 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 216 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 217 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 218 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 219 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 220 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 221 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 223 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 224 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 225 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 226 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 227 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 228 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 229 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 230 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 231 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 232 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 233 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 234 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 235 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 236 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 237 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 238 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 239 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 240 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 241 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 242 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 243 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 244 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 245 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 246 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 247 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 248 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 249 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 250 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 251 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 252 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
	return

tragedy_5:
# 255 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 256 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 257 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 258 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 259 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 260 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 261 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 262 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 263 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 264 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 265 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 266 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 267 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 268 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 269 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 270 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 271 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 272 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 273 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 274 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 275 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 276 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 277 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 278 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 279 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 280 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 281 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 282 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 283 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 284 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 285 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 286 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 287 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 288 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 289 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 290 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 291 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 292 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 293 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 294 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 295 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 296 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 297 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 298 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 299 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 300 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 301 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 302 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 303 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 304 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 305 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 306 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 307 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 308 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 309 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
	return


MaidZ_Text_0:
# 8 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Maid$"

MaidZ_Text_1:
# 9 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Young master,please let me know if you\n"
	.string "need anything.$"

MaidZ_Text_2:
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your shoes?\p"
	.string "I'll go get it right away.$"

MaidZ_Text_3:
# 25 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Here you go$"

MaidZ_Text_4:
# 29 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Recieved {COLOR BLUE}{SHADOW LIGHT_GRAY}RUNNING SHOES$"

MaidG_Text_0:
# 50 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Grumpig helps us by using its psychic\n"
	.string "powers to precisely measure and mix the\l"
	.string "ingredients, ensuring perfect results\l"
	.string "every time.$"

MaidD_Text_0:
# 59 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} I'm just finishing up the dishes and\n"
	.string "will have everything cleaned and put\l"
	.string "away shortly.$"

MaidB_Text_0:
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Having Blissey in the kitchen ensures\n"
	.string "that every dish is prepared with care\l"
	.string "and has a touch of healing energy,\l"
	.string "making meals not only delicious but also\l"
	.string "comforting.$"

MaidM_Text_0:
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} With Minccino around, cleaning is a\n"
	.string "breeze,its Swift Swipes keep\l"
	.string "everything spotless and organized in\l"
	.string "no time.$"

MaidE_Text_0:
# 87 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Lady Elysia is so considerate; she\n"
	.string "knows I love reading, so she's given me\l"
	.string "a break in the library to enjoy my book.$"

MaidE_Text_1:
# 98 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What? Lady Elysia is asking for me?\p"
	.string "I'll be on my way.$"

MaidC_Text_0:
# 115 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} I'm just dusting the shelves in the\n"
	.string "library to keep everything neat.$"

Minccino_Text_0:
# 123 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Minccino$"

Minccino_Text_1:
# 125 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Chii,chii! Min-min!$"

Grumpig_Text_0:
# 136 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Grumpig$"

Grumpig_Text_1:
# 138 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Pii, pii! Grrum, grrum!$"

Blissey_Text_0:
# 159 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Blissey$"

Blissey_Text_1:
# 161 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Hoo, hoo! Blii, bliiss!$"

strol_Text_0:
# 175 "data/maps/LuxuraIndoor/scripts.pory"
	.string "It's time for my stroll with Mira.\p"
	.string "I should go tell her.$"

felicia::
# 167 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Felicia$"
