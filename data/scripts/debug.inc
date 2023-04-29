Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_CheatStart::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	setflag FLAG_ADVENTURE_STARTED
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	givemon SPECIES_TREECKO, 20, ITEM_NONE
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
	setflag FLAG_RECEIVED_BIKE
	additem ITEM_ACRO_BIKE
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setvar VAR_ROUTE116_STATE, 2
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	release
	end

Debug_FlagsNotSetOverworldConfigMessage::
	lockall
	message Debug_FlagsNotSetOverworldConfigMessage_Text
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_FlagsNotSetOverworldConfigMessage_Text:
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/overworld.h'!$"

Debug_FlagsNotSetBattleConfigMessage::
	lockall
	message Debug_FlagsNotSetBattleConfigMessage_Text
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_FlagsNotSetBattleConfigMessage_Text:
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/battle.h'!$"

Debug_FlagsAndVarNotSetBattleConfigMessage::
	lockall
	message Debug_FlagsAndVarNotSetBattleConfigMessage_Text
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_FlagsAndVarNotSetBattleConfigMessage_Text:
	.string "Feature unavailable! Please define a\n"
	.string "usable flag and a usable var in:\l"
	.string "'include/config/battle.h'!$"


Debug_Script_1::
   setflag FLAG_BADGE08_GET
   setflag FLAG_SYS_POKEMON_GET
   givemon SPECIES_TAPU_BULU,100,0
   givemon SPECIES_SPEAROW,50,0
   givemon SPECIES_FLYGON,50,0
   givemon SPECIES_PIDGEOT,10,0
   //givemon SPECIES_WEEDLE,10,0
   giveegg SPECIES_RAYQUAZA
    goto Route123_EventScript_Alberto2
	end

Debug_Script_2::
call Route123_EventScript_Alberto_StartBattle
	end

Debug_Script_3::
	end

Debug_Script_4::
	end

Debug_Script_5::
	end

Debug_Script_6::
	end

Debug_Script_7::
	end

Debug_Script_8::
	end

Route123_EventScript_Alberto2::
   lock
   faceplayer
   checktrainerflag TRAINER_ALBERTO
   goto_if 0, Route123_EventScript_Alberto_Battle_Event_Script
   msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
   release
   end

Route123_EventScript_Alberto_Battle_Event_Script:
   msgbox Route123_EventScript_Alberto_Text_AskSkyBattle, MSGBOX_YESNO
   compare VAR_RESULT, NO
   goto_if_eq Route123_EventScript_Alberto_DenySkyBattle
   special TrySkyBattle
   compare VAR_RESULT, TRUE
   goto_if_eq Route123_EventScript_Alberto_StartBattle
   msgbox Route123_EventScript_Alberto_Text_No_Flying_Pokemon
   closemessage
   release
   end

Route123_EventScript_Alberto_DenySkyBattle:
   msgbox Route123_EventScript_Alberto_Text_DenySkyBattle
   closemessage
   release
   end

Route123_EventScript_Alberto_StartBattle:
   msgbox Route123_EventScript_Alberto_Text_StartBattle
   trainerbattle_no_intro TRAINER_ALBERTO, Route123_Text_AlbertoDefeat
   release
   end


Route123_EventScript_Alberto_Text_AskSkyBattle:
   .string "Care for a Sky Battle with a Sky\n"
   .string "Trainer?$"

Route123_EventScript_Alberto_Text_DenySkyBattle:
   .string "Well, this is a bit disappointing for a\n"
   .string "Sky Trainer like me...$"

Route123_EventScript_Alberto_Text_StartBattle:
   .string "Woo hoo! I'm a Sky Trainer! Look at me\n"
   .string "go! Wooooo!$"

Route123_EventScript_Alberto_Text_No_Flying_Pokemon:
   .string "Well, well, isn't this a shame. You don't\n"
   .string "have any flying Pokemon. We Sky\l"
   .string "Trainers only battle with Pokemon that\l"
   .string "can fly in the sky.$"
