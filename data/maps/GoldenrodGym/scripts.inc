GoldenrodGym_MapScripts::
	.byte 0

Goldenrod_Clefairy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox Goldenrod_Clefairy_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Goldenrod_Clefairy_Text:
	.string "CLEFAIRY: Pippi!$"