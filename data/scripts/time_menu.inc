WaitingMenu::
# 2 "data/scripts/time_menu.pory"
	lockall
# 3 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaitingMenu_Text_0, WaitingMenu_Text_1
# 4 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 5 "data/scripts/time_menu.pory"
	case 0, WaitingMenu_2
# 7 "data/scripts/time_menu.pory"
	case 1, WaitingMenu_3
	return

WaitingMenu_2:
# 6 "data/scripts/time_menu.pory"
	goto Add_Time
	return

WaitingMenu_3:
# 8 "data/scripts/time_menu.pory"
	goto Set_Time
	return


Add_Time:
# 13 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, Add_Time_Text_0, Add_Time_Text_1
# 14 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 15 "data/scripts/time_menu.pory"
	case 0, Add_Time_2
# 17 "data/scripts/time_menu.pory"
	case 1, Add_Time_3
	return

Add_Time_2:
# 16 "data/scripts/time_menu.pory"
	goto Add_Days
	return

Add_Time_3:
# 18 "data/scripts/time_menu.pory"
	goto Add_Hours
	return


Add_Days:
# 23 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Add_Days_Text_0, Add_Days_Text_1, Add_Days_Text_2
# 24 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 25 "data/scripts/time_menu.pory"
	case 0, Add_Days_2
# 33 "data/scripts/time_menu.pory"
	case 1, Add_Days_3
# 41 "data/scripts/time_menu.pory"
	case 2, Add_Days_4
	return

Add_Days_2:
# 26 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/scripts/time_menu.pory"
	addday 1
# 28 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 29 "data/scripts/time_menu.pory"
	waitmessage
# 30 "data/scripts/time_menu.pory"
	closemessage
# 31 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
	end

Add_Days_3:
# 34 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/scripts/time_menu.pory"
	addday 6
# 36 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 37 "data/scripts/time_menu.pory"
	waitmessage
# 38 "data/scripts/time_menu.pory"
	closemessage
# 39 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
	end

Add_Days_4:
# 42 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/scripts/time_menu.pory"
	addday 12
# 44 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 45 "data/scripts/time_menu.pory"
	waitmessage
# 46 "data/scripts/time_menu.pory"
	closemessage
# 47 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
	end


Add_Hours:
# 53 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, Add_Days_Text_0, Add_Days_Text_1, Add_Days_Text_2
# 54 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 55 "data/scripts/time_menu.pory"
	case 0, Add_Hours_2
# 63 "data/scripts/time_menu.pory"
	case 1, Add_Hours_3
# 71 "data/scripts/time_menu.pory"
	case 2, Add_Hours_4
	return

Add_Hours_2:
# 56 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/scripts/time_menu.pory"
	addhour 1
# 58 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 59 "data/scripts/time_menu.pory"
	waitmessage
# 60 "data/scripts/time_menu.pory"
	closemessage
# 61 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
	end

Add_Hours_3:
# 64 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/scripts/time_menu.pory"
	addhour 6
# 66 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 67 "data/scripts/time_menu.pory"
	waitmessage
# 68 "data/scripts/time_menu.pory"
	closemessage
# 69 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
	end

Add_Hours_4:
# 72 "data/scripts/time_menu.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/scripts/time_menu.pory"
	addhour 12
# 74 "data/scripts/time_menu.pory"
	msgbox Add_Days_Text_3
# 75 "data/scripts/time_menu.pory"
	waitmessage
# 76 "data/scripts/time_menu.pory"
	closemessage
# 77 "data/scripts/time_menu.pory"
	fadescreen FADE_FROM_BLACK
	end


Set_Time:
# 83 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 1, 0, DYN_MULTICHOICE_CB_NONE, Set_Time_Text_0, Set_Time_Text_1
# 84 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 85 "data/scripts/time_menu.pory"
	case 0, Set_Time_2
# 87 "data/scripts/time_menu.pory"
	case 1, Set_Time_3
	return

Set_Time_2:
# 86 "data/scripts/time_menu.pory"
	goto Set_Days
	return

Set_Time_3:
# 88 "data/scripts/time_menu.pory"
	goto Set_Hours
	return


Set_Days:
# 93 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 7, 0, DYN_MULTICHOICE_CB_NONE, Set_Days_Text_0, Set_Days_Text_1, Set_Days_Text_2, Set_Days_Text_3, Set_Days_Text_4, Set_Days_Text_5, Set_Days_Text_6, Set_Days_Text_7, Set_Days_Text_8, Set_Days_Text_9, Set_Days_Text_10, Set_Days_Text_11, Set_Days_Text_12, Set_Days_Text_11, Set_Days_Text_13, Set_Days_Text_14, Set_Days_Text_15, Set_Days_Text_16, Set_Days_Text_17, Set_Days_Text_18, Set_Days_Text_19, Set_Days_Text_20, Set_Days_Text_21, Set_Days_Text_22, Set_Days_Text_23, Set_Days_Text_24, Set_Days_Text_25, Set_Days_Text_26, Set_Days_Text_27
# 94 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 95 "data/scripts/time_menu.pory"
	case 0, Set_Days_2
# 98 "data/scripts/time_menu.pory"
	case 1, Set_Days_3
# 101 "data/scripts/time_menu.pory"
	case 2, Set_Days_4
# 104 "data/scripts/time_menu.pory"
	case 3, Set_Days_5
# 107 "data/scripts/time_menu.pory"
	case 4, Set_Days_6
# 110 "data/scripts/time_menu.pory"
	case 5, Set_Days_7
# 113 "data/scripts/time_menu.pory"
	case 6, Set_Days_8
# 116 "data/scripts/time_menu.pory"
	case 7, Set_Days_9
# 119 "data/scripts/time_menu.pory"
	case 8, Set_Days_10
# 122 "data/scripts/time_menu.pory"
	case 9, Set_Days_11
# 125 "data/scripts/time_menu.pory"
	case 10, Set_Days_12
# 128 "data/scripts/time_menu.pory"
	case 11, Set_Days_13
# 131 "data/scripts/time_menu.pory"
	case 12, Set_Days_14
# 134 "data/scripts/time_menu.pory"
	case 13, Set_Days_15
# 137 "data/scripts/time_menu.pory"
	case 14, Set_Days_16
# 140 "data/scripts/time_menu.pory"
	case 15, Set_Days_17
# 143 "data/scripts/time_menu.pory"
	case 16, Set_Days_18
# 146 "data/scripts/time_menu.pory"
	case 17, Set_Days_19
# 149 "data/scripts/time_menu.pory"
	case 18, Set_Days_20
# 152 "data/scripts/time_menu.pory"
	case 19, Set_Days_21
# 155 "data/scripts/time_menu.pory"
	case 20, Set_Days_22
# 158 "data/scripts/time_menu.pory"
	case 21, Set_Days_23
# 161 "data/scripts/time_menu.pory"
	case 22, Set_Days_24
# 164 "data/scripts/time_menu.pory"
	case 23, Set_Days_25
# 167 "data/scripts/time_menu.pory"
	case 24, Set_Days_26
# 170 "data/scripts/time_menu.pory"
	case 25, Set_Days_27
# 173 "data/scripts/time_menu.pory"
	case 26, Set_Days_28
# 176 "data/scripts/time_menu.pory"
	case 27, Set_Days_29
	return

Set_Days_2:
# 96 "data/scripts/time_menu.pory"
	setday 1
	end

Set_Days_3:
# 99 "data/scripts/time_menu.pory"
	setday 2
	end

Set_Days_4:
# 102 "data/scripts/time_menu.pory"
	setday 3
	end

Set_Days_5:
# 105 "data/scripts/time_menu.pory"
	setday 4
	end

Set_Days_6:
# 108 "data/scripts/time_menu.pory"
	setday 5
	end

Set_Days_7:
# 111 "data/scripts/time_menu.pory"
	setday 6
	end

Set_Days_8:
# 114 "data/scripts/time_menu.pory"
	setday 7
	end

Set_Days_9:
# 117 "data/scripts/time_menu.pory"
	setday 8
	end

Set_Days_10:
# 120 "data/scripts/time_menu.pory"
	setday 9
	end

Set_Days_11:
# 123 "data/scripts/time_menu.pory"
	setday 10
	end

Set_Days_12:
# 126 "data/scripts/time_menu.pory"
	setday 11
	end

Set_Days_13:
# 129 "data/scripts/time_menu.pory"
	setday 12
	end

Set_Days_14:
# 132 "data/scripts/time_menu.pory"
	setday 13
	end

Set_Days_15:
# 135 "data/scripts/time_menu.pory"
	setday 14
	end

Set_Days_16:
# 138 "data/scripts/time_menu.pory"
	setday 15
	end

Set_Days_17:
# 141 "data/scripts/time_menu.pory"
	setday 16
	end

Set_Days_18:
# 144 "data/scripts/time_menu.pory"
	setday 17
	end

Set_Days_19:
# 147 "data/scripts/time_menu.pory"
	setday 18
	end

Set_Days_20:
# 150 "data/scripts/time_menu.pory"
	setday 19
	end

Set_Days_21:
# 153 "data/scripts/time_menu.pory"
	setday 20
	end

Set_Days_22:
# 156 "data/scripts/time_menu.pory"
	setday 21
	end

Set_Days_23:
# 159 "data/scripts/time_menu.pory"
	setday 22
	end

Set_Days_24:
# 162 "data/scripts/time_menu.pory"
	setday 23
	end

Set_Days_25:
# 165 "data/scripts/time_menu.pory"
	setday 24
	end

Set_Days_26:
# 168 "data/scripts/time_menu.pory"
	setday 25
	end

Set_Days_27:
# 171 "data/scripts/time_menu.pory"
	setday 26
	end

Set_Days_28:
# 174 "data/scripts/time_menu.pory"
	setday 27
	end

Set_Days_29:
# 177 "data/scripts/time_menu.pory"
	setday 28
	end


Set_Hours:
# 183 "data/scripts/time_menu.pory"
	dynmultichoice 1, 1, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Set_Hours_Text_0, Set_Hours_Text_1, Set_Hours_Text_2, Set_Hours_Text_3, Set_Hours_Text_4, Set_Hours_Text_5, Set_Hours_Text_6, Set_Hours_Text_7, Set_Hours_Text_8, Set_Hours_Text_9, Set_Hours_Text_10, Set_Hours_Text_11, Set_Hours_Text_12, Set_Hours_Text_13, Set_Hours_Text_14, Set_Hours_Text_15, Set_Hours_Text_16, Set_Hours_Text_17, Set_Hours_Text_18, Set_Hours_Text_19, Set_Hours_Text_20, Set_Hours_Text_21, Set_Hours_Text_22, Set_Hours_Text_23
# 184 "data/scripts/time_menu.pory"
	switch VAR_RESULT
# 185 "data/scripts/time_menu.pory"
	case 0, Set_Hours_2
# 188 "data/scripts/time_menu.pory"
	case 1, Set_Hours_3
# 191 "data/scripts/time_menu.pory"
	case 2, Set_Hours_4
# 194 "data/scripts/time_menu.pory"
	case 3, Set_Hours_5
# 197 "data/scripts/time_menu.pory"
	case 4, Set_Hours_6
# 200 "data/scripts/time_menu.pory"
	case 5, Set_Hours_7
# 203 "data/scripts/time_menu.pory"
	case 6, Set_Hours_8
# 206 "data/scripts/time_menu.pory"
	case 7, Set_Hours_9
# 209 "data/scripts/time_menu.pory"
	case 8, Set_Hours_10
# 212 "data/scripts/time_menu.pory"
	case 9, Set_Hours_11
# 215 "data/scripts/time_menu.pory"
	case 10, Set_Hours_12
# 218 "data/scripts/time_menu.pory"
	case 11, Set_Hours_13
# 221 "data/scripts/time_menu.pory"
	case 12, Set_Hours_14
# 224 "data/scripts/time_menu.pory"
	case 13, Set_Hours_15
# 227 "data/scripts/time_menu.pory"
	case 14, Set_Hours_16
# 230 "data/scripts/time_menu.pory"
	case 15, Set_Hours_17
# 233 "data/scripts/time_menu.pory"
	case 16, Set_Hours_18
# 236 "data/scripts/time_menu.pory"
	case 17, Set_Hours_19
# 239 "data/scripts/time_menu.pory"
	case 18, Set_Hours_20
# 242 "data/scripts/time_menu.pory"
	case 19, Set_Hours_21
# 245 "data/scripts/time_menu.pory"
	case 20, Set_Hours_22
# 248 "data/scripts/time_menu.pory"
	case 21, Set_Hours_23
# 251 "data/scripts/time_menu.pory"
	case 22, Set_Hours_24
# 254 "data/scripts/time_menu.pory"
	case 23, Set_Hours_25
	return

Set_Hours_2:
# 186 "data/scripts/time_menu.pory"
	sethour 0
	end

Set_Hours_3:
# 189 "data/scripts/time_menu.pory"
	sethour 1
	end

Set_Hours_4:
# 192 "data/scripts/time_menu.pory"
	sethour 2
	end

Set_Hours_5:
# 195 "data/scripts/time_menu.pory"
	sethour 3
	end

Set_Hours_6:
# 198 "data/scripts/time_menu.pory"
	sethour 4
	end

Set_Hours_7:
# 201 "data/scripts/time_menu.pory"
	sethour 5
	end

Set_Hours_8:
# 204 "data/scripts/time_menu.pory"
	sethour 6
	end

Set_Hours_9:
# 207 "data/scripts/time_menu.pory"
	sethour 7
	end

Set_Hours_10:
# 210 "data/scripts/time_menu.pory"
	sethour 8
	end

Set_Hours_11:
# 213 "data/scripts/time_menu.pory"
	sethour 9
	end

Set_Hours_12:
# 216 "data/scripts/time_menu.pory"
	sethour 10
	end

Set_Hours_13:
# 219 "data/scripts/time_menu.pory"
	sethour 11
	end

Set_Hours_14:
# 222 "data/scripts/time_menu.pory"
	sethour 12
	end

Set_Hours_15:
# 225 "data/scripts/time_menu.pory"
	sethour 13
	end

Set_Hours_16:
# 228 "data/scripts/time_menu.pory"
	sethour 14
	end

Set_Hours_17:
# 231 "data/scripts/time_menu.pory"
	sethour 15
	end

Set_Hours_18:
# 234 "data/scripts/time_menu.pory"
	sethour 16
	end

Set_Hours_19:
# 237 "data/scripts/time_menu.pory"
	sethour 17
	end

Set_Hours_20:
# 240 "data/scripts/time_menu.pory"
	sethour 18
	end

Set_Hours_21:
# 243 "data/scripts/time_menu.pory"
	sethour 19
	end

Set_Hours_22:
# 246 "data/scripts/time_menu.pory"
	sethour 20
	end

Set_Hours_23:
# 249 "data/scripts/time_menu.pory"
	sethour 21
	end

Set_Hours_24:
# 252 "data/scripts/time_menu.pory"
	sethour 22
	end

Set_Hours_25:
# 255 "data/scripts/time_menu.pory"
	sethour 23
	end


WaitingMenu_Text_0:
# 3 "data/scripts/time_menu.pory"
	.string "Add time$"

WaitingMenu_Text_1:
# 3 "data/scripts/time_menu.pory"
	.string "Set time$"

Add_Time_Text_0:
# 13 "data/scripts/time_menu.pory"
	.string "Add Day$"

Add_Time_Text_1:
# 13 "data/scripts/time_menu.pory"
	.string "Add Hour$"

Add_Days_Text_0:
# 23 "data/scripts/time_menu.pory"
	.string "Add 1$"

Add_Days_Text_1:
# 23 "data/scripts/time_menu.pory"
	.string "Add 6$"

Add_Days_Text_2:
# 23 "data/scripts/time_menu.pory"
	.string "Add 12$"

Add_Days_Text_3:
# 28 "data/scripts/time_menu.pory"
	.string "You wait for a while…$"

Set_Time_Text_0:
# 83 "data/scripts/time_menu.pory"
	.string "Set Day$"

Set_Time_Text_1:
# 83 "data/scripts/time_menu.pory"
	.string "Set Hour$"

Set_Days_Text_0:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 1$"

Set_Days_Text_1:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 2$"

Set_Days_Text_2:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 3$"

Set_Days_Text_3:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 4$"

Set_Days_Text_4:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 5$"

Set_Days_Text_5:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 6$"

Set_Days_Text_6:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 7$"

Set_Days_Text_7:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 8$"

Set_Days_Text_8:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 9$"

Set_Days_Text_9:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 10$"

Set_Days_Text_10:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 11$"

Set_Days_Text_11:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 12$"

Set_Days_Text_12:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 13$"

Set_Days_Text_13:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 14$"

Set_Days_Text_14:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 15$"

Set_Days_Text_15:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 16$"

Set_Days_Text_16:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 17$"

Set_Days_Text_17:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 18$"

Set_Days_Text_18:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 19$"

Set_Days_Text_19:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 20$"

Set_Days_Text_20:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 21$"

Set_Days_Text_21:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 22$"

Set_Days_Text_22:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 23$"

Set_Days_Text_23:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 24$"

Set_Days_Text_24:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 25$"

Set_Days_Text_25:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 26$"

Set_Days_Text_26:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 27$"

Set_Days_Text_27:
# 93 "data/scripts/time_menu.pory"
	.string "Set Day 28$"

Set_Hours_Text_0:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 0$"

Set_Hours_Text_1:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 1$"

Set_Hours_Text_2:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 2$"

Set_Hours_Text_3:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 3$"

Set_Hours_Text_4:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 4$"

Set_Hours_Text_5:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 5$"

Set_Hours_Text_6:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 6$"

Set_Hours_Text_7:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 7$"

Set_Hours_Text_8:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 8$"

Set_Hours_Text_9:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 9$"

Set_Hours_Text_10:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 10$"

Set_Hours_Text_11:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 11$"

Set_Hours_Text_12:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 12$"

Set_Hours_Text_13:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 13$"

Set_Hours_Text_14:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 14$"

Set_Hours_Text_15:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 15$"

Set_Hours_Text_16:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 16$"

Set_Hours_Text_17:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 17$"

Set_Hours_Text_18:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 18$"

Set_Hours_Text_19:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 19$"

Set_Hours_Text_20:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 20$"

Set_Hours_Text_21:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 21$"

Set_Hours_Text_22:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 22$"

Set_Hours_Text_23:
# 183 "data/scripts/time_menu.pory"
	.string "Set Hour 23$"
