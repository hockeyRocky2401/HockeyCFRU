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
@ setvar 0x8000 ITEM_WACAN_BERRY    @ which item
@ setvar 0x8001 1                @ how many
@ additem 0x8000 0x8001
@ putitemaway 0x8000
setflag 0x30A
releaseall
end