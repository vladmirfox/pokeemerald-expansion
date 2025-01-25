PewterCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0

PewterCity_OnTransition:
	setflag FLAG_VISITED_PEWTER
	end

Pewter_Marill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
	msgbox Pewter_Marill_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Pewter_Marill_Text:
	.string "MARILL: Pipi!$"

Pewter_Pikablu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
	msgbox Pewter_Pikablu_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Pewter_Pikablu_Text:
	.string "MARILL: Pika...blu?$"