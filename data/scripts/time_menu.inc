WaitingMenu::
# 2 "data/scripts/time_menu.pory"
	lockall
# 3 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaitingMenu_Text_0, WaitingMenu_Text_1
# 4 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 5 "data/scripts/time_menu.pory"
	case 0, WaitingMenu_3
# 7 "data/scripts/time_menu.pory"
	case 1, WaitingMenu_4
WaitingMenu_1:
# 10 "data/scripts/time_menu.pory"
	release
	return

WaitingMenu_3:
# 6 "data/scripts/time_menu.pory"
	call Add_Time
	goto WaitingMenu_1

WaitingMenu_4:
# 8 "data/scripts/time_menu.pory"
	call Set_Time
	goto WaitingMenu_1


Add_Time:
# 14 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, Add_Time_Text_0, Add_Time_Text_1
# 15 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 16 "data/scripts/time_menu.pory"
	case 0, Add_Time_3
# 18 "data/scripts/time_menu.pory"
	case 1, Add_Time_4
Add_Time_1:
# 21 "data/scripts/time_menu.pory"
	release
	return

Add_Time_3:
# 17 "data/scripts/time_menu.pory"
	call Add_Days
	goto Add_Time_1

Add_Time_4:
# 19 "data/scripts/time_menu.pory"
	call Add_Hours
	goto Add_Time_1


Add_Days:
# 25 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Add_Days_Text_0, Add_Days_Text_1, Add_Days_Text_2
# 26 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 27 "data/scripts/time_menu.pory"
	case 0, Add_Days_3
# 35 "data/scripts/time_menu.pory"
	case 1, Add_Days_4
# 43 "data/scripts/time_menu.pory"
	case 2, Add_Days_5
Add_Days_1:
# 52 "data/scripts/time_menu.pory"
	release
	return

Add_Days_3:
# 28 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/scripts/time_menu.pory"
	addday 1
# 30 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 31 "data/scripts/time_menu.pory"
	waitmessage
# 32 "data/scripts/time_menu.pory"
	closemessage
# 33 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/scripts/time_menu.pory"
	release
	goto Add_Days_1

Add_Days_4:
# 36 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/scripts/time_menu.pory"
	addday 6
# 38 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 39 "data/scripts/time_menu.pory"
	waitmessage
# 40 "data/scripts/time_menu.pory"
	closemessage
# 41 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
# 42 "data/scripts/time_menu.pory"
	release
	goto Add_Days_1

Add_Days_5:
# 44 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/scripts/time_menu.pory"
	addday 12
# 46 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 47 "data/scripts/time_menu.pory"
	waitmessage
# 48 "data/scripts/time_menu.pory"
	closemessage
# 49 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
# 50 "data/scripts/time_menu.pory"
	release
	goto Add_Days_1


Add_Hours:
# 56 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, Add_Days_Text_0, Add_Days_Text_1, Add_Days_Text_2
# 57 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 58 "data/scripts/time_menu.pory"
	case 0, Add_Hours_3
# 66 "data/scripts/time_menu.pory"
	case 1, Add_Hours_4
# 74 "data/scripts/time_menu.pory"
	case 2, Add_Hours_5
Add_Hours_1:
# 83 "data/scripts/time_menu.pory"
	release
	return

Add_Hours_3:
# 59 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/scripts/time_menu.pory"
	addhour 1
# 61 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 62 "data/scripts/time_menu.pory"
	waitmessage
# 63 "data/scripts/time_menu.pory"
	closemessage
# 64 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/scripts/time_menu.pory"
	release
	goto Add_Hours_1

Add_Hours_4:
# 67 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/scripts/time_menu.pory"
	addhour 6
# 69 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 70 "data/scripts/time_menu.pory"
	waitmessage
# 71 "data/scripts/time_menu.pory"
	closemessage
# 72 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/scripts/time_menu.pory"
	release
	goto Add_Hours_1

Add_Hours_5:
# 75 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/scripts/time_menu.pory"
	addhour 12
# 77 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 78 "data/scripts/time_menu.pory"
	waitmessage
# 79 "data/scripts/time_menu.pory"
	closemessage
# 80 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
# 81 "data/scripts/time_menu.pory"
	release
	goto Add_Hours_1


Set_Time:
# 87 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, Set_Time_Text_0, Set_Time_Text_1
# 88 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 89 "data/scripts/time_menu.pory"
	case 0, Set_Time_3
# 91 "data/scripts/time_menu.pory"
	case 1, Set_Time_4
Set_Time_1:
# 94 "data/scripts/time_menu.pory"
	release
	return

Set_Time_3:
# 90 "data/scripts/time_menu.pory"
	call Set_Days
	goto Set_Time_1

Set_Time_4:
# 92 "data/scripts/time_menu.pory"
	call Set_Hours
	goto Set_Time_1


Set_Days:
# 98 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 7, 0, DYN_MULTICHOICE_CB_NONE, Set_Days_Text_0, Set_Days_Text_1, Set_Days_Text_2, Set_Days_Text_3, Set_Days_Text_4, Set_Days_Text_5, Set_Days_Text_6, Set_Days_Text_7, Set_Days_Text_8, Set_Days_Text_9, Set_Days_Text_10, Set_Days_Text_11, Set_Days_Text_12, Set_Days_Text_11, Set_Days_Text_13, Set_Days_Text_14, Set_Days_Text_15, Set_Days_Text_16, Set_Days_Text_17, Set_Days_Text_18, Set_Days_Text_19, Set_Days_Text_20, Set_Days_Text_21, Set_Days_Text_22, Set_Days_Text_23, Set_Days_Text_24, Set_Days_Text_25, Set_Days_Text_26, Set_Days_Text_27
# 99 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 100 "data/scripts/time_menu.pory"
	case 0, Set_Days_3
# 103 "data/scripts/time_menu.pory"
	case 1, Set_Days_4
# 106 "data/scripts/time_menu.pory"
	case 2, Set_Days_5
# 109 "data/scripts/time_menu.pory"
	case 3, Set_Days_6
# 112 "data/scripts/time_menu.pory"
	case 4, Set_Days_7
# 115 "data/scripts/time_menu.pory"
	case 5, Set_Days_8
# 118 "data/scripts/time_menu.pory"
	case 6, Set_Days_9
# 121 "data/scripts/time_menu.pory"
	case 7, Set_Days_10
# 124 "data/scripts/time_menu.pory"
	case 8, Set_Days_11
# 127 "data/scripts/time_menu.pory"
	case 9, Set_Days_12
# 130 "data/scripts/time_menu.pory"
	case 10, Set_Days_13
# 133 "data/scripts/time_menu.pory"
	case 11, Set_Days_14
# 136 "data/scripts/time_menu.pory"
	case 12, Set_Days_15
# 139 "data/scripts/time_menu.pory"
	case 13, Set_Days_16
# 142 "data/scripts/time_menu.pory"
	case 14, Set_Days_17
# 145 "data/scripts/time_menu.pory"
	case 15, Set_Days_18
# 148 "data/scripts/time_menu.pory"
	case 16, Set_Days_19
# 151 "data/scripts/time_menu.pory"
	case 17, Set_Days_20
# 154 "data/scripts/time_menu.pory"
	case 18, Set_Days_21
# 157 "data/scripts/time_menu.pory"
	case 19, Set_Days_22
# 160 "data/scripts/time_menu.pory"
	case 20, Set_Days_23
# 163 "data/scripts/time_menu.pory"
	case 21, Set_Days_24
# 166 "data/scripts/time_menu.pory"
	case 22, Set_Days_25
# 169 "data/scripts/time_menu.pory"
	case 23, Set_Days_26
# 172 "data/scripts/time_menu.pory"
	case 24, Set_Days_27
# 175 "data/scripts/time_menu.pory"
	case 25, Set_Days_28
# 178 "data/scripts/time_menu.pory"
	case 26, Set_Days_29
# 181 "data/scripts/time_menu.pory"
	case 27, Set_Days_30
Set_Days_1:
# 185 "data/scripts/time_menu.pory"
	release
	return

Set_Days_3:
# 101 "data/scripts/time_menu.pory"
	setday 1
# 102 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_4:
# 104 "data/scripts/time_menu.pory"
	setday 2
# 105 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_5:
# 107 "data/scripts/time_menu.pory"
	setday 3
# 108 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_6:
# 110 "data/scripts/time_menu.pory"
	setday 4
# 111 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_7:
# 113 "data/scripts/time_menu.pory"
	setday 5
# 114 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_8:
# 116 "data/scripts/time_menu.pory"
	setday 6
# 117 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_9:
# 119 "data/scripts/time_menu.pory"
	setday 7
# 120 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_10:
# 122 "data/scripts/time_menu.pory"
	setday 8
# 123 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_11:
# 125 "data/scripts/time_menu.pory"
	setday 9
# 126 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_12:
# 128 "data/scripts/time_menu.pory"
	setday 10
# 129 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_13:
# 131 "data/scripts/time_menu.pory"
	setday 11
# 132 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_14:
# 134 "data/scripts/time_menu.pory"
	setday 12
# 135 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_15:
# 137 "data/scripts/time_menu.pory"
	setday 13
# 138 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_16:
# 140 "data/scripts/time_menu.pory"
	setday 14
# 141 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_17:
# 143 "data/scripts/time_menu.pory"
	setday 15
# 144 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_18:
# 146 "data/scripts/time_menu.pory"
	setday 16
# 147 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_19:
# 149 "data/scripts/time_menu.pory"
	setday 17
# 150 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_20:
# 152 "data/scripts/time_menu.pory"
	setday 18
# 153 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_21:
# 155 "data/scripts/time_menu.pory"
	setday 19
# 156 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_22:
# 158 "data/scripts/time_menu.pory"
	setday 20
# 159 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_23:
# 161 "data/scripts/time_menu.pory"
	setday 21
# 162 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_24:
# 164 "data/scripts/time_menu.pory"
	setday 22
# 165 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_25:
# 167 "data/scripts/time_menu.pory"
	setday 23
# 168 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_26:
# 170 "data/scripts/time_menu.pory"
	setday 24
# 171 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_27:
# 173 "data/scripts/time_menu.pory"
	setday 25
# 174 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_28:
# 176 "data/scripts/time_menu.pory"
	setday 26
# 177 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_29:
# 179 "data/scripts/time_menu.pory"
	setday 27
# 180 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1

Set_Days_30:
# 182 "data/scripts/time_menu.pory"
	setday 28
# 183 "data/scripts/time_menu.pory"
	release
	goto Set_Days_1


Set_Hours:
# 189 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Set_Hours_Text_0, Set_Hours_Text_1, Set_Hours_Text_2, Set_Hours_Text_3, Set_Hours_Text_4, Set_Hours_Text_5, Set_Hours_Text_6, Set_Hours_Text_7, Set_Hours_Text_8, Set_Hours_Text_9, Set_Hours_Text_10, Set_Hours_Text_11, Set_Hours_Text_12, Set_Hours_Text_13, Set_Hours_Text_14, Set_Hours_Text_15, Set_Hours_Text_16, Set_Hours_Text_17, Set_Hours_Text_18, Set_Hours_Text_19, Set_Hours_Text_20, Set_Hours_Text_21, Set_Hours_Text_22, Set_Hours_Text_23
# 190 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 191 "data/scripts/time_menu.pory"
	case 0, Set_Hours_3
# 194 "data/scripts/time_menu.pory"
	case 1, Set_Hours_4
# 197 "data/scripts/time_menu.pory"
	case 2, Set_Hours_5
# 200 "data/scripts/time_menu.pory"
	case 3, Set_Hours_6
# 203 "data/scripts/time_menu.pory"
	case 4, Set_Hours_7
# 206 "data/scripts/time_menu.pory"
	case 5, Set_Hours_8
# 209 "data/scripts/time_menu.pory"
	case 6, Set_Hours_9
# 212 "data/scripts/time_menu.pory"
	case 7, Set_Hours_10
# 215 "data/scripts/time_menu.pory"
	case 8, Set_Hours_11
# 218 "data/scripts/time_menu.pory"
	case 9, Set_Hours_12
# 221 "data/scripts/time_menu.pory"
	case 10, Set_Hours_13
# 224 "data/scripts/time_menu.pory"
	case 11, Set_Hours_14
# 227 "data/scripts/time_menu.pory"
	case 12, Set_Hours_15
# 230 "data/scripts/time_menu.pory"
	case 13, Set_Hours_16
# 233 "data/scripts/time_menu.pory"
	case 14, Set_Hours_17
# 236 "data/scripts/time_menu.pory"
	case 15, Set_Hours_18
# 239 "data/scripts/time_menu.pory"
	case 16, Set_Hours_19
# 242 "data/scripts/time_menu.pory"
	case 17, Set_Hours_20
# 245 "data/scripts/time_menu.pory"
	case 18, Set_Hours_21
# 248 "data/scripts/time_menu.pory"
	case 19, Set_Hours_22
# 251 "data/scripts/time_menu.pory"
	case 20, Set_Hours_23
# 254 "data/scripts/time_menu.pory"
	case 21, Set_Hours_24
# 257 "data/scripts/time_menu.pory"
	case 22, Set_Hours_25
# 260 "data/scripts/time_menu.pory"
	case 23, Set_Hours_26
Set_Hours_1:
# 264 "data/scripts/time_menu.pory"
	release
	return

Set_Hours_3:
# 192 "data/scripts/time_menu.pory"
	sethour 0
# 193 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_4:
# 195 "data/scripts/time_menu.pory"
	sethour 1
# 196 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_5:
# 198 "data/scripts/time_menu.pory"
	sethour 2
# 199 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_6:
# 201 "data/scripts/time_menu.pory"
	sethour 3
# 202 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_7:
# 204 "data/scripts/time_menu.pory"
	sethour 4
# 205 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_8:
# 207 "data/scripts/time_menu.pory"
	sethour 5
# 208 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_9:
# 210 "data/scripts/time_menu.pory"
	sethour 6
# 211 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_10:
# 213 "data/scripts/time_menu.pory"
	sethour 7
# 214 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_11:
# 216 "data/scripts/time_menu.pory"
	sethour 8
# 217 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_12:
# 219 "data/scripts/time_menu.pory"
	sethour 9
# 220 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_13:
# 222 "data/scripts/time_menu.pory"
	sethour 10
# 223 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_14:
# 225 "data/scripts/time_menu.pory"
	sethour 11
# 226 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_15:
# 228 "data/scripts/time_menu.pory"
	sethour 12
# 229 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_16:
# 231 "data/scripts/time_menu.pory"
	sethour 13
# 232 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_17:
# 234 "data/scripts/time_menu.pory"
	sethour 14
# 235 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_18:
# 237 "data/scripts/time_menu.pory"
	sethour 15
# 238 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_19:
# 240 "data/scripts/time_menu.pory"
	sethour 16
# 241 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_20:
# 243 "data/scripts/time_menu.pory"
	sethour 17
# 244 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_21:
# 246 "data/scripts/time_menu.pory"
	sethour 18
# 247 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_22:
# 249 "data/scripts/time_menu.pory"
	sethour 19
# 250 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_23:
# 252 "data/scripts/time_menu.pory"
	sethour 20
# 253 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_24:
# 255 "data/scripts/time_menu.pory"
	sethour 21
# 256 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_25:
# 258 "data/scripts/time_menu.pory"
	sethour 22
# 259 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1

Set_Hours_26:
# 261 "data/scripts/time_menu.pory"
	sethour 23
# 262 "data/scripts/time_menu.pory"
	release
	goto Set_Hours_1


WaitingMenu_Text_0:
# 3 "data/scripts/time_menu.pory"
	.string "Add time$"

WaitingMenu_Text_1:
# 3 "data/scripts/time_menu.pory"
	.string "Set time$"

Add_Time_Text_0:
# 14 "data/scripts/time_menu.pory"
	.string "Add Day$"

Add_Time_Text_1:
# 14 "data/scripts/time_menu.pory"
	.string "Add Hour$"

Add_Days_Text_0:
# 25 "data/scripts/time_menu.pory"
	.string "Add 1$"

Add_Days_Text_1:
# 25 "data/scripts/time_menu.pory"
	.string "Add 6$"

Add_Days_Text_2:
# 25 "data/scripts/time_menu.pory"
	.string "Add 12$"

Add_Days_Text_3:
# 30 "data/scripts/time_menu.pory"
	.string "You wait for a while…$"

Set_Time_Text_0:
# 87 "data/scripts/time_menu.pory"
	.string "Set Day$"

Set_Time_Text_1:
# 87 "data/scripts/time_menu.pory"
	.string "Set Hour$"

Set_Days_Text_0:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 1$"

Set_Days_Text_1:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 2$"

Set_Days_Text_2:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 3$"

Set_Days_Text_3:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 4$"

Set_Days_Text_4:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 5$"

Set_Days_Text_5:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 6$"

Set_Days_Text_6:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 7$"

Set_Days_Text_7:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 8$"

Set_Days_Text_8:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 9$"

Set_Days_Text_9:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 10$"

Set_Days_Text_10:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 11$"

Set_Days_Text_11:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 12$"

Set_Days_Text_12:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 13$"

Set_Days_Text_13:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 14$"

Set_Days_Text_14:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 15$"

Set_Days_Text_15:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 16$"

Set_Days_Text_16:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 17$"

Set_Days_Text_17:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 18$"

Set_Days_Text_18:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 19$"

Set_Days_Text_19:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 20$"

Set_Days_Text_20:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 21$"

Set_Days_Text_21:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 22$"

Set_Days_Text_22:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 23$"

Set_Days_Text_23:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 24$"

Set_Days_Text_24:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 25$"

Set_Days_Text_25:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 26$"

Set_Days_Text_26:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 27$"

Set_Days_Text_27:
# 98 "data/scripts/time_menu.pory"
	.string "Set Day 28$"

Set_Hours_Text_0:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 0$"

Set_Hours_Text_1:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 1$"

Set_Hours_Text_2:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 2$"

Set_Hours_Text_3:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 3$"

Set_Hours_Text_4:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 4$"

Set_Hours_Text_5:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 5$"

Set_Hours_Text_6:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 6$"

Set_Hours_Text_7:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 7$"

Set_Hours_Text_8:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 8$"

Set_Hours_Text_9:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 9$"

Set_Hours_Text_10:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 10$"

Set_Hours_Text_11:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 11$"

Set_Hours_Text_12:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 12$"

Set_Hours_Text_13:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 13$"

Set_Hours_Text_14:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 14$"

Set_Hours_Text_15:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 15$"

Set_Hours_Text_16:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 16$"

Set_Hours_Text_17:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 17$"

Set_Hours_Text_18:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 18$"

Set_Hours_Text_19:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 19$"

Set_Hours_Text_20:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 20$"

Set_Hours_Text_21:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 21$"

Set_Hours_Text_22:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 22$"

Set_Hours_Text_23:
# 189 "data/scripts/time_menu.pory"
	.string "Set Hour 23$"
