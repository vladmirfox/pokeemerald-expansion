SilverTunnel_2F_MapScripts::
	.byte 0


SilverTunnel_2F_EventScript_Trainer1::
# 6 "data/maps/SilverTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_DUMMY, SilverTunnel_2F_EventScript_Trainer1_Text_0, SilverTunnel_2F_EventScript_Trainer1_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 12 "data/maps/SilverTunnel_2F/scripts.pory"
	speakername SilverTunnel_2F_EventScript_Trainer1_Text_2
# 13 "data/maps/SilverTunnel_2F/scripts.pory"
	msgbox SilverTunnel_2F_EventScript_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	end


SilverTunnel_2F_EventScript_Trainer2::
# 18 "data/maps/SilverTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_DUMMY, SilverTunnel_2F_EventScript_Trainer1_Text_0, SilverTunnel_2F_EventScript_Trainer1_Text_1, BeachboundRoute_EventScript_Karu_PostBattle
# 24 "data/maps/SilverTunnel_2F/scripts.pory"
	speakername SilverTunnel_2F_EventScript_Trainer1_Text_2
# 25 "data/maps/SilverTunnel_2F/scripts.pory"
	msgbox SilverTunnel_2F_EventScript_Trainer1_Text_3, MSGBOX_AUTOCLOSE
	end


SilverTunnel_2F_EventScript_Trainer1_Text_0:
# 8 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Let's fight$"

SilverTunnel_2F_EventScript_Trainer1_Text_1:
# 9 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Oh no I lost$"

SilverTunnel_2F_EventScript_Trainer1_Text_2:
# 12 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "TODO$"

SilverTunnel_2F_EventScript_Trainer1_Text_3:
# 13 "data/maps/SilverTunnel_2F/scripts.pory"
	.string "Now I'm sad$"
