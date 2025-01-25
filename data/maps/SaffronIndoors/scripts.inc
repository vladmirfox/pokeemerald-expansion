SaffronIndoors_MapScripts::
	.byte 0

	Saffron_Ponyta::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PONYTA, CRY_MODE_NORMAL
	msgbox Saffron_Ponyta_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Ponyta_Text:
	.string "PONYTA: hiiiiui!$"

	Saffron_MrMime::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MR_MIME, CRY_MODE_NORMAL
	msgbox Saffron_MrMime_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_MrMime_Text:
	.string "MR.MIME: ...Mime?$"

Saffron_Duplica::
	lock
	faceplayer
	msgbox Saffron_Text_Duplica, MSGBOX_DEFAULT
	release
	end

Saffron_Text_Duplica:
    .string "Hi!\n"
    .string "Do you like POKéMON?\p"
    .string "Uh, no, I just asked you.\p"
    .string "Huh?\n"
    .string "You're strange!\p"
    .string "Hmm? Quit mimicking?\n"
    .string "But, that's my favorite hobby!$"
