.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Dubious Disc NPC

EventScript_Dubious_Disc:
checkflag 0x317
if SET _goto Dubious_Idle
faceplayer
lock
textcolor 0
preparemsg gText_Here_Dubious
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_DUBIOUS_DISC
setvar 0x8001 1               
call SystemScript_ObtainItem
setflag 0x317
goto Dubious_Idle

Dubious_Idle:
faceplayer
lock
textcolor 0
msgbox gText_Thats_Dubious MSG_NORMAL
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Aerodactyl Regenerator

EventScript_Aerodactyl_Regen:
faceplayer
lock
textcolor 0
preparemsg gText_Aerodactyl_Regen
waitmsg
waitbuttonpress
checkitem ITEM_OLD_AMBER, 1
compare LASTRESULT, 1
if equal _call AskAmber

textcolor 0
preparemsg gText_Amber_ComeBack
waitmsg
waitbuttonpress
closemessage
releaseall
end

AskAmber:
preparemsg gText_WantToReviveAmber
    waitmsg
    yesnobox 0, 0
    compare LASTRESULT, 1   @ YES
    if equal _goto Fossil_Amber
    return

Fossil_Amber:
fadescreen 1
callasm FadeInFromBlack
setvar 0x8000 MOVE_HYPERBEAM
setvar 0x8001 MOVE_STONEEDGE
setvar 0x8002 MOVE_WHIRLWIND
setvar 0x8003 MOVE_BOOMBURST
random NUM_NATURES
copyvar 0x8004, LASTRESULT       @ random naturesetvar 0x8005 0
random 1            @ rolls 0–1 Ability
copyvar 0x8005, LASTRESULT
random 32        @ generates 0–31
copyvar 0x8006, LASTRESULT  @ HP IV
random 32
copyvar 0x8007, LASTRESULT  @ Attack IV
random 32
copyvar 0x8008, LASTRESULT  @ Defense IV
random 32
copyvar 0x8009, LASTRESULT  @ Speed IV
random 32
copyvar 0x800A, LASTRESULT  @ SpAtk IV
random 32
copyvar 0x800B, LASTRESULT  @ SpDef IV
givepokemon SPECIES_AERODACTYL 60 ITEM_NONE 0 1 0

removeitem ITEM_OLD_AMBER, 1
msgbox gText_Got_Aerodactyl MSG_NORMAL
releaseall
end