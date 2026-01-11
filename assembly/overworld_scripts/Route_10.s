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
faceplayer
lock
textcolor 0
msgbox gText_Route10_Aide MSG_NORMAL
setvar 0x8000 ITEM_EVERSTONE   @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
msgbox gText_Thats_Everstone MSG_NORMAL
setflag 0x30D
releaseall
end

Route10_Aide_Idle:
faceplayer
lock
msgbox gText_Thats_Everstone MSG_NORMAL
releaseall
end 