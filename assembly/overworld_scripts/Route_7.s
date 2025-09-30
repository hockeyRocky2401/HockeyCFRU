.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Black Augurite Trainer

EventScript_Hiker_Kenny:
checkflag 0x30F
if SET _goto Trainer_Kenny_Idle
lockall
faceplayer
textcolor 0
trainerbattle1 0, 745, 0, gText_Trainer_Kenny, gText_Kenny_Lost, Kenny_PostBattle 
releaseall
end

Kenny_PostBattle:
textcolor 0
preparemsg gText_Kenny_PostBattle
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_BLACK_AUGURITE    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Thats_Augurite
waitmsg
waitbuttonpress
closemessage
setflag 0x30F
releaseall
end

Trainer_Kenny_Idle:
lockall
faceplayer
preparemsg gText_Thats_Augurite
waitmsg
waitbuttonpress
closemessage
releaseall
end 