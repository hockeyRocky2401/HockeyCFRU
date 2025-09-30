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
lockall
faceplayer
textcolor 0
preparemsg gText_BulkUp_Guy
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_TM08    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Thats_BulkUp
waitmsg
waitbuttonpress
closemessage
setflag 0x306
releaseall
end

BulkUp_Idle:
lockall
faceplayer
textcolor 0
preparemsg gText_Thats_BulkUp
waitmsg
waitbuttonpress
closemessage
releaseall
end 

@Mega Kick Guy
EventScript_MegaKick:
lockall
faceplayer
textcolor 0
preparemsg gText_MegaKick
waitmsg
waitbuttonpress
closemessage
releaseall
end 