PalletTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
	.byte 0

PalletTown_OnTransition:
	setflag FLAG_VISITED_PALLET
	end

PalletTown_TownSign::
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Text_TownSign:
	.string "PALLET TOWN\n"
	.string "“Shades of Your Journey Await!”$"

PalletTown_RedHouseSign::
	msgbox PalletTown_Text_RedHouseSign, MSGBOX_SIGN
	end

PalletTown_Text_RedHouseSign:
	.string "RED'S HOUSE$"

PalletTown_BlueHouseSign::
	msgbox PalletTown_Text_BlueHouseSign, MSGBOX_SIGN
	end

PalletTown_Text_BlueHouseSign:
	.string "GREEN'S HOUSE$"

PalletTown_BillHouseSign::
	msgbox PalletTown_Text_BillHouseSign, MSGBOX_SIGN
	end

PalletTown_Text_BillHouseSign:
	.string "BILL'S HOUSE$"

PalletTown_OakLabSign::
	msgbox PalletTown_Text_OakLabSign, MSGBOX_SIGN
	end

PalletTown_Text_OakLabSign:
	.string "PROF. OAK'S POKéMON LAB$"

PalletTown_Viridian_TownSign::
	msgbox PalletTown_Viridian_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Viridian_Text_TownSign:
	.string "VIRIDIAN CITY\n"
	.string "“The City of Evergreen!”$"

PalletTown_Viridian_GymSign::
	call_if_eq VAR_KANTO_LEAGUE_REMATCH, 0, PalletTown_Viridian_GymSignCain
	call_if_eq VAR_KANTO_LEAGUE_REMATCH, 1, PalletTown_Viridian_GymSignDaisy
	end

PalletTown_Viridian_GymSignCain::
	msgbox PalletTown_Viridian_Text_GymSignCain, MSGBOX_SIGN
	end

PalletTown_Viridian_GymSignDaisy::
	msgbox PalletTown_Viridian_Text_GymSignDaisy, MSGBOX_SIGN
	end

PalletTown_Viridian_Text_GymSignCain:
	.string "VIRIDIAN CITY POKéMON GYM\n"
	.string "LEADER: GIOVANNI\l"
	.string "“The strongest TRAINER in the WORLD!”$"

PalletTown_Viridian_Text_GymSignDaisy:
	.string "Viridian CITY POKéMON GYM\n"
	.string "LEADER: DAISY\l"
	.string "“The sand lady!”$"

PalletTown_Pewter_TownSign::
	msgbox PalletTown_Pewter_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Pewter_Text_TownSign:
	.string "PEWTER CITY\n"
	.string "“Between Rugged Mountains!”$"

PalletTown_Indigo_TownSign::
	msgbox PalletTown_Indigo_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Indigo_Text_TownSign:
	.string "INDIGO PLATEAU\n"
	.string "“The ultimate goal of TRAINERS!”$"

PalletTown_Pewter_MuseumSign::
	msgbox PalletTown_Pewter_Text_MuseumSign, MSGBOX_SIGN
	end

PalletTown_Pewter_Text_MuseumSign:
	.string "PEWTER MUSEUM OF SCIENCE$"

PalletTown_Pewter_GymSign::
	msgbox PalletTown_Pewter_Text_GymSign, MSGBOX_SIGN
	end

PalletTown_Pewter_Text_GymSign:
	.string "PEWTER CITY POKéMON GYM\n"
	.string "LEADER: BROCK\l"
	.string "“The ROCK-Solid POKéMON TRAINER!”$"

PalletTown_Pewter_ThiefSign::
	msgbox PalletTown_Pewter_Text_ThiefSign, MSGBOX_SIGN
	end

PalletTown_Pewter_Text_ThiefSign:
	.string "NOTICE!\l"
	.string "Thieves have been stealing POKéMON\n"
	.string "fossils from MT.MOON.\p"
	.string "Please call the PEWTER POLICE if \n"
	.string "you have any information.$"

PalletTown_Cerulean_TownSign::
	msgbox PalletTown_Cerulean_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Cerulean_Text_TownSign:
	.string "CERULEAN CITY\n"
	.string "“The Floral Lagoon City!”$"

PalletTown_Lavender_TownSign::
	msgbox PalletTown_Lavender_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Lavender_Text_TownSign:
	.string "LAVENDER TOWN\n"
	.string "“The Noble Town!”$"

PalletTown_Cerulean_GymSign::
	msgbox PalletTown_Cerulean_Text_GymSign, MSGBOX_SIGN
	end

PalletTown_Cerulean_Text_GymSign:
	.string "CERULEAN CITY POKéMON GYM\n"
	.string "LEADER: MISTY\l"
	.string "“The Tomboyish Mermaid!”$"

PalletTown_Cerulean_BridgeSign::
	msgbox PalletTown_Cerulean_Text_BridgeSign, MSGBOX_SIGN
	end

PalletTown_Cerulean_Text_BridgeSign:
	.string "GOLDEN BRIDGE$"

PalletTown_CeruleanBikeSign::
	msgbox PalletTown_CeruleanBikeSignText, MSGBOX_SIGN
	end

PalletTown_CeruleanBikeSignText:
	.string "Grass and caves handled easily!\n"
	.string "BIKE SHOP$"

PalletTown_Vermilion_TownSign::
	msgbox PalletTown_Vermilion_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Vermilion_Text_TownSign:
	.string "VERMILION CITY\n"
	.string "“The Port of Exquisite Sunsets!”$"

PalletTown_Vermilion_HarborSign::
	msgbox PalletTown_Vermilion_Text_HarborSign, MSGBOX_SIGN
	end

PalletTown_Vermilion_Text_HarborSign:
	.string "VERMILION HARBOR$"

PalletTown_Vermilion_GymSign::
	msgbox PalletTown_Vermilion_Text_GymSign, MSGBOX_SIGN
	end

PalletTown_Vermilion_Text_GymSign:
	.string "VERMILION CITY POKéMON GYM\n"
	.string "LEADER: LT.SURGE\l"
	.string "“The Lightning GI!”$"

PalletTown_Saffron_TownSign::
	msgbox PalletTown_Saffron_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Saffron_Text_TownSign:
	.string "SAFFRON CITY\n"
	.string "“Shining, Golden Land of Commerce!”$"

PalletTown_Saffron_GymSign::
	msgbox PalletTown_Saffron_Text_GymSign, MSGBOX_SIGN
	end

PalletTown_Saffron_Text_GymSign:
	.string "SAFFRON CITY POKéMON GYM\n"
	.string "LEADER: SABRINA\l"
	.string "“The Master of Psychic Pokémon!”$"

PalletTown_Saffron_DojoSign::
	msgbox PalletTown_Saffron_Text_DojoSign, MSGBOX_SIGN
	end

PalletTown_Saffron_Text_DojoSign:
	.string "FIGHTING DOJO$"

PalletTown_Saffron_ClubSign::
	msgbox PalletTown_Saffron_Text_ClubSign, MSGBOX_SIGN
	end

PalletTown_Saffron_Text_ClubSign:
	.string "POKéMON TRAINER FAN CLUB$"

PalletTown_Saffron_SilphSign::
	msgbox PalletTown_Saffron_Text_SilphSign, MSGBOX_SIGN
	end

PalletTown_Saffron_Text_SilphSign:
	.string "SILPH CO.$"

PalletTown_Saffron_TrainSign::
	msgbox PalletTown_Saffron_Text_TrainSign, MSGBOX_SIGN
	end

PalletTown_Saffron_Text_TrainSign:
	.string "MAGNET TRAIN$"

PalletTown_Celadon_TownSign::
	msgbox PalletTown_Celadon_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Celadon_Text_TownSign:
	.string "CELADON CITY\n"
	.string "“City of Rainbow Dreams!”$"

PalletTown_Celadon_GymSign::
	msgbox PalletTown_Celadon_Text_GymSign, MSGBOX_SIGN
	end

PalletTown_Celadon_Text_GymSign:
	.string "CELADON CITY POKéMON GYM\n"
	.string "LEADER: ERIKA\l"
	.string "“The Nature-Loving Princess!”$"

PalletTown_Celadon_DeptSign::
	msgbox PalletTown_Celadon_Text_DeptSign, MSGBOX_SIGN
	end

PalletTown_Celadon_Text_DeptSign:
	.string "Find what you need at the\n"
	.string "CELADON DEPT. STORE!$"

PalletTown_Celadon_CasinoSign::
	msgbox PalletTown_Celadon_Text_CasinoSign, MSGBOX_SIGN
	end

PalletTown_Celadon_Text_CasinoSign:
	.string "ROCKET GAME CORNER\n"
	.string "“The playground for grown-ups!”$"

PalletTown_Celadon_CondoSign::
	msgbox PalletTown_Celadon_Text_CondoSign, MSGBOX_SIGN
	end

PalletTown_Celadon_Text_CondoSign:
	.string "CELADON CONDO$"

PalletTown_Fuchsia_TownSign::
	msgbox PalletTown_Fuchsia_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_TownSign:
	.string "FUCHSIA CITY\n"
	.string "“Happening and Passing City!”$"

PalletTown_Fuchsia_GymSign::
	call_if_eq VAR_KANTO_LEAGUE_REMATCH, 0, PalletTown_Fuchsia_GymSignKoga
	call_if_eq VAR_KANTO_LEAGUE_REMATCH, 1, PalletTown_Fuchsia_GymSignJanine
	end

PalletTown_Fuchsia_GymSignKoga::
	msgbox PalletTown_Fuchsia_Text_GymSignKoga, MSGBOX_SIGN
	end

PalletTown_Fuchsia_GymSignJanine::
	msgbox PalletTown_Fuchsia_Text_GymSignJanine, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_GymSignKoga:
	.string "FUCHSIA CITY POKéMON GYM\n"
	.string "LEADER: KOGA\l"
	.string "“The Poisonous Ninja Master!”$"

PalletTown_Fuchsia_Text_GymSignJanine:
	.string "FUCHSIA CITY POKéMON GYM\n"
	.string "LEADER: JANINE\l"
	.string "“The Poisonous Ninja Master!”$"

PalletTown_Fuchsia_ChanseySign::
	msgbox PalletTown_Fuchsia_Text_ChanseySign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_ChanseySign:
	.string "CHANSEY\n"
	.string "“The EGG POKéMON”$"

PalletTown_Fuchsia_TaurosSign::
	msgbox PalletTown_Fuchsia_Text_TaurosSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_TaurosSign:
	.string "TAUROS\n"
	.string "“The WILD BULL POKéMON”$"

PalletTown_Fuchsia_OmastarSign::
	msgbox PalletTown_Fuchsia_Text_OmastarSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_OmastarSign:
	.string "OMASTAR\n"
	.string "“The SPIRAL POKéMON”$"

PalletTown_Fuchsia_RhydonSign::
	msgbox PalletTown_Fuchsia_Text_RhydonSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_RhydonSign:
	.string "RHYDON\n"
	.string "“The DRILL POKéMON”$"

PalletTown_Fuchsia_KangaskhanSign::
	msgbox PalletTown_Fuchsia_Text_KangaskhanSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_KangaskhanSign:
	.string "KANGASKHAN\n"
	.string "“The PARENT POKéMON”$"

PalletTown_Fuchsia_LaprasSign::
	msgbox PalletTown_Fuchsia_Text_LaprasSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_LaprasSign:
	.string "LAPRAS\n"
	.string "“The TRANSPORT POKéMON”$"

PalletTown_Fuchsia_WardenSign::
	msgbox PalletTown_Fuchsia_Text_WardenSign, MSGBOX_SIGN
	end

PalletTown_Fuchsia_Text_WardenSign:
	.string "SAFARI ZONE\n"
	.string "WARDEN HOUSE$"

PalletTown_Cinnabar_TownSign::
	msgbox PalletTown_Cinnabar_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_Cinnabar_Text_TownSign:
	.string "CINNABAR ISLAND\n"
	.string "“The Fiery Town of Burning Desire!”$"

PalletTown_Cinnabar_GymSign::
	msgbox PalletTown_Cinnabar_Text_GymSign, MSGBOX_SIGN
	end

PalletTown_Cinnabar_Text_GymSign:
	.string "CINNABAR CITY POKéMON GYM\n"
	.string "LEADER: COLEMAN\l"
	.string "“The Hotheaded General!”$"

PalletTown_Cinnabar_MansionSign::
	msgbox PalletTown_Cinnabar_Text_MansionSign, MSGBOX_SIGN
	end

PalletTown_Cinnabar_Text_MansionSign:
	.string "FUJI MANSION$"

PalletTown_MtMoon_TownSign::
	msgbox PalletTown_MtMoon_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_MtMoon_Text_TownSign:
	.string "MT.MOON SQUARE\n"
	.string "DON'T LITTER!$"

PalletTown_Cinnabar_LabSign::
	msgbox PalletTown_Cinnabar_Text_LabSign, MSGBOX_SIGN
	end

PalletTown_Cinnabar_Text_LabSign:
	.string "CINNIBAR POKéMON LAB$"

PalletTown_Cinnabar_VolcanoSign::
	msgbox PalletTown_Cinnabar_Text_VolcanoSign, MSGBOX_SIGN
	end

PalletTown_Cinnabar_Text_VolcanoSign:
	.string "“CINNIBAR VOLCANO”$"

PalletTown_Route1Sign::
	msgbox PalletTown_Route1SignText, MSGBOX_SIGN
	end

PalletTown_Route1SignText:
	.string "ROUTE 1\n"
	.string "{UP_ARROW} VIRIDIAN CITY$"

PalletTown_Route2Sign::
	msgbox PalletTown_Route2SignText, MSGBOX_SIGN
	end

PalletTown_Route2SignText:
	.string "ROUTE 2\n"
	.string "{UP_ARROW} PEWTER CITY$"

PalletTown_Route3Sign::
	msgbox PalletTown_Route3SignText, MSGBOX_SIGN
	end

PalletTown_Route3SignText:
	.string "ROUTE 3\n"
	.string "{UP_ARROW} MT.MOON$"

PalletTown_Route4Sign::
	msgbox PalletTown_Route4SignText, MSGBOX_SIGN
	end

PalletTown_Route4SignText:
	.string "ROUTE 4\n"
	.string "{RIGHT_ARROW} CERULEAN CITY$"

PalletTown_Route9Sign::
	msgbox PalletTown_Route9SignText, MSGBOX_SIGN
	end

PalletTown_Route9SignText:
	.string "ROUTE 9\n"
	.string "{LEFT_ARROW} CERULEAN CITY$"

PalletTown_Route11Sign::
	msgbox PalletTown_Route11SignText, MSGBOX_SIGN
	end

PalletTown_Route11SignText:
	.string "ROUTE 11\n"
	.string "{LEFT_ARROW} VERMILION CITY$"

PalletTown_Route12Sign::
	msgbox PalletTown_Route12SignText, MSGBOX_SIGN
	end

PalletTown_Route12SignText:
	.string "ROUTE 12\l"
	.string "{UP_ARROW} LAVENDER TOWN\n"
	.string "{LEFT_ARROW} VERMILION CITY$"

PalletTown_Route13Sign::
	msgbox PalletTown_Route13SignText, MSGBOX_SIGN
	end

PalletTown_Route13SignText:
	.string "ROUTE 13\n"
	.string "{DOWN_ARROW} FUCHSIA CITY$"

PalletTown_Route15Sign::
	msgbox PalletTown_Route15SignText, MSGBOX_SIGN
	end

PalletTown_Route15SignText:
	.string "ROUTE 15\n"
	.string "{LEFT_ARROW} FUCHSIA CITY$"

PalletTown_Route16Sign::
	msgbox PalletTown_Route16SignText, MSGBOX_SIGN
	end

PalletTown_Route16SignText:
	.string "ROUTE 16\n"
	.string "{DOWN_ARROW} FUCHSIA CITY$"

PalletTown_Route19Sign::
	msgbox PalletTown_Route19SignText, MSGBOX_SIGN
	end

PalletTown_Route19SignText:
	.string "ROUTE 19\n"
	.string "{DOWN_ARROW} SEAFOAM ISLANDS$"

PalletTown_Route19GameCorner::
	msgbox PalletTown_Route19GameCornerText, MSGBOX_SIGN
	end

PalletTown_Route19GameCornerText:
	.string "Skip & Chomp!\n"
	.string "Joyful GAME CORNER$"

PalletTown_Route20Sign::
	msgbox PalletTown_Route20SignText, MSGBOX_SIGN
	end

PalletTown_Route20SignText:
	.string "SEAFOAM ISLANDS$"

PalletTown_Route22Sign::
	msgbox PalletTown_Route22SignText, MSGBOX_SIGN
	end

PalletTown_Route22SignText:
	.string "{UP_ARROW} INDIGO PLATEAU\n"
	.string "{RIGHT_ARROW} VIRIDIAN CITY\p"
	.string "{LEFT_ARROW} MT.SILVER\n"
	.string "{DOWN_ARROW} TOHJO FALLS$"

PalletTown_Route23Sign::
	msgbox PalletTown_Route23SignText, MSGBOX_SIGN
	end

PalletTown_Route23SignText:
	.string "ROUTE 23\n"
	.string "{UP_ARROW} VICTORY ROAD$"

PalletTown_DiglettCaveSign::
	msgbox PalletTown_DiglettCaveSignText, MSGBOX_SIGN
	end

PalletTown_DiglettCaveSignText:
	.string "DIGLETT'S CAVE$"

PalletTown_VermilionLighthouseSign::
	msgbox PalletTown_VermilionLighthouseSignText, MSGBOX_SIGN
	end

PalletTown_VermilionLighthouseSignText:
	.string "VERMILION CITY LIGHTHOUSE$"

PalletTown_MtMoonSign::
	msgbox PalletTown_MtMoonSignText, MSGBOX_SIGN
	end

PalletTown_MtMoonSignText:
	.string "MT.MOON\n"
	.string "Tunnel entrance$"

PalletTown_VictoryRoadSign::
	msgbox PalletTown_VictoryRoadSignText, MSGBOX_SIGN
	end

PalletTown_VictoryRoadSignText:
	.string "VICTORY ROAD\n"
	.string "Tunnel entrance$"

PalletTown_RockTunnelSign::
	msgbox PalletTown_RockTunnelSignText, MSGBOX_SIGN
	end

PalletTown_RockTunnelSignText:
	.string "ROCK TUNNEL\n"
	.string "Detour to LAVENDER TOWN$"

PalletTown_RockTunnelSign1::
	msgbox PalletTown_RockTunnelSign1Text, MSGBOX_SIGN
	end

PalletTown_RockTunnelSign1Text:
	.string "ROCK TUNNEL$"

PalletTown_PowerPlantSign::
	msgbox PalletTown_PowerPlantSignText, MSGBOX_SIGN
	end

PalletTown_PowerPlantSignText:
	.string "POWER PLANT$"

PalletTown_LavenderTowerSign::
	msgbox PalletTown_LavenderTowerSignText, MSGBOX_SIGN
	end

PalletTown_LavenderTowerSignText:
	.string "POKéMON TOWER\n"
	.string "Becalm the Spirits of POKéMON$"

PalletTown_LavenderOrphanageSign::
	msgbox PalletTown_LavenderOrphanageSignText, MSGBOX_SIGN
	end

PalletTown_LavenderOrphanageSignText:
	.string "LAVENDER VOLUNTEER\n"
	.string "POKéMON HOUSE$"

PalletTown_UndergroundVertSign::
	msgbox PalletTown_UndergroundVertSignText, MSGBOX_SIGN
	end

PalletTown_UndergroundVertSignText:
	.string "UNDERGROUND PATH\n"
	.string "CERULEAN CITY - VERMILION CITY$"

PalletTown_UndergroundOrizSign::
	msgbox PalletTown_UndergroundOrizSignText, MSGBOX_SIGN
	end

PalletTown_UndergroundOrizSignText:
	.string "UNDERGROUND PATH\n"
	.string "CELADON CITY - LAVENDER TOWN$"