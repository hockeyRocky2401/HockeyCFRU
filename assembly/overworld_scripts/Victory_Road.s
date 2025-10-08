.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Juggler Nelson 

EventScript_Juggler_Nelson0:
@ Trigger Eastern Tile
applymovement 255, Look_Right
waitmovement 0
goto EventScript_Juggler_Nelson

EventScript_Juggler_Nelson1:
@ Trigger Middle Tile
applymovement 3, Walk_Left
waitmovement 0
applymovement 255, Look_Right
waitmovement 0
goto EventScript_Juggler_Nelson

EventScript_Juggler_Nelson2:
@ Trigger Western Tile
applymovement 3, Walk_Left2
waitmovement 0
applymovement 255, Look_Right
waitmovement 0
goto EventScript_Juggler_Nelson

EventScript_Juggler_Nelson:
checktrainerflag 287 
if SET _goto Nelson_Idle
lockall
faceplayer
textcolor 0
trainerbattle1 0, 287, 0, gText_Nelson_Intro, gText_Nelson_Loss, Nelson_PostBattle
end 

Nelson_PostBattle:
textcolor 0
preparemsg gText_Here_Aerodactylite
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_AERODACTYLITE
setvar 0x8001 1                
call SystemScript_ObtainItem
setvar 0x4077, 1
goto Nelson_Idle

Nelson_Idle:
lockall
faceplayer
textcolor 0
preparemsg gText_Thats_Aerodactylite
waitmsg
waitbuttonpress
closemessage
releaseall
end

.global Walk_Left2
Walk_Left2:
.byte walk_left, walk_left, end_m

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Whitney Script 

EventScript_Whitney0:
@ Trigger Eastern Tile
lockall
applymovement 255, Look_Right
waitmovement 0
goto EventScript_Whitney

EventScript_Whitney1:
@ Trigger Middle Tile
lockall
applymovement 11, Walk_Left
waitmovement 0
applymovement 255, Look_Right
waitmovement 0
goto EventScript_Whitney

EventScript_Whitney2:
@ Trigger Western Tile
lockall
applymovement 11, Walk_Left3
waitmovement 0
applymovement 255, Look_Right
waitmovement 0
goto EventScript_Whitney

EventScript_Whitney:
checktrainerflag 746
if SET _goto Whitney_Idle
lockall
faceplayer
textcolor 1
trainerbattle1 0, 746, 0, gText_Whitney_Intro, gText_Whitney_Loss, Whitney_Idle
end

Whitney_Idle:
lockall 
faceplayer
textcolor 1
setvar 0x407A, 1
preparemsg gText_Whitney_Idle
waitmsg
waitbuttonpress
closemessage
releaseall
end

.global Walk_Left3
Walk_Left3:
.byte walk_left, walk_left, walk_left, end_m