.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Hiker Wes 

EventScript_Hiker_Wes:
checkflag 0x30B
if SET _goto Trainer_Wes_Idle
lockall
faceplayer
textcolor 0
trainerbattle1 0, 744, 0, gText_Trainer_Wes, gText_Wes_Lost, Wes_PostBattle 
releaseall
end

Wes_PostBattle:
textcolor 0
preparemsg gText_Wes_PostBattle
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_HEAVY_DUTY_BOOTS    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Thats_Boots
waitmsg
waitbuttonpress
closemessage
setflag 0x30B
releaseall
end

Trainer_Wes_Idle:
lockall
faceplayer
preparemsg gText_Thats_Boots
waitmsg
waitbuttonpress
closemessage
releaseall
end 