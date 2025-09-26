.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Robin Jigglypuff trainer 
/*
EventScript_Trainer_Robin:
checkflag 0x304
if SET _goto Trainer_Robin_Idle
lockall
faceplayer
textcolor 1
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
releaseall
end

Trainer_Robin_Idle:
lockall
faceplayer
preparemsg gText_Robin_Idle
waitmsg
waitbuttonpress
closemessage
releaseall
end */