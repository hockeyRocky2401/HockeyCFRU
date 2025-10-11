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

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@ Fossil Regenerator Pewter

EventScript_Fossil_Regen:
lockall
faceplayer
textcolor 0
preparemsg gText_Fossil_Regen
waitmsg
waitbuttonpress

// Check for Dome Fossil in Bag
checkitem ITEM_DOME_FOSSIL, 1
compare LASTRESULT, 1
if equal _call AskDome

// Check for Helix Fossil in Bag
checkitem ITEM_HELIX_FOSSIL, 1
compare LASTRESULT, 1
if equal _call AskHelix

// Check for Jaw Fossil
checkitem ITEM_JAW_FOSSIL, 1
compare LASTRESULT, 1
if equal _call AskJaw

// Check for Sail Fossil
checkitem ITEM_SAIL_FOSSIL, 1
compare LASTRESULT, 1
if equal _call AskSail

textcolor 0
preparemsg gText_Fossil_ComeBack
waitmsg
waitbuttonpress
closemessage
releaseall
end

@ Prompts 

AskDome:
    preparemsg gText_WantToReviveDome
    waitmsg
    yesnobox 0, 0
    compare LASTRESULT, 1   @ YES
    if equal _goto Fossil_Dome
    return

AskHelix:
    preparemsg gText_WantToReviveHelix
    waitmsg
    yesnobox 0, 0
    compare LASTRESULT, 1
    if equal _goto Fossil_Helix
    return

AskJaw:
    preparemsg gText_WantToReviveJaw
    waitmsg
    yesnobox 0, 0
    compare LASTRESULT, 1
    if equal _goto Fossil_Jaw
    return

AskSail:
    preparemsg gText_WantToReviveSail
    waitmsg
    yesnobox 0, 0
    compare LASTRESULT, 1
    if equal _goto Fossil_Sail
    return

@ Fossil Gives 

Fossil_Dome:
setvar 0x8000 MOVE_BRINE
setvar 0x8001 MOVE_ANCIENTPOWER
setvar 0x8002 MOVE_RAPIDSPIN
setvar 0x8003 MOVE_LEECHSEED
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
givepokemon SPECIES_KABUTO 25 ITEM_NONE 0 1 0

removeitem ITEM_DOME_FOSSIL, 1
preparemsg gText_Got_Kabuto
playsong 0x101 @ MUS_FANFA1
waitmsg
waitbuttonpress
closemessage
releaseall
end

Fossil_Helix:
setvar 0x8000 MOVE_BRINE
setvar 0x8001 MOVE_HAZE
setvar 0x8002 MOVE_ANCIENTPOWER
setvar 0x8003 MOVE_SWEETSCENT
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
givepokemon SPECIES_OMANYTE 25 ITEM_NONE 0 1 0

removeitem ITEM_HELIX_FOSSIL, 1
preparemsg gText_Got_Omanyte
playsong 0x101 @ MUS_FANFA1
waitmsg
waitbuttonpress
closemessage
releaseall
end

Fossil_Jaw:
setvar 0x8000 MOVE_CURSE
setvar 0x8001 MOVE_DRAGONTAIL
setvar 0x8002 MOVE_ROCKPOLISH
setvar 0x8003 MOVE_SHADOWBALL
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
givepokemon SPECIES_TYRUNT 25 ITEM_NONE 0 1 0

removeitem ITEM_JAW_FOSSIL, 1
preparemsg gText_Got_Tyrunt
playsong 0x101 @ MUS_FANFA1
waitmsg
waitbuttonpress
closemessage
releaseall
end

Fossil_Sail:
setvar 0x8000 MOVE_ANCIENTPOWER
setvar 0x8001 MOVE_AURORABEAM
setvar 0x8002 MOVE_MIST
setvar 0x8003 MOVE_THRASH
random NUM_NATURES
setvar 0x8004, LASTRESULT       @ random naturesetvar 0x8005 0
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
givepokemon SPECIES_AMAURA 25 ITEM_NONE 0 1 0

removeitem ITEM_SAIL_FOSSIL, 1
preparemsg gText_Got_Amaura
playsong 0x101
waitmsg
waitbuttonpress
closemessage
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ TestScript 

EventScript_Trainer_Test:
lockall 
trainerbattle3 0, 381, 0, gText_Ariana_PreBattle
goto TestEnd
end 

TestEnd:
lockall
preparemsg gText_Archie_Loss
waitmsg
waitbuttonpress
closemessage
releaseall
end
 