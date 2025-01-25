NewBarkTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_OnTransition
	.byte 0

NewBarkTown_OnTransition:
	setflag FLAG_VISITED_NEWBARK
	end

NewBarkTown_Newbark_TownSign::
	msgbox NewBarkTown_Newbark_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Newbark_Text_TownSign:
	.string "NEW BARK TOWN\n"
	.string "“Winds of a New Beginning!”$"

NewBarkTown_ElmHouseSign::
	msgbox NewBarkTown_Text_ElmHouseSign, MSGBOX_SIGN
	end

NewBarkTown_Text_ElmHouseSign:
	.string "PROF. ELM'S HOUSE$"

NewBarkTown_ElmLabSign::
	msgbox NewBarkTown_Text_ElmLabSign, MSGBOX_SIGN
	end

NewBarkTown_Text_ElmLabSign:
	.string "PROF. ELM'S POKéMON LAB$"

NewBarkTown_MrPokemonHouseSign::
	msgbox NewBarkTown_Text_MrPokemonHouseSign, MSGBOX_SIGN
	end

NewBarkTown_Text_MrPokemonHouseSign:
	.string "MR.POKéMON HOUSE$"

NewBarkTown_GoldHouseSign::
	msgbox NewBarkTown_Text_GoldHouseSign, MSGBOX_SIGN
	end

NewBarkTown_Text_GoldHouseSign:
	.string "GOLD'S HOUSE$"

NewBarkTown_Cherrygrove_TownSign::
	msgbox NewBarkTown_Cherrygrove_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Cherrygrove_Text_TownSign:
	.string "CHERRYGROVE CITY\n"
	.string "“The City of Fragrant Flowers!”$"

NewBarkTown_Cherrygrove_GuideSign::
	msgbox NewBarkTown_Cherrygrove_Text_GuideSign, MSGBOX_SIGN
	end

NewBarkTown_Cherrygrove_Text_GuideSign:
	.string "GUIDE GENT'S HOUSE$"

NewBarkTown_Violet_TownSign::
	msgbox NewBarkTown_Violet_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Violet_Text_TownSign:
	.string "VIOLET CITY\n"
	.string "“The City of Nostalgic Scents!”$"

NewBarkTown_Violet_GymSign::
	msgbox NewBarkTown_Violet_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Violet_Text_GymSign:
	.string "VIOLET CITY POKéMON GYM\n"
	.string "LEADER: FALKNER\l"
	.string "“The Elegant Master of Flying Pokémon”$"

NewBarkTown_Violet_TowerSign::
	msgbox NewBarkTown_Violet_Text_TowerSign, MSGBOX_SIGN
	end

NewBarkTown_Violet_Text_TowerSign:
	.string "SPROUT TOWER$"

NewBarkTown_Azalea_TownSign::
	msgbox NewBarkTown_Azalea_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Azalea_Text_TownSign:
	.string "AZALEA TOWN\n"
	.string "“Living Happily with Pokémon!”$"

NewBarkTown_Azalea_GymSign::
	msgbox NewBarkTown_Azalea_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Azalea_Text_GymSign:
	.string "AZALEA CITY POKéMON GYM\n"
	.string "LEADER: BUGSY\l"
	.string "“The Walking Bug Pokémon Encyclopedia”$"

NewBarkTown_Azalea_WellSign::
	msgbox NewBarkTown_Azalea_Text_WellSign, MSGBOX_SIGN
	end

NewBarkTown_Azalea_Text_WellSign:
	.string "SLOWPOKE WELL$"

NewBarkTown_Azalea_IlexSign::
	msgbox NewBarkTown_Azalea_IlexSignText, MSGBOX_SIGN
	end

NewBarkTown_Azalea_IlexSignText:
	.string "{LEFT_ARROW} ILEX FOREST$"

NewBarkTown_Azalea_KlinSign::
	msgbox NewBarkTown_Azalea_Text_KlinSign, MSGBOX_SIGN
	end

NewBarkTown_Azalea_Text_KlinSign:
	.string "CHARCOAL KLIN$"

NewBarkTown_Azalea_FranzSign::
	msgbox NewBarkTown_Azalea_Text_FranzSign, MSGBOX_SIGN
	end

NewBarkTown_Azalea_Text_FranzSign:
	.string "FRANZ'S HOUSE$"

NewBarkTown_Goldenrod_DeptSign::
	msgbox NewBarkTown_Goldenrod_Text_DeptSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_DeptSign:
	.string "Find what you need at the\n"
	.string "GOLDENROD DEPT. STORE!$"

NewBarkTown_Goldenrod_CasinoSign::
	msgbox NewBarkTown_Goldenrod_Text_CasinoSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_CasinoSign:
	.string "GOLDENROD GAME CORNER\n"
	.string "“Your playground!”$"

NewBarkTown_Goldenrod_UndergroundSign::
	msgbox NewBarkTown_Goldenrod_Text_UndergroundSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_UndergroundSign:
	.string "UNDERGROUND ENTRANCE$"

NewBarkTown_Goldenrod_RadioSign::
	msgbox NewBarkTown_Goldenrod_Text_RadioSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_RadioSign:
	.string "GOLDENROD RADIO TOWER$"

NewBarkTown_Goldenrod_TownSign::
	msgbox NewBarkTown_Goldenrod_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_TownSign:
	.string "GOLDENROD CITY\n"
	.string "“The Festive City of Opulent Charm!”$"

NewBarkTown_Goldenrod_GymSign::
	msgbox NewBarkTown_Goldenrod_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_GymSign:
	.string "GOLDENROD CITY POKéMON GYM\n"
	.string "LEADER: WHITNEY\l"
	.string "“The Incredibly Pretty Girl!”$"

NewBarkTown_Goldenrod_SkateSign::
	msgbox NewBarkTown_Goldenrod_Text_SkateSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_SkateSign:
	.string "“The world is a SKATE PARK!”\n"
	.string "SKATE SHOP$"

NewBarkTown_Goldenrod_FlowerSign::
	msgbox NewBarkTown_Goldenrod_Text_FlowerSign, MSGBOX_SIGN
	end

NewBarkTown_Goldenrod_Text_FlowerSign:
	.string "Blooming beautiful\n"
	.string "FLOWER SHOP$"

NewBarkTown_Ecruteak_TownSign::
	msgbox NewBarkTown_Ecruteak_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Ecruteak_Text_TownSign:
	.string "ECRUTEAK CITY\n"
	.string "“Historical City Where Past Meets\l"
	.string "Present!”$"

NewBarkTown_Ecruteak_GymSign::
	msgbox NewBarkTown_Ecruteak_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Ecruteak_Text_GymSign:
	.string "ECRUTEAK CITY POKéMON GYM\n"
	.string "LEADER: MORTY\l"
	.string "“The Mystic Seer of the Future!”$"

NewBarkTown_Ecruteak_KimonoSign::
	msgbox NewBarkTown_Ecruteak_Text_KimonoSign, MSGBOX_SIGN
	end

NewBarkTown_Ecruteak_Text_KimonoSign:
	.string "ECTUTEAK DANCE THEATER$"

NewBarkTown_Ecruteak_TempleSign::
	msgbox NewBarkTown_Ecruteak_Text_TempleSign, MSGBOX_SIGN
	end

NewBarkTown_Ecruteak_Text_TempleSign:
	.string "ECTUTEAK TEMPLE$"

NewBarkTown_Ecruteak_TinSign::
	msgbox NewBarkTown_Ecruteak_Text_TinSign, MSGBOX_SIGN
	end

NewBarkTown_Ecruteak_Text_TinSign:
	.string "TIN TOWER$"

NewBarkTown_Ecruteak_BurnedSign::
	msgbox NewBarkTown_Ecruteak_Text_BurnedSign, MSGBOX_SIGN
	end

NewBarkTown_Ecruteak_Text_BurnedSign:
	.string "BRASS TOWER$"

NewBarkTown_Olivine_TownSign::
	msgbox NewBarkTown_Olivine_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Olivine_Text_TownSign:
	.string "OLIVINE CITY\n"
	.string "“The Port Closest to Foreign Lands!”$"

NewBarkTown_Olivine_GymSign::
	msgbox NewBarkTown_Olivine_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Olivine_Text_GymSign:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: JASMINE\l"
	.string "“The Steel-Clad Defense Girl!”$"

NewBarkTown_OlivineLighthouseSign::
	msgbox NewBarkTown_OlivineLighthouseSignText, MSGBOX_SIGN
	end

NewBarkTown_OlivineLighthouseSignText:
	.string "OLIVINE CITY LIGHTHOUSE$"

NewBarkTown_Olivine_HarborSign::
	msgbox NewBarkTown_Olivine_Text_HarborSign, MSGBOX_SIGN
	end

NewBarkTown_Olivine_Text_HarborSign:
	.string "OLIVINE HARBOR$"

PalletTown_Olivine_AquariumSign::
	msgbox PalletTown_Olivine_AquariumSignText, MSGBOX_SIGN
	end

PalletTown_Olivine_AquariumSignText:
	.string "Come see the GREAT AQUARIUM of\n"
	.string "CIANWOOD CITY!$"

NewBarkTown_Cianwood_TownSign::
	msgbox NewBarkTown_Cianwood_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Cianwood_Text_TownSign:
	.string "CIANWOOD CITY\n"
	.string "“A Port of Crashing Waves!”$"

NewBarkTown_Cianwood_GymSign::
	msgbox NewBarkTown_Cianwood_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Cianwood_Text_GymSign:
	.string "CIANWOOD CITY POKéMON GYM\n"
	.string "LEADER: CHUCK\l"
	.string "“His Roaring Fists Do the Talking”$"

NewBarkTown_Cianwood_TaphouseSign::
	msgbox NewBarkTown_Cianwood_Text_TaphouseSign, MSGBOX_SIGN
	end

NewBarkTown_Cianwood_Text_TaphouseSign:
	.string "SEASHORE TAPHOUSE$"

NewBarkTown_Cianwood_PharmacySign::
	msgbox NewBarkTown_Cianwood_Text_PharmacySign, MSGBOX_SIGN
	end

NewBarkTown_Cianwood_Text_PharmacySign:
	.string "CIANWOOD CITY PHARMACY$"

NewBarkTown_Cianwood_AquariumSign::
	msgbox NewBarkTown_Cianwood_Text_AquariumSign, MSGBOX_SIGN
	end

NewBarkTown_Cianwood_Text_AquariumSign:
	.string "GREAT AQUARIUM$"

NewBarkTown_Mahogany_TownSign::
	msgbox NewBarkTown_Mahogany_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Mahogany_Text_TownSign:
	.string "MAHOGANY TOWN\n"
	.string "“Welcome to the Home of the Ninja!”$"

NewBarkTown_Mahogany_GymSign::
	msgbox NewBarkTown_Mahogany_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Mahogany_Text_GymSign:
	.string "MAHOGANY TOWN POKéMON GYM\n"
	.string "LEADER: PRYCE\l"
	.string "“The Teacher of Winter's Harshness!”$"

NewBarkTown_Mahogany_SouvenirSign::
	msgbox NewBarkTown_Mahogany_Text_SouvenirSign, MSGBOX_SIGN
	end

NewBarkTown_Mahogany_Text_SouvenirSign:
	.string "SOUVENIR SHOP$"

NewBarkTown_Blackthorn_CitySign::
	msgbox NewBarkTown_Blackthorn_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Blackthorn_Text_TownSign:
	.string "BLACKTHORN CITY\n"
	.string "“A mysterious mountain village\l"
	.string "cut into a rock face!”$"

NewBarkTown_Blackthorn_GymSign::
	msgbox NewBarkTown_Blackthorn_Text_GymSign, MSGBOX_SIGN
	end

NewBarkTown_Blackthorn_Text_GymSign:
	.string "BLACKTHORN CITY POKéMON GYM\n"
	.string "LEADER: CLAIR\l"
	.string "“The Blessed User of Dragon Pokémon!”$"

NewBarkTown_DragonShirne_TownSign::
	msgbox NewBarkTown_DragonShirne_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_DragonShirne_Text_TownSign:
	.string "DRAGON'S SHIRNE$"

NewBarkTown_Alph_LabSign::
	msgbox NewBarkTown_Alph_Text_LabSign, MSGBOX_SIGN
	end

NewBarkTown_Alph_Text_LabSign:
	.string "RUINS OF ALPH RESEARCH\n"
	.string "CENTER$"

NewBarkTown_LakeofRage_TownSign::
	msgbox NewBarkTown_LakeofRage_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_LakeofRage_Text_TownSign:
	.string "LAKE OF RAGE$"

NewBarkTown_LakeofRage_GuruSign::
	msgbox NewBarkTown_LakeofRage_Text_GuruSign, MSGBOX_SIGN
	end

NewBarkTown_LakeofRage_Text_GuruSign:
	.string "“FISHING GURU'S HOUSE”$"

NewBarkTown_Natpark_TownSign::
	msgbox NewBarkTown_Natpark_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Natpark_Text_TownSign:
	.string "NATIONAL PARK$"

NewBarkTown_Natpark_NoticeSign::
	msgbox NewBarkTown_Natpark_Text_NoticeSign, MSGBOX_SIGN
	end

NewBarkTown_Natpark_Text_NoticeSign:
	.string "“Please battle only in the grass.”$"

NewBarkTown_MtSilverSign::
	msgbox NewBarkTown_MtSilverSignText, MSGBOX_SIGN
	end

NewBarkTown_MtSilverSignText:
	.string "MT.SILVER\n"
	.string "Tunnel entrance$"

NewBarkTown_Route26Sign::
	msgbox NewBarkTown_Route26SignText, MSGBOX_SIGN
	end

NewBarkTown_Route26SignText:
	.string "ROUTE 26\n"
	.string "{UP_ARROW} INDIGO PLATEAU$"

NewBarkTown_Route29_1Sign::
	msgbox NewBarkTown_Route29_1SignText, MSGBOX_SIGN
	end

NewBarkTown_Route29_1SignText:
	.string "ROUTE 29\n"
	.string "{LEFT_ARROW} CHERRYGROVE CITY$"

NewBarkTown_Route29_2Sign::
	msgbox NewBarkTown_Route29_2SignText, MSGBOX_SIGN
	end

NewBarkTown_Route29_2SignText:
	.string "ROUTE 29\n"
	.string "{RIGHT_ARROW} NEW BARK TOWN$"

NewBarkTown_Route30_Sign::
	msgbox NewBarkTown_Route30SignText, MSGBOX_SIGN
	end

NewBarkTown_Route30SignText:
	.string "ROUTE 30\n"
	.string "{UP_ARROW} VIOLET CITY\p"
	.string "{DOWN_ARROW} CHERRYGROVE CITY$"

NewBarkTown_Route31Sign::
	msgbox NewBarkTown_Route31SignText, MSGBOX_SIGN
	end

NewBarkTown_Route31SignText:
	.string "ROUTE 31\n"
	.string "{DOWN_ARROW} CHERRYGROVE CITY"

NewBarkTown_Route32_Sign::
	msgbox NewBarkTown_Route32SignText, MSGBOX_SIGN
	end

NewBarkTown_Route32SignText:
	.string "ROUTE 32\n"
	.string "{LEFT_ARROW} RUINS OF ALPH\p"
	.string "{DOWN_ARROW} UNION CAVE$"

NewBarkTown_Route34_1_Sign::
	msgbox NewBarkTown_Route34_1SignText, MSGBOX_SIGN
	end

NewBarkTown_Route34_1SignText:
	.string "ROUTE 34\n"
	.string "{UP_ARROW} GOLDENROD CITY$"

NewBarkTown_Route34_2_Sign::
	msgbox NewBarkTown_Route34_2SignText, MSGBOX_SIGN
	end

NewBarkTown_Route34_2SignText:
	.string "ROUTE 34\n"
	.string "{DOWN_ARROW} ILEX FOREST$"

NewBarkTown_Route35_Sign::
	msgbox NewBarkTown_Route35SignText, MSGBOX_SIGN
	end

NewBarkTown_Route35SignText:
	.string "ROUTE 35\n"
	.string "{UP_ARROW} NATIONAL PARK\p"
	.string "{UP_ARROW} ECRUTEAK CITY\n"
	.string "{RIGHT_ARROW} VIOLET CITY$"

NewBarkTown_Route36_1Sign::
	msgbox NewBarkTown_Route36_1SignText, MSGBOX_SIGN
	end

NewBarkTown_Route36_1SignText:
	.string "ROUTE 36\n"
	.string "{UP_ARROW} ECRUTEAK CITY\p"
	.string "{RIGHT_ARROW} VIOLET CITY\n"
	.string "{DOWN_ARROW} GOLDENROD CITY$"

NewBarkTown_Route36_2Sign::
	msgbox NewBarkTown_Route36_2SignText, MSGBOX_SIGN
	end

NewBarkTown_Route36_2SignText:
	.string "ROUTE 36\n"
	.string "{UP_ARROW} ECRUTEAK CITY\p"
	.string "{LEFT_ARROW} NATIONAL PARK\n"
	.string "{DOWN_ARROW} RUINS OF ALPH$"

NewBarkTown_Route36_3Sign::
	msgbox NewBarkTown_Route36_3SignText, MSGBOX_SIGN
	end

NewBarkTown_Route36_3SignText:
	.string "ROUTE 36\n"
	.string "{LEFT_ARROW} VIOLET CITY\p"
	.string "{DOWN_ARROW} GOLDENROD CITY$"

NewBarkTown_Route37_Sign::
	msgbox NewBarkTown_Route37SignText, MSGBOX_SIGN
	end

NewBarkTown_Route37SignText:
	.string "ROUTE 37\n"
	.string "{UP_ARROW} ECRUTEAK CITY$"

NewBarkTown_Route38_Sign::
	msgbox NewBarkTown_Route38SignText, MSGBOX_SIGN
	end

NewBarkTown_Route38SignText:
	.string "ROUTE 38\n"
	.string "{LEFT_ARROW} MOOMOO FARM$"

NewBarkTown_Route39_1_Sign::
	msgbox NewBarkTown_Route39_1SignText, MSGBOX_SIGN
	end

NewBarkTown_Route39_1SignText:
	.string "ROUTE 39\n"
	.string "{UP_ARROW} MOOMOO FARM$"

NewBarkTown_Route39_2_Sign::
	msgbox NewBarkTown_Route39_2SignText, MSGBOX_SIGN
	end

NewBarkTown_Route39_2SignText:
	.string "ROUTE 39\n"
	.string "{DOWN_ARROW} OLIVINE CITY$"

NewBarkTown_Route39_3_Sign::
	msgbox NewBarkTown_Route39_3SignText, MSGBOX_SIGN
	end

NewBarkTown_Route39_3SignText:
	.string "MOOMOO FARM$"

NewBarkTown_Route40_Sign::
	msgbox NewBarkTown_Route40SignText, MSGBOX_SIGN
	end

NewBarkTown_Route40SignText:
	.string "ROUTE 40\n"
	.string "{DOWN_ARROW} WHIRL ISLANDS$"

NewBarkTown_Route41_1Sign::
	msgbox NewBarkTown_Route41_1SignText, MSGBOX_SIGN
	end

NewBarkTown_Route41_1SignText:
	.string "ROUTE 41\n"
	.string "{RIGHT_ARROW} MAHOGANY TOWN$"

NewBarkTown_Route41_2Sign::
	msgbox NewBarkTown_Route41_2SignText, MSGBOX_SIGN
	end

NewBarkTown_Route41_2SignText:
	.string "ROUTE 41\n"
	.string "{LEFT_ARROW} ECRUTEAK CITY$"

NewBarkTown_Route42_1Sign::
	msgbox NewBarkTown_Route42_1SignText, MSGBOX_SIGN
	end

NewBarkTown_Route42_1SignText:
	.string "ROUTE 42\n"
	.string "{UP_ARROW} LAKE OF RAGE$"

NewBarkTown_Route42_2Sign::
	msgbox NewBarkTown_Route42_2SignText, MSGBOX_SIGN
	end

NewBarkTown_Route42_2SignText:
	.string "ROUTE 42\n"
	.string "{DOWN_ARROW} MAHOGANY TOWN$"

NewBarkTown_Route44_Sign::
	msgbox NewBarkTown_Route44SignText, MSGBOX_SIGN
	end

NewBarkTown_Route44SignText:
	.string "ROUTE 44\n"
	.string "{RIGHT_ARROW} ICE PATH$"

NewBarkTown_Route45_Sign::
	msgbox NewBarkTown_Route45SignText, MSGBOX_SIGN
	end

NewBarkTown_Route45SignText:
	.string "ROUTE 45\n"
	.string "{DOWN_ARROW} NEW BARK TOWN$"

NewBarkTown_Route46_Sign::
	msgbox NewBarkTown_Route46SignText, MSGBOX_SIGN
	end

NewBarkTown_Route46SignText:
	.string "ROUTE 46\n"
	.string "{UP_ARROW} BLACKTHORN CITY$"

NewBarkTown_Route48_Sign::
	msgbox NewBarkTown_Route48SignText, MSGBOX_SIGN
	end

NewBarkTown_Route48SignText:
	.string "ROUTE 48\n"
	.string "{LEFT_ARROW} SAFARI ZONE$"

NewBarkTown_TojohFallsSign::
	msgbox NewBarkTown_TojohFallsSignText, MSGBOX_SIGN
	end

NewBarkTown_TojohFallsSignText:
	.string "TOHJO FALLS\n"
	.string "Tunnel entrance$"

NewBarkTown_DarkCaveSign::
	msgbox NewBarkTown_DarkCaveSignText, MSGBOX_SIGN
	end

NewBarkTown_DarkCaveSignText:
	.string "DARK CAVE\n"
	.string "Tunnel entrance$"

NewBarkTown_UnionCaveSign::
	msgbox NewBarkTown_UnionCaveSignText, MSGBOX_SIGN
	end

NewBarkTown_UnionCaveSignText:
	.string "UNION CAVE\n"
	.string "Tunnel entrance$"

NewBarkTown_MtMortarSign::
	msgbox NewBarkTown_MtMortarSignText, MSGBOX_SIGN
	end

NewBarkTown_MtMortarSignText:
	.string "MT.MORTAR\n"
	.string "Tunnel entrance$"

NewBarkTown_IcePathSign::
	msgbox NewBarkTown_IcePathSignText, MSGBOX_SIGN
	end

NewBarkTown_IcePathSignText:
	.string "ICE PATH\n"
	.string "Tunnel entrance$"