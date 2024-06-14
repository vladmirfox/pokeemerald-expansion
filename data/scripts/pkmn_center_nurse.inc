Common_EventScript_PkmnCenterNurse_CutTheBullshit::
# 2 "data/scripts/pkmn_center_nurse.pory"
	lock
# 3 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 4 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 5 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_PkmnCenterNurse_CutTheBullshit_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit
	end


EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit::
# 11 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 12 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 13 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_2
EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_1:
# 17 "data/scripts/pkmn_center_nurse.pory"
	msgbox EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/scripts/pkmn_center_nurse.pory"
	msgbox EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_1, MSGBOX_AUTOCLOSE
	end

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_2:
# 14 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit
	goto EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_1


EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit::
# 26 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 27 "data/scripts/pkmn_center_nurse.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_1
	return

EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_1:
# 28 "data/scripts/pkmn_center_nurse.pory"
	message EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_Text_0
# 34 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
	return


# 38 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse::
# 39 "data/scripts/pkmn_center_nurse.pory"
	lock
# 40 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 41 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 42 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 43 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 44 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 45 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 46 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 47 "data/scripts/pkmn_center_nurse.pory"
	end
# 48 "data/scripts/pkmn_center_nurse.pory"

# 49 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 50 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 51 "data/scripts/pkmn_center_nurse.pory"
	return
# 52 "data/scripts/pkmn_center_nurse.pory"

# 53 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 54 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 55 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 56 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 57 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 58 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 59 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 60 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 61 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 62 "data/scripts/pkmn_center_nurse.pory"
	end
# 63 "data/scripts/pkmn_center_nurse.pory"

# 64 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 65 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 66 "data/scripts/pkmn_center_nurse.pory"
	return
# 67 "data/scripts/pkmn_center_nurse.pory"

# 68 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 69 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 70 "data/scripts/pkmn_center_nurse.pory"
	return
# 71 "data/scripts/pkmn_center_nurse.pory"

# 72 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 73 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn @ Changed from Common_Movement_WalkInPlaceFasterLeft to force the follower to enter their Poké Ball
# 74 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 75 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 76 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 77 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
# 78 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 79 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 80 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 81 "data/scripts/pkmn_center_nurse.pory"
	return
# 82 "data/scripts/pkmn_center_nurse.pory"

# 83 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 84 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 85 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 86 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 87 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 88 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 89 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 90 "data/scripts/pkmn_center_nurse.pory"
	end
# 91 "data/scripts/pkmn_center_nurse.pory"

# 92 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 93 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 94 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 95 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 96 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 97 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 98 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 99 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 100 "data/scripts/pkmn_center_nurse.pory"
	return
# 101 "data/scripts/pkmn_center_nurse.pory"

# 102 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 103 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 104 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 105 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 106 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 107 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 108 "data/scripts/pkmn_center_nurse.pory"
	return
# 109 "data/scripts/pkmn_center_nurse.pory"

# 110 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 111 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 112 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 113 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 114 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
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
EventScript_PkmnCenterNurse_CheckPokerus::
# 122 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 123 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 124 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 125 "data/scripts/pkmn_center_nurse.pory"
	end
# 126 "data/scripts/pkmn_center_nurse.pory"

# 127 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 128 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 129 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 130 "data/scripts/pkmn_center_nurse.pory"
	return
# 131 "data/scripts/pkmn_center_nurse.pory"

# 132 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 133 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 134 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 135 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 136 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 137 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 138 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 139 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 140 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 141 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 142 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 143 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 144 "data/scripts/pkmn_center_nurse.pory"
	return
# 145 "data/scripts/pkmn_center_nurse.pory"

# 146 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 147 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 148 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 149 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 150 "data/scripts/pkmn_center_nurse.pory"
	return
# 151 "data/scripts/pkmn_center_nurse.pory"

# 152 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 153 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 154 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 155 "data/scripts/pkmn_center_nurse.pory"
	end
# 156 "data/scripts/pkmn_center_nurse.pory"

# 157 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 158 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 159 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 160 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 161 "data/scripts/pkmn_center_nurse.pory"

# 162 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 163 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 164 "data/scripts/pkmn_center_nurse.pory"
	step_end

Common_EventScript_PkmnCenterNurse_CutTheBullshit_Text_0:
# 5 "data/scripts/pkmn_center_nurse.pory"
	.string "Welcome to the refuge!\p"
	.string "Let me heal your Pokémon.$"

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_0:
# 17 "data/scripts/pkmn_center_nurse.pory"
	.string "Your Pokémon are all healed and rested.$"

EventScript_PkmnCenterNurse_HealPkmn_CutTheBullshit_Text_1:
# 20 "data/scripts/pkmn_center_nurse.pory"
	.string "Please come again!$"

EventScript_PkmnCenterNurse_CheckPokerus_CutTheBullshit_Text_0:
# 29 "data/scripts/pkmn_center_nurse.pory"
	.string "Um, excuse me…\p"
	.string "I think your Pokémon is under some sort\n"
	.string "of spell.\p"
	.string "I'm pretty good at feeling this kind of\n"
	.string "thing. I have seen this before.\p"
	.string "I'm not sure what it is, but I have seen\n"
	.string "the Pokémon that had this aura around\l"
	.string "them grow exceptionally well for a\l"
	.string "while.$"
