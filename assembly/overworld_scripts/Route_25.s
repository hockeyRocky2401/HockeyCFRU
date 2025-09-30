.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Haley Weepinbell trainer 

EventScript_Trainer_Haley:
checkflag 0x308
if SET _goto Trainer_Haley_Idle
lockall
faceplayer
textcolor 1
trainerbattle1 0, 125, 0, gText_Trainer_Haley, gText_Haley_Lost, Haley_PostBattle 
releaseall
end

EventScript_Trainer_Haley0:
@Trigger 0 Top tile
setvar 0x4001, 0
call Trainer_Haley
end

EventScript_Trainer_Haley1:
@Trigger 1 Middle tile
setvar 0x4001, 1
call Trainer_Haley
end

EventScript_Trainer_Haley2:
@Trigger 2 Bottom tile
setvar 0x4001, 2
call Trainer_Haley
end

Trainer_Haley:
lockall
textcolor 1
compare 0x4001, 1 
if equal _call Haley_Walk_Down
compare 0x4001, 2 
if equal _call Haley_Walk_Down2
applymovement 255, Look_Up
waitmovement 0
trainerbattle1 0, 125, 0, gText_Trainer_Haley, gText_Haley_Lost, Haley_PostBattle 
releaseall
end

Haley_PostBattle:
textcolor 1
preparemsg gText_Haley_PostBattle
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_TM19    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 1
preparemsg gText_Thats_GigaDrain
waitmsg
waitbuttonpress
closemessage
setflag 0x308
setvar 0x4091, 1
releaseall
end

Trainer_Haley_Idle:
lockall
faceplayer
preparemsg gText_Haley_Idle
waitmsg
waitbuttonpress
closemessage
releaseall
end 

@ Movement

Haley_Walk_Down:
applymovement 9, Walk_Down
waitmovement 0
return

Haley_Walk_Down2:
applymovement 9, Walk_Down2
waitmovement 0
return

.global Walk_Down
Walk_Down:
.byte walk_down, end_m

.global Walk_Down2
Walk_Down2:
.byte walk_down, walk_down, end_m

.global Look_Up
Look_Up:
.byte look_up, end_m