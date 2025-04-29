TestCell_MapScripts::
	.byte 0

//TestCellBraille_EventScript_Sign1::
	braillemsgbox TestCellBraille_EventScript_BrailleABC
	return

//TestCellBraille_EventScript_Sign2::
	braillemsgbox TestCellBraille_EventScript_BrailleDEF
	return

//TestCellBraille_EventScript_Sign3::
	braillemsgbox TestCellBraille_EventScript_BrailleGHI
	return

//TestCellBraille_EventScript_Sign4::
	braillemsgbox TestCellBraille_EventScript_BrailleJKL
	return

//TestCellBraille_EventScript_Sign5::
	braillemsgbox TestCellBraille_EventScript_BrailleMNO
	return

//TestCellBraille_EventScript_Sign6::
	braillemsgbox TestCellBraille_EventScript_BraillePQR
	return

//TestCellBraille_EventScript_Sign7::
	braillemsgbox TestCellBraille_EventScript_BrailleSTU
	return

//TestCellBraille_EventScript_Sign8::
	braillemsgbox TestCellBraille_EventScript_BrailleVWX
	return

//TestCellBraille_EventScript_Sign9::
	braillemsgbox TestCellBraille_EventScript_BrailleYZ
	return

//TestCellBraille_EventScript_Sign10::
	braillemsgbox TestCellBraille_EventScript_BrailleGiraProph
	return

TestCellBraille_EventScript_BrailleABC::
	lockall
	braillemsgbox TestCellBraille_Text_ABC
	releaseall
	end

TestCellBraille_EventScript_BrailleDEF::
	lockall
	braillemsgbox TestCellBraille_Text_DEF
	releaseall
	end

TestCellBraille_EventScript_BrailleGHI::
	lockall
	braillemsgbox TestCellBraille_Text_GHI
	releaseall
	end

TestCellBraille_EventScript_BrailleJKL::
	lockall
	braillemsgbox TestCellBraille_Text_JKL
	releaseall
	end

TestCellBraille_EventScript_BrailleMNO::
	lockall
	braillemsgbox TestCellBraille_Text_MNO
	releaseall
	end

TestCellBraille_EventScript_BraillePQR::
	lockall
	braillemsgbox TestCellBraille_Text_PQR
	releaseall
	end

TestCellBraille_EventScript_BrailleSTU::
	lockall
	braillemsgbox TestCellBraille_Text_STU
	releaseall
	end

TestCellBraille_EventScript_BrailleVWX::
	lockall
	braillemsgbox TestCellBraille_Text_VWX
	releaseall
	end

TestCellBraille_EventScript_BrailleYZ::
	lockall
	braillemsgbox TestCellBraille_Text_YZ
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase1::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase1
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase2::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase2
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase3::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase3
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase4::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase4
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase5::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase5
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase6::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase6
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase7::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase7
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase8::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase8
	releaseall
	end

TestCellBraille_EventScript_BrailleLowerCase9::
	lockall
	braillemsgbox TestCellBraille_Text_LowerCase9
	releaseall
	end

TestCellBraille_EventScript_BrailleGiraProph::
	lockall
	braillemsgbox TestCellBraille_Text_GiraProph
	releaseall
	end

TestCellBraille_EventScript_FWLR::
	lockall
	braillemsgbox TestCellBraille_Text_Braille_FWLR
	releaseall
	end

TestCell_EventScript_GivePokedex::
	lockall
	goto_if_unset  FLAG_PT_STARTER, TestCell_EventScript_GetPokedex
	goto_if_set FLAG_PT_STARTER, TestCell_EventScript_HavePokedex
	releaseall
	end

TestCell_EventScript_GetPokedex::
	msgbox TestCell_Text_GivePokedex, MSGBOX_SIGN
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKEMON_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	givemon SPECIES_VULPIX, 50, ITEM_FIRE_STONE, ITEM_CHERISH_BALL, isShiny=TRUE, nature=NATURE_MODEST, abilityNum=2, gender=MON_FEMALE, move1=MOVE_FLAMETHROWER, move2=MOVE_SOLARBEAM, move3=MOVE_SHADOW_BALL, move4=MOVE_EXTREMESPEED,
	setflag FLAG_PT_STARTER
	closemessage
	releaseall
	end

TestCell_EventScript_HavePokedex::
	msgbox TestCell_Text_HavePokedex, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

TestCellBraille_Text_ABC:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "HELLO$"

TestCellBraille_Text_DEF:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "WORLD$"

TestCellBraille_Text_GHI:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "DO$"

TestCellBraille_Text_JKL:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "YOU$"

TestCellBraille_Text_MNO:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "WORK?$"

TestCellBraille_Text_PQR:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "PQR$"

TestCellBraille_Text_STU:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "STU$"

TestCellBraille_Text_VWX:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "VWX$"

TestCellBraille_Text_YZ:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "YZ.!?$"

TestCellBraille_Text_LowerCase1:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "#123$"

TestCellBraille_Text_LowerCase2:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "#456$"

TestCellBraille_Text_LowerCase3:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "#7890$"

TestCellBraille_Text_LowerCase4:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille ": ; , $"

TestCellBraille_Text_LowerCase5:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "' - ( $"

TestCellBraille_Text_LowerCase6:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille ") / # $"

TestCellBraille_Text_LowerCase7:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "s t u $"

TestCellBraille_Text_LowerCase8:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "v w x $"

TestCellBraille_Text_LowerCase9:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "y z $"

TestCellBraille_Text_GiraProph:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "BOUND BY CHAIN\n"
	.braille "SHACKLED TO\n"
	.braille "DISTORTION\n"
	.braille "ANTITHESIS\n"
	.braille "WAKES\n"
	.braille "RUINATION\n"
	.braille "FOLLOWS\n"
	.braille "AT HIS COMMAND$"

TestCellBraille_Text_Braille_FWLR:
	brailleformat 0, 0, 29, 19, 3, 3
	.braille "FIRST COMES\n"
	.braille "WAILORD.\n"
	.braille "LAST COMES\n"
	.braille "RELICANTH.$"

TestCell_Text_GivePokedex::
	.string "Here is a Pokedex for your Journey.$"

TestCell_Text_HavePokedex::
	.string "{PLAYER} you already have a Pokedex.$"
