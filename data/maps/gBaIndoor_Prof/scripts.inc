gBaIndoor_Prof_MapScripts::
	.byte 0


noticeplayer::
# 7 "data/maps/gBaIndoor_Prof/scripts.pory"
	lockall
# 8 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement 4, noticeleftmove
# 9 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 10 "data/maps/gBaIndoor_Prof/scripts.pory"
	msgbox GreetPlayer
# 11 "data/maps/gBaIndoor_Prof/scripts.pory"
	applymovement 4, postnoticeleftT
# 12 "data/maps/gBaIndoor_Prof/scripts.pory"
	waitmovement 0
# 13 "data/maps/gBaIndoor_Prof/scripts.pory"
	release
	return


# 34 "data/maps/gBaIndoor_Prof/scripts.pory"
noticeleftmove:
# 35 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_left
# 36 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
# 36 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_down
	step_end

# 40 "data/maps/gBaIndoor_Prof/scripts.pory"
postnoticeleftT:
# 41 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 41 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 41 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_up
# 42 "data/maps/gBaIndoor_Prof/scripts.pory"
	walk_left
	step_end



