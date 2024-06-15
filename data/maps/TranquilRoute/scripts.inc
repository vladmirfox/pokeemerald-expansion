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
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_0
# 46 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 48 "data/maps/TranquilRoute/scripts.pory"
	delay 16
# 50 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkLeft
# 51 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 52 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 53 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_1
# 56 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 58 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkRight
# 59 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 60 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 61 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 62 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_2
# 65 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 67 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkBackToPlayer
# 68 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 69 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 70 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_3
# 74 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 78 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_CUT_QUEST_COMPLETED
# 79 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_TEMP_0, 0
# 81 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_SetupCutGrassCutscene::
# 86 "data/maps/TranquilRoute/scripts.pory"
	goto_if_unset FLAG_CUT_QUEST_COMPLETED, TranquilRoute_EventScript_SetupCutGrassCutscene_1
# 100 "data/maps/TranquilRoute/scripts.pory"
	gettime
# 101 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt TranquilRoute_EventScript_SetupCutGrassCutscene_7
# 101 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 19
	goto_if_gt TranquilRoute_EventScript_SetupCutGrassCutscene_7
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_1:
# 87 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_EventScript_SetupCutGrassCutscene_4
# 97 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_4:
# 90 "data/maps/TranquilRoute/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 91 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_TEMP_2, 53
	goto_if_eq TranquilRoute_EventScript_SetupCutGrassCutscene_12
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_7:
# 102 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_11:
# 92 "data/maps/TranquilRoute/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_LEFT
# 93 "data/maps/TranquilRoute/scripts.pory"
	setobjectxyperm 22, 52, 33
# 94 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_12:
# 91 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_TEMP_3, 33
	goto_if_eq TranquilRoute_EventScript_SetupCutGrassCutscene_11
	return


TranquilRoute_EventScript_CutMaster::
# 109 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_CutMaster_Text_0, MSGBOX_NPC
	return


TranquilRoute_EventScript_CheckCutGrass::
# 116 "data/maps/TranquilRoute/scripts.pory"
	call_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_EventScript_CutGrass
	return


TranquilRoute_EventScript_CutGrass::
# 122 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 31, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 124 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 30, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 126 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 29, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 127 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 29, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 129 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 28, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 130 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 28, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 131 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 28, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 133 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 27, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 134 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 27, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 135 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 27, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 137 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 26, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 138 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 26, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 140 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 25, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 142 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 24, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 144 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 23, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 145 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 23, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 147 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 148 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 22, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 149 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 150 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 22, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 152 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 153 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 154 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 21, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 155 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 156 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 21, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 157 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 158 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 159 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 161 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 162 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 163 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 164 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 20, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 165 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 166 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 167 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 168 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 170 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 171 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 19, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 172 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 173 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 174 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 175 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 176 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 177 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 178 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 49, 19, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 180 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 181 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 18, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 182 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 183 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 184 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 185 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 18, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 186 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
	return


TranquilRoute_EventScript_Chikao::
# 191 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_CHIKAO, TranquilRoute_EventScript_Chikao_Text_0, TranquilRoute_EventScript_Chikao_Text_1
# 196 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Chikao_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Takeshi::
# 201 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_TAKESHI, TranquilRoute_EventScript_Takeshi_Text_0, TranquilRoute_EventScript_Takeshi_Text_1
# 206 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Takeshi_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Hana::
# 211 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_HIINA, TranquilRoute_EventScript_Hana_Text_0, TranquilRoute_EventScript_Hana_Text_1
# 216 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Hana_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Kenji::
# 221 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_KENJI, TranquilRoute_EventScript_Kenji_Text_0, TranquilRoute_EventScript_Kenji_Text_1
# 226 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Kenji_Text_2, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_MysteriousSamurai::
# 235 "data/maps/TranquilRoute/scripts.pory"
	lock
# 237 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_MysteriousSamurai_Text_0
# 244 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 246 "data/maps/TranquilRoute/scripts.pory"
	applymovement 9, TranquilRoute_Movement_MysteriousSamuraiWalksAway
# 247 "data/maps/TranquilRoute/scripts.pory"
	removeobject 9
# 249 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_MYSTERIOUS_SAMURAI_TRANQUIL_ROUTE
# 250 "data/maps/TranquilRoute/scripts.pory"
	release
	end


# 254 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_MysteriousSamuraiWalksAway:
# 255 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 255 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 255 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 255 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 255 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 255 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

TranquilRoute_EventScript_Girl::
# 259 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Girl_Text_0, MSGBOX_NPC
	return


TranquilRoute_EventScript_Shellos::
# 263 "data/maps/TranquilRoute/scripts.pory"
	lock
# 264 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 265 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_SHELLOS, CRY_MODE_NORMAL
# 266 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Shellos_Text_0
# 269 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 270 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 271 "data/maps/TranquilRoute/scripts.pory"
	release
	end


TranquilRoute_EventScript_BerryWoman::
# 276 "data/maps/TranquilRoute/scripts.pory"
	lock
# 277 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 279 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_PAIL, TranquilRoute_EventScript_BerryWoman_2
# 284 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_1
# 285 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 286 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 287 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 288 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 289 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 290 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 291 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_2
# 298 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 299 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 300 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 302 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_3
# 307 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 308 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 309 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 311 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_4
# 316 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 318 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
TranquilRoute_EventScript_BerryWoman_1:
# 320 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_BerryWoman_2:
# 280 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_0
# 281 "data/maps/TranquilRoute/scripts.pory"
	closemessage
	goto TranquilRoute_EventScript_BerryWoman_1


TranquilRoute_EventScript_Mareep::
# 325 "data/maps/TranquilRoute/scripts.pory"
	lock
# 326 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 327 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep_Text_0
# 328 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 329 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_Mareep2::
# 333 "data/maps/TranquilRoute/scripts.pory"
	lock
# 334 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 335 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep2_Text_0
# 336 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 337 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_TrainerTips1::
# 341 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips1_Text_0, MSGBOX_SIGN
	return


TranquilRoute_TrainerTips2::
# 350 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips2_Text_0, MSGBOX_SIGN
	return


TranquilRoute_DirectionSign::
# 357 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, TranquilRoute_DirectionSign_1
# 364 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_1, MSGBOX_SIGN
	return

TranquilRoute_DirectionSign_1:
# 358 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_0, MSGBOX_SIGN
	return


# 371 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterGoesSeeGarden:
# 372 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 372 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 372 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 372 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 372 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 373 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 373 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 373 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 374 "data/maps/TranquilRoute/scripts.pory"
	face_up
	step_end

# 377 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_PlayerGoesSeeGarden:
# 378 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 378 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 378 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 378 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 378 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 378 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 379 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 379 "data/maps/TranquilRoute/scripts.pory"
	walk_up
	step_end

# 382 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkLeft:
# 383 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 383 "data/maps/TranquilRoute/scripts.pory"
	walk_left
	step_end

# 386 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkRight:
# 387 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 387 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 387 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

# 390 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkBackToPlayer:
# 391 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 392 "data/maps/TranquilRoute/scripts.pory"
	walk_in_place_faster_down
	step_end

TranquilRoute_EventScript_GrassCutscene_Text_0:
# 44 "data/maps/TranquilRoute/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

TranquilRoute_EventScript_GrassCutscene_Text_1:
# 54 "data/maps/TranquilRoute/scripts.pory"
	.string "Was it always this big?$"

TranquilRoute_EventScript_GrassCutscene_Text_2:
# 63 "data/maps/TranquilRoute/scripts.pory"
	.string "It doesn't even look like the same\n"
	.string "garden…$"

TranquilRoute_EventScript_GrassCutscene_Text_3:
# 71 "data/maps/TranquilRoute/scripts.pory"
	.string "I cannot thank you enough for this.\p"
	.string "I shall tend to my garden again, thanks\n"
	.string "to you.$"

TranquilRoute_EventScript_CutMaster_Text_0:
# 110 "data/maps/TranquilRoute/scripts.pory"
	.string "I'm enjoying tending my garden again.\p"
	.string "I like watching it slowly blossom into\n"
	.string "something beautiful.$"

TranquilRoute_EventScript_Chikao_Text_0:
# 193 "data/maps/TranquilRoute/scripts.pory"
	.string "I've been studying Pokémon at school! I\n"
	.string "can't lose!$"

TranquilRoute_EventScript_Chikao_Text_1:
# 194 "data/maps/TranquilRoute/scripts.pory"
	.string "I should have listened in class…$"

TranquilRoute_EventScript_Chikao_Text_2:
# 196 "data/maps/TranquilRoute/scripts.pory"
	.string "Some Pokémon have more attack, and some have more special attack!\p What's the difference? Uhh… It's too complicated to explain.$"

TranquilRoute_EventScript_Takeshi_Text_0:
# 203 "data/maps/TranquilRoute/scripts.pory"
	.string "Stay right there! I'll defeat you with\n"
	.string "my ninja skills!$"

TranquilRoute_EventScript_Takeshi_Text_1:
# 204 "data/maps/TranquilRoute/scripts.pory"
	.string "I had the sun in my eyes!$"

TranquilRoute_EventScript_Takeshi_Text_2:
# 206 "data/maps/TranquilRoute/scripts.pory"
	.string "I must hone my ninja skills!$"

TranquilRoute_EventScript_Hana_Text_0:
# 213 "data/maps/TranquilRoute/scripts.pory"
	.string "Ugh, how can Kenji paint a portrait of\n"
	.string "me if people keep walking between us?$"

TranquilRoute_EventScript_Hana_Text_1:
# 214 "data/maps/TranquilRoute/scripts.pory"
	.string "Great, now my hair is all messed up.$"

TranquilRoute_EventScript_Hana_Text_2:
# 216 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji really is an amazing artist. I feel\n"
	.string "very lucky.$"

TranquilRoute_EventScript_Kenji_Text_0:
# 223 "data/maps/TranquilRoute/scripts.pory"
	.string "You're interrupting my creative flow!!$"

TranquilRoute_EventScript_Kenji_Text_1:
# 224 "data/maps/TranquilRoute/scripts.pory"
	.string "Such beauty! What an artistic fight\n"
	.string "this was!$"

TranquilRoute_EventScript_Kenji_Text_2:
# 227 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina is the best subject I could dream\n"
	.string "of.\p"
	.string "…Hey, uh, please don't tell her I said\n"
	.string "that.$"

TranquilRoute_EventScript_MysteriousSamurai_Text_0:
# 238 "data/maps/TranquilRoute/scripts.pory"
	.string "So you are one of those new Pokémon\n"
	.string "wielders, right?\p"
	.string "You say Pokémon have been restless,\n"
	.string "lately?\p"
	.string "Interesting.\p"
	.string "I have the feeling we're going to meet\n"
	.string "again soon.\p"
	.string "Until then, farewell.$"

TranquilRoute_EventScript_Girl_Text_0:
# 259 "data/maps/TranquilRoute/scripts.pory"
	.string "What? Oh, I don't fight.\p"
	.string "My Pokémon and I are just strolling.$"

TranquilRoute_EventScript_Shellos_Text_0:
# 267 "data/maps/TranquilRoute/scripts.pory"
	.string "Clelel!$"

TranquilRoute_EventScript_BerryWoman_Text_0:
# 280 "data/maps/TranquilRoute/scripts.pory"
	.string "Enjoy gardening!$"

TranquilRoute_EventScript_BerryWoman_Text_1:
# 284 "data/maps/TranquilRoute/scripts.pory"
	.string "Hi, young one! See this?$"

TranquilRoute_EventScript_BerryWoman_Text_2:
# 292 "data/maps/TranquilRoute/scripts.pory"
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

TranquilRoute_EventScript_BerryWoman_Text_3:
# 303 "data/maps/TranquilRoute/scripts.pory"
	.string "Oh, right, I was almost forgetting!\p"
	.string "You must remember to water them\n"
	.string "regularly, or they won't grow!\p"
	.string "I like you. Take this!$"

TranquilRoute_EventScript_BerryWoman_Text_4:
# 312 "data/maps/TranquilRoute/scripts.pory"
	.string "Isn't it cute? It's friend-shaped!\p"
	.string "Don't worry about it, I have a spare one.\p"
	.string "Have fun gardening!$"

TranquilRoute_EventScript_Mareep_Text_0:
# 327 "data/maps/TranquilRoute/scripts.pory"
	.string "Beeeeeh…$"

TranquilRoute_EventScript_Mareep2_Text_0:
# 335 "data/maps/TranquilRoute/scripts.pory"
	.string "Baaaaah…$"

TranquilRoute_TrainerTips1_Text_0:
# 342 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Some Pokémon only come out in the\n"
	.string "morning, in the evening, or at night.\p"
	.string "Visit the same spot at different times\n"
	.string "of day to have a chance of seeing rare\l"
	.string "Pokémon!$"

TranquilRoute_TrainerTips2_Text_0:
# 351 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Several items can be assigned to the\n"
	.string "SELECT button from your bag.$"

TranquilRoute_DirectionSign_Text_0:
# 359 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Sakura Village\p"
	.string "It looks like the sign has been written\n"
	.string "over recently…$"

TranquilRoute_DirectionSign_Text_1:
# 365 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Saku and Kura Villages$"
