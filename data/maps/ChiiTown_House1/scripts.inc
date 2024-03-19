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
	msgbox ChiiTown_House1_EventScript_OldManTrespassing_Text_0
# 26 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 27 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 28 "data/maps/ChiiTown_House1/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 2
# 29 "data/maps/ChiiTown_House1/scripts.pory"
	warp MAP_CHII_TOWN, 24, 21
# 30 "data/maps/ChiiTown_House1/scripts.pory"
	release
	return


ChiiTown_House1_EventScript_GrowlitheGrrr::
# 34 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 35 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 36 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 37 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 38 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 39 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheGrrr_Text_0
# 40 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChiiTown_House1_Movement_PlayerStepsAwayFromGrowlithe
# 41 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 42 "data/maps/ChiiTown_House1/scripts.pory"
	release
	return


ChiiTown_House1_EventScript_GrowlitheBarks::
# 46 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 47 "data/maps/ChiiTown_House1/scripts.pory"
	playse SE_PIN
# 48 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 49 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 50 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 51 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 52 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 53 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 54 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 55 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 56 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, ChiiTown_House1_Movement_GrowlitheRunsUpToPlayer
# 57 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 58 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 59 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 60 "data/maps/ChiiTown_House1/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 61 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheBarks_Text_0
# 62 "data/maps/ChiiTown_House1/scripts.pory"
	waitmoncry
# 64 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, ChiiTown_House1_Movement_OldManWalksUpToGrowlithe
# 65 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 66 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 67 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 68 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheBarks_Text_1
# 70 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 71 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 72 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 73 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 74 "data/maps/ChiiTown_House1/scripts.pory"
	msgbox ChiiTown_House1_EventScript_GrowlitheBarks_Text_2
# 76 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 77 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 79 "data/maps/ChiiTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 80 "data/maps/ChiiTown_House1/scripts.pory"
	waitmovement 0
# 82 "data/maps/ChiiTown_House1/scripts.pory"
	setvar VAR_CHII_TOWN_OLD_MAN_TRESPASS_STATE, 2
# 83 "data/maps/ChiiTown_House1/scripts.pory"
	warp MAP_CHII_TOWN, 24, 21
# 84 "data/maps/ChiiTown_House1/scripts.pory"
	release
	return


ChiiTown_House1_EventScript_Cheater::
# 88 "data/maps/ChiiTown_House1/scripts.pory"
	lock
# 89 "data/maps/ChiiTown_House1/scripts.pory"
	faceplayer
# 90 "data/maps/ChiiTown_House1/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 100
# 91 "data/maps/ChiiTown_House1/scripts.pory"
	waitse
# 92 "data/maps/ChiiTown_House1/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 93 "data/maps/ChiiTown_House1/scripts.pory"
	delay 40
# 94 "data/maps/ChiiTown_House1/scripts.pory"
	waitmoncry
# 95 "data/maps/ChiiTown_House1/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 96 "data/maps/ChiiTown_House1/scripts.pory"
	dowildbattle
# 97 "data/maps/ChiiTown_House1/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/ChiiTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 99 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ChiiTown_House1_EventScript_CheaterDefeatedElectrode
# 100 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ChiiTown_House1_EventScript_CheaterDefeatedElectrode
# 101 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ChiiTown_House1_EventScript_CheaterDefeatedElectrode
# 102 "data/maps/ChiiTown_House1/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_CHII_TOWN_HOUSE
# 103 "data/maps/ChiiTown_House1/scripts.pory"
	release
	return


ChiiTown_House1_EventScript_CheaterDefeatedElectrode::
# 107 "data/maps/ChiiTown_House1/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_CHII_TOWN_HOUSE
# 108 "data/maps/ChiiTown_House1/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


ChiiTown_House1_OnResume::
# 113 "data/maps/ChiiTown_House1/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ChiiTown_House1_EventScript_TryRemoveElectrode
	end


ChiiTown_House1_EventScript_TryRemoveElectrode::
# 118 "data/maps/ChiiTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 119 "data/maps/ChiiTown_House1/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 120 "data/maps/ChiiTown_House1/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


# 124 "data/maps/ChiiTown_House1/scripts.pory"
ChiiTown_House1_Movement_GrowlitheRunsUpToPlayer:
# 125 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_right
# 126 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_right
# 127 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_up
# 128 "data/maps/ChiiTown_House1/scripts.pory"
	walk_faster_right
# 129 "data/maps/ChiiTown_House1/scripts.pory"
	face_down
	step_end

# 132 "data/maps/ChiiTown_House1/scripts.pory"
ChiiTown_House1_Movement_OldManWalksUpToGrowlithe:
# 133 "data/maps/ChiiTown_House1/scripts.pory"
	walk_down
# 134 "data/maps/ChiiTown_House1/scripts.pory"
	walk_down
# 135 "data/maps/ChiiTown_House1/scripts.pory"
	walk_down
# 136 "data/maps/ChiiTown_House1/scripts.pory"
	face_right
	step_end

# 139 "data/maps/ChiiTown_House1/scripts.pory"
ChiiTown_House1_Movement_PlayerStepsAwayFromGrowlithe:
# 140 "data/maps/ChiiTown_House1/scripts.pory"
	walk_right
	step_end

ChiiTown_House1_EventScript_OldManTrespassing_Text_0:
# 21 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Do you often barge into people's houses\n"
	.string "uninvited without even taking off your\l"
	.string "shoes?\p"
	.string "Want to break a couple of pots while\n"
	.string "you're at it?\p"
	.string "Kids these days, I swear…\p"
	.string "Now get out of my house.$"

ChiiTown_House1_EventScript_GrowlitheGrrr_Text_0:
# 39 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Grrrrrrr...$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_0:
# 61 "data/maps/ChiiTown_House1/scripts.pory"
	.string "BARK!\p"
	.string "BARKBARKBARKBARKBARK!$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_1:
# 68 "data/maps/ChiiTown_House1/scripts.pory"
	.string "Good girl, Growlithe, good girl.$"

ChiiTown_House1_EventScript_GrowlitheBarks_Text_2:
# 74 "data/maps/ChiiTown_House1/scripts.pory"
	.string "She keeps intruders out.$"
