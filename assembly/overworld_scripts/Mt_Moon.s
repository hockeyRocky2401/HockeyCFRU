.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Fossil Excavator
EventScript_Fossil_Excavator:
checkflag 0x305
if SET _goto Excavator_Idle
faceplayer
lock
textcolor 0
preparemsg gText_Excavator
waitmsg
waitbuttonpress
multichoiceoption gText_Jaw_Fossil 0
multichoiceoption gText_Sail_Fossil 1
multichoiceoption gText_Neither 2   
multichoice 0x0 0x0 THREE_MULTICHOICE_OPTIONS 0x0

switch LASTRESULT
case 0, Excavator_JawFossil
case 1, Excavator_SailFossil
case 2, Excavator_Neither

Excavator_JawFossil:
setvar 0x8000 ITEM_JAW_FOSSIL    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
msgbox gThats_JawSailFossil MSG_NORMAL
setflag 0x305
releaseall
end

Excavator_SailFossil:
setvar 0x8000 ITEM_SAIL_FOSSIL    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
msgbox gThats_JawSailFossil MSG_NORMAL
setflag 0x305
releaseall
end

Excavator_Neither:
textcolor 0
msgbox gText_Excavator_Neither MSG_NORMAL
releaseall
end

Excavator_Idle:
faceplayer
lock
textcolor 0
msgbox gThats_JawSailFossil MSG_NORMAL
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@'

@ Nurse Mt. Moon
EventScript_Nurse_MtMoon:
faceplayer
lock
textcolor 1
msgbox gText_Nurse_MtMoon MSG_NORMAL
special 0x0
playse 0x1 
textcolor 1
msgbox gText_Nurse_Done MSG_NORMAL
releaseall
end