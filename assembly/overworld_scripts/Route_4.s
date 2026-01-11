.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Mega Punch/Kick Guy Scripts

EventScript_BulkUp_Guy:
checkflag 0x306
if SET _goto BulkUp_Idle
faceplayer
lock
textcolor 0
msgbox gText_BulkUp_Guy MSG_NORMAL
setvar 0x8000 ITEM_TM08    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
msgbox gText_Thats_BulkUp MSG_NORMAL
setflag 0x306
releaseall
end

BulkUp_Idle:
faceplayer
lock
textcolor 0
msgbox gText_Thats_BulkUp MSG_NORMAL
releaseall
end 

@Mega Kick Guy
EventScript_MegaKick:
faceplayer
lock
textcolor 0
msgbox gText_MegaKick MSG_NORMAL
releaseall
end 