.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_Route15_Aide:
checkflag 0x314
if SET _goto Route15_Aide_Idle
faceplayer
lock
textcolor 0
msgbox gText_Route15_Aide MSG_NORMAL
setvar 0x8000 ITEM_TOXIC_ORB
setvar 0x8001 1             
call  SystemScript_ObtainItem
setflag 0x314
goto Route15_Aide_Idle

Route15_Aide_Idle:
faceplayer
lock
textcolor 0
msgbox gText_Thats_ToxicOrb MSG_NORMAL
releaseall
end 