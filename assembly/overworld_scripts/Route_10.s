.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@ Route 10 Aide 

EventScript_Route10_Aide:
checkflag 0x30D
if SET _goto Route10_Aide_Idle
lockall
faceplayer
textcolor 0
preparemsg gText_Route10_Aide
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_EVERSTONE   @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Thats_Everstone
waitmsg
waitbuttonpress
closemessage
setflag 0x30D
releaseall
end

Route10_Aide_Idle:
lockall
faceplayer
preparemsg gText_Thats_Everstone
waitmsg
waitbuttonpress
closemessage
releaseall
end 