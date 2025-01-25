OneIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
	.byte 0

OneIsland_OnTransition:
	setflag FLAG_VISITED_ONEISLAND
	end

OneIsland_OneIsland_TownSign::
	msgbox OneIsland_OneIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_OneIsland_Text_TownSign:
	.string "ONE ISLAND\n"
	.string "“Friends gather at Knot Island!”$"

OneIsland_TwoIsland_TownSign::
	msgbox OneIsland_TwoIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_TwoIsland_Text_TownSign:
	.string "TWO ISLAND\n"
	.string "“Boon Island for Two!”$"

OneIsland_ThreeIsland_TownSign::
	msgbox OneIsland_ThreeIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_ThreeIsland_Text_TownSign:
	.string "THREE ISLAND\n"
	.string "“Kin island for Family Bonding!”$"

OneIsland_FourIsland_TownSign::
	msgbox OneIsland_FourIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_FourIsland_Text_TownSign:
	.string "FOUR ISLAND\n"
	.string "“The Warm, Blue, Floe Island!”$"

OneIsland_FiveIsland_TownSign::
	msgbox OneIsland_FiveIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_FiveIsland_Text_TownSign:
	.string "FIVE ISLAND\n"
	.string "“Chrono Island: Where Time Goes!”$"

OneIsland_SixIsland_TownSign::
	msgbox OneIsland_SixIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_SixIsland_Text_TownSign:
	.string "SIX ISLAND\n"
	.string "“Fortune Island of Aged Wisdom!”$"

OneIsland_SevenIsland_TownSign::
	msgbox OneIsland_SevenIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_SevenIsland_Text_TownSign:
	.string "SEVEN ISLAND\n"
	.string "“Quest Island of Infinity!”$"

OneIsland_BirthIsland_TownSign::
	msgbox OneIsland_BirthIsland_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_BirthIsland_Text_TownSign:
	.string "BIRTH LABORATORIES\n"
	.string "“No entry for non-authorized persons”$"

OneIsland_Crossgate_TownSign::
	msgbox OneIsland_Crossgate_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_Crossgate_Text_TownSign:
	.string "CROSSGATE TOWN\n"
	.string "“The town reflected upon water!”$"

OneIsland_Crossgate_ShipyardSign::
	msgbox OneIsland_Crossgate_Text_ShipyardSign, MSGBOX_SIGN
	end

OneIsland_Crossgate_Text_ShipyardSign:
	.string "CROSSGATE SHIPYARD$"

OneIsland_Crossgate_RouteSign::
	msgbox OneIsland_Crossgate_Text_RouteSign, MSGBOX_SIGN
	end

OneIsland_Crossgate_Text_RouteSign:
	.string "ROUTE 100\n"
	.string "{UP_ARROW} LITTLEROOT TOWN\p"
	.string "{DOWN_ARROW} CROSSGATE TOWN$"

OneIsland_OneIsland_RouteSign::
	msgbox OneIsland_OneIsland_Text_RouteSign, MSGBOX_SIGN
	end

OneIsland_OneIsland_Text_RouteSign:
	.string "KINDLE ROAD\n"
	.string "{UP_ARROW} EMBER SPA$"

OneIsland_TwoIsland_RouteSign::
	msgbox OneIsland_TwoIsland_Text_RouteSign, MSGBOX_SIGN
	end

OneIsland_TwoIsland_Text_RouteSign:
	.string "{LEFT_ARROW} BOND BRIDGE$"

OneIsland_Netcenter_TownSign::
	msgbox OneIsland_Netcenter_Text_TownSign, MSGBOX_SIGN
	end

OneIsland_Netcenter_Text_TownSign:
	.string "“Expanding the POKéMON World!”\n"
	.string "POKéMON NET CENTER$"

OneIsland_LoreleiHouseSign::
	msgbox OneIsland_Text_LoreleiHouseSign, MSGBOX_SIGN
	end
	
OneIsland_Text_LoreleiHouseSign:
	.string "“LORELEI'S HOUSE”$"

OneIsland_EmberspaSign::
	msgbox OneIsland_Text_EmberspaSign, MSGBOX_SIGN
	end
	
OneIsland_Text_EmberspaSign:
	.string "EMBER SPA$"

OneIsland_BerryForestSign::
	msgbox OneIsland_Text_BerryForestSign, MSGBOX_SIGN
	end
	
OneIsland_Text_BerryForestSign:
	.string "BERRY FOREST$"
