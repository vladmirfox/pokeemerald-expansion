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
	msgbox SlateportCity_NameRatersHouse_Text_NoKnuckleBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventMetDock::
	msgbox SlateportCity_NameRatersHouse_Text_HaventMetDock, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventMetStern::
	msgbox SlateportCity_NameRatersHouse_Text_HaventMetStern, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_RivalFightUpcoming::
	msgbox SlateportCity_NameRatersHouse_Text_RivalFightUpcoming, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoDynamoBadge::
	msgbox SlateportCity_NameRatersHouse_Text_NoDynamoBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventGotRockSmash::
	msgbox SlateportCity_NameRatersHouse_Text_HaventGotRockSmash, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_MeteorFallsUncleared::
	msgbox SlateportCity_NameRatersHouse_Text_MeteorFallsUncleared, MSGBOX_DEFAULT
	release

	end
SlateportCity_NameRatersHouse_EventScript_TeamMagmaAtMtChimney::
	msgbox SlateportCity_NameRatersHouse_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoHeatBadge::
	msgbox SlateportCity_NameRatersHouse_Text_NoHeatBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoBalanceBadge::
	msgbox SlateportCity_NameRatersHouse_Text_NoBalanceBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventMetStevenAtRoute118::
	msgbox SlateportCity_NameRatersHouse_Text_HaventMetStevenAtRoute118, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_TeamAquaAtWeatherInstitute::
	msgbox SlateportCity_NameRatersHouse_Text_TeamAquaAtWeatherInstitute, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoFeatherBadge::
	msgbox SlateportCity_NameRatersHouse_Text_NoFeatherBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoDevonScope::
	msgbox SlateportCity_NameRatersHouse_Text_NoDevonScope, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_TeamAquaAtMtPyre::
	msgbox SlateportCity_NameRatersHouse_Text_TeamAquaAtMtPyre, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventAwokenGroudon::
	msgbox SlateportCity_NameRatersHouse_Text_HaventAwokenGroudon, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_TeamAquaStealSub::
	msgbox SlateportCity_NameRatersHouse_Text_TeamAquaStealSub, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_TeamAquaUseSub::
	msgbox SlateportCity_NameRatersHouse_Text_TeamAquaUseSub, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoMindBadge::
	msgbox SlateportCity_NameRatersHouse_Text_NoMindBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_TeamMagmaAtSpaceCenter::
	msgbox SlateportCity_NameRatersHouse_Text_TeamMagmaAtSpaceCenter, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventAwokenKyogre::
	msgbox SlateportCity_NameRatersHouse_Text_HaventAwokenKyogre, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventSeenLegendaryBattle::
	msgbox SlateportCity_NameRatersHouse_Text_HaventSeenLegendaryBattle, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventMetWallace::
	msgbox SlateportCity_NameRatersHouse_Text_HaventMetWallace, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventAwokenRayquaza::
	msgbox SlateportCity_NameRatersHouse_Text_HaventAwokenRayquaza, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_LegendariesStillPresent::
	msgbox SlateportCity_NameRatersHouse_Text_LegendariesStillPresent, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NoRainBadge::
	msgbox SlateportCity_NameRatersHouse_Text_NoRainBadge, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NeverBeenToEverGrande::
	msgbox SlateportCity_NameRatersHouse_Text_NeverBeenToEverGrande, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventBeatenWally::
	msgbox SlateportCity_NameRatersHouse_Text_HaventBeatenWally, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_HaventBeatenLeague::
	msgbox SlateportCity_NameRatersHouse_Text_HaventBeatenLeague, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_GiveSablenite::
	msgbox SlateportCity_NameRatersHouse_Text_ImpressiveFortune, MSGBOX_DEFAULT
	giveitem ITEM_SABLENITE
	setflag FLAG_HIDDEN_ITEM_SABLENITE
	msgbox SlateportCity_NameRatersHouse_Text_AnywaysWhereWasI, MSGBOX_DEFAULT
	goto SlateportCity_NameRatersHouse_EventScript_ChooseRandomPostGameEvent

SlateportCity_NameRatersHouse_EventScript_ChooseRandomPostGameEvent::
	random 9
	goto_if_eq VAR_RESULT, 0, SlateportCity_NameRatersHouse_EventScript_PostGameBattleFrontier
	goto_if_eq VAR_RESULT, 1, SlateportCity_NameRatersHouse_EventScript_PostGameEliteFourRematch
	goto_if_eq VAR_RESULT, 2, SlateportCity_NameRatersHouse_EventScript_PostGameGymLeaderRematch
	goto_if_eq VAR_RESULT, 3, SlateportCity_NameRatersHouse_EventScript_PostGameCatchPokemon
	goto_if_eq VAR_RESULT, 4, SlateportCity_NameRatersHouse_EventScript_PostGamePreformInContest
	goto_if_eq VAR_RESULT, 5, SlateportCity_NameRatersHouse_EventScript_PostGameSpecialSootopolisBattle
	goto_if_eq VAR_RESULT, 6, SlateportCity_NameRatersHouse_EventScript_PostGameStevenBattle
	goto_if_eq VAR_RESULT, 7, SlateportCity_NameRatersHouse_EventScript_PostGameCourtneyBattle
	goto_if_eq VAR_RESULT, 8, SlateportCity_NameRatersHouse_EventScript_PostGameShelleyBattle
	release
	end

SlateportCity_NameRatersHouse_EventScript_PostGameBattleFrontier:
SlateportCity_NameRatersHouse_EventScript_PostGameEliteFourRematch:
SlateportCity_NameRatersHouse_EventScript_PostGameGymLeaderRematch:
SlateportCity_NameRatersHouse_EventScript_PostGameCatchPokemon:
SlateportCity_NameRatersHouse_EventScript_PostGamePreformInContest:
SlateportCity_NameRatersHouse_EventScript_PostGameSpecialSootopolisBattle:
	msgbox SlateportCity_NameRatersHouse_Text_NotFinished, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_PostGameStevenBattle:
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, SlateportCity_NameRatersHouse_EventScript_PostGameCatchPokemon
	release
	end

SlateportCity_NameRatersHouse_EventScript_PostGameCourtneyBattle:
	goto SlateportCity_NameRatersHouse_EventScript_PostGameBattleFrontier
	release
	end

SlateportCity_NameRatersHouse_EventScript_PostGameShelleyBattle:
	goto SlateportCity_NameRatersHouse_EventScript_PostGameEliteFourRematch
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

SlateportCity_NameRatersHouse_Text_NoKnuckleBadge:
	.string "It seems you have a lot ahead\n"
	.string "of you.\p"
	.string "I see rolling waves and a\n"
	.string "dark room.\p"
	.string "A fight for a badge.\p"
	.string "You will find success within\n"
	.string "your mind.$"

SlateportCity_NameRatersHouse_Text_HaventMetDock:
	.string "It seems you have a lot ahead\n"
	.string "of you.\p"
	.string "A room bustling with action\p"
	.string "I hear the rolling of the\n"
	.string "Ocean waves.\p"
	.string "Someone important awaits you\p"
	.string "to the South-East.$"

SlateportCity_NameRatersHouse_Text_HaventMetStern:
	.string "It seems you have a lot ahead\n"
	.string "of you.\p"
	.string "You are someplace filled with\n"
	.string "plenty of history.\p"
	.string "An important person awaits you\n"
	.string "there… but…\p"
	.string "Be cautious. As there are those\n"
	.string "who would oppose you.$"

SlateportCity_NameRatersHouse_Text_RivalFightUpcoming:
	.string "It seems you have a lot ahead\n"
	.string "of you.\p"
	.string "There is something important…\p"
	.string "Friend or foe?\p"
	.string "Perhaps both?\p"
	.string "I see a challenge from somebody\n"
	.string "familiar.\p"
	.string "Prepare accordingly.$"

SlateportCity_NameRatersHouse_Text_NoDynamoBadge:
	.string "I see some experience within.\n"
	.string "But maturing still.\p"
	.string "I see an astounding energy\n"
	.string "crackling around you.\p"
	.string "A fight for a badge\p"
	.string "You will find success within\n"
	.string "the ground.$"

SlateportCity_NameRatersHouse_Text_HaventGotRockSmash:
	.string "I see some experience within.\n"
	.string "But maturing still.\p"
	.string "A power lies before you. Just\n"
	.string "within reach.\p"
	.string "In a bustling place of progress.\p"
	.string "You must merely reach out and\n"
	.string "take it.$"

SlateportCity_NameRatersHouse_Text_MeteorFallsUncleared:
	.string "I see some experience within.\n"
	.string "But maturing still.\p"
	.string "There is a danger ahead.\p"
	.string "Awaiting you in a place bathed\n"
	.string "by the stars.\p"
	.string "Be careful how you proceed\n"
	.string "on your journey.$"

SlateportCity_NameRatersHouse_Text_TeamMagmaAtMtChimney:
	.string "I see some experience within.\n"
	.string "But maturing still.\p"
	.string "Yet more danger awaits you.\p"
	.string "To be found in a place filled\n"
	.string "with nature's fury.\p"
	.string "Will you match the burning power\n"
	.string "of this place?\p"
	.string "Or will you flee from destiny?$"

SlateportCity_NameRatersHouse_Text_NoHeatBadge:
	.string "You have much experience\n"
	.string "behind you now.\p"
	.string "But further challenge awaits\n"
	.string "you still.\p"
	.string "You will find it in a place\n"
	.string "up high.\p"
	.string "But covered in ash as well.\p"
	.string "A badge perhaps?$"

SlateportCity_NameRatersHouse_Text_NoBalanceBadge:
	.string "You have much experience\n"
	.string "behind you now.\p"
	.string "But will it be enough?\p"
	.string "I see that you have something\n"
	.string "to prove to someone.\p"
	.string "A guiding figure awaits.\p"
	.string "A badge as proof of growth.$"

SlateportCity_NameRatersHouse_Text_HaventMetStevenAtRoute118:
	.string "You have much strength and\n"
	.string "have faced many trials.\p"
	.string "The next will take you to a\n"
	.string "place unfamiliar.\p"
	.string "Use your newfound power and\n"
	.string "travel east.\p"
	.string "There you will find luck.$"

SlateportCity_NameRatersHouse_Text_TeamAquaAtWeatherInstitute:
	.string "You have much strength and\n"
	.string "have faced many trials.\p"
	.string "I see before you now, a\n"
	.string "place amongst green.\p"
	.string "For those who study.\p"
	.string "They will need your help\n"
	.string "if they are to continue.$"

SlateportCity_NameRatersHouse_Text_NoFeatherBadge:
	.string "You have much strength and\n"
	.string "have faced many trials.\p"
	.string "The next will bring you\n"
	.string "another treasure.\p"
	.string "A badge again.\p"
	.string "You will find success\n"
	.string "amongst the rocks.$"

SlateportCity_NameRatersHouse_Text_NoDevonScope:
	.string "My… your fortune is burning\n"
	.string "bright as a flame.\p"
	.string "It will illuminate your path.\n"
	.string "As will something else.\p"
	.string "To proceed you will need to\n"
	.string "find power from a friend.\p"
	.string "Go east for luck.$"

SlateportCity_NameRatersHouse_Text_TeamAquaAtMtPyre:
	.string "My… your fortune is burning\n"
	.string "bright as a flame.\p"
	.string "But fire is quenched by water,\n"
	.string "so watch how you tread.\p"
	.string "In the future I see you\n"
	.string "encounter a familiar wave.\p"
	.string "Face your future in a place\n"
	.string "full of graves.$"

SlateportCity_NameRatersHouse_Text_HaventAwokenGroudon:
	.string "My… your fortune is burning\n"
	.string "bright as a flame.\p"
	.string "But there is something else\n"
	.string "with a flame just as bright.\p"
	.string "Deep within the earth and\n"
	.string "amongst the ash.\p"
	.string "Will you face this legend?$"

SlateportCity_NameRatersHouse_Text_TeamAquaStealSub:
	.string "It's hard to focus.\p"
	.string "There is a strong energy\n"
	.string "within this very city.\p"
	.string "Or perhaps my senses have found\n"
	.string "your future true.\p"
	.string "Seek out this power.$"

SlateportCity_NameRatersHouse_Text_TeamAquaUseSub:
	.string "My… your fortune is burning\n"
	.string "bright as a flame.\p"
	.string "You still have unfinished\n"
	.string "work, I sense.\p"
	.string "You will find success in seeking\n"
	.string "out this venture.\p"
	.string "Somewhere where sand meets sea.$"

SlateportCity_NameRatersHouse_Text_NoMindBadge:
	.string "I sense you are reaching the\n"
	.string "height of your journey.\p"
	.string "Ahead of you is another familar\n"
	.string "challenge.\p"
	.string "A badge?\p"
	.string "For this one, you will find\n"
	.string "success in the darkness.$"

SlateportCity_NameRatersHouse_Text_TeamMagmaAtSpaceCenter:
	.string "My… your fortune is burning\n"
	.string "bright as a flame.\p"
	.string "In your future I see many stars.\p"
	.string "A place where one might go to\n"
	.string "reach out to them perhaps.\p"
	.string "And an all too familiar foe who\n"
	.string "you will find there.$"

SlateportCity_NameRatersHouse_Text_HaventAwokenKyogre:
	.string "I can sense your indomitable\n"
	.string "spirit burning like a blaze!\p"
	.string "There is another force rising\n"
	.string "to match it however!\p"
	.string "How exciting!\p"
	.string "A legendary beast of the waves\p"
	.string "awaits your arrival below.$"

SlateportCity_NameRatersHouse_Text_HaventSeenLegendaryBattle:
	.string "I can sense your indomitable\n"
	.string "spirit burning like a blaze!\p"
	.string "You aught to rush to the scene\n"
	.string "of the legendary battle ignited\l"
	.string "before you!\p"
	.string "Hurry now, don't you dawdle\n"
	.string "with an old man like me!$"

SlateportCity_NameRatersHouse_Text_HaventMetWallace:
	.string "My my… it seems as though you\n"
	.string "missed something in your search.\p"
	.string "Yes, I sense it.\p"
	.string "You must return to the scene\n"
	.string "of your battle post-haste!\p"
	.string "A ray of hope shines from above!$"

SlateportCity_NameRatersHouse_Text_HaventAwokenRayquaza:
	.string "I can feel the inbalance beyond.\p"
	.string "I can see you on a very important\n"
	.string "quest.\p"
	.string "Yes. One that will decide the\n"
	.string "very fate of Hoenn!\p"
	.string "Your hope lies at the highest\n"
	.string "peak in the south east.$"

SlateportCity_NameRatersHouse_Text_LegendariesStillPresent:
	.string "I see it within you!\p"
	.string "You have already attained the\n"
	.string "power you need to overcome your\l"
	.string "great battle!\p"
	.string "Go now and claim your victory!\p"
	.string "To the scene of the battle.$"

SlateportCity_NameRatersHouse_Text_NoRainBadge:
	.string "I can sense your indomitable\n"
	.string "spirit burning like a blaze!\p"
	.string "Just a single badge left to\n"
	.string "claim!\p"
	.string "You will find your victory\n"
	.string "in a shocking strike!$"

SlateportCity_NameRatersHouse_Text_NeverBeenToEverGrande:#
	.string "Your resolve is astounding!\p"
	.string "All badges claimed!\p"
	.string "There is but one place for you\n"
	.string "to go now!\p"
	.string "To battle against champions\n"
	.string "you must head east!$"

SlateportCity_NameRatersHouse_Text_HaventBeatenWally:
	.string "I can sense your indomitable\n"
	.string "spirit burning like a blaze!\p"
	.string "But be careful not to burn all\n"
	.string "around you.\p"
	.string "As an inferno knows not friend\n"
	.string "or foe.\p"
	.string "A friend awaits you in a dark\n"
	.string "place along your path.$"

SlateportCity_NameRatersHouse_Text_HaventBeatenLeague:
	.string "I can sense your indomitable\n"
	.string "spirit burning like a blaze!\p"
	.string "I see but one more obstacle\n"
	.string "in your path now.\p"
	.string "A stairway to victory, you\n"
	.string "must climb.\p"
	.string "Four steps to the top.\p"
	.string "Another to the heavens!$"

SlateportCity_NameRatersHouse_Text_NotFinished:
	.string "Your fortune is unclear to me.\p"
	.string "It seems that our creator\n"
	.string "forgot to add something to\l"
	.string "the world.\p"
	.string "You should tell them.$"

SlateportCity_NameRatersHouse_Text_ImpressiveFortune:
	.string "Your life has been very exciting\n"
	.string "hasn't it?\p"
	.string "My my…\p"
	.string "A fortune this deep, and a spirit\n" 
	.string "so bright commands a reward!\p"
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

