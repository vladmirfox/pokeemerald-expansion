OriginalRegion_ChampionsRoom_EventScript_Jarnathon::
	givemon SPECIES_ZACIAN, 100
	givemon SPECIES_MEWTWO, 100
	givemon SPECIES_ZYGARDE_COMPLETE, 100
	givemon SPECIES_HO_OH, 100
	givemon SPECIES_KYOGRE, 100
	givemon SPECIES_DARKRAI, 100
	trainerbattle_single TRAINER_CHAMPION_JARNATHON, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
	end