.set LOCALID_GOODY_BAG, 1

LittlerootTest_MapScripts::
	.byte 0

@ CUSTOM SCRIPTS

sLittlerootTown_GiveTestingMonEtc::
	lock
	msgbox LittlerootTown_Text_TakePokeball, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	goto LittlerootTown_Script_GiveTestMons
	removeobject 9
	setflag FLAG_BIRCH_SKIP
	call LittlerootTown_Script_SkipBirchEncounter
	msgbox LittlerootTown_Text_Test, MSGBOX_DEFAULT
	closemessage
	release
	end

Script_PlayerHasFullParty::
	msgbox cLittlerootTown_Text_PlayerHasFullParty, MSGBOX_DEFAULT
	release
	end

@ Pokeball to test new species
LittlerootTown_Script_GiveTestMons::
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	@ givemon SPECIES_VAPOREON, 65, item=ITEM_LEFTOVERS, ball=ITEM_MASTER_BALL, nature=NATURE_MODEST, abilityNum=1, gender=MON_FEMALE, hpEv=252, atkEv=0, defEv=0, speedEv=4, spAtkEv=252, spDefEv=0, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_SURF, move2=MOVE_FLAMETHROWER, move3=MOVE_ICE_BEAM, move4=MOVE_SPLASH, isShiny=TRUE;
	givemon SPECIES_GOLBAT_DELTA, 64
	givemon SPECIES_SHEDINJA_DELTA, 69
	givemon SPECIES_DUSTOX_DELTA, 60	
	givemon SPECIES_VENOMOTH_DELTA, 63
	givemon SPECIES_SANDSLASH_DELTA, 65
	return

LittlerootTown_Text_TakePokeball:
	.string "Oh look! A POKéBALL!$"

LittlerootTown_Text_Test:
	.string "TEST$"

cLittlerootTown_Text_ReceivedVaporeon:
	.string "{PLAYER} received a VAPOREON!$"

cLittlerootTown_Text_PlayerHasFullParty:
	.string "Better leave this for later.$"

cLittlerootTown_EventScript_PickupGoodyBag::
	lock
	msgbox cLittlerootTown_Text_PickupGoodyBag
	msgbox cLittlerootTown_Text_FoundRustyOldBadges
	giveitem ITEM_MASTER_BALL, 50
	@ giveitem ITEM_CARBOS, 10
	@ giveitem ITEM_PROTEIN, 10
	@ giveitem ITEM_ADAMANT_MUSHROOM, 10
	call LittlerootTown_Script_SkipBirchEncounter
	call LittlerootTown_Script_GiveStartingMons
	call LittlerootTown_Script_GiveBadges
	call LittlerootTown_Script_SetFlyFlags
	removeobject LOCALID_GOODY_BAG
	setflag FLAG_STOLE_GOODY_BAG
	setflag FLAG_HIDE_ROUTE_102_ARCO_GUARD
	setflag FLAG_RECEIVED_RUNNING_SHOES
	closemessage
	release
	end


LittlerootTown_Script_SkipBirchEncounter::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	@ setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

LittlerootTown_Script_GiveStartingMons::
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	givemon SPECIES_VAPOREON, 65, item=ITEM_LEFTOVERS, move1=MOVE_AERIAL_ACE, move2=MOVE_SURF, move3=MOVE_SLUDGE_BOMB, move4=MOVE_SPLASH, isShiny=TRUE;
	givemon SPECIES_BEEDRILL_DELTA, 65, move1=MOVE_ROCK_CANNON, move2=MOVE_ICE_PUNCH, move3=MOVE_POISON_JAB, move4=MOVE_BRILLIANT_PUNCH, isShiny=TRUE;
	givemon SPECIES_BEEDRILL, 40
	givemon SPECIES_SUDOWOODO, 45, move1=MOVE_ROCK_CLIMB, move2=MOVE_JAGGED_BLOW, move3=MOVE_WATERFALL, move4=MOVE_BRILLIANT_PUNCH
	@ givemon SPECIES_SHEDINJA_DELTA, 65, item=ITEM_LEFTOVERS, ball=ITEM_MASTER_BALL, nature=NATURE_MODEST, abilityNum=1, gender=MON_FEMALE, hpEv=252, atkEv=0, defEv=0, speedEv=4, spAtkEv=252, spDefEv=0, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_POISON_STING, move2=MOVE_EARTHQUAKE, move3=MOVE_GIGA_DRAIN, move4=MOVE_SPLASH, isShiny=TRUE;
	@ givemon SPECIES_DUSTOX_DELTA, 60
	return


LittlerootTown_Script_GiveBadges::
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	return

LittlerootTown_Script_SetFlyFlags::
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_VISITED_OLDALE_TOWN
	setflag FLAG_VISITED_DEWFORD_TOWN
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	setflag FLAG_VISITED_PETALBURG_CITY
	setflag FLAG_VISITED_SLATEPORT_CITY
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_LILYCOVE_CITY
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setflag FLAG_VISITED_BLEAKISLE_TOWN
	return

cLittlerootTown_Text_PickupGoodyBag:
	.string "Someone left their bag here…$"

cLittlerootTown_Text_FoundRustyOldBadges:
	.string "Found some rusty old badges too…$"
