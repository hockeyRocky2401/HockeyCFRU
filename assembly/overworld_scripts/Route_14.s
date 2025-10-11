.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Yazmin Mega Beedrill

EventScript_Yazmin0:
@ Northern Tile
applymovement 255, Look_Up
waitmovement 0
goto EventScript_Yazmin

EventScript_Yazmin1:
@ Middle Tile
applymovement 1, Walk_Down
waitmovement 0
applymovement 255, Look_Up
waitmovement 0
goto EventScript_Yazmin

EventScript_Yazmin2:
@ Southern Tile
applymovement 1, Walk_Down2
waitmovement 0
applymovement 255, Look_Up
waitmovement 0
goto EventScript_Yazmin

EventScript_Yazmin:
checktrainerflag 478
if SET _goto Yazmin_Idle 
lockall
faceplayer
textcolor 1
trainerbattle1 0, 478, 0, gText_Yazmin_Intro, gText_Yazmin_Loss Yazmin_PostBattle
end

Yazmin_PostBattle:
lockall 
faceplayer
setvar 0x406D, 1
textcolor 1
preparemsg gText_Here_Beedrillite
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_BEEDRILLITE    
setvar 0x8001 1               
call SystemScript_ObtainItem
goto Yazmin_Idle
end

Yazmin_Idle:
lockall 
faceplayer
textcolor 1
preparemsg gText_Thats_Beedrillite
waitmsg
waitbuttonpress
closemessage
releaseall
end