.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Ramiro Route 18

EventScript_Ramiro0:
@ Northern Tile 
lockall
applymovement 2, Walk_Up
waitmovement 0
applymovement 255, Look_Down
waitmovement 0
goto EventScript_Ramiro

EventScript_Ramiro1:
@ Middle Tile 
lockall
applymovement 255, Look_Down
waitmovement 0
goto EventScript_Ramiro

EventScript_Ramiro:
checkflag 0x313
if SET _goto Ramiro_Idle
lockall
faceplayer
textcolor 0
trainerbattle1 0, 308, 0, gText_Ramiro_Intro, gText_Ramiro_PostBattle Ramiro_PostBattle
end 

Ramiro_PostBattle:
textcolor 0
setflag 0x313
setvar 0x4074, 1
preparemsg gText_Here_Pidgeotite
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_PIDGEOTITE    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
goto Ramiro_Idle

Ramiro_Idle:
lockall
faceplayer
preparemsg gText_Thats_Pidgeotite
waitmsg
waitbuttonpress
closemessage
releaseall
end