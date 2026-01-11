.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Petrel 

EventScript_Meet_Petrel0:
@ Trigger A East of Entrance
setvar 0x4001, 0      
lockall
applymovement 1, Walk_Up2
waitmovement 0
applymovement 255, Look_Down
waitmovement 0
goto Meet_Petrel
@ goto Approach_Petrel0

EventScript_Meet_Petrel1:
@ Trigger B South of Entrance
setvar 0x4001, 1    
lockall
applymovement 1, Walk_Up2_Look_Left
waitmovement 0
applymovement 255, Look_Right
waitmovement 0
goto Meet_Petrel
@ goto Approach_Petrel1

Meet_Petrel:
textcolor 0
trainerbattle1 0, 359, 0, gText_MeetPetrel, gText_Petrel_PostBattle, EventScript_Petrel_PostBattle
end

EventScript_Petrel_PostBattle:
faceplayer
lock
textcolor 0
msgbox gText_Petrel_Idle MSG_NORMAL
setvar 0x403F, 1
releaseall
end

@ Petrel Movement

.global Walk_Up2
Walk_Up2:
.byte walk_up, walk_up, end_m

.global Walk_Up2_Look_Left
Walk_Up2_Look_Left:
.byte walk_up, walk_up, look_left, end_m

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Archer and Ariana

@ Archer 

EventScript_Archer:
checktrainerflag 366
if SET _goto Archer_Idle
faceplayer
lock
textcolor 0
trainerbattle1 0, 366, 0, gText_MeetArcher, gText_Archer_PostBattle, Archer_PostBattle
end

Archer_PostBattle:
setvar 0x4001 0
faceplayer
lock
textcolor 0
msgbox gText_Archer_Idle MSG_NORMAL
checktrainerflag 366
if SET _call UnlockDoor1
checktrainerflag 367
if SET _call UnlockDoor2
compare 0x4001, 2
if greaterorequal _call DoorUnlocked
if greaterorequal _call DoorSound
releaseall
end

Archer_Idle:
faceplayer
lock
textcolor 0
msgbox gText_Archer_Idle MSG_NORMAL
releaseall
end

UnlockDoor1:
addvar 0x4001 1
return 

@ Ariana

EventScript_Ariana:
checktrainerflag 367
if SET _goto Ariana_Idle
faceplayer
lock
textcolor 1
trainerbattle1 0, 367, 0, gText_MeetAriana, gText_Ariana_PostBattle, Ariana_PostBattle
end

Ariana_PostBattle:
setvar 0x4001 0
faceplayer
lock
textcolor 1
msgbox gText_Ariana_Idle MSG_NORMAL
checktrainerflag 366
if SET _call UnlockDoor1
checktrainerflag 367
if SET _call UnlockDoor2
compare 0x4001, 2
if greaterorequal _call DoorUnlocked
if greaterorequal _call DoorSound
releaseall
end

Ariana_Idle:
faceplayer
lock
textcolor 1
msgbox gText_Ariana_Idle MSG_NORMAL
releaseall
end

UnlockDoor2:
addvar 0x4001 1
return 

DoorUnlocked:
setmaptile 17 12 642 0
setmaptile 18 12 641 0
setmaptile 17 13 642 0
setmaptile 18 13 641 0
setmaptile 17 14 642 0
setmaptile 18 14 641 0
return

DoorSound:
playse 0x1E
callasm DrawWholeMapView
waitse
return

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Giovanni

EventScript_Giovanni0:
@ Trigger 1 Eastern Tile
lockall
applymovement 255, WalkUp4_WalkRight
waitmovement 0
textcolor 0
preparemsg gText_Giovanni
waitmsg
waitbuttonpress
closemessage
applymovement 1, Giovanni_Leave
waitmovement 0
hidesprite 0
setflag 0x038 @ Giovanni Flag 
setflag 0x05F @ Celadon Rockets 
setvar 0x4041, 1
releaseall
end

EventScript_Giovanni1:
@ Trigger 2 Western Tile
lockall
applymovement 255, WalkUp4_WalkRight2
waitmovement 0
textcolor 0
preparemsg gText_Giovanni
waitmsg
waitbuttonpress
closemessage
applymovement 1, Giovanni_Leave
waitmovement 0
hidesprite 1
setflag 0x038 @ Giovanni Flag 
setflag 0x05F @ Celadon Rockets 
setvar 0x4041, 1
releaseall
end

@ Movement 

WalkUp4_WalkRight:
.byte walk_up, walk_up, walk_up, walk_up, walk_right, look_up, end_m

WalkUp4_WalkRight2:
.byte walk_up, walk_up, walk_up, walk_up, walk_right, walk_right, look_up, end_m

Giovanni_Leave:
.byte walk_down, walk_left, walk_left, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, end_m
