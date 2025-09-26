.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_Pewter_Aide:
lockall
faceplayer
textcolor 0
preparemsg gPewter_Aide
waitmsg
waitbuttonpress
closemessage
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Old Man in Museum 
EventScript_OldMan_SitrusBerry:
checkflag 0x302
if SET _goto OldMan_Museum
lockall
faceplayer
textcolor 0
preparemsg gOldMan_Sitrus
waitmsg
waitbuttonpress
@ additem ITEM_SITRUS_BERRY
setvar 0x8000 ITEM_SITRUS_BERRY    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gThats_Sitrus
waitmsg        
waitbuttonpress
closemessage
setflag 0x302
releaseall
end

OldMan_Museum:
lockall
faceplayer
preparemsg gOldMan_Museum
waitmsg
waitbuttonpress
closemessage
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Pikachu father Giorgio
EventScript_Pikachu_Father:
checkflag 0x303
if SET _goto Father_Museum_Idle
lockall
faceplayer
textcolor 0
preparemsg gText_Pikachu_Father
waitmsg
yesnobox 0, 0
compare LASTRESULT, 1
if equal _goto Pikachu_FatherBattle
preparemsg gText_Giorgio_NoBattle
waitmsg        
waitbuttonpress
closemessage
releaseall
end

Pikachu_FatherBattle:
    trainerbattle1 0, 743, 0, gText_Giorgio_Battle, gText_Giorgio_PostBattle Father_Museum 
    waitmsg
    waitbuttonpress
    closemessage
    releaseall
    end

Father_Museum:
lockall
faceplayer
textcolor 0
preparemsg gText_Giorgio_Outro
waitmsg
waitbuttonpress
closemessage
setflag 0x303
releaseall
end

Father_Museum_Idle:
lockall
faceplayer
textcolor 0
preparemsg gText_Giorgio_Outro
waitmsg
waitbuttonpress
closemessage
releaseall
end