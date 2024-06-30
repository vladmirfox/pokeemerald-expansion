Common_EventScript_PkmnCenterNurse_CutTheBullshit::
# 2 "data/scripts/pkmn_center_nurse.pory"
	lock
# 3 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 4 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 5 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_PkmnCenterNurse_CutTheBullshit_Text_0
# 6 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 7 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit
# 8 "data/scripts/pkmn_center_nurse.pory"
	release
	end


EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit::
# 13 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 14 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 15 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_2
EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_1:
# 19 "data/scripts/pkmn_center_nurse.pory"
	msgbox EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_0
# 20 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 23 "data/scripts/pkmn_center_nurse.pory"
	msgbox EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_1
# 24 "data/scripts/pkmn_center_nurse.pory"
	closemessage
	end

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_2:
# 16 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit
	goto EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_1


EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit::
# 30 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 31 "data/scripts/pkmn_center_nurse.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_1
	return

EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_1:
# 32 "data/scripts/pkmn_center_nurse.pory"
	message EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_Text_0
# 38 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
	return


# 42 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse::
# 43 "data/scripts/pkmn_center_nurse.pory"
	lock
# 44 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 45 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 46 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 47 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 48 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 49 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 50 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 51 "data/scripts/pkmn_center_nurse.pory"
	end
# 52 "data/scripts/pkmn_center_nurse.pory"

# 53 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 54 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 55 "data/scripts/pkmn_center_nurse.pory"
	return
# 56 "data/scripts/pkmn_center_nurse.pory"

# 57 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 58 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 59 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 60 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 61 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 62 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 63 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 64 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 65 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 66 "data/scripts/pkmn_center_nurse.pory"
	end
# 67 "data/scripts/pkmn_center_nurse.pory"

# 68 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 69 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 70 "data/scripts/pkmn_center_nurse.pory"
	return
# 71 "data/scripts/pkmn_center_nurse.pory"

# 72 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 73 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 74 "data/scripts/pkmn_center_nurse.pory"
	return
# 75 "data/scripts/pkmn_center_nurse.pory"

# 76 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 77 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn @ Changed from Common_Movement_WalkInPlaceFasterLeft to force the follower to enter their Poké Ball
# 78 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 79 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 80 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 81 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
# 82 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 83 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 84 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 85 "data/scripts/pkmn_center_nurse.pory"
	return
# 86 "data/scripts/pkmn_center_nurse.pory"

# 87 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 88 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 89 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 90 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 91 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 92 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 93 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 94 "data/scripts/pkmn_center_nurse.pory"
	end
# 95 "data/scripts/pkmn_center_nurse.pory"

# 96 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 97 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 98 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 99 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 100 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 101 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 102 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 103 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 104 "data/scripts/pkmn_center_nurse.pory"
	return
# 105 "data/scripts/pkmn_center_nurse.pory"

# 106 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 107 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 108 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 109 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 110 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 111 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 112 "data/scripts/pkmn_center_nurse.pory"
	return
# 113 "data/scripts/pkmn_center_nurse.pory"

# 114 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 115 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 116 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 117 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 118 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
# 119 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 120 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 121 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 122 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 123 "data/scripts/pkmn_center_nurse.pory"
	return
# 124 "data/scripts/pkmn_center_nurse.pory"

# 125 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckPokerus::
# 126 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 127 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 128 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 129 "data/scripts/pkmn_center_nurse.pory"
	end
# 130 "data/scripts/pkmn_center_nurse.pory"

# 131 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 132 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 133 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 134 "data/scripts/pkmn_center_nurse.pory"
	return
# 135 "data/scripts/pkmn_center_nurse.pory"

# 136 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 137 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 138 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 139 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 140 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 141 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 142 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 143 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 144 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 145 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 146 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 147 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 148 "data/scripts/pkmn_center_nurse.pory"
	return
# 149 "data/scripts/pkmn_center_nurse.pory"

# 150 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 151 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 152 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 153 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 154 "data/scripts/pkmn_center_nurse.pory"
	return
# 155 "data/scripts/pkmn_center_nurse.pory"

# 156 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 157 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 158 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 159 "data/scripts/pkmn_center_nurse.pory"
	end
# 160 "data/scripts/pkmn_center_nurse.pory"

# 161 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 162 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 163 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 164 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 165 "data/scripts/pkmn_center_nurse.pory"

# 166 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 167 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 168 "data/scripts/pkmn_center_nurse.pory"
	step_end

Common_EventScript_PkmnCenterNurse_CutTheBullshit_Text_0:
# 5 "data/scripts/pkmn_center_nurse.pory"
	.string "Welcome to the refuge!\p"
	.string "Let me heal your Pokémon.$"

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_0:
# 19 "data/scripts/pkmn_center_nurse.pory"
	.string "Your Pokémon are all healed and\n"
	.string "rested.$"

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_1:
# 23 "data/scripts/pkmn_center_nurse.pory"
	.string "Please come again!$"

EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_Text_0:
# 33 "data/scripts/pkmn_center_nurse.pory"
	.string "Um, excuse me…\p"
	.string "I think your Pokémon is under some\n"
	.string "sort of spell.\p"
	.string "I'm pretty good at feeling this kind\n"
	.string "of thing. I have seen this before.\p"
	.string "I'm not sure what it is, but I have\n"
	.string "seen the Pokémon that had this aura\l"
	.string "around them grow exceptionally well\l"
	.string "for a while.$"
