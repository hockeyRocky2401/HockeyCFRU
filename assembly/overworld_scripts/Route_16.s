.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Route 16 Aide Tera Blast

EventScript_Aide_Route16:
checkflag 0x311
if SET _goto Aide_Route16_Idle
faceplayer
lock
textcolor 0
msgbox gText_Aide_Route16 MSG_NORMAL
setvar 0x8000 ITEM_TM43   @ Was Secret Power
setvar 0x8001 1               
call SystemScript_ObtainItem
textcolor 0
msgbox gText_Thats_Terablast MSG_NORMAL
setflag 0x311
releaseall
end

Aide_Route16_Idle:
faceplayer
lock
msgbox gText_Thats_Terablast MSG_NORMAL
releaseall
end 

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Woman behind Aide Building 

EventScript_Amulet_Woman:
checkflag 0x312
if SET _goto Amulet_Woman_Idle
faceplayer
lock
textcolor 1
msgbox gText_Amulet_Woman MSG_NORMAL
setvar 0x8000 ITEM_AMULET_COIN   @ Was Secret Power
setvar 0x8001 1               
call SystemScript_ObtainItem
textcolor 1
msgbox gText_Thats_AmuletCoin MSG_NORMAL
setflag 0x312
releaseall
end

Amulet_Woman_Idle:
faceplayer
lock
msgbox gText_Thats_AmuletCoin MSG_NORMAL
releaseall
end 