.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Move Reminder Guy.

EventScript_Move_Reminder:
faceplayer
lock
textcolor 0
msgbox gText_No_Need MSG_NORMAL
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Two Island Mart

.equ   VAR_RESULT, 0x800D
.extern sTwoIslandMart
.extern GetQuestLogState
SystemScript_TwoIslandMart:
lock
faceplayer
preparemsg gText_GlobalMart_Hi
waitmsg
.byte  0x86              @ pokemart opcode
.4byte sTwoIslandMart
preparemsg gText_GlobalMart_Again
waitmsg
waitbuttonpress
closemessage
release
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Newer Moves Guy

.equ   VAR_RESULT, 0x800D
.extern sNewTMMart
.extern GetQuestLogState
SystemScript_Rare_Moves:
lock
faceplayer
preparemsg gText_RareMoves_Hi
waitmsg
.byte  0x86              @ pokemart opcode
.4byte sNewTMMart
preparemsg gText_GlobalMart_Again
waitmsg
waitbuttonpress
closemessage
release
end