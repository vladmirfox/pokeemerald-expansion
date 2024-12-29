Scyther_Sanctuary_MapScripts::
	.byte 0


ScytherSanctExec1::
# 15 "data/maps/Scyther_Sanctuary/scripts.pory"
	trainerbattle_double EXECUTIVE_HENRY, ScytherSanctExec1_d1, ScytherSanctExec1_d2, ScytherSanctExec1_Text_0
	return


# 31 "data/maps/Scyther_Sanctuary/scripts.pory"
NPC_faceup:
# 32 "data/maps/Scyther_Sanctuary/scripts.pory"
	face_up
	step_end

# 53 "data/maps/Scyther_Sanctuary/scripts.pory"
WalkOffSceenScyther:
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 54 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
	step_end

Initiate_Battle_Scyther_Sanctuary::
# 58 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 59 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 60 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceplayer
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 62 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 63 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF1
# 64 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF2
# 65 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF3
# 66 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceup
# 68 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 69 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 70 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 71 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 4, TalkDown
# 72 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 4
# 73 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 74 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PreScytherF
# 77 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Initiate_Battle_Scyther_Sanctuary_Text_0
# 79 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 80 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 4, TalkDown
# 81 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 4
# 82 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 83 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PreScytherF
# 84 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PostScytherF1
# 85 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF2
# 86 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PostScytherF2
# 89 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 5
# 91 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 4
# 92 "data/maps/Scyther_Sanctuary/scripts.pory"
	setvar VAR_SCYTHER_SANCT_STATE, 1
# 93 "data/maps/Scyther_Sanctuary/scripts.pory"
	setflag FLAG_SCYTHER_SANCT_CLEARED
# 94 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 98 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PostScytherF1
# 99 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 100 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, WalkOffSceenScyther
# 101 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 102 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 1
# 103 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 104 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
	return


ScytherSanctExec1_Text_0:
# 15 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "ERROR$"

Initiate_Battle_Scyther_Sanctuary_Text_0:
# 77 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "This is where the double battle will go!$"

ScytherSanctExec1_d1::
# 6 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Silph Co. must be serious about Project\n"
	.string "Babble if they're sending me down here.$"

ScytherSanctExec1_d2::
# 10 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Could you forget I said that?$"

Tessa_PreScytherF1::
# 19 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "You're that gym challenger, right? Silph\n"
	.string "Co. showed up here and started tearing\l"
	.string "apart the santuary.$"

Tessa_PreScytherF2::
# 23 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "............$"

Tessa_PreScytherF3::
# 27 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "You're not going to leave, are you? Fine.\n"
	.string "Help me beat this guy and then I'll let\l"
	.string "you challenge my gym.$"

Orm_PreScytherF::
# 35 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "All the natural resources of Atlantia\n"
	.string "belongs to Silph Co. per, the Colress\l"
	.string "Treaty- this Sanctuary included. If\l"
	.string "you're going to get in my way, I will\l"
	.string "remove you.$"

Orm_PostScytherF1::
# 40 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "...You're stronger than I expected. My\n"
	.string "men and I will leave. I gathered the\l"
	.string "samples I needed anyways. Don't expect\l"
	.string "me to be the last person sent here.$"

Orm_PostScytherF2::
# 45 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "A scyther taken from a young girl? Ah,\n"
	.string "yes- it wasn't want we needed. You may\l"
	.string "have it.$"

Tessa_PostScytherF1::
# 50 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Thanks for the help, kid. If you still\n"
	.string "want to challenge me, I'll be at my gym.$"
