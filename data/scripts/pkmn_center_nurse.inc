Common_EventScript_PkmnCenterNurse_Chansey::
# 2 "data/scripts/pkmn_center_nurse.pory"
	lock
# 3 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 4 "data/scripts/pkmn_center_nurse.pory"
	speakername Common_EventScript_PkmnCenterNurse_Chansey_Text_0
# 5 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_PkmnCenterNurse_Chansey_Text_1
# 6 "data/scripts/pkmn_center_nurse.pory"
	waitse
# 7 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 8 "data/scripts/pkmn_center_nurse.pory"
	release
	return


Common_EventScript_PkmnCenterNurse_CutTheBullshit::
# 12 "data/scripts/pkmn_center_nurse.pory"
	lock
# 13 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 14 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 15 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_PkmnCenterNurse_CutTheBullshit_Text_0
# 16 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 17 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit
# 18 "data/scripts/pkmn_center_nurse.pory"
	release
	end


EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit::
# 23 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 24 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 25 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_2
EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_1:
# 29 "data/scripts/pkmn_center_nurse.pory"
	msgbox EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_0
# 30 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 33 "data/scripts/pkmn_center_nurse.pory"
	msgbox EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_1
# 34 "data/scripts/pkmn_center_nurse.pory"
	closemessage
	end

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_2:
# 26 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit
	goto EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_1


EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit::
# 40 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 41 "data/scripts/pkmn_center_nurse.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_1
	return

EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_1:
# 42 "data/scripts/pkmn_center_nurse.pory"
	message EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_Text_0
# 48 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
	return


# 52 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse::
# 53 "data/scripts/pkmn_center_nurse.pory"
	lock
# 54 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 55 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 56 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 57 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 58 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 59 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 60 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 61 "data/scripts/pkmn_center_nurse.pory"
	end
# 62 "data/scripts/pkmn_center_nurse.pory"

# 63 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 64 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 65 "data/scripts/pkmn_center_nurse.pory"
	return
# 66 "data/scripts/pkmn_center_nurse.pory"

# 67 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 68 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 69 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 70 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 71 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 72 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 73 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 74 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 75 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 76 "data/scripts/pkmn_center_nurse.pory"
	end
# 77 "data/scripts/pkmn_center_nurse.pory"

# 78 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 79 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 80 "data/scripts/pkmn_center_nurse.pory"
	return
# 81 "data/scripts/pkmn_center_nurse.pory"

# 82 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 83 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 84 "data/scripts/pkmn_center_nurse.pory"
	return
# 85 "data/scripts/pkmn_center_nurse.pory"

# 86 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 87 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn @ Changed from Common_Movement_WalkInPlaceFasterLeft to force the follower to enter their Poké Ball
# 88 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 89 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 90 "data/scripts/pkmn_center_nurse.pory"
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
# 91 "data/scripts/pkmn_center_nurse.pory"
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 92 "data/scripts/pkmn_center_nurse.pory"
	call CableClub_OnResume
# 93 "data/scripts/pkmn_center_nurse.pory"
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 94 "data/scripts/pkmn_center_nurse.pory"
.endif
# 95 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 96 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
# 97 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 98 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 99 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 100 "data/scripts/pkmn_center_nurse.pory"
	return
# 101 "data/scripts/pkmn_center_nurse.pory"

# 102 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 103 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 104 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 105 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 106 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 107 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 108 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 109 "data/scripts/pkmn_center_nurse.pory"
	end
# 110 "data/scripts/pkmn_center_nurse.pory"

# 111 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 112 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 113 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 114 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 115 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 116 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 117 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 118 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 119 "data/scripts/pkmn_center_nurse.pory"
	return
# 120 "data/scripts/pkmn_center_nurse.pory"

# 121 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 122 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 123 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 124 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 125 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 126 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 127 "data/scripts/pkmn_center_nurse.pory"
	return
# 128 "data/scripts/pkmn_center_nurse.pory"

# 129 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 130 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 131 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 132 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 133 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
# 134 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 135 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 136 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 137 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 138 "data/scripts/pkmn_center_nurse.pory"
	return
# 139 "data/scripts/pkmn_center_nurse.pory"

# 140 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckPokerus::
# 141 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 142 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 143 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 144 "data/scripts/pkmn_center_nurse.pory"
	end
# 145 "data/scripts/pkmn_center_nurse.pory"

# 146 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 147 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 148 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 149 "data/scripts/pkmn_center_nurse.pory"
	return
# 150 "data/scripts/pkmn_center_nurse.pory"

# 151 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 152 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 153 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 154 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 155 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 156 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 157 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 158 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 159 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 160 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 161 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 162 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 163 "data/scripts/pkmn_center_nurse.pory"
	return
# 164 "data/scripts/pkmn_center_nurse.pory"

# 165 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 166 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 167 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 168 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 169 "data/scripts/pkmn_center_nurse.pory"
	return
# 170 "data/scripts/pkmn_center_nurse.pory"

# 171 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 172 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 173 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 174 "data/scripts/pkmn_center_nurse.pory"
	end
# 175 "data/scripts/pkmn_center_nurse.pory"

# 176 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 177 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 178 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 179 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 180 "data/scripts/pkmn_center_nurse.pory"

# 181 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 182 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 183 "data/scripts/pkmn_center_nurse.pory"
	step_end

Common_EventScript_PkmnCenterNurse_Chansey_Text_0:
# 4 "data/scripts/pkmn_center_nurse.pory"
	.string "Chansey$"

Common_EventScript_PkmnCenterNurse_Chansey_Text_1:
# 5 "data/scripts/pkmn_center_nurse.pory"
	.string "Sey!$"

Common_EventScript_PkmnCenterNurse_CutTheBullshit_Text_0:
# 15 "data/scripts/pkmn_center_nurse.pory"
	.string "Welcome to the refuge!\p"
	.string "Let me heal your Pokémon.$"

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_0:
# 29 "data/scripts/pkmn_center_nurse.pory"
	.string "Your Pokémon are all healed and\n"
	.string "rested.$"

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_1:
# 33 "data/scripts/pkmn_center_nurse.pory"
	.string "Please come again!$"

EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_Text_0:
# 43 "data/scripts/pkmn_center_nurse.pory"
	.string "Um, excuse me…\p"
	.string "I think your Pokémon is under some\n"
	.string "sort of spell.\p"
	.string "I'm pretty good at feeling this kind\n"
	.string "of thing. I have seen this before.\p"
	.string "I'm not sure what it is, but I have\n"
	.string "seen the Pokémon that had this aura\l"
	.string "around them grow exceptionally well\l"
	.string "for a while.$"
