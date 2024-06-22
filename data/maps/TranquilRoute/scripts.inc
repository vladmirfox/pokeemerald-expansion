TranquilRoute_MapScripts::
# 10 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TranquilRoute_MapScripts_MAP_SCRIPT_ON_LOAD
# 14 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TranquilRoute_EventScript_SetupCutGrassCutscene
# 15 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TranquilRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TranquilRoute_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/TranquilRoute/scripts.pory"
	call TranquilRoute_EventScript_CheckCutGrass
# 12 "data/maps/TranquilRoute/scripts.pory"
	call TranquilRoute_EventScript_SpawnBirds
	return

TranquilRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/TranquilRoute/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, TranquilRoute_EventScript_GrassCutscene
	.2byte 0


TranquilRoute_EventScript_SpawnBirds::
# 23 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/TranquilRoute/scripts.pory"
	gettime
# 27 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 9
	goto_if_ge TranquilRoute_EventScript_SpawnBirds_2
	return

TranquilRoute_EventScript_SpawnBirds_1:
# 28 "data/maps/TranquilRoute/scripts.pory"
	clearflag FLAG_TEMP_2
	return

TranquilRoute_EventScript_SpawnBirds_2:
# 27 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le TranquilRoute_EventScript_SpawnBirds_1
	return


TranquilRoute_EventScript_GrassCutscene::
# 34 "data/maps/TranquilRoute/scripts.pory"
	lock
# 36 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterGoesSeeGarden
# 37 "data/maps/TranquilRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TranquilRoute_PlayerGoesSeeGarden
# 38 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 22
# 39 "data/maps/TranquilRoute/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 41 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 43 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 44 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_1
# 47 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 49 "data/maps/TranquilRoute/scripts.pory"
	delay 16
# 51 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkLeft
# 52 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 53 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 54 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 55 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_2
# 58 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 60 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkRight
# 61 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 62 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 63 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 64 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 65 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_3
# 68 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 70 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkBackToPlayer
# 71 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 72 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 73 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 74 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_4
# 78 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 82 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_CUT_QUEST_COMPLETED
# 83 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_TEMP_0, 0
# 85 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_SetupCutGrassCutscene::
# 90 "data/maps/TranquilRoute/scripts.pory"
	goto_if_unset FLAG_CUT_QUEST_COMPLETED, TranquilRoute_EventScript_SetupCutGrassCutscene_1
# 104 "data/maps/TranquilRoute/scripts.pory"
	gettime
# 105 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt TranquilRoute_EventScript_SetupCutGrassCutscene_7
# 105 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 19
	goto_if_gt TranquilRoute_EventScript_SetupCutGrassCutscene_7
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_1:
# 91 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_EventScript_SetupCutGrassCutscene_4
# 101 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_4:
# 94 "data/maps/TranquilRoute/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 95 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_TEMP_2, 53
	goto_if_eq TranquilRoute_EventScript_SetupCutGrassCutscene_12
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_7:
# 106 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_11:
# 96 "data/maps/TranquilRoute/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_LEFT
# 97 "data/maps/TranquilRoute/scripts.pory"
	setobjectxyperm 22, 52, 33
# 98 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_12:
# 95 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_TEMP_3, 33
	goto_if_eq TranquilRoute_EventScript_SetupCutGrassCutscene_11
	return


TranquilRoute_EventScript_CutMaster::
# 113 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 114 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_CutMaster_Text_0, MSGBOX_NPC
	return


TranquilRoute_EventScript_CheckCutGrass::
# 121 "data/maps/TranquilRoute/scripts.pory"
	call_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_EventScript_CutGrass
	return


TranquilRoute_EventScript_CutGrass::
# 127 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 31, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 129 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 30, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 131 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 29, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 132 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 29, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 134 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 28, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 135 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 28, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 136 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 28, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 138 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 27, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 139 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 27, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 140 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 27, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 142 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 26, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 143 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 26, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 145 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 25, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 147 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 24, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 149 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 23, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 150 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 23, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 152 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 153 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 22, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 154 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 155 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 22, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 157 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 158 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 159 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 21, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 160 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 161 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 21, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 162 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 163 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 164 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 166 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 167 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 168 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 169 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 20, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 170 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 171 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 172 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 173 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 175 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 176 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 19, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 177 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 178 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 179 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 180 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 181 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 182 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 183 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 49, 19, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 185 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 186 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 18, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 187 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 188 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 189 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 190 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 18, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 191 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
	return


TranquilRoute_EventScript_Chikao::
# 196 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_CHIKAO, TranquilRoute_EventScript_Chikao_Text_0, TranquilRoute_EventScript_Chikao_Text_1
# 201 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Chikao_Text_2
# 202 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Chikao_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Takeshi::
# 207 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_TAKESHI, TranquilRoute_EventScript_Takeshi_Text_0, TranquilRoute_EventScript_Takeshi_Text_1
# 212 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Takeshi_Text_2
# 213 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Takeshi_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Hana::
# 218 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_HIINA, TranquilRoute_EventScript_Hana_Text_0, TranquilRoute_EventScript_Hana_Text_1
# 223 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Hana_Text_2
# 224 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Hana_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Kenji::
# 229 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_KENJI, TranquilRoute_EventScript_Kenji_Text_0, TranquilRoute_EventScript_Kenji_Text_1
# 234 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Kenji_Text_2
# 235 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Kenji_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_MysteriousSamurai::
# 244 "data/maps/TranquilRoute/scripts.pory"
	lock
# 246 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_MysteriousSamurai_Text_0
# 247 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_MysteriousSamurai_Text_1
# 254 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 256 "data/maps/TranquilRoute/scripts.pory"
	applymovement 9, TranquilRoute_Movement_MysteriousSamuraiWalksAway
# 257 "data/maps/TranquilRoute/scripts.pory"
	removeobject 9
# 259 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_MYSTERIOUS_SAMURAI_TRANQUIL_ROUTE
# 260 "data/maps/TranquilRoute/scripts.pory"
	release
	end


# 264 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_MysteriousSamuraiWalksAway:
# 265 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 265 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 265 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 265 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 265 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 265 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

TranquilRoute_EventScript_Girl::
# 269 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Girl_Text_0
# 270 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Girl_Text_1, MSGBOX_NPC
	return


TranquilRoute_EventScript_WhiteslateRoadblockGuard::
# 274 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_0
# 275 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_1, MSGBOX_NPC
	return


TranquilRoute_EventScript_Shellos::
# 279 "data/maps/TranquilRoute/scripts.pory"
	lock
# 280 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 281 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_SHELLOS, CRY_MODE_NORMAL
# 282 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TranquilRoute_EventScript_Shellos_2
# 285 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Shellos_Text_1
TranquilRoute_EventScript_Shellos_1:
# 287 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Shellos_Text_2
# 290 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 291 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 292 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_Shellos_2:
# 283 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Shellos_Text_0
	goto TranquilRoute_EventScript_Shellos_1


TranquilRoute_EventScript_BerryWoman::
# 297 "data/maps/TranquilRoute/scripts.pory"
	lock
# 298 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 300 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_PAIL, TranquilRoute_EventScript_BerryWoman_2
# 306 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 307 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_2
# 308 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 309 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 310 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 311 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 312 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 313 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 314 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 315 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_3
# 322 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 323 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 324 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 326 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 327 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_4
# 332 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 333 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 334 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 336 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 337 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_5
# 342 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 344 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
TranquilRoute_EventScript_BerryWoman_1:
# 346 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_BerryWoman_2:
# 301 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 302 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_1
# 303 "data/maps/TranquilRoute/scripts.pory"
	closemessage
	goto TranquilRoute_EventScript_BerryWoman_1


TranquilRoute_EventScript_Mareep::
# 351 "data/maps/TranquilRoute/scripts.pory"
	lock
# 352 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 353 "data/maps/TranquilRoute/scripts.pory"
	ismonseen SPECIES_MAREEP
# 354 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TranquilRoute_EventScript_Mareep_2
# 357 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_1
TranquilRoute_EventScript_Mareep_1:
# 359 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep_Text_2
# 360 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 361 "data/maps/TranquilRoute/scripts.pory"
	release
	return

TranquilRoute_EventScript_Mareep_2:
# 355 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_0
	goto TranquilRoute_EventScript_Mareep_1


TranquilRoute_EventScript_Mareep2::
# 365 "data/maps/TranquilRoute/scripts.pory"
	lock
# 366 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 367 "data/maps/TranquilRoute/scripts.pory"
	ismonseen SPECIES_MAREEP
# 368 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TranquilRoute_EventScript_Mareep2_2
# 371 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_1
TranquilRoute_EventScript_Mareep2_1:
# 373 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep2_Text_0
# 374 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 375 "data/maps/TranquilRoute/scripts.pory"
	release
	return

TranquilRoute_EventScript_Mareep2_2:
# 369 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_0
	goto TranquilRoute_EventScript_Mareep2_1


TranquilRoute_TrainerTips1::
# 379 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips1_Text_0, MSGBOX_SIGN
	return


TranquilRoute_TrainerTips2::
# 388 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips2_Text_0, MSGBOX_SIGN
	return


TranquilRoute_DirectionSign::
# 401 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, TranquilRoute_DirectionSign_1
# 408 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_1, MSGBOX_SIGN
	return

TranquilRoute_DirectionSign_1:
# 402 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_0, MSGBOX_SIGN
	return


# 415 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterGoesSeeGarden:
# 416 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 416 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 416 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 416 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 416 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 417 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 417 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 417 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 418 "data/maps/TranquilRoute/scripts.pory"
	face_up
	step_end

# 421 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_PlayerGoesSeeGarden:
# 422 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 422 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 422 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 422 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 422 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 422 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 423 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 423 "data/maps/TranquilRoute/scripts.pory"
	walk_up
	step_end

# 426 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkLeft:
# 427 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 427 "data/maps/TranquilRoute/scripts.pory"
	walk_left
	step_end

# 430 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkRight:
# 431 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 431 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 431 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

# 434 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkBackToPlayer:
# 435 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 436 "data/maps/TranquilRoute/scripts.pory"
	walk_in_place_faster_down
	step_end

TranquilRoute_EventScript_GrassCutscene_Text_0:
# 43 "data/maps/TranquilRoute/scripts.pory"
	.string "Cut master$"

TranquilRoute_EventScript_GrassCutscene_Text_1:
# 45 "data/maps/TranquilRoute/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

TranquilRoute_EventScript_GrassCutscene_Text_2:
# 56 "data/maps/TranquilRoute/scripts.pory"
	.string "Was it always this big?$"

TranquilRoute_EventScript_GrassCutscene_Text_3:
# 66 "data/maps/TranquilRoute/scripts.pory"
	.string "It doesn't even look like the same\n"
	.string "garden…$"

TranquilRoute_EventScript_GrassCutscene_Text_4:
# 75 "data/maps/TranquilRoute/scripts.pory"
	.string "I cannot thank you enough for this.\p"
	.string "I shall tend to my garden again,\n"
	.string "thanks to you.$"

TranquilRoute_EventScript_CutMaster_Text_0:
# 115 "data/maps/TranquilRoute/scripts.pory"
	.string "I'm enjoying tending my garden again.\p"
	.string "I like watching it slowly blossom into\n"
	.string "something beautiful.$"

TranquilRoute_EventScript_Chikao_Text_0:
# 198 "data/maps/TranquilRoute/scripts.pory"
	.string "I've been studying Pokémon at school!\n"
	.string "I can't lose!$"

TranquilRoute_EventScript_Chikao_Text_1:
# 199 "data/maps/TranquilRoute/scripts.pory"
	.string "I should have listened in class…$"

TranquilRoute_EventScript_Chikao_Text_2:
# 201 "data/maps/TranquilRoute/scripts.pory"
	.string "Chikao$"

TranquilRoute_EventScript_Chikao_Text_3:
# 202 "data/maps/TranquilRoute/scripts.pory"
	.string "Some Pokémon have more attack, and some have more special attack!\p What's the difference? Uhh… It's too complicated to explain.$"

TranquilRoute_EventScript_Takeshi_Text_0:
# 209 "data/maps/TranquilRoute/scripts.pory"
	.string "Stay right there! I'll defeat you with\n"
	.string "my ninja skills!$"

TranquilRoute_EventScript_Takeshi_Text_1:
# 210 "data/maps/TranquilRoute/scripts.pory"
	.string "I had the sun in my eyes!$"

TranquilRoute_EventScript_Takeshi_Text_2:
# 212 "data/maps/TranquilRoute/scripts.pory"
	.string "Takeshi$"

TranquilRoute_EventScript_Takeshi_Text_3:
# 213 "data/maps/TranquilRoute/scripts.pory"
	.string "I must hone my ninja skills!$"

TranquilRoute_EventScript_Hana_Text_0:
# 220 "data/maps/TranquilRoute/scripts.pory"
	.string "Ugh, how can Kenji paint a portrait of\n"
	.string "me if people keep walking between us?$"

TranquilRoute_EventScript_Hana_Text_1:
# 221 "data/maps/TranquilRoute/scripts.pory"
	.string "Great, now my hair is all messed up.$"

TranquilRoute_EventScript_Hana_Text_2:
# 223 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina$"

TranquilRoute_EventScript_Hana_Text_3:
# 224 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji really is an amazing artist. I\n"
	.string "feel very lucky.$"

TranquilRoute_EventScript_Kenji_Text_0:
# 231 "data/maps/TranquilRoute/scripts.pory"
	.string "You're interrupting my creative flow!!$"

TranquilRoute_EventScript_Kenji_Text_1:
# 232 "data/maps/TranquilRoute/scripts.pory"
	.string "Such beauty! What an artistic fight\n"
	.string "this was!$"

TranquilRoute_EventScript_Kenji_Text_2:
# 234 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji$"

TranquilRoute_EventScript_Kenji_Text_3:
# 236 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina is the best subject I could\n"
	.string "dream of.\p"
	.string "…Hey, uh, please don't tell her I said\n"
	.string "that.$"

TranquilRoute_EventScript_MysteriousSamurai_Text_0:
# 246 "data/maps/TranquilRoute/scripts.pory"
	.string "Mystery man$"

TranquilRoute_EventScript_MysteriousSamurai_Text_1:
# 248 "data/maps/TranquilRoute/scripts.pory"
	.string "So you are one of those new Pokémon\n"
	.string "wielders, right?\p"
	.string "You say Pokémon have been restless,\n"
	.string "lately?\p"
	.string "Interesting.\p"
	.string "I have the feeling we're going to meet\n"
	.string "again soon.\p"
	.string "Until then, farewell.$"

TranquilRoute_EventScript_Girl_Text_0:
# 269 "data/maps/TranquilRoute/scripts.pory"
	.string "Girl$"

TranquilRoute_EventScript_Girl_Text_1:
# 270 "data/maps/TranquilRoute/scripts.pory"
	.string "What? Oh, I don't fight.\p"
	.string "My Pokémon and I are just strolling.$"

TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_0:
# 274 "data/maps/TranquilRoute/scripts.pory"
	.string "Man$"

TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_1:
# 275 "data/maps/TranquilRoute/scripts.pory"
	.string "Sorry, you can't go through.$"

TranquilRoute_EventScript_Shellos_Text_0:
# 283 "data/maps/TranquilRoute/scripts.pory"
	.string "Shellos$"

TranquilRoute_EventScript_Shellos_Text_1:
# 285 "data/maps/TranquilRoute/scripts.pory"
	.string "Slug$"

TranquilRoute_EventScript_Shellos_Text_2:
# 288 "data/maps/TranquilRoute/scripts.pory"
	.string "Clelel!$"

TranquilRoute_EventScript_BerryWoman_Text_0:
# 301 "data/maps/TranquilRoute/scripts.pory"
	.string "Woman$"

TranquilRoute_EventScript_BerryWoman_Text_1:
# 302 "data/maps/TranquilRoute/scripts.pory"
	.string "Enjoy gardening!$"

TranquilRoute_EventScript_BerryWoman_Text_2:
# 307 "data/maps/TranquilRoute/scripts.pory"
	.string "Hi, young one! See this?$"

TranquilRoute_EventScript_BerryWoman_Text_3:
# 316 "data/maps/TranquilRoute/scripts.pory"
	.string "You can plant berries in the ground in\n"
	.string "fertile spots like this.\p"
	.string "The seeds will eventually grow into a\n"
	.string "healthy berry tree, ready to be\l"
	.string "harvested!\p"
	.string "I see you're a wielder. Well, different\n"
	.string "berries have different effects when\l"
	.string "they're fed to Pokémon.\p"
	.string "I love berries, hopefully you'll soon\n"
	.string "learn to love them too!\p"
	.string "Here, try planting a few!$"

TranquilRoute_EventScript_BerryWoman_Text_4:
# 328 "data/maps/TranquilRoute/scripts.pory"
	.string "Oh, right, I was almost forgetting!\p"
	.string "You must remember to water them\n"
	.string "regularly, or they won't grow!\p"
	.string "I like you. Take this!$"

TranquilRoute_EventScript_BerryWoman_Text_5:
# 338 "data/maps/TranquilRoute/scripts.pory"
	.string "Isn't it cute? It's friend-shaped!\p"
	.string "Don't worry about it, I have a spare\n"
	.string "one.\p"
	.string "Have fun gardening!$"

TranquilRoute_EventScript_Mareep_Text_0:
# 355 "data/maps/TranquilRoute/scripts.pory"
	.string "Mareep$"

TranquilRoute_EventScript_Mareep_Text_1:
# 357 "data/maps/TranquilRoute/scripts.pory"
	.string "Static sheep$"

TranquilRoute_EventScript_Mareep_Text_2:
# 359 "data/maps/TranquilRoute/scripts.pory"
	.string "Beeeeeh…$"

TranquilRoute_EventScript_Mareep2_Text_0:
# 373 "data/maps/TranquilRoute/scripts.pory"
	.string "Baaaaah…$"

TranquilRoute_TrainerTips1_Text_0:
# 380 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Some Pokémon only come out in the\n"
	.string "morning, in the evening, or at night.\p"
	.string "Visit the same spot at different\n"
	.string "times of day to have a chance of\l"
	.string "seeing rare Pokémon!$"

TranquilRoute_TrainerTips2_Text_0:
# 389 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "You can swap the Pokémon in your\n"
	.string "party using {R_BUTTON}.\p"
	.string "Set the lead Pokémon with {SELECT_BUTTON}.$"

TranquilRoute_DirectionSign_Text_0:
# 403 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Sakura Village\p"
	.string "It looks like the sign has been\n"
	.string "written over recently…$"

TranquilRoute_DirectionSign_Text_1:
# 409 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Saku and Kura Villages$"
