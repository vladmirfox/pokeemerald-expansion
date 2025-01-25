CeruleanCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0

CeruleanCity_OnTransition:
	setflag FLAG_VISITED_CERULEAN
	end

Cerulean_Tommy::
	lock
	faceplayer
	msgbox Cerulean_Text_Tommy, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Tommy:
	.string "...Ooga booga?$"


Cerulean_Red::
	lock
	faceplayer
	msgbox Cerulean_Text_Red, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Red:
	.string "...?$"

Cerulean_Blue::
	lock
	faceplayer
	msgbox Cerulean_Text_Blue, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Blue:
	.string "No goal is too big for my ambition!$"

Cerulean_Gold::
	lock
	faceplayer
	msgbox Cerulean_Text_Gold, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Gold:
	.string "Hey there!$"

Cerulean_Krys::
	lock
	faceplayer
	msgbox Cerulean_Text_Krys, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Krys:
	.string "Life is full of wonders!$"

Cerulean_Silver::
	lock
	faceplayer
	msgbox Cerulean_Text_Silver, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Silver:
	.string "Pfft.\n"
	.string "You smell of weakness...$"

Cerulean_Cavedestroyed::
	lock
	faceplayer
	msgbox Cerulean_Text_Cavedestroyed, MSGBOX_DEFAULT
	release
	end

Cerulean_Text_Cavedestroyed:
	.string "The CAVE appears to have been destroyed\n"
	.string "following a violent fight.$"

Cerulean_Slowbro::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox Cerulean_Slowbro_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Slowbro_Text:
	.string "SLOWBRO: Graoh!$"

Cerulean_Milotic::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILOTIC, CRY_MODE_NORMAL
	msgbox Cerulean_Milotic_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Milotic_Text:
	.string "MILOTIC: Uooooh!!$"

Cerulean_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox Cerulean_Kangaskhan_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Kangaskhan_Text:
	.string "KANGASKHAN: Graoh!$"

Cerulean_Snubbull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SNUBBULL, CRY_MODE_NORMAL
	msgbox Cerulean_Snubbull_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Snubbull_Text:
	.string "SNUBBULL: Worf!$"