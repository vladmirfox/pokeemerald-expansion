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
	trainerbattle_single APPEL_BUG_CATCHER_1, AppelBugBattle1_Text_0, AppelBugBattle1_Text_1
# 79 "data/maps/Appel_Forest/scripts.pory"
	msgbox TheCritters
# 80 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
	return


AppelBugBattle2::
# 85 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_BUG_CATCHER_2, ToJoinAgrivilleGym, gymMaterial
	return


AppelFisherman1::
# 89 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_FISHERMAN_1, MyLatestCatch, AppelFisherman1_Text_0
	return


AppelFisherman2::
# 93 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_FISHERMAN_2, AppelFisherman2_Text_0, AppelFisherman2_Text_1
	return


AppelSilph1::
# 97 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_1, AppelSilph1_Text_0, AppelSilph1_Text_0
	return


AppelSilph2::
# 101 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_2, AppelSilph1_Text_0, AppelSilph1_Text_0
	return


AppelSilph3::
# 105 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_3, AppelSilph1_Text_0, AppelSilph1_Text_0
	return


AppelSilph4::
# 109 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_4, AppelSilph1_Text_0, AppelSilph1_Text_0
	return


AppelSilph5::
# 113 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_SILPH_5, AppelSilph1_Text_0, AppelSilph1_Text_0
	return


AppelTourist::
# 116 "data/maps/Appel_Forest/scripts.pory"
	trainerbattle_single APPEL_TOURIST, Vacation, AppelTourist_Text_0
	return


SilphBlockPlayer::
# 136 "data/maps/Appel_Forest/scripts.pory"
	lockall
# 137 "data/maps/Appel_Forest/scripts.pory"
	msgbox BlockPlayer
# 138 "data/maps/Appel_Forest/scripts.pory"
	waitmessage
# 139 "data/maps/Appel_Forest/scripts.pory"
	release
	end


# 143 "data/maps/Appel_Forest/scripts.pory"
lookup:
# 144 "data/maps/Appel_Forest/scripts.pory"
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

AppelFisherman1_Text_0:
# 89 "data/maps/Appel_Forest/scripts.pory"
	.string "You broke my line!$"

AppelFisherman2_Text_0:
# 93 "data/maps/Appel_Forest/scripts.pory"
	.string "Sploosh!$"

AppelFisherman2_Text_1:
# 93 "data/maps/Appel_Forest/scripts.pory"
	.string "...sploosh...$"

AppelSilph1_Text_0:
# 97 "data/maps/Appel_Forest/scripts.pory"
	.string "PLACEHOLDER$"

AppelTourist_Text_0:
# 116 "data/maps/Appel_Forest/scripts.pory"
	.string "I guess you do...$"

Vacation::
# 119 "data/maps/Appel_Forest/scripts.pory"
	.string "You're a local! Say, do you know what a\n"
	.string "pokemon battle is?$"

ToJoinAgrivilleGym::
# 123 "data/maps/Appel_Forest/scripts.pory"
	.string "I'm catching bugs to join Agriville gym!$"

gymMaterial::
# 127 "data/maps/Appel_Forest/scripts.pory"
	.string "I'll never be gym material at this rate...$"

MyLatestCatch::
# 131 "data/maps/Appel_Forest/scripts.pory"
	.string "My latest catch will reel you in!$"

TheCritters::
# 147 "data/maps/Appel_Forest/scripts.pory"
	.string "The critters weren't strong enough.$"

BlockPlayer::
# 151 "data/maps/Appel_Forest/scripts.pory"
	.string "Child. This is the scyther sanctuary. No\n"
	.string "one is allowed in$"
