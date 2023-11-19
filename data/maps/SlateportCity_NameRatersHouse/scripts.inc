SlateportCity_NameRatersHouse_MapScripts::
	.byte 0

SlateportCity_NameRatersHouse_EventScript_FortuneTeller::
	lock
	faceplayer
	msgbox SlateportCity_NameRatersHouse_Text_LikeToHearYourFortune, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_YesToFortune
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_YesToFortune::
	msgbox SlateportCity_NameRatersHouse_Text_LetsSeeThen, MSGBOX_DEFAULT
	goto_if_unset FLAG_BADGE02_GET, SlateportCity_NameRatersHouse_EventScript_NoKnuckleBadge
	goto_if_unset FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_NameRatersHouse_EventScript_HaventMetDock
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_NameRatersHouse_EventScript_HaventMetStern
	goto_if_unset FLAG_DEFEATED_WALLY_MAUVILLE, SlateportCity_NameRatersHouse_EventScript_RivalFightUpcoming
	goto_if_unset FLAG_BADGE03_GET, SlateportCity_NameRatersHouse_EventScript_NoDynamoBadge
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, SlateportCity_NameRatersHouse_EventScript_HaventGotRockSmash
	goto_if_unset FLAG_MET_ARCHIE_METEOR_FALLS, SlateportCity_NameRatersHouse_EventScript_MeteorFallsUncleared
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, SlateportCity_NameRatersHouse_EventScript_TeamMagmaAtMtChimney
	goto_if_unset FLAG_BADGE04_GET, SlateportCity_NameRatersHouse_EventScript_NoHeatBadge
	goto_if_unset FLAG_BADGE05_GET, SlateportCity_NameRatersHouse_EventScript_NoBalanceBadge
	goto_if_eq VAR_ROUTE118_STATE, 0, SlateportCity_NameRatersHouse_EventScript_HaventMetStevenAtRoute118
	goto_if_unset FLAG_HIDE_ROUTE_119_TEAM_AQUA, SlateportCity_NameRatersHouse_EventScript_TeamAquaAtWeatherInstitute
	goto_if_unset FLAG_BADGE06_GET, SlateportCity_NameRatersHouse_EventScript_NoFeatherBadge
	goto_if_unset FLAG_RECEIVED_DEVON_SCOPE, SlateportCity_NameRatersHouse_EventScript_NoDevonScope
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, SlateportCity_NameRatersHouse_EventScript_TeamAquaAtMtPyre
	goto_if_unset FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, SlateportCity_NameRatersHouse_EventScript_HaventAwokenGroudon
	goto_if_unset FLAG_MET_TEAM_AQUA_HARBOR, SlateportCity_NameRatersHouse_EventScript_TeamAquaStealSub
	goto_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_NameRatersHouse_EventScript_TeamAquaUseSub
	goto_if_unset FLAG_BADGE07_GET, SlateportCity_NameRatersHouse_EventScript_NoMindBadge
	goto_if_unset FLAG_DEFEATED_MAGMA_SPACE_CENTER, SlateportCity_NameRatersHouse_EventScript_TeamMagmaAtSpaceCenter
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SlateportCity_NameRatersHouse_EventScript_HaventAwokenKyogre
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SlateportCity_NameRatersHouse_EventScript_HaventSeenLegendaryBattle
	goto_if_unset FLAG_WALLACE_GOES_TO_SKY_PILLAR, SlateportCity_NameRatersHouse_EventScript_HaventMetWallace
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SlateportCity_NameRatersHouse_EventScript_HaventAwokenRayquaza
	goto_if_set FLAG_LEGENDARIES_IN_SOOTOPOLIS, SlateportCity_NameRatersHouse_EventScript_LegendariesStillPresent
	goto_if_unset FLAG_BADGE08_GET, SlateportCity_NameRatersHouse_EventScript_NoRainBadge
	goto_if_unset FLAG_VISITED_EVER_GRANDE_CITY, SlateportCity_NameRatersHouse_EventScript_NeverBeenToEverGrande
	goto_if_unset FLAG_DEFEATED_WALLY_VICTORY_ROAD, SlateportCity_NameRatersHouse_EventScript_HaventBeatenWally
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_NameRatersHouse_EventScript_HaventBeatenLeague
	goto_if_unset FLAG_HIDDEN_ITEM_SABLENITE, SlateportCity_NameRatersHouse_EventScript_GiveSablenite
	goto SlateportCity_NameRatersHouse_EventScript_ChooseRandomPostGameEvent

SlateportCity_NameRatersHouse_EventScript_NoKnuckleBadge::
SlateportCity_NameRatersHouse_EventScript_HaventMetDock::
SlateportCity_NameRatersHouse_EventScript_HaventMetStern::
SlateportCity_NameRatersHouse_EventScript_RivalFightUpcoming::
SlateportCity_NameRatersHouse_EventScript_NoDynamoBadge::
SlateportCity_NameRatersHouse_EventScript_HaventGotRockSmash::
SlateportCity_NameRatersHouse_EventScript_MeteorFallsUncleared::
SlateportCity_NameRatersHouse_EventScript_TeamMagmaAtMtChimney::
SlateportCity_NameRatersHouse_EventScript_NoHeatBadge::
SlateportCity_NameRatersHouse_EventScript_NoBalanceBadge::
SlateportCity_NameRatersHouse_EventScript_HaventMetStevenAtRoute118::
SlateportCity_NameRatersHouse_EventScript_TeamAquaAtWeatherInstitute::
SlateportCity_NameRatersHouse_EventScript_NoFeatherBadge::
SlateportCity_NameRatersHouse_EventScript_NoDevonScope::
SlateportCity_NameRatersHouse_EventScript_TeamAquaAtMtPyre::
SlateportCity_NameRatersHouse_EventScript_HaventAwokenGroudon::
SlateportCity_NameRatersHouse_EventScript_TeamAquaStealSub::
SlateportCity_NameRatersHouse_EventScript_TeamAquaUseSub::
SlateportCity_NameRatersHouse_EventScript_NoMindBadge::
SlateportCity_NameRatersHouse_EventScript_TeamMagmaAtSpaceCenter::
SlateportCity_NameRatersHouse_EventScript_HaventAwokenKyogre::
SlateportCity_NameRatersHouse_EventScript_HaventSeenLegendaryBattle::
SlateportCity_NameRatersHouse_EventScript_HaventMetWallace::
SlateportCity_NameRatersHouse_EventScript_HaventAwokenRayquaza::
SlateportCity_NameRatersHouse_EventScript_LegendariesStillPresent::
SlateportCity_NameRatersHouse_EventScript_NoRainBadge::
SlateportCity_NameRatersHouse_EventScript_NeverBeenToEverGrande::
SlateportCity_NameRatersHouse_EventScript_HaventBeatenWally::
SlateportCity_NameRatersHouse_EventScript_HaventBeatenLeague::
	msgbox SlateportCity_NameRatersHouse_Text_NotFinished, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_GiveSablenite::
	msgbox SlateportCity_NameRatersHouse_Text_ImpressiveFortune, MSGBOX_DEFAULT
	giveitem ITEM_SABLENITE
	setflag FLAG_HIDDEN_ITEM_SABLENITE
	msgbox SlateportCity_NameRatersHouse_Text_AnywaysWhereWasI, MSGBOX_DEFAULT
	goto SlateportCity_NameRatersHouse_EventScript_ChooseRandomPostGameEvent

SlateportCity_NameRatersHouse_EventScript_ChooseRandomPostGameEvent::
	msgbox SlateportCity_NameRatersHouse_Text_NotFinished, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NameRater::
	lock
	faceplayer
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
	.string "Hi, hi! I'm the Name RATER!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "Pokémon's nickname.$"

SlateportCity_NameRatersHouse_Text_LikeToHearYourFortune:
	.string "Hi, hi! I'm the Fortune Teller!\p"
	.string "I shall be pleased to tell you\n"
	.string "your future.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
	.string "Which Pokémon's nickname should\n"
	.string "I critique?$"

SlateportCity_NameRatersHouse_Text_LetsSeeThen:
	.string "Let's see then…\p"
	.string "… … …\p"
	.string "Hm…$"

SlateportCity_NameRatersHouse_Text_NotFinished:
	.string "Your fortune is unclear to me.\p"
	.string "It seems that our creator\n"
	.string "forgot to add something to\l"
	.string "the world.\p"
	.string "You should tell them.$"

SlateportCity_NameRatersHouse_Text_ImpressiveFortune:
	.string "Your life has been very eventful\n"
	.string "hasn't it?\p"
	.string "My my…\p"
	.string "A fortune this deep commands a\n"
	.string "reward!\p"
	.string "Take this crystal.$"

SlateportCity_NameRatersHouse_Text_AnywaysWhereWasI:
	.string "Now where was I?\p"
	.string "Ah yes…$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
	.string "quite a fine name you bestowed.\p"
	.string "But! What say you, if I were to\n"
	.string "suggest a slightly better name?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
	.string "Done! From now on, this Pokémon\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain:
	.string "I see.\n"
	.string "Do come visit again.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
	.string "Done! From now on, this Pokémon\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_MagnificentName:
	.string "Hmmm… {STR_VAR_1} it is!\p"
	.string "This is a magnificent nickname!\n"
	.string "It is impeccably beyond reproach!\p"
	.string "You'll do well to cherish your\n"
	.string "{STR_VAR_1} now and beyond.$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
	.string "Now, now.\n"
	.string "That is merely an EGG!$"

