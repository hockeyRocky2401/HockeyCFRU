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
faceplayer
lock
textcolor 0
trainerbattle1 0, 745, 0, gText_Trainer_Kenny, gText_Kenny_Lost, Kenny_PostBattle 
releaseall
end

Kenny_PostBattle:
textcolor 0
msgbox gText_Kenny_PostBattle MSG_NORMAL
setvar 0x8000 ITEM_BLACK_AUGURITE    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
msgbox gText_Thats_Augurite MSG_NORMAL
setflag 0x30F
releaseall
end

Trainer_Kenny_Idle:
faceplayer
lock
msgbox gText_Thats_Augurite MSG_NORMAL
releaseall
end 