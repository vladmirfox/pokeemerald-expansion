ForgottenGrave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ForgottenGrave_OnTransition
	.byte 0

ForgottenGrave_OnTransition:
	goto_if_unset FLAG_PLACE_RUBY, ForgottenGrave_CheckSapphire
	end

ForgottenGrave_CheckRuby:
	goto_if_unset FLAG_PLACE_RUBY, ForgottenGrave_CheckSapphire
	release
	end

ForgottenGrave_CheckSapphire:
	goto_if_unset FLAG_PLACE_SAPPHIRE, ForgottenGrave_CheckEmerald
	release
	end

ForgottenGrave_CheckEmerald:
	goto_if_unset FLAG_PLACE_EMERALD, ForgottenGrave_OpenDoor
	release
	end

ForgottenGrave_OpenDoor:
	setflag FLAG_RSE_WALLS
	release
	end

ForgottenGrave_Warp::
	warp MAP_BIRTH_ISLAND_EXTERIOR, 15, 24,
	waitstate
	release
	end

ForgottenGrave_CheckItemRuby::
	checkitem ITEM_RUBY
	goto_if_eq VAR_RESULT, TRUE, ForgottenGrave_PlaceRuby
	release
	end

ForgottenGrave_CheckItemSapphire::
	checkitem ITEM_SAPPHIRE
	goto_if_eq VAR_RESULT, TRUE, ForgottenGrave_PlaceSapphire
	release
	end

ForgottenGrave_CheckItemEmerald::
	checkitem ITEM_EMERALD
	goto_if_eq VAR_RESULT, TRUE, ForgottenGrave_PlaceEmerald
	release
	end

ForgottenGrave_PlaceRuby::
	lock
	msgbox ForgottenGrave_DowantPlaceRuby, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ForgottenGrave_RubyPlaced
	release
	end

ForgottenGrave_PlaceSapphire::
	lock
	msgbox ForgottenGrave_DowantPlaceSapphire, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ForgottenGrave_SapphirePlaced
	release
	end

ForgottenGrave_PlaceEmerald::
	lock
	msgbox ForgottenGrave_DowantPlaceEmerald, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ForgottenGrave_EmeraldPlaced
	release
	end

ForgottenGrave_RubyPlaced::
	lock
	playse SE_CLICK
	removeitem ITEM_RUBY
	clearflag FLAG_PLACE_RUBY
	setflag FLAG_PLACE_RUBY1
	goto ForgottenGrave_CheckRuby
	release
	end

ForgottenGrave_SapphirePlaced::
	lock
	playse SE_CLICK
	removeitem ITEM_SAPPHIRE
	clearflag FLAG_PLACE_SAPPHIRE
	setflag FLAG_PLACE_SAPPHIRE1
	goto ForgottenGrave_CheckRuby
	release
	end

ForgottenGrave_EmeraldPlaced::
	lock
	playse SE_CLICK
	removeitem ITEM_EMERALD
	clearflag FLAG_PLACE_EMERALD
	setflag FLAG_PLACE_EMERALD1
	goto ForgottenGrave_CheckRuby
	release
	end

ForgottenGrave_GemDesc::
	lock
	msgbox ForgottenGrave_GemDescText, MSGBOX_DEFAULT
	release
	end

ForgottenGrave_DowantPlaceRuby:
	.string "The RUBY you have fits perfectly\n"
	.string "into the slot.\p"
	.string "Do you want to put it in?$"

ForgottenGrave_DowantPlaceSapphire:
	.string "The SAPPHIRE you have fits perfectly\n"
	.string "into the slot.\p"
	.string "Do you want to put it in?$"

ForgottenGrave_DowantPlaceEmerald:
	.string "The EMERALD you have fits perfectly\n"
	.string "into the slot.\p"
	.string "Do you want to put it in?$"

ForgottenGrave_GemDescText:
	.string "The GEM remained stuck in the\n"
	.string "niche, it's impossible to\p"
	.string "get it out.$"