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
lockall
faceplayer
textcolor 1
preparemsg gText_Want_Egg
waitmsg
yesnobox 0, 0
compare LASTRESULT, 1
if equal _goto Give_Egg
preparemsg gText_Egg_Again
waitmsg
waitbuttonpress
closemessage
releaseall
end

Give_Egg:
giveegg SPECIES_TOGEPI
setflag 0x31A
textcolor 0xFF
preparemsg gText_Got_Egg
playsong 0x101
waitmsg
waitbuttonpress
goto Daycare_Lady_Idle

Daycare_Lady_Idle:
lockall
faceplayer
textcolor 1
preparemsg gText_Care_Egg
waitmsg
waitbuttonpress
closemessage
releaseall
end