.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Day Care Lady

EventScript_DayCare_Lady:
checkflag 0x31A
if SET _goto Daycare_Lady_Idle
faceplayer
lock
textcolor 1
preparemsg gText_Want_Egg
waitmsg
yesnobox 0, 0
compare LASTRESULT, 1
if equal _goto Give_Egg
msgbox gText_Egg_Again MSG_NORMAL
releaseall
end

Give_Egg:
giveegg SPECIES_TOGEPI
setflag 0x31A
textcolor 0xFF
msgbox gText_Got_Egg MSG_NORMAL
goto Daycare_Lady_Idle

Daycare_Lady_Idle:
faceplayer
lock
textcolor 1
msgbox gText_Care_Egg MSG_NORMAL
releaseall
end