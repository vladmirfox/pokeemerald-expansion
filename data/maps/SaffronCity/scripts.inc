SaffronCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition:
	setflag FLAG_VISITED_SAFFRON
	end

	Saffron_Pidgeot::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox Saffron_Pidgeot_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Pidgeot_Text:
	.string "PIDGEOT: piiipiiii!$"

Saffron_Jynx::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JYNX, CRY_MODE_NORMAL
	msgbox Saffron_Jynx_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Jynx_Text:
	.string "JYNX: Uououo?$"

Saffron_Abra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	msgbox Saffron_Abra_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Abra_Text:
	.string "ABRA: ..?$"

SaffronCity_Warp1::
	warp MAP_KANTO_GATES, 17, 1,
	waitstate
	release
	end

SaffronCity_Warp2::
	warp MAP_KANTO_GATES, 4, 1,
	waitstate
	release
	end