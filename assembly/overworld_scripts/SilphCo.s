.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Petrel Disguise 1st Floor 

EventScript_SilphCo_Map:
mapscript MAP_SCRIPT_ON_TRANSITION, SilphCo_OnTransition
mapscript MAP_SCRIPT_ON_FRAME_TABLE, SilphCo_OnFrame
.byte MAP_SCRIPT_TERMIN

SilphCo_OnTransition:
setworldmapflag 0x08AC
checkflag 0x025 @ Oak at entrance 
if SET _goto End
checkflag 0x310
if SET _goto End
setvar 0x4001, 1
return

SilphCo_OnFrame:
.hword 0x4001, 1
.word Run_Petrel_Disguise
.hword 0,0

Run_Petrel_Disguise:
setvar 0x4001, 0
lockall
applymovement 255, Walk_Up
waitmovement 0
applymovement 2, Walk_Down2
waitmovement 0

EventScript_Petrel_Disguise:
lockall
faceplayer
textcolor 0
preparemsg gText_Petrel_Oak
waitmsg
waitbuttonpress
closemessage
setflag 0x310 @Petrel Oak Intro flag
releaseall
end

@ Petrel Disguise is up

EventScript_PetrelStop:
lockall
setflag 0x025
showsprite 3
applymovement 3, PetrelOak_Approach
waitmovement 0
applymovement 255, Look_Down
waitmovement 0
textcolor 0
preparemsg gText_Petrel_Stop
waitmsg
waitbuttonpress
closemessage
fadescreen 1              @ ToBlack
hidesprite 3
setflag 0x027
clearflag 0x026
showsprite 4
callasm FadeInFromBlack
@ Grunt 23 373
trainerbattle1 0, 373, 0, gText_Petrel_Disguise, gText_Petrel_Lost2, EventScript_Petrel_PostBattle2
end

EventScript_Petrel_PostBattle2:
lock
faceplayer
textcolor 0
preparemsg gText_Petrel_PostBattle2
waitmsg
waitbuttonpress
closemessage
setvar 0x4072, 1
releaseall
end

@ Movement

PetrelOak_Approach:
.byte walk_up, walk_up, walk_up, walk_up, walk_up, walk_right, walk_right, walk_up, end_m

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Giovanni Top Floor

EventScript_Giovanni_Silph0:
lockall
applymovement 255, Approach_Giovanni
waitmovement 0
goto Giovanni_Silph

EventScript_Giovanni_Silph1:
lockall
applymovement 255, Walk_Up
waitmovement 0
goto Giovanni_Silph

Giovanni_Silph:
applymovement 3, Look_Down @Giovanni
waitmovement 0
applymovement 6, Look_Left @Archer
waitmovement 0
applymovement 7, Look_Left @Ariana
waitmovement 0

textcolor 0
preparemsg gText_Giovanni_Silph
waitmsg
waitbuttonpress
closemessage
applymovement 255, Look_Right
waitmovement 0
applymovement 7, Walk_Down_Walk_Left
waitmovement 0
preparemsg gText_Archer_PreBattle
waitmsg
waitbuttonpress
closemessage
textcolor 1
preparemsg gText_Ariana_PreBattle
waitmsg
waitbuttonpress
closemessage
trainerbattle3 0, 381, 0, 0
goto Archie_Ariana_Loss  
end

Archie_Ariana_Loss:
lockall
fadescreen 1
hidesprite 3
setflag 0x053 @ Giovanni Flag
callasm FadeInFromBlack
textcolor 0
preparemsg gText_Archie_Loss
waitmsg
waitbuttonpress
textcolor 1
preparemsg gText_Ariana_Loss
waitmsg
waitbuttonpress
closemessage
fadescreen 1
hidesprite 6
setflag 0x023 @ Hide Archer
hidesprite 7
setflag 0x024 @Hide Ariana
setvar 0x4060, 1
setflag 0x026 @ Hide Petrel 
setflag 0x003E @ Flag to Hide Saffron Rockets 
clearflag 0x003F @ Flag to unhide Saffron Civilians 
callasm FadeInFromBlack
releaseall
end

@ Movement 

Approach_Giovanni:
.byte walk_up, walk_right, look_up, end_m

.global Walk_Down_Walk_Left
Walk_Down_Walk_Left:
.byte walk_down, walk_left, end_m

.global Look_Left
Look_Left:
.byte look_left, end_m
