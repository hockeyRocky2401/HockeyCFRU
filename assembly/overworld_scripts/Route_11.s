.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Itemfinder Aide in building

EventScript_Route11_Aide:
checkflag 0x30E
if SET _goto Route11_Aide_Idle
faceplayer
lock
textcolor 0
msgbox gText_Route11_Aide MSG_NORMAL
setvar 0x8000 ITEM_ITEMFINDER   @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
msgbox gText_Thats_Itemfinder MSG_NORMAL
setflag 0x30E
releaseall
end

Route11_Aide_Idle:
faceplayer
lock
textcolor 0
msgbox gText_Thats_Itemfinder MSG_NORMAL
releaseall
end 