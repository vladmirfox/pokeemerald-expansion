LittlerootTown_ProfessorBirchsLab_MapScripts::
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_SUNRISE_VILLAGE_INTRO_STATE, 4, Bla
	.2byte 0


Bla::
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerWalkUpToElder
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Bla_Text_0
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Bla_Text_1
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 5
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerWalkUpToElder:
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_Event_Pokeball_Starter_Trapinch::
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TRAPINCH
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter
	return


LittlerootTown_ProfessorBirchsLab_Event_Pokeball_Starter_Aron::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARON
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter
	return


LittlerootTown_ProfessorBirchsLab_Event_Pokeball_Starter_Spheal::
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPHEAL
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter
	return


LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter::
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_Text_0, MSGBOX_YESNO
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_2
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_2
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_3
LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_1:
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SUNRISE_VILLAGE_INTRO_STATE, 6
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_2:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_1

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_3:
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_TEMP_1
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_TEMP_1, 5
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_Text_2
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_1, SPECIES_TRAPINCH
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_9
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_1, SPECIES_ARON
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_10
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_1, SPECIES_SPHEAL
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_11
LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_8:
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_15
	goto LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_1

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_9:
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 3
	goto LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_8

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_10:
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 4
	goto LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_8

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_11:
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 5
	goto LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_8

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_15:
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_1


# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .set LOCALID_AIDE, 1
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .set LOCALID_BIRCH, 2
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .set LOCALID_RIVAL, 3
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .set LOCALID_BALL_CYNDAQUIL, 4
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .set LOCALID_BALL_TOTODILE, 5
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .set LOCALID_BALL_CHIKORITA, 6
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_MapScripts::
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .byte 0
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 1: Beat Elite Four, Dex upgrade ready
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 2: Received National Dex
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 3: Left lab after receiving National Dex
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 4: Entered lab after catching all Hoenn mons
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 5: Birch told player to choose Johto starter
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 6: Chose Johto starter
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ State descriptions for VAR_BIRCH_LAB_STATE
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 1: Never occurs
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 2: Chose starter
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 3: Received starter in lab
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 4: Defeated rival on Route 103
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ 5: Received pokedex
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_OnTransition:
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_SetupRivalGfxId
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call ProfBirch_EventScript_UpdateLocation
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ specialvar VAR_RESULT, HasAllHoennMons
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxyperm LOCALID_RIVAL, 5, 10
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxyperm LOCALID_RIVAL, 5, 10
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_OnWarp:
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .2byte 0
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_BIRCH
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_RIVAL
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_RIVAL, DIR_NORTH
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_RIVAL, 5, 5
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_BIRCH, DIR_SOUTH
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_BIRCH, 6, 4
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_AIDE, DIR_EAST
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_AIDE, 10, 10
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_RIVAL
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_BALL_CYNDAQUIL
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_BALL_TOTODILE
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_BALL_CHIKORITA
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ addobject LOCALID_RIVAL
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_BIRCH, DIR_SOUTH
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_BIRCH, 6, 4
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ turnobject LOCALID_RIVAL, DIR_EAST
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setobjectxy LOCALID_RIVAL, 5, 5
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_OnFrame:
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .2byte 0
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ This is just where the game tells you its yours and lets you nickname it
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lockall
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ bufferleadmonspeciesname STR_VAR_1
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmessage
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitfanfare
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_0x8004, 0
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedPartyMon
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ clearflag FLAG_HIDE_ROUTE_101_BOY
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_BIRCH_LAB_STATE, 3
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lockall
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ step_end
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lockall
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 30
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 20
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playse SE_CLICK
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 10
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playse SE_CLICK
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 10
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playse SE_CLICK
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 10
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playse SE_CLICK
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 20
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ checkplayergender
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playse SE_PC_ON
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitse
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 20
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playfanfare MUS_OBTAIN_ITEM
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmessage
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitfanfare
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_SYS_NATIONAL_DEX
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ special EnableNationalPokedex
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_left
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_in_place_faster_down
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay_16
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay_16
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_right
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_in_place_faster_down
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay_16
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay_16
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_right
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_down
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_down
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_down
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_down
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_right
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_right
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_right
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_in_place_faster_up
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ step_end
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_left
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_left
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_left
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_left
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_in_place_faster_down
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ step_end
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lockall
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_up
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ step_end
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ showmonpic SPECIES_CYNDAQUIL, 10, 3
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ showmonpic SPECIES_TOTODILE, 10, 3
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ showmonpic SPECIES_CHIKORITA, 10, 3
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ givemon SPECIES_CYNDAQUIL, 5
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto Common_EventScript_NoMoreRoomForPokemon
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ removeobject LOCALID_BALL_CYNDAQUIL
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_GetGiftMonPartySlot
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedPartyMon
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ removeobject LOCALID_BALL_CYNDAQUIL
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedBoxMon
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_TransferredToPC
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ givemon SPECIES_TOTODILE, 5
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto Common_EventScript_NoMoreRoomForPokemon
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ removeobject LOCALID_BALL_TOTODILE
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_GetGiftMonPartySlot
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedPartyMon
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ removeobject LOCALID_BALL_TOTODILE
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedBoxMon
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_TransferredToPC
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ givemon SPECIES_CHIKORITA, 5
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto Common_EventScript_NoMoreRoomForPokemon
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ removeobject LOCALID_BALL_CHIKORITA
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_GetGiftMonPartySlot
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedPartyMon
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ removeobject LOCALID_BALL_CHIKORITA
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_NameReceivedBoxMon
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call Common_EventScript_TransferredToPC
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ hidemonpic
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playfanfare MUS_OBTAIN_ITEM
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmessage
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitfanfare
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lock
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ faceplayer
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ EventScript_RegisterProfBirch::
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 30
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playfanfare MUS_REGISTER_MATCH_CALL
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitfanfare
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ delay 30
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_REGISTER_BIRCH_STATE, 2
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ closemessage
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmovement 0
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ checkplayergender
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_BIRCH_LAB_STATE, 5
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_ADVENTURE_STARTED
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_OLDALE_TOWN_STATE, 1
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ giveitem ITEM_POKE_BALL, 5
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_RESULT, 0
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ giveitem ITEM_POKE_BALL, 5
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_RESULT, 1
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ playfanfare MUS_OBTAIN_ITEM
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitfanfare
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_SYS_POKEDEX_GET
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ special SetUnlockedPokedexFlags
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_down
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ walk_in_place_faster_left
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ step_end
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lock
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ faceplayer
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ checkplayergender
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ checkplayergender
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ checkplayergender
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ checkplayergender
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ release
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ return
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ lockall
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ waitmessage
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ releaseall
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ end
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I've heard so much about you from\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "your father.\p"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I've heard that you don't have your\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "own POKéMON yet.\p"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "But the way you battled earlier,\n"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "you pulled it off with aplomb!\p"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I guess you have your father's blood\n"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "in your veins after all!\p"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Oh, yes. As thanks for rescuing me,\n"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'd like you to have the POKéMON you\l"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "used earlier.\p"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{PLAYER} received the {STR_VAR_1}!$"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: While you're at it, why not\n"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "give a nickname to that {STR_VAR_1}?$"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: If you work at POKéMON\n"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "and gain experience, I think you'll make\l"
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "an extremely good TRAINER.\p"
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "My kid, {RIVAL}, is also studying\n"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "POKéMON while helping me out.\p"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{PLAYER}{KUN}, don't you think it might be\n"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "a good idea to go see {RIVAL}?$"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Great!\n"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{RIVAL} should be happy, too.\p"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Get {RIVAL} to teach you what it\n"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "means to be a TRAINER.$"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Oh, don't be that way.\n"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You should go meet my kid.$"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: {RIVAL}?\n"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Gone home, I think.\p"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Or maybe that kid's scrabbling around\n"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "in tall grass again somewhere…\p"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "If you or your POKéMON get tired,\n"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "you should get some rest at home.$"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I heard you beat {RIVAL} on\n"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "your first try. That's excellent!\p"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{RIVAL}'s been helping with my research\n"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "for a long time.\p"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{RIVAL} has an extensive history as\n"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "a TRAINER already.\p"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "research, but I think you should have\l"
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "this POKéDEX.$"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{PLAYER} received the POKéDEX!$"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "tool that automatically makes a record\l"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "of any POKéMON you meet or catch.\p"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "My kid, {RIVAL}, goes everywhere\n"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "with it.\p"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Whenever my kid catches a rare POKéMON\n"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "and records its data in the POKéDEX,\l"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "why, {RIVAL} looks for me while I'm out\l"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "doing fieldwork, and shows me.$"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Countless POKéMON\n"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "await you!\p"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Argh, I'm getting the itch to get out\n"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "and do fieldwork again!$"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You got a POKéDEX, too!\p"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "That's great! Just like me!\n"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I've got something for you, too!$"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: It's fun if you can get a lot of\n"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "POKéMON!\p"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'm going to look all over the place\n"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "because I want different POKéMON.\p"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "If I find any cute POKéMON, I'll catch\n"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "them with POKé BALLS!$"
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Oh? Your BAG's full.$"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: I wonder where I should go look\n"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "for POKéMON next?$"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: Huh…\n"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "So you got a POKéDEX, too.\p"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Well then, here.\n"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'll give you these.$"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: You know it's more fun to\n"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "have a whole bunch of POKéMON.\p"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'm going to explore all over the place\n"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "to find different POKéMON.\p"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "If I find any cool POKéMON, you bet\n"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'll try to get them with POKé BALLS.$"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Hey, your BAG's full.$"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: Where should I look for\n"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "POKéMON next…$"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's a serious-looking machine.\n"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "The PROF must use this for research.$"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's a PC used for research.\n"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Better not mess around with it.$"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's crammed with books on POKéMON.$"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's a book that's too hard to read.$"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Now…\p"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "of you help me study POKéMON.\p"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Thanks to your help, new facts\n"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "are coming to light.\p"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It appears that in the HOENN region,\n"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "there are also POKéMON from other\l"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "regions.\p"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It goes to show how rich and varied\n"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the natural environments of HOENN\l"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "happen to be.\p"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "That's why I think it's necessary for\n"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "me to upgrade your POKéDEX to\l"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the NATIONAL Mode.\p"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Here, let me see your POKéDEX units.$"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: Eheheh!\p"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's so cool that even my POKéDEX\n"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "is getting updated!\p"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's because you went out and caught\n"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "so many POKéMON, {PLAYER}{KUN}!$"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: I went out all over HOENN\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "and checked out POKéMON.\p"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You can thank me for getting\n"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the NATIONAL Mode POKéDEX.\p"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Yep, you're lucky, {PLAYER}!$"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Okay, all done!$"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{PLAYER}'s POKéDEX was upgraded\n"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "to the NATIONAL Mode!$"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: But listen.\n"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You've become the CHAMPION,\l"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "but your POKéMON journey isn't over.\p"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "There is no end to the road\n"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "that is POKéMON.\p"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Somewhere, there is a grassy patch\n"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "that's waiting for you!$"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: I think I'll take a short break\n"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "from fieldwork.\p"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I think I'll help the PROF here for\n"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "a while.$"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: For the time being,\n"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'm taking a break from fieldwork.\p"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'll be helping out the PROF here\n"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "for a while.$"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Let's have a look at your POKéDEX.\p"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "… … … … … …\n"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "… … … … … …\p"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Yes, there's no doubt about it.\p"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You really have completed the HOENN\n"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "region's POKéDEX.\p"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "That's more than just impressive.\p"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I have a gift for you.\p"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Consider it my show of appreciation\n"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "for the fantastic work you've done.\p"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "My gift is a rare POKéMON only found\n"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "in another region!\p"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You can have any one of these\n"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "three POKéMON!$"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: These are rare POKéMON\n"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "only found in another region!\p"
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You can have any one of these\n"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "three POKéMON!$"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: The FIRE POKéMON\n"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "CYNDAQUIL caught your eye!\p"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You're as sharp as ever!\p"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "So the CYNDAQUIL is your choice?$"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: The WATER POKéMON\n"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "TOTODILE is your choice!\p"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You know how to pick a good one.\p"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "So, you'll take the TOTODILE?$"
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: The GRASS POKéMON\n"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "CHIKORITA is your choice!\p"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You sure know what you're doing.\p"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "So, you'll take the CHIKORITA?$"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Take your time before\n"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "you decide.\p"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "They're all invaluable POKéMON.$"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ Unused
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: I see!\n"
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You picked a fine POKéMON!$"
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "{PLAYER} received the {STR_VAR_1}\n"
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "from PROF. BIRCH!$"
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ Unused
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Want to give a nickname to\n"
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the {STR_VAR_1} you received?$"
# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You've completed the HOENN POKéDEX,\l"
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "but your POKéMON journey isn't over.\p"
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "There is no end to the road\n"
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "that is POKéMON.\p"
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Somewhere, there is a grassy patch\n"
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "that's waiting for you!$"
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "You received the promised POKéMON.\n"
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Better leave the others alone.$"
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ @ Unused
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 1045 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Oh, you don't have any room for\n"
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "this POKéMON.$"
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: {PLAYER}{KUN}, after this…\n"
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "What are you going to do?\p"
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Are you going to keep battling\n"
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "and sharpening your skills?\p"
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Or are you going to try filling\n"
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the NATIONAL POKéDEX?\p"
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'm staying here to help the PROF.$"
# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: Rather than collecting\n"
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "POKéMON, I prefer slowly and \l"
# 1060 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "steadily raising the one I chose.$"
# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 1063 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Have you gone to that place,\l"
# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the BATTLE FRONTIER?$"
# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "BRENDAN: Hey, {PLAYER}!\n"
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "Have you gone out to that place,\l"
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "the BATTLE FRONTIER?$"
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1073 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "… … … … … …\n"
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "… … … … … Beep!\p"
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1076 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It's me, SCOTT.\p"
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'm aboard the S.S. TIDAL now.\n"
# 1078 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "It feels great to be on the sea!\p"
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "By the way…\p"
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "There's this place that I'd like to\n"
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "invite you to for a visit.\p"
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "If you're interested, board a ferry\n"
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "at either SLATEPORT or LILYCOVE.\p"
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "I'll fill you in on the details when\n"
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "we meet. I'll be waiting!\p"
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "… … … … … …\n"
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ .string "… … … … … Click!$"

Bla_Text_0:
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "ELDER IWA: {PLAYER}, {RIVAL}, take\n"
	.string "one of these Pokémon.$"

Bla_Text_1:
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}: C'mon {PLAYER}, pick\n"
	.string "yours!$"

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_Text_0:
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want {STR_VAR_1}?$"

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_Text_1:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take your time.$"

LittlerootTown_ProfessorBirchsLab_Event_Common_Pokeball_Starter_Text_2:
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the Pokémon\n"
	.string "{STR_VAR_1}!$"
