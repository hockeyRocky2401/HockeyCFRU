.align 2
.thumb

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@Hidden Item Wacan Berry 

EventScript_Route_6_Wacan:
checkflag 0x30A
if SET _goto SystemScript_End
lockall
setflag 0x30A
releaseall
end