CeladonCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
	.byte 0

CeladonCity_OnTransition:
	setflag FLAG_VISITED_CELADON
	end

	Celadon_Poliwrath::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
	msgbox Celadon_Poliwrath_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Celadon_Poliwrath_Text:
	.string "POLIWRATH: Poli!$"

	Celadon_Dragonair::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRAGONAIR, CRY_MODE_NORMAL
	msgbox Celadon_Dragonair_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Celadon_Dragonair_Text:
	.string "DRAGONAIR: Aaair!$"

	Celadon_Slowpoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox Celadon_Slowpoke_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Celadon_Slowpoke_Text:
	.string "SLOWPOKE: ...?$"