.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Grunt on Nugget Bridge

/*EventScript_Nugget_Grunt2:
lockall
@Trigger A Middle tile 
setvar 0x4001, 0
call Nugget_Grunt
end 

EventScript_Nugget_Grunt1:
lockall
@Trigger A Left tile 
setvar 0x4001, 1
call Nugget_Grunt
end 

EventScript_Nugget_Grunt3: @Talking to Nugget Grunt
compare 0x406B, 0
if equal _goto Nugget_Grunt3
compare 0x406B, 1
if equal _goto Nugget_PostBattle
compare 0x406B, 2
if equal _goto Report_Rocket
end

Nugget_Grunt3:
lockall
faceplayer 
textcolor 0
preparemsg gText_Congrats_Nugget
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_NUGGET    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
preparemsg gText_Join_Rocket
waitmsg
yesnobox 0, 0
compare LASTRESULT, 1
if equal _goto Report_Rocket
trainerbattle1 0, 356, 0, gText_Please_Join, gText_Nugget_PostBattle Nugget_PostBattle
end 

Nugget_Grunt:
lockall
textcolor 0
compare 0x4001, 1 
if equal _call Grunt_Walk_Left
applymovement 255, Player_Look_Right
preparemsg gText_Congrats_Nugget
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_NUGGET    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
preparemsg gText_Join_Rocket
waitmsg
yesnobox 0, 0
compare LASTRESULT, 1
if equal _goto Report_Rocket
trainerbattle1 0, 356, 0, gText_Please_Join, gText_Nugget_PostBattle Nugget_PostBattle
end

Report_Rocket:
lockall
faceplayer
textcolor 0
preparemsg gText_Report_Rocket
waitmsg
waitbuttonpress
closemessage
setvar 0x406B, 2
releaseall
end

Nugget_PostBattle:
lockall
faceplayer
textcolor 0
preparemsg gText_Nugget_Beaten
waitmsg
waitbuttonpress
closemessage
setvar 0x406B, 1
releaseall
end

@ Movement

Grunt_Walk_Left:
applymovement 1, Walk_Left
waitmovement 0
return

Walk_Left:
.byte walk_left, end_m

Player_Look_Right:
.byte look_right, end_m
*/