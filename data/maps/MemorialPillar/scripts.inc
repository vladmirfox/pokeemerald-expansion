MemorialPillar_MapScripts::
	.byte 0

MemorialPillar_Tectonix_Trainer::
	lock
	faceplayer
	msgbox MemorialPillar_Text_Tectonix_Trainer, MSGBOX_DEFAULT
	release
	end

MemorialPillar_Text_Tectonix_Trainer:
    .string "This is where I buried my ONIX…\n"
    .string "It was named TECTONIX…$"

MemorialPillar_Tectonix::
	lock
	msgbox MemorialPillar_Text_Tectonix, MSGBOX_DEFAULT
	release
	end

MemorialPillar_Text_Tectonix:
    .string "“Here lies TECTONIX” is engraved\n"
    .string "on a boulder.\p"
    .string "There is a LEMONADE placed as an\n"
    .string "offering in front of the grave.$"