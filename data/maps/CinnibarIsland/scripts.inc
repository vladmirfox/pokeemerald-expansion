CinnibarIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnibarIsland_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, CinnibarIsland_OnLoad
	.byte 0

CinnibarIsland_OnTransition:
	setflag FLAG_VISITED_CINNABAR
	end

CinnibarIsland_OnLoad:
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, CinnibarIsland_EventScript_SetWailmerMetatiles
	end

CinnibarIsland_EventScript_SetWailmerMetatiles::
	setmetatile 0, 18, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 1, 18, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 0, 19, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 1, 19, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 1, 20, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 2, 20, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 1, 21, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 2, 21, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 0, 22, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 1, 22, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 0, 23, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 1, 23, METATILE_Lilycove_Wailmer3, TRUE
	return

Cinnabar_Growlithe::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
	msgbox Cinnabar_Growlithe_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cinnabar_Growlithe_Text:
	.string "GROWLITHE: Graoh!$"