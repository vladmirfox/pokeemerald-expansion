#!/bin/bash

(
	sleep 4
	echo "started"
)&

/mnt/e/games/.emu/emulators/mGBA-0.9.3-win64/mGBA.exe $1 -g