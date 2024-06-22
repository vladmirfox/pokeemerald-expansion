ChiiTown_House1_MapScripts::
# 5 "data/maps/ChiiTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ChiiTown_House1_OnResume
# 6 "data/maps/ChiiTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChiiTown_House1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ChiiTown_House1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/ChiiTown_House1/scripts.pory"
	map_script_2 VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 1, ChiiTown_House1_EventScript_GrowlitheBarks
	.2byte 0


ChiiTown_House1_EventScript_OldManTrespassing::
# 12 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 13 "data/maps/ChiiTown_House1/scripts.pory"
	playse SE_PIN
# 14 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 15 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 16 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 17 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 18 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 19 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 20 "data/maps/ChiiTown_House1/scripts.pory"
	speakername ChiiTown_House1_EventScript_OldManTrespassing_Text_0
# 21 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_OldManTrespassing_Text_1
# 27 "data/maps/ChiiTown_House1/scripts.pory"
	closemessage
# 28 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 29 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 30 "data/maps/ChiiTown_House1/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 2
# 31 "data/maps/ChiiTown_House1/scripts.pory"
	warp MAP_CHII_TOWN, 24, 21
# 32 "data/maps/ChiiTown_House1/scripts.pory"
	waitstate
	return


ChiiTown_House1_EventScript_GrowlitheGrrr::
# 36 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 37 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 38 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 39 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 40 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 41 "data/maps/ChiiTown_House1/scripts.pory"
	speakername ChiiTown_House1_EventScript_GrowlitheGrrr_Text_0
# 42 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheGrrr_Text_1
# 43 "data/maps/ChiiTown_House1/scripts.pory"
	closemessage
# 44 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChiiTown_House1_Movement_PlayerStepsAwayFromGrowlithe
# 45 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 46 "data/maps/ChiiTown_House1/scripts.pory"
	release
	return


ChiiTown_House1_EventScript_GrowlitheBarks::
# 50 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 51 "data/maps/ChiiTown_House1/scripts.pory"
	playse SE_PIN
# 52 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 53 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 54 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 55 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 56 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 57 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 58 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 59 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 60 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, ChiiTown_House1_Movement_GrowlitheRunsUpToPlayer
# 61 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 62 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 63 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 64 "data/maps/ChiiTown_House1/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 65 "data/maps/ChiiTown_House1/scripts.pory"
	speakername ChiiTown_House1_EventScript_GrowlitheGrrr_Text_0
# 66 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheBarks_Text_0
# 67 "data/maps/ChiiTown_House1/scripts.pory"
	waitmoncry
# 68 "data/maps/ChiiTown_House1/scripts.pory"
	closemessage
# 70 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, ChiiTown_House1_Movement_OldManWalksUpToGrowlithe
# 71 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 72 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 73 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 74 "data/maps/ChiiTown_House1/scripts.pory"
	speakername ChiiTown_House1_EventScript_GrowlitheBarks_Text_1
# 75 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheBarks_Text_2
# 76 "data/maps/ChiiTown_House1/scripts.pory"
	closemessage
# 78 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 79 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 80 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 81 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 82 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 83 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 84 "data/maps/ChiiTown_House1/scripts.pory"
	speakername ChiiTown_House1_EventScript_GrowlitheBarks_Text_1
# 85 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheBarks_Text_3
# 86 "data/maps/ChiiTown_House1/scripts.pory"
	closemessage
# 88 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 89 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 91 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 92 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 94 "data/maps/ChiiTown_House1/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 2
# 95 "data/maps/ChiiTown_House1/scripts.pory"
	warp MAP_CHII_TOWN, 24, 21
# 96 "data/maps/ChiiTown_House1/scripts.pory"
	waitstate
	return


ChiiTown_House1_EventScript_Cheater::
# 100 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 101 "data/maps/ChiiTown_House1/scripts.pory"
	faceplayer
# 102 "data/maps/ChiiTown_House1/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 100
# 103 "data/maps/ChiiTown_House1/scripts.pory"
	waitse
# 104 "data/maps/ChiiTown_House1/scripts.pory"
	speakername ChiiTown_House1_EventScript_Cheater_Text_0
# 105 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_Cheater_Text_1
# 106 "data/maps/ChiiTown_House1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 107 "data/maps/ChiiTown_House1/scripts.pory"
	delay 40
# 108 "data/maps/ChiiTown_House1/scripts.pory"
	waitmoncry
# 109 "data/maps/ChiiTown_House1/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 110 "data/maps/ChiiTown_House1/scripts.pory"
	dowildbattle
# 111 "data/maps/ChiiTown_House1/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 112 "data/maps/ChiiTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 113 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ChiiTown_House1_EventScript_CheaterDefeatedElectrode
# 114 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ChiiTown_House1_EventScript_CheaterDefeatedElectrode
# 115 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ChiiTown_House1_EventScript_CheaterDefeatedElectrode
# 116 "data/maps/ChiiTown_House1/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_CHII_TOWN_HOUSE
# 117 "data/maps/ChiiTown_House1/scripts.pory"
	release
	return


ChiiTown_House1_EventScript_CheaterDefeatedElectrode::
# 121 "data/maps/ChiiTown_House1/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_CHII_TOWN_HOUSE
# 122 "data/maps/ChiiTown_House1/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


ChiiTown_House1_OnResume::
# 127 "data/maps/ChiiTown_House1/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ChiiTown_House1_EventScript_TryRemoveElectrode
	end


ChiiTown_House1_EventScript_TryRemoveElectrode::
# 132 "data/maps/ChiiTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 133 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 134 "data/maps/ChiiTown_House1/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


# 138 "data/maps/ChiiTown_House1/scripts.pory"
ChiiTown_House1_Movement_GrowlitheRunsUpToPlayer:
# 139 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_right
# 140 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_right
# 141 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_up
# 142 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_right
# 143 "data/maps/ChiiTown_House1/scripts.pory"
	face_down
	step_end

# 146 "data/maps/ChiiTown_House1/scripts.pory"
ChiiTown_House1_Movement_OldManWalksUpToGrowlithe:
# 147 "data/maps/ChiiTown_House1/scripts.pory"
	walk_down
# 148 "data/maps/ChiiTown_House1/scripts.pory"
	walk_down
# 149 "data/maps/ChiiTown_House1/scripts.pory"
	walk_down
# 150 "data/maps/ChiiTown_House1/scripts.pory"
	face_right
	step_end

# 153 "data/maps/ChiiTown_House1/scripts.pory"
ChiiTown_House1_Movement_PlayerStepsAwayFromGrowlithe:
# 154 "data/maps/ChiiTown_House1/scripts.pory"
	walk_right
	step_end

ChiiTown_House1_EventScript_OldManTrespassing_Text_0:
# 20 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Old man$"

ChiiTown_House1_EventScript_OldManTrespassing_Text_1:
# 22 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Do you often barge into people's\n"
	.string "houses uninvited without even taking\l"
	.string "off your shoes?\p"
	.string "Want to break a couple of pots while\n"
	.string "you're at it?\p"
	.string "Kids these days, I swear…\p"
	.string "Now get out of my house.$"

ChiiTown_House1_EventScript_GrowlitheGrrr_Text_0:
# 41 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Growlithe$"

ChiiTown_House1_EventScript_GrowlitheGrrr_Text_1:
# 42 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Grrrrrrr…$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_0:
# 66 "data/maps/ChiiTown_House1/scripts.pory"
	.string "BARK!\p"
	.string "BARKBARKBARKBARKBARK!$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_1:
# 74 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Mean old man$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_2:
# 75 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Good girl, Growlithe, good girl.$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_3:
# 85 "data/maps/ChiiTown_House1/scripts.pory"
	.string "She keeps intruders out.$"

ChiiTown_House1_EventScript_Cheater_Text_0:
# 104 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Voice of God$"

ChiiTown_House1_EventScript_Cheater_Text_1:
# 105 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Cheater!$"
