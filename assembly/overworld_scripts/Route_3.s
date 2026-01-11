.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Robin Jigglypuff trainer 

EventScript_Trainer_Robin:
checkflag 0x304
if SET _goto Trainer_Robin_Idle
faceplayer
lock
textcolor 1
trainerbattle1 0, 118, 0, gText_Trainer_Robin, gText_Robin_Lost, Robin_PostBattle 
releaseall
end

EventScript_Trainer_Robin0:
@Trigger 0 Bottom tile
setvar 0x4001, 0
call Trainer_Robin
end

EventScript_Trainer_Robin1:
@Trigger 1 Top tile
setvar 0x4001, 1
call Trainer_Robin
end

Trainer_Robin:
lockall
textcolor 1
compare 0x4001, 1 
if equal _call Robin_Walk_Up
applymovement 255, Look_Down
waitmovement 0
trainerbattle1 0, 118, 0, gText_Trainer_Robin, gText_Robin_Lost, Robin_PostBattle 
releaseall
end

Robin_PostBattle:
textcolor 1
preparemsg gText_Robin_PostBattle
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_TM34    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 1
preparemsg gText_Thats_ShockWave
waitmsg
waitbuttonpress
closemessage
setflag 0x304
setvar 0x4092, 1
releaseall
end

Trainer_Robin_Idle:
faceplayer
lock
msgbox gText_Robin_Idle MSG_NORMAL
releaseall
end 

Robin_Walk_Up:
applymovement 2, Walk_Up
waitmovement 0
return

.global Walk_Up
Walk_Up:
.byte walk_up, end_m

.global Look_Down
Look_Down:
.byte look_down, end_m