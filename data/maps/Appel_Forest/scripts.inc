Appel_Forest_MapScripts::
	.byte 0


givebulletseed::
# 6 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 7 "data/maps/Appel_Forest/scripts.pory"
	giveitem ITEM_TM09
# 8 "data/maps/Appel_Forest/scripts.pory"
	removeobject 6
# 9 "data/maps/Appel_Forest/scripts.pory"
	setflag FLAG_APPEL_FOREST_ITEM_1
# 10 "data/maps/Appel_Forest/scripts.pory"
	release
	end


giverocktomb::
# 15 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 16 "data/maps/Appel_Forest/scripts.pory"
	giveitem ITEM_TM39
# 17 "data/maps/Appel_Forest/scripts.pory"
	removeobject 7
# 18 "data/maps/Appel_Forest/scripts.pory"
	setflag FLAG_APPEL_FOREST_ITEM_2
# 19 "data/maps/Appel_Forest/scripts.pory"
	release
	end


givesilverpowder::
# 24 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 25 "data/maps/Appel_Forest/scripts.pory"
	giveitem ITEM_SILVER_POWDER
# 26 "data/maps/Appel_Forest/scripts.pory"
	removeobject 5
# 27 "data/maps/Appel_Forest/scripts.pory"
	setflag FLAG_APPEL_FOREST_ITEM_3
# 28 "data/maps/Appel_Forest/scripts.pory"
	release
	end


giveblackaugerite::
# 33 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 34 "data/maps/Appel_Forest/scripts.pory"
	giveitem ITEM_BLACK_AUGURITE
# 35 "data/maps/Appel_Forest/scripts.pory"
	removeobject 3
# 36 "data/maps/Appel_Forest/scripts.pory"
	setflag FLAG_APPEL_FOREST_ITEM_4
# 37 "data/maps/Appel_Forest/scripts.pory"
	release
	end


givesuperpotion::
# 42 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 43 "data/maps/Appel_Forest/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 44 "data/maps/Appel_Forest/scripts.pory"
	removeobject 4
# 45 "data/maps/Appel_Forest/scripts.pory"
	setflag FLAG_APPEL_FOREST_ITEM_5
# 46 "data/maps/Appel_Forest/scripts.pory"
	release
	end


Fisherman_Gives_Good_Rod::
# 51 "data/maps/Appel_Forest/scripts.pory"
	applymovement 12, looktowards
# 52 "data/maps/Appel_Forest/scripts.pory"
	waitmovement 0
# 53 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 54 "data/maps/Appel_Forest/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Fisherman_Gives_Good_Rod_2
# 58 "data/maps/Appel_Forest/scripts.pory"
	msgbox Fisherman_Gives_Good_Rod_Text_1, MSGBOX_YESNO
# 59 "data/maps/Appel_Forest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Fisherman_Gives_Good_Rod_5
# 66 "data/maps/Appel_Forest/scripts.pory"
	msgbox Fisherman_Gives_Good_Rod_Text_4
Fisherman_Gives_Good_Rod_1:
# 69 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 70 "data/maps/Appel_Forest/scripts.pory"
	applymovement 12, lookup
# 71 "data/maps/Appel_Forest/scripts.pory"
	waitmovement 0
# 72 "data/maps/Appel_Forest/scripts.pory"
	release
	end

Fisherman_Gives_Good_Rod_2:
# 55 "data/maps/Appel_Forest/scripts.pory"
	msgbox Fisherman_Gives_Good_Rod_Text_0
	goto Fisherman_Gives_Good_Rod_1

Fisherman_Gives_Good_Rod_5:
# 60 "data/maps/Appel_Forest/scripts.pory"
	msgbox Fisherman_Gives_Good_Rod_Text_2
# 61 "data/maps/Appel_Forest/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 62 "data/maps/Appel_Forest/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 63 "data/maps/Appel_Forest/scripts.pory"
	msgbox Fisherman_Gives_Good_Rod_Text_3
	goto Fisherman_Gives_Good_Rod_1


AppelBugBattle1::
# 78 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_BUG_CATCHER_1, AppelBugBattle1_Text_0, AppelBugBattle1_Text_1, AppelBugBattle1_Text_2
# 79 "data/maps/Appel_Forest/scripts.pory"
	msgbox TheCritters
# 80 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 81 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelBugBattle2::
# 89 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_BUG_CATCHER_2, ToJoinAgrivilleGym, gymMaterial, AppelBugBattle1_Text_2
# 90 "data/maps/Appel_Forest/scripts.pory"
	msgbox I_need_to_train
# 91 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 92 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelFisherman1::
# 101 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_FISHERMAN_1, MyLatestCatch, AppelFisherman1_Text_0, AppelBugBattle1_Text_2
# 102 "data/maps/Appel_Forest/scripts.pory"
	msgbox replace_line
# 103 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 104 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelFisherman2::
# 108 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_FISHERMAN_2, AppelFisherman2_Text_0, AppelFisherman2_Text_1, AppelBugBattle1_Text_2
# 109 "data/maps/Appel_Forest/scripts.pory"
	msgbox AppelFisherman2_Text_2
# 110 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 111 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelSilph1::
# 124 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_SILPH_1, Silph1_d1, Silph1_d2, AppelBugBattle1_Text_2
# 125 "data/maps/Appel_Forest/scripts.pory"
	msgbox AppelSilph1_Text_0
# 126 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 127 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelSilph2::
# 143 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_SILPH_2, Silph1_d1, Silph2_d2, AppelBugBattle1_Text_2
# 144 "data/maps/Appel_Forest/scripts.pory"
	msgbox Silph2_d3
# 145 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 146 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelSilph3::
# 161 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_SILPH_3, Silph3_d1, Silph3_d2, AppelBugBattle1_Text_2
# 162 "data/maps/Appel_Forest/scripts.pory"
	msgbox Silph3_d3
# 163 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 164 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelSilph4::
# 180 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_4, Silph4_d1, Silph4_d2, AppelBugBattle1_Text_2
# 181 "data/maps/Appel_Forest/scripts.pory"
	msgbox Silph4_d3
# 182 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 183 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelSilph5::
# 198 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_5, Silph5_d1, Silph5_d2, AppelBugBattle1_Text_2
# 199 "data/maps/Appel_Forest/scripts.pory"
	msgbox Silph5_d3
# 200 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 201 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


AppelTourist::
# 208 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_double APPEL_TOURIST, Vacation, AppelTourist_Text_0, AppelBugBattle1_Text_2
# 209 "data/maps/Appel_Forest/scripts.pory"
	msgbox doAllTheLocals
# 210 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 211 "data/maps/Appel_Forest/scripts.pory"
	releaseall
	return


SilphBlockPlayer::
# 216 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 217 "data/maps/Appel_Forest/scripts.pory"
	msgbox BlockPlayer
# 218 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 219 "data/maps/Appel_Forest/scripts.pory"
	release
	end


# 240 "data/maps/Appel_Forest/scripts.pory"
lookup:
# 241 "data/maps/Appel_Forest/scripts.pory"
	face_up
	step_end

Fisherman_Gives_Good_Rod_Text_0:
# 55 "data/maps/Appel_Forest/scripts.pory"
	.string "How's the rod treating you?$"

Fisherman_Gives_Good_Rod_Text_1:
# 58 "data/maps/Appel_Forest/scripts.pory"
	.string "Hey kid! You like to fish?$"

Fisherman_Gives_Good_Rod_Text_2:
# 60 "data/maps/Appel_Forest/scripts.pory"
	.string "That's what I like to hear!\nTake this!$"

Fisherman_Gives_Good_Rod_Text_3:
# 63 "data/maps/Appel_Forest/scripts.pory"
	.string "Put that to good use!$"

Fisherman_Gives_Good_Rod_Text_4:
# 66 "data/maps/Appel_Forest/scripts.pory"
	.string "Youngsters these days...$"

AppelBugBattle1_Text_0:
# 78 "data/maps/Appel_Forest/scripts.pory"
	.string "This forest is crawling with critters!$"

AppelBugBattle1_Text_1:
# 78 "data/maps/Appel_Forest/scripts.pory"
	.string ":($"

AppelBugBattle1_Text_2:
# 78 "data/maps/Appel_Forest/scripts.pory"
	.string "ERROR$"

AppelFisherman1_Text_0:
# 101 "data/maps/Appel_Forest/scripts.pory"
	.string "You broke my line!$"

AppelFisherman2_Text_0:
# 108 "data/maps/Appel_Forest/scripts.pory"
	.string "Sploosh!$"

AppelFisherman2_Text_1:
# 108 "data/maps/Appel_Forest/scripts.pory"
	.string "...sploosh...$"

AppelFisherman2_Text_2:
# 109 "data/maps/Appel_Forest/scripts.pory"
	.string "...sploosh...sploosh...$"

AppelSilph1_Text_0:
# 125 "data/maps/Appel_Forest/scripts.pory"
	.string "You don't have vision.$"

AppelTourist_Text_0:
# 208 "data/maps/Appel_Forest/scripts.pory"
	.string "I guess you do...$"

I_need_to_train::
# 85 "data/maps/Appel_Forest/scripts.pory"
	.string "I need to train more!$"

replace_line::
# 96 "data/maps/Appel_Forest/scripts.pory"
	.string "Don't worry, I have more fishing line.$"

Silph1_d1::
# 115 "data/maps/Appel_Forest/scripts.pory"
	.string "Scram kid! I'm on official Silph Co.\n"
	.string "business.$"

Silph1_d2::
# 119 "data/maps/Appel_Forest/scripts.pory"
	.string "You sadden me.$"

Silph2_d1::
# 130 "data/maps/Appel_Forest/scripts.pory"
	.string "Do you think if I beat you, my manager\n"
	.string "will give me a raise?$"

Silph2_d2::
# 134 "data/maps/Appel_Forest/scripts.pory"
	.string "My raise.....$"

Silph2_d3::
# 138 "data/maps/Appel_Forest/scripts.pory"
	.string "Look, I'm just trying to make rent,\n"
	.string "okay?$"

Silph3_d1::
# 149 "data/maps/Appel_Forest/scripts.pory"
	.string "I heard Colress hired this new guy, Orm.\n"
	.string "I don't trust him very much.$"

Silph3_d2::
# 153 "data/maps/Appel_Forest/scripts.pory"
	.string "I need to reoptimize my team.$"

Silph3_d3::
# 157 "data/maps/Appel_Forest/scripts.pory"
	.string "I may not trust Orm, but Colress knows\n"
	.string "what he's doing.$"

Silph4_d1::
# 167 "data/maps/Appel_Forest/scripts.pory"
	.string "Orm was drinking this weird juice\n"
	.string "earlier.$"

Silph4_d2::
# 171 "data/maps/Appel_Forest/scripts.pory"
	.string "Fine. You go back there, then. I didn't\n"
	.string "want to anyways.$"

Silph4_d3::
# 175 "data/maps/Appel_Forest/scripts.pory"
	.string "I think he got his juice from his\n"
	.string "Shuckles.$"

Silph5_d1::
# 186 "data/maps/Appel_Forest/scripts.pory"
	.string "Can you believe Silph Co. has me in an\n"
	.string "entry level position? I should be\l"
	.string "management level- at least!$"

Silph5_d2::
# 190 "data/maps/Appel_Forest/scripts.pory"
	.string "Please don't tell my boss I lost to a\n"
	.string "child.$"

Silph5_d3::
# 194 "data/maps/Appel_Forest/scripts.pory"
	.string "Pretty please?$"

doAllTheLocals::
# 204 "data/maps/Appel_Forest/scripts.pory"
	.string "Do all the locals battle as well as you?$"

Vacation::
# 223 "data/maps/Appel_Forest/scripts.pory"
	.string "You're a local! Say, do you know what a\n"
	.string "pokemon battle is?$"

ToJoinAgrivilleGym::
# 227 "data/maps/Appel_Forest/scripts.pory"
	.string "I'm catching bugs to join Agriville gym!$"

gymMaterial::
# 231 "data/maps/Appel_Forest/scripts.pory"
	.string "I'll never be gym material at this rate...$"

MyLatestCatch::
# 235 "data/maps/Appel_Forest/scripts.pory"
	.string "My latest catch will reel you in!$"

TheCritters::
# 244 "data/maps/Appel_Forest/scripts.pory"
	.string "The critters weren't strong enough.$"

BlockPlayer::
# 248 "data/maps/Appel_Forest/scripts.pory"
	.string "Child. This is the scyther sanctuary. No\n"
	.string "one is allowed in$"
