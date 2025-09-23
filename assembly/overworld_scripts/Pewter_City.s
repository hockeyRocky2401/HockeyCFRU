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