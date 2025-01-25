GreenPath_MapScripts::
	.byte 0

GreenPath_PatternIn::
	warp MAP_PATTERN_BUSH_F1, 36, 31,
	waitstate
	release
	end

GreenPath_PatternOut::
	warp MAP_PATTERN_BUSH_F1, 7, 31,
	waitstate
	release
	end