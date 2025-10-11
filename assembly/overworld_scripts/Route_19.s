.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Axle Gyarodsite

EventScript_Axle0:
@ Trigger Southern Tile 
lockall
applymovement 255, Look_Down
waitmovement 0
goto EventScript_Axle

EventScript_Axle1:
@ Trigger Middle Tile
lockall 
applymovement 7, Walk_Up
waitmovement 0
applymovement 255, Look_Down
waitmovement 0
goto EventScript_Axle

EventScript_Axle2:
@ Trigger Northern Tile
lockall 
applymovement 7, Walk_Up2
waitmovement 0
applymovement 255, Look_Down
waitmovement 0
goto EventScript_Axle

EventScript_Axle:
checktrainerflag 241 
if SET _goto Axle_Idle
lockall
faceplayer
textcolor 0
trainerbattle1 0, 241, 0, gText_Axle_Intro, gText_Axle_PostBattle, Axle_PostBattle
end

Axle_PostBattle:
lockall
textcolor 0
preparemsg gText_Here_Gyaradosite
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_GYARADOSITE    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
goto Axle_Idle

Axle_Idle:
lockall
faceplayer
preparemsg gText_Thats_Gyaradosite
waitmsg
waitbuttonpress
closemessage
releaseall
end
