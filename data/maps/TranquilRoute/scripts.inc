TranquilRoute_MapScripts::
# 14 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TranquilRoute_MapScripts_MAP_SCRIPT_ON_LOAD
# 18 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TranquilRoute_EventScript_SetupCutGrassCutscene
# 19 "data/maps/TranquilRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TranquilRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TranquilRoute_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/TranquilRoute/scripts.pory"
	call TranquilRoute_EventScript_CheckCutGrass
# 16 "data/maps/TranquilRoute/scripts.pory"
	call TranquilRoute_EventScript_SpawnBirds
	return

TranquilRoute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/TranquilRoute/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, TranquilRoute_EventScript_GrassCutscene
	.2byte 0


TranquilRoute_EventScript_SpawnBirds::
# 27 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_2
# 29 "data/maps/TranquilRoute/scripts.pory"
	gettime
# 31 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 9
	goto_if_ge TranquilRoute_EventScript_SpawnBirds_2
	return

TranquilRoute_EventScript_SpawnBirds_1:
# 32 "data/maps/TranquilRoute/scripts.pory"
	clearflag FLAG_TEMP_2
	return

TranquilRoute_EventScript_SpawnBirds_2:
# 31 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le TranquilRoute_EventScript_SpawnBirds_1
	return


TranquilRoute_EventScript_GrassCutscene::
# 38 "data/maps/TranquilRoute/scripts.pory"
	lock
# 40 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterGoesSeeGarden
# 41 "data/maps/TranquilRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TranquilRoute_PlayerGoesSeeGarden
# 42 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 22
# 43 "data/maps/TranquilRoute/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 45 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 47 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 48 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_1
# 51 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 53 "data/maps/TranquilRoute/scripts.pory"
	delay 16
# 55 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkLeft
# 56 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 57 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 58 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 59 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_2
# 62 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 64 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkRight
# 65 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 66 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 67 "data/maps/TranquilRoute/scripts.pory"
	delay 24
# 68 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 69 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_3
# 72 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 74 "data/maps/TranquilRoute/scripts.pory"
	applymovement 22, TranquilRoute_CutMasterWalkBackToPlayer
# 75 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 76 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 77 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 78 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_GrassCutscene_Text_4
# 82 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 86 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_CUT_QUEST_COMPLETED
# 87 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_TEMP_0, 0
# 89 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_SetupCutGrassCutscene::
# 94 "data/maps/TranquilRoute/scripts.pory"
	goto_if_unset FLAG_CUT_QUEST_COMPLETED, TranquilRoute_EventScript_SetupCutGrassCutscene_1
# 108 "data/maps/TranquilRoute/scripts.pory"
	gettime
# 109 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt TranquilRoute_EventScript_SetupCutGrassCutscene_7
# 109 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_0x8000, 19
	goto_if_gt TranquilRoute_EventScript_SetupCutGrassCutscene_7
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_1:
# 95 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_EventScript_SetupCutGrassCutscene_4
# 105 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_4:
# 98 "data/maps/TranquilRoute/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 99 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_TEMP_2, 53
	goto_if_eq TranquilRoute_EventScript_SetupCutGrassCutscene_12
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_7:
# 110 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_TEMP_1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_11:
# 100 "data/maps/TranquilRoute/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_LEFT
# 101 "data/maps/TranquilRoute/scripts.pory"
	setobjectxyperm 22, 52, 33
# 102 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

TranquilRoute_EventScript_SetupCutGrassCutscene_12:
# 99 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_TEMP_3, 33
	goto_if_eq TranquilRoute_EventScript_SetupCutGrassCutscene_11
	return


TranquilRoute_EventScript_CutMaster::
# 117 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_GrassCutscene_Text_0
# 118 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_CutMaster_Text_0, MSGBOX_NPC
	return


TranquilRoute_EventScript_CheckCutGrass::
# 125 "data/maps/TranquilRoute/scripts.pory"
	call_if_set FLAG_CUT_QUEST_CUT_ALL_GRASS, TranquilRoute_EventScript_CutGrass
	return


TranquilRoute_EventScript_CutGrass::
# 131 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 31, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 133 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 30, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 135 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 29, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 136 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 29, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 138 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 28, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 139 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 28, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 140 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 28, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 142 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 27, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 143 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 27, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 144 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 27, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 146 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 26, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 147 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 26, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 149 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 25, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 151 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 24, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 153 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 23, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 154 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 23, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 156 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 157 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 22, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 158 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 22, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 159 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 22, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 161 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 162 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 163 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 21, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 164 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 165 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 21, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 166 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 167 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 21, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 168 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 21, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 170 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 171 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 172 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 173 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 20, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 174 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 175 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 176 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 20, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 177 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 20, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 179 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 40, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 180 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 42, 19, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 181 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 182 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 183 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 184 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 185 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 19, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 186 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 19, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 187 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 49, 19, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 189 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 41, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 190 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 43, 18, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 191 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 44, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 192 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 45, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
# 193 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 46, 18, METATILE_PorytilesPrimaryTutorial_Grass2, FALSE
# 194 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 47, 18, METATILE_PorytilesPrimaryTutorial_Grass3, FALSE
# 195 "data/maps/TranquilRoute/scripts.pory"
	setmetatile 48, 18, METATILE_PorytilesPrimaryTutorial_Grass, FALSE
	return


TODOEVA::
# 200 "data/maps/TranquilRoute/scripts.pory"
	givemon SPECIES_SPHEAL, 100, move1 = MOVE_TACKLE, move2 = MOVE_POUND, move3 = MOVE_WATER_GUN, move4 = MOVE_FLIPPER_SPLASH
	return


TranquilRoute_EventScript_Chikao::
# 204 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_CHIKAO, TranquilRoute_EventScript_Chikao_Text_0, TranquilRoute_EventScript_Chikao_Text_1
# 209 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Chikao_Text_2
# 210 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Chikao_Text_3
# 214 "data/maps/TranquilRoute/scripts.pory"
	closemessage
	end


TranquilRoute_EventScript_Takeshi::
# 219 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_TAKESHI, TranquilRoute_EventScript_Takeshi_Text_0, TranquilRoute_EventScript_Takeshi_Text_1
# 224 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Takeshi_Text_2
# 225 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Takeshi_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Hana::
# 230 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_HIINA, TranquilRoute_EventScript_Hana_Text_0, TranquilRoute_EventScript_Hana_Text_1
# 235 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Hana_Text_2
# 236 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Hana_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_Kenji::
# 241 "data/maps/TranquilRoute/scripts.pory"
	trainerbattle_single TRAINER_KENJI, TranquilRoute_EventScript_Kenji_Text_0, TranquilRoute_EventScript_Kenji_Text_1
# 246 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Kenji_Text_2
# 247 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Kenji_Text_3, MSGBOX_AUTOCLOSE
	end


TranquilRoute_EventScript_MysteriousSamurai::
# 256 "data/maps/TranquilRoute/scripts.pory"
	lock
# 258 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_MysteriousSamurai_Text_0
# 259 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_MysteriousSamurai_Text_1
# 266 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 268 "data/maps/TranquilRoute/scripts.pory"
	applymovement 9, TranquilRoute_Movement_MysteriousSamuraiWalksAway
# 269 "data/maps/TranquilRoute/scripts.pory"
	removeobject 9
# 271 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_MYSTERIOUS_SAMURAI_TRANQUIL_ROUTE
# 272 "data/maps/TranquilRoute/scripts.pory"
	release
	end


# 276 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_MysteriousSamuraiWalksAway:
# 277 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 277 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 277 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 277 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 277 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 277 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

TranquilRoute_EventScript_Girl::
# 281 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Girl_Text_0
# 282 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Girl_Text_1, MSGBOX_NPC
	return


TranquilRoute_EventScript_WhiteslateRoadblockGuard::
# 286 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_0
# 287 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_1, MSGBOX_NPC
	return


TranquilRoute_EventScript_Shellos::
# 291 "data/maps/TranquilRoute/scripts.pory"
	lock
# 292 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 293 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_SHELLOS, CRY_MODE_NORMAL
# 294 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TranquilRoute_EventScript_Shellos_2
# 297 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Shellos_Text_1
TranquilRoute_EventScript_Shellos_1:
# 299 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Shellos_Text_2
# 302 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 303 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 304 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_Shellos_2:
# 295 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Shellos_Text_0
	goto TranquilRoute_EventScript_Shellos_1


TranquilRoute_EventScript_BerryWoman::
# 309 "data/maps/TranquilRoute/scripts.pory"
	lock
# 310 "data/maps/TranquilRoute/scripts.pory"
	faceplayer
# 312 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_PAIL, TranquilRoute_EventScript_BerryWoman_2
# 318 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 319 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_2
# 320 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 321 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 322 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 323 "data/maps/TranquilRoute/scripts.pory"
	delay 48
# 324 "data/maps/TranquilRoute/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 325 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 326 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 327 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_3
# 334 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 335 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 336 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 338 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 339 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_4
# 344 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 345 "data/maps/TranquilRoute/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 346 "data/maps/TranquilRoute/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 348 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 349 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_5
# 354 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 356 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
TranquilRoute_EventScript_BerryWoman_1:
# 358 "data/maps/TranquilRoute/scripts.pory"
	release
	end

TranquilRoute_EventScript_BerryWoman_2:
# 313 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_BerryWoman_Text_0
# 314 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_BerryWoman_Text_1
# 315 "data/maps/TranquilRoute/scripts.pory"
	closemessage
	goto TranquilRoute_EventScript_BerryWoman_1


TranquilRoute_EventScript_Mareep::
# 363 "data/maps/TranquilRoute/scripts.pory"
	lock
# 364 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 365 "data/maps/TranquilRoute/scripts.pory"
	ismonseen SPECIES_MAREEP
# 366 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TranquilRoute_EventScript_Mareep_2
# 369 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_1
TranquilRoute_EventScript_Mareep_1:
# 371 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep_Text_2
# 372 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 373 "data/maps/TranquilRoute/scripts.pory"
	release
	return

TranquilRoute_EventScript_Mareep_2:
# 367 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_0
	goto TranquilRoute_EventScript_Mareep_1


TranquilRoute_EventScript_Mareep2::
# 377 "data/maps/TranquilRoute/scripts.pory"
	lock
# 378 "data/maps/TranquilRoute/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_WEAK
# 379 "data/maps/TranquilRoute/scripts.pory"
	ismonseen SPECIES_MAREEP
# 380 "data/maps/TranquilRoute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TranquilRoute_EventScript_Mareep2_2
# 383 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_1
TranquilRoute_EventScript_Mareep2_1:
# 385 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_Mareep2_Text_0
# 386 "data/maps/TranquilRoute/scripts.pory"
	waitmoncry
# 387 "data/maps/TranquilRoute/scripts.pory"
	release
	return

TranquilRoute_EventScript_Mareep2_2:
# 381 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_Mareep_Text_0
	goto TranquilRoute_EventScript_Mareep2_1


TranquilRoute_TrainerTips1::
# 391 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips1_Text_0, MSGBOX_SIGN
	return


TranquilRoute_EventScript_CrobatShadows_Camera::
# 399 "data/maps/TranquilRoute/scripts.pory"
	lock
# 400 "data/maps/TranquilRoute/scripts.pory"
	special SpawnCameraObject
# 401 "data/maps/TranquilRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TranquilRoute_Movement_FocusOnCrobatShadows
# 402 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 403 "data/maps/TranquilRoute/scripts.pory"
	call TranquilRoute_EventScript_CrobatShadows_Cutscene
# 404 "data/maps/TranquilRoute/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TranquilRoute_Movement_FocusOnPlayer
# 405 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 406 "data/maps/TranquilRoute/scripts.pory"
	special RemoveCameraObject
# 407 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_CrobatShadows::
# 411 "data/maps/TranquilRoute/scripts.pory"
	lock
# 412 "data/maps/TranquilRoute/scripts.pory"
	call TranquilRoute_EventScript_CrobatShadows_Cutscene
# 413 "data/maps/TranquilRoute/scripts.pory"
	release
	return


TranquilRoute_EventScript_CrobatShadows_Cutscene::
# 417 "data/maps/TranquilRoute/scripts.pory"
	setvar VAR_CROBAT_SHADOWS_FIRST_ENCOUNTERS_STATE, 1
# 419 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_0
# 420 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_1
# 425 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 427 "data/maps/TranquilRoute/scripts.pory"
	delay 20
# 429 "data/maps/TranquilRoute/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFasterUp
# 430 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 0
# 432 "data/maps/TranquilRoute/scripts.pory"
	speakername TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_2
# 433 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_3
# 436 "data/maps/TranquilRoute/scripts.pory"
	closemessage
# 438 "data/maps/TranquilRoute/scripts.pory"
	applymovement 26, TranquilRoute_Movement_GruntAligns
# 439 "data/maps/TranquilRoute/scripts.pory"
	applymovement 24, TranquilRoute_Movement_GruntAligns
# 440 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 23
# 441 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 26
# 446 "data/maps/TranquilRoute/scripts.pory"
	playse SE_LEDGE
# 447 "data/maps/TranquilRoute/scripts.pory"
	applymovement 24, TranquilRoute_Movement_GruntAlign
# 448 "data/maps/TranquilRoute/scripts.pory"
	applymovement 23, TranquilRoute_Movement_GruntAlign
# 449 "data/maps/TranquilRoute/scripts.pory"
	applymovement 26, TranquilRoute_Movement_GruntAlign
# 450 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 24
# 451 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 23
# 452 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 26
# 453 "data/maps/TranquilRoute/scripts.pory"
	waitse
# 458 "data/maps/TranquilRoute/scripts.pory"
	applymovement 23, TranquilRoute_Movement_GruntsWalksAway
# 459 "data/maps/TranquilRoute/scripts.pory"
	applymovement 24, TranquilRoute_Movement_GruntsWalksAway
# 460 "data/maps/TranquilRoute/scripts.pory"
	applymovement 26, TranquilRoute_Movement_GruntsWalksAway
# 461 "data/maps/TranquilRoute/scripts.pory"
	applymovement 25, TranquilRoute_Movement_BossWalksAway
# 462 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 23
# 463 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 24
# 464 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 26
# 465 "data/maps/TranquilRoute/scripts.pory"
	waitmovement 25
# 467 "data/maps/TranquilRoute/scripts.pory"
	removeobject 23
# 468 "data/maps/TranquilRoute/scripts.pory"
	removeobject 24
# 469 "data/maps/TranquilRoute/scripts.pory"
	removeobject 26
# 470 "data/maps/TranquilRoute/scripts.pory"
	removeobject 25
# 471 "data/maps/TranquilRoute/scripts.pory"
	setflag FLAG_HIDE_CROBAT_SHADOWS_TRANQUIL_RT
	return


# 474 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_GruntAlign:
# 475 "data/maps/TranquilRoute/scripts.pory"
	face_down
# 476 "data/maps/TranquilRoute/scripts.pory"
	jump_in_place_down
# 477 "data/maps/TranquilRoute/scripts.pory"
	delay_16
# 478 "data/maps/TranquilRoute/scripts.pory"
	delay_16
	step_end

# 481 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_BossWalksAway:
# 482 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 482 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 483 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 483 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 483 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 483 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 483 "data/maps/TranquilRoute/scripts.pory"
	walk_left
	step_end

# 486 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_GruntsWalksAway:
# 487 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 487 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 487 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 487 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 487 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 488 "data/maps/TranquilRoute/scripts.pory"
	delay_16
	step_end

# 491 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_FocusOnCrobatShadows:
# 492 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 492 "data/maps/TranquilRoute/scripts.pory"
	walk_up
	step_end

# 495 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_FocusOnPlayer:
# 496 "data/maps/TranquilRoute/scripts.pory"
	walk_down
# 496 "data/maps/TranquilRoute/scripts.pory"
	walk_down
	step_end

# 499 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_Movement_GruntAligns:
# 500 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 501 "data/maps/TranquilRoute/scripts.pory"
	face_down
	step_end

TranquilRoute_TrainerTips2::
# 505 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_TrainerTips2_Text_0, MSGBOX_SIGN
	return


TranquilRoute_DirectionSign::
# 518 "data/maps/TranquilRoute/scripts.pory"
	goto_if_set FLAG_SAKU_KURA_REUNITED, TranquilRoute_DirectionSign_1
# 525 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_1, MSGBOX_SIGN
	return

TranquilRoute_DirectionSign_1:
# 519 "data/maps/TranquilRoute/scripts.pory"
	msgbox TranquilRoute_DirectionSign_Text_0, MSGBOX_SIGN
	return


# 532 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterGoesSeeGarden:
# 533 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 533 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 533 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 533 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 533 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 534 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 534 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 534 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 535 "data/maps/TranquilRoute/scripts.pory"
	face_up
	step_end

# 538 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_PlayerGoesSeeGarden:
# 539 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 539 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 539 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 539 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 539 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 539 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 540 "data/maps/TranquilRoute/scripts.pory"
	walk_up
# 540 "data/maps/TranquilRoute/scripts.pory"
	walk_up
	step_end

# 543 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkLeft:
# 544 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 544 "data/maps/TranquilRoute/scripts.pory"
	walk_left
	step_end

# 547 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkRight:
# 548 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 548 "data/maps/TranquilRoute/scripts.pory"
	walk_right
# 548 "data/maps/TranquilRoute/scripts.pory"
	walk_right
	step_end

# 551 "data/maps/TranquilRoute/scripts.pory"
TranquilRoute_CutMasterWalkBackToPlayer:
# 552 "data/maps/TranquilRoute/scripts.pory"
	walk_left
# 553 "data/maps/TranquilRoute/scripts.pory"
	walk_in_place_faster_down
	step_end

TranquilRoute_EventScript_GrassCutscene_Text_0:
# 47 "data/maps/TranquilRoute/scripts.pory"
	.string "Cut master$"

TranquilRoute_EventScript_GrassCutscene_Text_1:
# 49 "data/maps/TranquilRoute/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

TranquilRoute_EventScript_GrassCutscene_Text_2:
# 60 "data/maps/TranquilRoute/scripts.pory"
	.string "Was it always this big?$"

TranquilRoute_EventScript_GrassCutscene_Text_3:
# 70 "data/maps/TranquilRoute/scripts.pory"
	.string "It doesn't even look like the same\n"
	.string "garden…$"

TranquilRoute_EventScript_GrassCutscene_Text_4:
# 79 "data/maps/TranquilRoute/scripts.pory"
	.string "I cannot thank you enough for this.\p"
	.string "I shall tend to my garden again,\n"
	.string "thanks to you.$"

TranquilRoute_EventScript_CutMaster_Text_0:
# 119 "data/maps/TranquilRoute/scripts.pory"
	.string "I'm enjoying tending my garden again.\p"
	.string "I like watching it slowly blossom into\n"
	.string "something beautiful.$"

TranquilRoute_EventScript_Chikao_Text_0:
# 206 "data/maps/TranquilRoute/scripts.pory"
	.string "I've been studying Pokémon at school!\n"
	.string "I can't lose!$"

TranquilRoute_EventScript_Chikao_Text_1:
# 207 "data/maps/TranquilRoute/scripts.pory"
	.string "I should have listened in class…$"

TranquilRoute_EventScript_Chikao_Text_2:
# 209 "data/maps/TranquilRoute/scripts.pory"
	.string "Chikao$"

TranquilRoute_EventScript_Chikao_Text_3:
# 211 "data/maps/TranquilRoute/scripts.pory"
	.string "Some Pokémon have more attack, and\n"
	.string "some have more special attack!\p"
	.string "What's the difference? Uhh… It's too\n"
	.string "complicated to explain.$"

TranquilRoute_EventScript_Takeshi_Text_0:
# 221 "data/maps/TranquilRoute/scripts.pory"
	.string "Stay right there! I'll defeat you with\n"
	.string "my ninja skills!$"

TranquilRoute_EventScript_Takeshi_Text_1:
# 222 "data/maps/TranquilRoute/scripts.pory"
	.string "I had the sun in my eyes!$"

TranquilRoute_EventScript_Takeshi_Text_2:
# 224 "data/maps/TranquilRoute/scripts.pory"
	.string "Takeshi$"

TranquilRoute_EventScript_Takeshi_Text_3:
# 225 "data/maps/TranquilRoute/scripts.pory"
	.string "I must hone my ninja skills!$"

TranquilRoute_EventScript_Hana_Text_0:
# 232 "data/maps/TranquilRoute/scripts.pory"
	.string "Ugh, how can Kenji paint a portrait of\n"
	.string "me if people keep walking between us?$"

TranquilRoute_EventScript_Hana_Text_1:
# 233 "data/maps/TranquilRoute/scripts.pory"
	.string "Great, now my hair is all messed up.$"

TranquilRoute_EventScript_Hana_Text_2:
# 235 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina$"

TranquilRoute_EventScript_Hana_Text_3:
# 236 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji really is an amazing artist. I\n"
	.string "feel very lucky.$"

TranquilRoute_EventScript_Kenji_Text_0:
# 243 "data/maps/TranquilRoute/scripts.pory"
	.string "You're interrupting my creative flow!!$"

TranquilRoute_EventScript_Kenji_Text_1:
# 244 "data/maps/TranquilRoute/scripts.pory"
	.string "Such beauty! What an artistic fight\n"
	.string "this was!$"

TranquilRoute_EventScript_Kenji_Text_2:
# 246 "data/maps/TranquilRoute/scripts.pory"
	.string "Kenji$"

TranquilRoute_EventScript_Kenji_Text_3:
# 248 "data/maps/TranquilRoute/scripts.pory"
	.string "Hiina is the best subject I could\n"
	.string "dream of.\p"
	.string "…Hey, uh, please don't tell her I said\n"
	.string "that.$"

TranquilRoute_EventScript_MysteriousSamurai_Text_0:
# 258 "data/maps/TranquilRoute/scripts.pory"
	.string "Mystery man$"

TranquilRoute_EventScript_MysteriousSamurai_Text_1:
# 260 "data/maps/TranquilRoute/scripts.pory"
	.string "So you are one of those new Pokémon\n"
	.string "wielders, right?\p"
	.string "You say Pokémon have been restless,\n"
	.string "lately?\p"
	.string "Interesting.\p"
	.string "I have the feeling we're going to meet\n"
	.string "again soon.\p"
	.string "Until then, farewell.$"

TranquilRoute_EventScript_Girl_Text_0:
# 281 "data/maps/TranquilRoute/scripts.pory"
	.string "Girl$"

TranquilRoute_EventScript_Girl_Text_1:
# 282 "data/maps/TranquilRoute/scripts.pory"
	.string "What? Oh, I don't fight.\p"
	.string "My Pokémon and I are just strolling.$"

TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_0:
# 286 "data/maps/TranquilRoute/scripts.pory"
	.string "Man$"

TranquilRoute_EventScript_WhiteslateRoadblockGuard_Text_1:
# 287 "data/maps/TranquilRoute/scripts.pory"
	.string "Sorry, you can't go through.$"

TranquilRoute_EventScript_Shellos_Text_0:
# 295 "data/maps/TranquilRoute/scripts.pory"
	.string "Shellos$"

TranquilRoute_EventScript_Shellos_Text_1:
# 297 "data/maps/TranquilRoute/scripts.pory"
	.string "Slug$"

TranquilRoute_EventScript_Shellos_Text_2:
# 300 "data/maps/TranquilRoute/scripts.pory"
	.string "Clelel!$"

TranquilRoute_EventScript_BerryWoman_Text_0:
# 313 "data/maps/TranquilRoute/scripts.pory"
	.string "Woman$"

TranquilRoute_EventScript_BerryWoman_Text_1:
# 314 "data/maps/TranquilRoute/scripts.pory"
	.string "Enjoy gardening!$"

TranquilRoute_EventScript_BerryWoman_Text_2:
# 319 "data/maps/TranquilRoute/scripts.pory"
	.string "Hi, young one! See this?$"

TranquilRoute_EventScript_BerryWoman_Text_3:
# 328 "data/maps/TranquilRoute/scripts.pory"
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
# 340 "data/maps/TranquilRoute/scripts.pory"
	.string "Oh, right, I was almost forgetting!\p"
	.string "You must remember to water them\n"
	.string "regularly, or they won't grow!\p"
	.string "I like you. Take this!$"

TranquilRoute_EventScript_BerryWoman_Text_5:
# 350 "data/maps/TranquilRoute/scripts.pory"
	.string "Isn't it cute? It's friend-shaped!\p"
	.string "Don't worry about it, I have a spare\n"
	.string "one.\p"
	.string "Have fun gardening!$"

TranquilRoute_EventScript_Mareep_Text_0:
# 367 "data/maps/TranquilRoute/scripts.pory"
	.string "Mareep$"

TranquilRoute_EventScript_Mareep_Text_1:
# 369 "data/maps/TranquilRoute/scripts.pory"
	.string "Static sheep$"

TranquilRoute_EventScript_Mareep_Text_2:
# 371 "data/maps/TranquilRoute/scripts.pory"
	.string "Beeeeeh…$"

TranquilRoute_EventScript_Mareep2_Text_0:
# 385 "data/maps/TranquilRoute/scripts.pory"
	.string "Baaaaah…$"

TranquilRoute_TrainerTips1_Text_0:
# 392 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "Some Pokémon only come out in the\n"
	.string "morning, in the evening, or at night.\p"
	.string "Visit the same spot at different\n"
	.string "times of day to have a chance of\l"
	.string "seeing rare Pokémon!$"

TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_0:
# 419 "data/maps/TranquilRoute/scripts.pory"
	.string "Shady men$"

TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_1:
# 421 "data/maps/TranquilRoute/scripts.pory"
	.string "…Excellent idea…\p"
	.string "…Yeah, and then…\p"
	.string "… … …$"

TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_2:
# 432 "data/maps/TranquilRoute/scripts.pory"
	.string "Shady man$"

TranquilRoute_EventScript_CrobatShadows_Cutscene_Text_3:
# 434 "data/maps/TranquilRoute/scripts.pory"
	.string "Alright boys, let's move.$"

TranquilRoute_TrainerTips2_Text_0:
# 506 "data/maps/TranquilRoute/scripts.pory"
	.string "Did you know?\p"
	.string "You can swap the Pokémon in your\n"
	.string "party using {R_BUTTON}.\p"
	.string "Set the lead Pokémon with {SELECT_BUTTON}.$"

TranquilRoute_DirectionSign_Text_0:
# 520 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Sakura Village\p"
	.string "It looks like the sign has been\n"
	.string "written over recently…$"

TranquilRoute_DirectionSign_Text_1:
# 526 "data/maps/TranquilRoute/scripts.pory"
	.string "{LEFT_ARROW} Whiteslate route\n"
	.string "{UP_ARROW} Saku and Kura Villages$"
