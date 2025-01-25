Route39_MapScripts::
	.byte 0

	Route39_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route39_Miltank_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route39_Miltank_Text:
	.string "MILTANK: MOOOOO!$"

	Route39_Tauros::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
	msgbox Route39_Tauros_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route39_Tauros_Text:
	.string "TAUROS: ROOOF!$"