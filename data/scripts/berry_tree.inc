BerryTreeScript::
# 2 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 3 "data/scripts/berry_tree.pory"
	switch VAR_0x8004
# 4 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_SPARKLING, BerryTreeScript_2
# 6 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_NO_BERRY, BerryTreeScript_3
# 8 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_PLANTED, BerryTreeScript_4
# 10 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_SPROUTED, BerryTreeScript_5
# 12 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_TALLER, BerryTreeScript_6
# 14 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_TRUNK, BerryTreeScript_7
# 16 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_BUDDING, BerryTreeScript_8
# 18 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_FLOWERING, BerryTreeScript_9
# 20 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_BERRIES, BerryTreeScript_10
	return

BerryTreeScript_2:
# 5 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_Sparkling
	return

BerryTreeScript_3:
# 7 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckSoil
	return

BerryTreeScript_4:
# 9 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage1
	return

BerryTreeScript_5:
# 11 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage2
	return

BerryTreeScript_6:
# 13 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage3
	return

BerryTreeScript_7:
# 15 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStageTrunk
	return

BerryTreeScript_8:
# 17 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStageBudding
	return

BerryTreeScript_9:
# 19 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage4
	return

BerryTreeScript_10:
# 21 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryFullyGrown
	return


# 25 "data/scripts/berry_tree.pory"

# 26 "data/scripts/berry_tree.pory"
BerryTree_EventScript_Sparkling::
# 27 "data/scripts/berry_tree.pory"
	lockall
# 28 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ExclamationPoint
# 29 "data/scripts/berry_tree.pory"
	waitmessage
# 30 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 31 "data/scripts/berry_tree.pory"
	releaseall
# 32 "data/scripts/berry_tree.pory"
	end
# 33 "data/scripts/berry_tree.pory"

# 34 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckSoil::
# 35 "data/scripts/berry_tree.pory"
	lock
# 36 "data/scripts/berry_tree.pory"
	faceplayer
# 37 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 38 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToPlant
# 39 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasMulch
# 40 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToMulch
# 41 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ItsSoftLoamySoil
# 42 "data/scripts/berry_tree.pory"
	waitmessage
# 43 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 44 "data/scripts/berry_tree.pory"
	release
# 45 "data/scripts/berry_tree.pory"
	end
# 46 "data/scripts/berry_tree.pory"

# 47 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToPlant::
# 48 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasMulch
# 49 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToPlantMulch
# 50 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
# 51 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
# 52 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
# 53 "data/scripts/berry_tree.pory"
	end
# 54 "data/scripts/berry_tree.pory"

# 55 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToMulch::
# 56 "data/scripts/berry_tree.pory"
.if OW_BERRY_MULCH_USAGE == TRUE
# 57 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToMulch, MSGBOX_YESNO
# 58 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseMulchToUse
# 59 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
# 60 "data/scripts/berry_tree.pory"
.endif
# 61 "data/scripts/berry_tree.pory"
	end
# 62 "data/scripts/berry_tree.pory"

# 63 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToPlantMulch::
# 64 "data/scripts/berry_tree.pory"
.if OW_BERRY_MULCH_USAGE == TRUE
# 65 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ItsSoftLoamySoil
# 66 "data/scripts/berry_tree.pory"
	waitmessage
# 67 "data/scripts/berry_tree.pory"
	multichoice 0, 0, MULTI_BERRY_PLOT, FALSE
# 68 "data/scripts/berry_tree.pory"
	switch VAR_RESULT
# 69 "data/scripts/berry_tree.pory"
	case 0, BerryTree_EventScript_ChooseMulchToUse
# 70 "data/scripts/berry_tree.pory"
	case 1, BerryTree_EventScript_ChooseBerryToPlant
# 71 "data/scripts/berry_tree.pory"
	case 2, BerryTree_EventScript_CancelPlanting
# 72 "data/scripts/berry_tree.pory"
	case MULTI_B_PRESSED, BerryTree_EventScript_CancelPlanting
# 73 "data/scripts/berry_tree.pory"

# 74 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ChooseMulchToUse::
# 75 "data/scripts/berry_tree.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/scripts/berry_tree.pory"
	closemessage
# 77 "data/scripts/berry_tree.pory"
	special Bag_ChooseMulch
# 78 "data/scripts/berry_tree.pory"
	waitstate
# 79 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
# 80 "data/scripts/berry_tree.pory"
	removeitem VAR_ITEM_ID
# 81 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_UseMulch
# 82 "data/scripts/berry_tree.pory"
.endif
# 83 "data/scripts/berry_tree.pory"

# 84 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ChooseBerryToPlant::
# 85 "data/scripts/berry_tree.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/scripts/berry_tree.pory"
	closemessage
# 87 "data/scripts/berry_tree.pory"
	special Bag_ChooseBerry
# 88 "data/scripts/berry_tree.pory"
	waitstate
# 89 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
# 90 "data/scripts/berry_tree.pory"
	removeitem VAR_ITEM_ID
# 91 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PlantBerry
# 92 "data/scripts/berry_tree.pory"

# 93 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CancelPlanting::
# 94 "data/scripts/berry_tree.pory"
	release
# 95 "data/scripts/berry_tree.pory"
	end
# 96 "data/scripts/berry_tree.pory"

# 97 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage1::
# 98 "data/scripts/berry_tree.pory"
	lockall
# 99 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 100 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage1
# 101 "data/scripts/berry_tree.pory"
	waitmessage
# 102 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 103 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 104 "data/scripts/berry_tree.pory"

# 105 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage2::
# 106 "data/scripts/berry_tree.pory"
	lockall
# 107 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 108 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage2
# 109 "data/scripts/berry_tree.pory"
	waitmessage
# 110 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 111 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 112 "data/scripts/berry_tree.pory"

# 113 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage3::
# 114 "data/scripts/berry_tree.pory"
	lockall
# 115 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 116 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage3
# 117 "data/scripts/berry_tree.pory"
	waitmessage
# 118 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 119 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 120 "data/scripts/berry_tree.pory"

# 121 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStageTrunk::
# 122 "data/scripts/berry_tree.pory"
	lockall
# 123 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 124 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStageTrunk
# 125 "data/scripts/berry_tree.pory"
	waitmessage
# 126 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 127 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 128 "data/scripts/berry_tree.pory"

# 129 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStageBudding::
# 130 "data/scripts/berry_tree.pory"
	lockall
# 131 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 132 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStageBudding
# 133 "data/scripts/berry_tree.pory"
	waitmessage
# 134 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 135 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 136 "data/scripts/berry_tree.pory"

# 137 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage4::
# 138 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_GetCareAdverb
# 139 "data/scripts/berry_tree.pory"
	lockall
# 140 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 141 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage4
# 142 "data/scripts/berry_tree.pory"
	waitmessage
# 143 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 144 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 145 "data/scripts/berry_tree.pory"

# 146 "data/scripts/berry_tree.pory"
@ VAR_0x8005 here is the number of times watered
# 147 "data/scripts/berry_tree.pory"
@ Buffered by ObjectEventInteractionGetBerryTreeData
# 148 "data/scripts/berry_tree.pory"
BerryTree_EventScript_GetCareAdverb::
# 149 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8005, 0, BerryTree_EventScript_SetAdverbPoor
# 150 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8005, 4, BerryTree_EventScript_SetAdverbGreat
# 151 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGood
# 152 "data/scripts/berry_tree.pory"
	return
# 153 "data/scripts/berry_tree.pory"

# 154 "data/scripts/berry_tree.pory"
BerryTree_EventScript_SetAdverbGreat::
# 155 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGreat
# 156 "data/scripts/berry_tree.pory"
	return
# 157 "data/scripts/berry_tree.pory"

# 158 "data/scripts/berry_tree.pory"
BerryTree_EventScript_SetAdverbPoor::
# 159 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbPoor
# 160 "data/scripts/berry_tree.pory"
	return
# 161 "data/scripts/berry_tree.pory"

# 162 "data/scripts/berry_tree.pory"
@ VAR_0x8006 here is the number of berries
# 163 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryFullyGrown::
# 164 "data/scripts/berry_tree.pory"
	buffernumberstring STR_VAR_2, VAR_0x8006
# 165 "data/scripts/berry_tree.pory"
	lock
# 166 "data/scripts/berry_tree.pory"
	faceplayer
# 167 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 168 "data/scripts/berry_tree.pory"
.if OW_BERRY_MUTATIONS == TRUE
# 169 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_CheckBerryFullyGrown_Mutation
# 170 "data/scripts/berry_tree.pory"
.endif
# 171 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_PickBerry
# 172 "data/scripts/berry_tree.pory"

# 173 "data/scripts/berry_tree.pory"
.set BERRY_NORMAL_BAG_FULL, 0
# 174 "data/scripts/berry_tree.pory"
.set BERRY_NORMAL_SPACE_IN_BAG, 1
# 175 "data/scripts/berry_tree.pory"
.set BERRY_MUTATION_BAG_FULL, 2
# 176 "data/scripts/berry_tree.pory"
.set BERRY_MUTATION_SPACE_IN_BAG, 3
# 177 "data/scripts/berry_tree.pory"

# 178 "data/scripts/berry_tree.pory"
BerryTree_EventScript_PickBerry::
# 179 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPickBerryTree
# 180 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8004, BERRY_NORMAL_BAG_FULL, BerryTree_EventScript_BerryPocketFull
# 181 "data/scripts/berry_tree.pory"
.if OW_BERRY_MUTATIONS == TRUE
# 182 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8004, BERRY_MUTATION_BAG_FULL, BerryTree_EventScript_BerryPocketFull_Mutation
# 183 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8004, BERRY_MUTATION_SPACE_IN_BAG, BerryTree_EventScript_PickBerry_Mutation
# 184 "data/scripts/berry_tree.pory"
.endif
# 185 "data/scripts/berry_tree.pory"
	special IncrementDailyPickedBerries
# 186 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionRemoveBerryTree
# 187 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PickedTheBerry
# 188 "data/scripts/berry_tree.pory"
	playfanfare MUS_OBTAIN_BERRY
# 189 "data/scripts/berry_tree.pory"
	waitmessage
# 190 "data/scripts/berry_tree.pory"
	waitfanfare
# 191 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 192 "data/scripts/berry_tree.pory"
	release
# 193 "data/scripts/berry_tree.pory"
	end
# 194 "data/scripts/berry_tree.pory"

# 195 "data/scripts/berry_tree.pory"
BerryTree_EventScript_BerryPocketFull::
# 196 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryPocketFull
# 197 "data/scripts/berry_tree.pory"
	waitmessage
# 198 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 199 "data/scripts/berry_tree.pory"
	release
# 200 "data/scripts/berry_tree.pory"
	end
# 201 "data/scripts/berry_tree.pory"

# 202 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CancelPickingBerry::
# 203 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryLeftUnpicked
# 204 "data/scripts/berry_tree.pory"
	waitmessage
# 205 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 206 "data/scripts/berry_tree.pory"
	release
# 207 "data/scripts/berry_tree.pory"
	end
# 208 "data/scripts/berry_tree.pory"

# 209 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ItemUsePlantBerry::
# 210 "data/scripts/berry_tree.pory"
	lockall
# 211 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 212 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PlantBerry
# 213 "data/scripts/berry_tree.pory"
	releaseall
# 214 "data/scripts/berry_tree.pory"
	end
# 215 "data/scripts/berry_tree.pory"

# 216 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToWater::
# 217 "data/scripts/berry_tree.pory"
.if OW_BERRY_PESTS == TRUE
# 218 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckForPests
# 219 "data/scripts/berry_tree.pory"
.endif
# 220 "data/scripts/berry_tree.pory"
.if OW_BERRY_WEEDS == TRUE
# 221 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckForWeed
# 222 "data/scripts/berry_tree.pory"
.endif
# 223 "data/scripts/berry_tree.pory"
	checkitem ITEM_WAILMER_PAIL
# 224 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
# 225 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, CanWaterBerryPlot
# 226 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
# 227 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 228 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WaterBerry
# 229 "data/scripts/berry_tree.pory"

# 230 "data/scripts/berry_tree.pory"
BerryTree_EventScript_DontWater::
# 231 "data/scripts/berry_tree.pory"
	releaseall
# 232 "data/scripts/berry_tree.pory"
	end
# 233 "data/scripts/berry_tree.pory"

# 234 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ItemUseWailmerPail::
# 235 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 236 "data/scripts/berry_tree.pory"
	lockall
# 237 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WaterBerry::
# 238 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 239 "data/scripts/berry_tree.pory"
	message BerryTree_Text_WateredTheBerry
# 240 "data/scripts/berry_tree.pory"
	waitmessage
# 241 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionWaterBerryTree
# 242 "data/scripts/berry_tree.pory"
	special DoWateringBerryTreeAnim
# 243 "data/scripts/berry_tree.pory"
	waitstate
# 244 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PlantIsDelighted
# 245 "data/scripts/berry_tree.pory"
	waitmessage
# 246 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 247 "data/scripts/berry_tree.pory"
	releaseall
# 248 "data/scripts/berry_tree.pory"
	end
# 249 "data/scripts/berry_tree.pory"

# 250 "data/scripts/berry_tree.pory"
BerryTree_EventScript_PlantBerry::
# 251 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPlantBerryTree
# 252 "data/scripts/berry_tree.pory"
	incrementgamestat GAME_STAT_PLANTED_BERRIES
# 253 "data/scripts/berry_tree.pory"
	special IncrementDailyPlantedBerries
# 254 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 255 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PlantedOneBerry
# 256 "data/scripts/berry_tree.pory"
	waitmessage
# 257 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 258 "data/scripts/berry_tree.pory"
	return
# 259 "data/scripts/berry_tree.pory"

# 260 "data/scripts/berry_tree.pory"
BerryTree_Text_ItsSoftLoamySoil:
# 261 "data/scripts/berry_tree.pory"
	.string "It's soft, loamy soil.$"
# 262 "data/scripts/berry_tree.pory"

# 263 "data/scripts/berry_tree.pory"
BerryTree_Text_WantToPlant:
# 264 "data/scripts/berry_tree.pory"
	.string "It's soft, loamy soil.\n"
# 265 "data/scripts/berry_tree.pory"
	.string "Want to plant a BERRY?$"
# 266 "data/scripts/berry_tree.pory"

# 267 "data/scripts/berry_tree.pory"
BerryTree_Text_PlantedOneBerry:
# 268 "data/scripts/berry_tree.pory"
	.string "{PLAYER} planted one {STR_VAR_1}.$"
# 269 "data/scripts/berry_tree.pory"

# 270 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage1:
# 271 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 272 "data/scripts/berry_tree.pory"
	.string "This is where you planted the\n{STR_VAR_1}!$"
# 273 "data/scripts/berry_tree.pory"
.else
# 274 "data/scripts/berry_tree.pory"
	.string "One {STR_VAR_1} was planted here.$"
# 275 "data/scripts/berry_tree.pory"
.endif
# 276 "data/scripts/berry_tree.pory"

# 277 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage2:
# 278 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 279 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} is sprouting!$"
# 280 "data/scripts/berry_tree.pory"
.else
# 281 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} has sprouted.$"
# 282 "data/scripts/berry_tree.pory"
.endif
# 283 "data/scripts/berry_tree.pory"

# 284 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage3:
# 285 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 286 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1}'s seedling is growing well!$"
# 287 "data/scripts/berry_tree.pory"
.else
# 288 "data/scripts/berry_tree.pory"
	.string "This {STR_VAR_1} plant is growing taller.$"
# 289 "data/scripts/berry_tree.pory"
.endif
# 290 "data/scripts/berry_tree.pory"

# 291 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStageTrunk:
# 292 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1}'s trunk is getting bigger!$"
# 293 "data/scripts/berry_tree.pory"

# 294 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStageBudding:
# 295 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} tree has buds!$"
# 296 "data/scripts/berry_tree.pory"

# 297 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage4:
# 298 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 299 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} tree is in bloom!$"
# 300 "data/scripts/berry_tree.pory"
.else
# 301 "data/scripts/berry_tree.pory"
	.string "These {STR_VAR_1} flowers are blooming\n"
# 302 "data/scripts/berry_tree.pory"
	.string "{STR_VAR_2}.$"
# 303 "data/scripts/berry_tree.pory"
.endif
# 304 "data/scripts/berry_tree.pory"

# 305 "data/scripts/berry_tree.pory"
BerryTree_Text_CareAdverbGreat:
# 306 "data/scripts/berry_tree.pory"
	.string "very beautifully$"
# 307 "data/scripts/berry_tree.pory"

# 308 "data/scripts/berry_tree.pory"
BerryTree_Text_CareAdverbPoor:
# 309 "data/scripts/berry_tree.pory"
	.string "cutely$"
# 310 "data/scripts/berry_tree.pory"

# 311 "data/scripts/berry_tree.pory"
BerryTree_Text_CareAdverbGood:
# 312 "data/scripts/berry_tree.pory"
	.string "prettily$"
# 313 "data/scripts/berry_tree.pory"

# 314 "data/scripts/berry_tree.pory"
BerryTree_Text_WantToPick:
# 315 "data/scripts/berry_tree.pory"
	.string "You found {STR_VAR_2} {STR_VAR_1}!\p"
# 316 "data/scripts/berry_tree.pory"
	.string "Do you want to pick the\n"
# 317 "data/scripts/berry_tree.pory"
	.string "{STR_VAR_1}?$"
# 318 "data/scripts/berry_tree.pory"

# 319 "data/scripts/berry_tree.pory"
BerryTree_Text_PickedTheBerry:
# 320 "data/scripts/berry_tree.pory"
	.string "{PLAYER} picked {STR_VAR_2} {STR_VAR_1}.$"
# 321 "data/scripts/berry_tree.pory"

# 322 "data/scripts/berry_tree.pory"
BerryTree_Text_PutAwayBerry:
# 323 "data/scripts/berry_tree.pory"
	.string "{PLAYER} put away the {STR_VAR_1}.$"
# 324 "data/scripts/berry_tree.pory"

# 325 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryPocketFull:
# 326 "data/scripts/berry_tree.pory"
	.string "The bag's berries pocket is full.\p"
# 327 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} couldn't be taken.$"
# 328 "data/scripts/berry_tree.pory"

# 329 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryLeftUnpicked:
# 330 "data/scripts/berry_tree.pory"
	.string "{PLAYER} left the {STR_VAR_1}\n"
# 331 "data/scripts/berry_tree.pory"
	.string "unpicked.$"
# 332 "data/scripts/berry_tree.pory"

# 333 "data/scripts/berry_tree.pory"
BerryTree_Text_WantToWater:
# 334 "data/scripts/berry_tree.pory"
	.string "Want to water the {STR_VAR_1} with the\n"
# 335 "data/scripts/berry_tree.pory"
	.string "WAILMER PAIL?$"
# 336 "data/scripts/berry_tree.pory"

# 337 "data/scripts/berry_tree.pory"
BerryTree_Text_WateredTheBerry:
# 338 "data/scripts/berry_tree.pory"
	.string "{PLAYER} watered the {STR_VAR_1}.$"
# 339 "data/scripts/berry_tree.pory"

# 340 "data/scripts/berry_tree.pory"
BerryTree_Text_PlantIsDelighted:
# 341 "data/scripts/berry_tree.pory"
	.string "The plant seems to be delighted.$"
# 342 "data/scripts/berry_tree.pory"

# 343 "data/scripts/berry_tree.pory"
BerryTree_Text_ExclamationPoint:
# 344 "data/scripts/berry_tree.pory"
	.string "!$"
# 345 "data/scripts/berry_tree.pory"

# 346 "data/scripts/berry_tree.pory"
.if OW_BERRY_MUTATIONS == TRUE
# 347 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryFullyGrown_Mutation:
# 348 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPick_Mutation, MSGBOX_YESNO
# 349 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
# 350 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry_Mutation
# 351 "data/scripts/berry_tree.pory"

# 352 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CancelPickingBerry_Mutation::
# 353 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryLeftUnpicked_Mutation
# 354 "data/scripts/berry_tree.pory"
	waitmessage
# 355 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 356 "data/scripts/berry_tree.pory"
	release
# 357 "data/scripts/berry_tree.pory"
	end
# 358 "data/scripts/berry_tree.pory"

# 359 "data/scripts/berry_tree.pory"
BerryTree_EventScript_BerryPocketFull_Mutation::
# 360 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryPocketFull_Mutation
# 361 "data/scripts/berry_tree.pory"
	waitmessage
# 362 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 363 "data/scripts/berry_tree.pory"
	release
# 364 "data/scripts/berry_tree.pory"
	end
# 365 "data/scripts/berry_tree.pory"

# 366 "data/scripts/berry_tree.pory"
BerryTree_EventScript_PickBerry_Mutation::
# 367 "data/scripts/berry_tree.pory"
	special IncrementDailyPickedBerries
# 368 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionRemoveBerryTree
# 369 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PickedTheBerry_Mutation
# 370 "data/scripts/berry_tree.pory"
	playfanfare MUS_OBTAIN_BERRY
# 371 "data/scripts/berry_tree.pory"
	waitmessage
# 372 "data/scripts/berry_tree.pory"
	waitfanfare
# 373 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 374 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PutAwayBerry_Mutation
# 375 "data/scripts/berry_tree.pory"
	waitmessage
# 376 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 377 "data/scripts/berry_tree.pory"
	release
# 378 "data/scripts/berry_tree.pory"
	end
# 379 "data/scripts/berry_tree.pory"

# 380 "data/scripts/berry_tree.pory"
BerryTree_Text_WantToPick_Mutation:
# 381 "data/scripts/berry_tree.pory"
	.string "You found {STR_VAR_2} {STR_VAR_1}\n"
# 382 "data/scripts/berry_tree.pory"
	.string "and 1 {STR_VAR_3}!\p"
# 383 "data/scripts/berry_tree.pory"
	.string "Do you want to pick them?$"
# 384 "data/scripts/berry_tree.pory"

# 385 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryLeftUnpicked_Mutation:
# 386 "data/scripts/berry_tree.pory"
	.string "{PLAYER} left the {STR_VAR_1}\n"
# 387 "data/scripts/berry_tree.pory"
	.string "and the {STR_VAR_3} unpicked.$"
# 388 "data/scripts/berry_tree.pory"

# 389 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryPocketFull_Mutation:
# 390 "data/scripts/berry_tree.pory"
	.string "The BAG's BERRIES POCKET is full.\p"
# 391 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} and the\n"
# 392 "data/scripts/berry_tree.pory"
	.string "{STR_VAR_3} couldn't be taken.$"
# 393 "data/scripts/berry_tree.pory"

# 394 "data/scripts/berry_tree.pory"
BerryTree_Text_PickedTheBerry_Mutation:
# 395 "data/scripts/berry_tree.pory"
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1}\n"
# 396 "data/scripts/berry_tree.pory"
	.string "and the {STR_VAR_3}.$"
# 397 "data/scripts/berry_tree.pory"

# 398 "data/scripts/berry_tree.pory"
BerryTree_Text_PutAwayBerry_Mutation:
# 399 "data/scripts/berry_tree.pory"
	.string "{PLAYER} put away the {STR_VAR_1}\n"
# 400 "data/scripts/berry_tree.pory"
	.string "and the {STR_VAR_3} in the BAG's\l"
# 401 "data/scripts/berry_tree.pory"
	.string "BERRIES POCKET.\p"
# 402 "data/scripts/berry_tree.pory"
	.string "The soil returned to its soft and\n"
# 403 "data/scripts/berry_tree.pory"
	.string "loamy state.$"
# 404 "data/scripts/berry_tree.pory"
.endif
# 405 "data/scripts/berry_tree.pory"

# 406 "data/scripts/berry_tree.pory"
.if OW_BERRY_MULCH_USAGE == TRUE
# 407 "data/scripts/berry_tree.pory"
BerryTree_EventScript_UseMulch::
# 408 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionApplyMulch
# 409 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ScatteredMulch
# 410 "data/scripts/berry_tree.pory"
	waitmessage
# 411 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 412 "data/scripts/berry_tree.pory"
	return
# 413 "data/scripts/berry_tree.pory"

# 414 "data/scripts/berry_tree.pory"
BerryTree_Text_WantToMulch:
# 415 "data/scripts/berry_tree.pory"
	.string "It's soft, loamy soil.\n"
# 416 "data/scripts/berry_tree.pory"
	.string "Put down some fertilizer?$"
# 417 "data/scripts/berry_tree.pory"

# 418 "data/scripts/berry_tree.pory"
BerryTree_Text_ScatteredMulch:
# 419 "data/scripts/berry_tree.pory"
	.string "{PLAYER} scattered the {STR_VAR_1}\n"
# 420 "data/scripts/berry_tree.pory"
	.string "on the soft, loamy soil.$"
# 421 "data/scripts/berry_tree.pory"
.endif
# 422 "data/scripts/berry_tree.pory"

# 423 "data/scripts/berry_tree.pory"
.if OW_BERRY_WEEDS == TRUE
# 424 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckForWeed::
# 425 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasWeed
# 426 "data/scripts/berry_tree.pory"
	call_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WeedIsGrowing
# 427 "data/scripts/berry_tree.pory"
	return
# 428 "data/scripts/berry_tree.pory"

# 429 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WeedIsGrowing::
# 430 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WeedIsGrowing, MSGBOX_YESNO
# 431 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PullOutWeed
# 432 "data/scripts/berry_tree.pory"
	return
# 433 "data/scripts/berry_tree.pory"

# 434 "data/scripts/berry_tree.pory"
BerryTree_EventScript_PullOutWeed::
# 435 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPullBerryWeed
# 436 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PulledOutTheWeed
# 437 "data/scripts/berry_tree.pory"
	waitmessage
# 438 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 439 "data/scripts/berry_tree.pory"
	return
# 440 "data/scripts/berry_tree.pory"

# 441 "data/scripts/berry_tree.pory"
BerryTree_Text_WeedIsGrowing:
# 442 "data/scripts/berry_tree.pory"
	.string "A weed is growing here.\n"
# 443 "data/scripts/berry_tree.pory"
	.string "Do you want to pull it out?$"
# 444 "data/scripts/berry_tree.pory"

# 445 "data/scripts/berry_tree.pory"
BerryTree_Text_PulledOutTheWeed:
# 446 "data/scripts/berry_tree.pory"
	.string "{PLAYER} pulled out the weed!$"
# 447 "data/scripts/berry_tree.pory"
.endif
# 448 "data/scripts/berry_tree.pory"

# 449 "data/scripts/berry_tree.pory"
.if OW_BERRY_PESTS == TRUE
# 450 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckForPests::
# 451 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasPests
# 452 "data/scripts/berry_tree.pory"
	call_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_EncounterPests
# 453 "data/scripts/berry_tree.pory"
	return
# 454 "data/scripts/berry_tree.pory"

# 455 "data/scripts/berry_tree.pory"
BerryTree_EventScript_EncounterPests::
# 456 "data/scripts/berry_tree.pory"
	message BerryTree_Text_APokemonAppeared
# 457 "data/scripts/berry_tree.pory"
	waitmessage
# 458 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 459 "data/scripts/berry_tree.pory"
	dowildbattle
# 460 "data/scripts/berry_tree.pory"
	return
# 461 "data/scripts/berry_tree.pory"

# 462 "data/scripts/berry_tree.pory"
BerryTree_Text_APokemonAppeared:
# 463 "data/scripts/berry_tree.pory"
	.string "A Pokémon appeared!$"
# 464 "data/scripts/berry_tree.pory"
.endif
