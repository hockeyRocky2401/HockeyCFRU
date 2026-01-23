.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Tera Type NPC 
.global EventScript_ChangeTeraTypeNPC
EventScript_ChangeTeraTypeNPC:
    lock
    faceplayer
    checkflag 0x315
    if SET _goto ChangeTeraTypeNPC
    textcolor 0
    preparemsg gText_ChangeTera
    waitmsg
    waitbuttonpress
    setflag 0x315
    goto ChangeTeraTypeNPC

    ChangeTeraTypeNPC:
    lockall
    faceplayer
    textcolor 0
    msgbox gText_ChangeTeraTypeNPCAsk MSG_YESNO
    compare LASTRESULT FALSE
    if TRUE _goto EventScript_ChangeTeraTypeNPCNo

    msgbox gText_ChangeTeraTypeNPCOpenMenu MSG_NORMAL
    special 0x9F  @ Opens Pokemon selection menu
    waitstate

    @ Use vars 0x8002 and 0x8003 instead of 0x8004 and 0x800D
    copyvar 0x8002 0x8004
    copyvar 0x8003 0x800D

    compare 0x8002 0x7
    if TRUE _goto EventScript_ChangeTeraTypeNPCNo
    goto EventScript_ChangeTeraTypeNPCSelected

EventScript_ChangeTeraTypeNPCNo:
    msgbox gText_ChangeTeraTypeNPCNo MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPCSelected:
    special2 0x8003 0x147
    bufferpokemon 0x0 0x8003
    msgbox gText_ChangeTeraTypeNPCSelected MSG_NORMAL

    @ Reset 0x8004 and 0x800D (Required for Scrolling Multichoice)
    resetvar 0x8004
    resetvar 0x800D

    @ Scrolling Multichoice
    setvar 0x8000 0 @ Multichoice Index
    setvar 0x8001 6 @ Number of options to display at once
    special 0x158   @ Scrolling Multichoice
    waitstate

    @ Based on Tera Type
    switch LASTRESULT
        case 0, EventScript_ChangeTeraTypeNPC_SetNormal
        case 1, EventScript_ChangeTeraTypeNPC_SetFighting
        case 2, EventScript_ChangeTeraTypeNPC_SetFlying
        case 3, EventScript_ChangeTeraTypeNPC_SetPoison
        case 4, EventScript_ChangeTeraTypeNPC_SetGround
        case 5, EventScript_ChangeTeraTypeNPC_SetRock
        case 6, EventScript_ChangeTeraTypeNPC_SetBug
        case 7, EventScript_ChangeTeraTypeNPC_SetGhost
        case 8, EventScript_ChangeTeraTypeNPC_SetSteel
        case 9, EventScript_ChangeTeraTypeNPC_SetFire
        case 10, EventScript_ChangeTeraTypeNPC_SetWater
        case 11, EventScript_ChangeTeraTypeNPC_SetGrass
        case 12, EventScript_ChangeTeraTypeNPC_SetElectric
        case 13, EventScript_ChangeTeraTypeNPC_SetPsychic
        case 14, EventScript_ChangeTeraTypeNPC_SetIce
        case 15, EventScript_ChangeTeraTypeNPC_SetDragon
        case 16, EventScript_ChangeTeraTypeNPC_SetDark
        case 17, EventScript_ChangeTeraTypeNPC_SetFairy
        case 18, EventScript_ChangeTeraTypeNPC_SetStellar
        case 0x7F, EventScript_ChangeTeraTypeNPCNo


EventScript_ChangeTeraTypeNPC_SetNormal:
    setvar 0x8001 TYPE_NORMAL
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraNormal MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFighting:
    setvar 0x8001 TYPE_FIGHTING
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraFighting MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFlying:
    setvar 0x8001 TYPE_FLYING
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraFlying MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetPoison:
    setvar 0x8001 TYPE_POISON
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraPoison MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetGround:
    setvar 0x8001 TYPE_GROUND
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraGround MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetRock:
    setvar 0x8001 TYPE_ROCK
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraRock MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetBug:
    setvar 0x8001 TYPE_BUG
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraBug MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetGhost:
    setvar 0x8001 TYPE_GHOST
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraGhost MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetSteel:
    setvar 0x8001 TYPE_STEEL
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraSteel MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFire:
    setvar 0x8001 TYPE_FIRE
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraFire MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetWater:
    setvar 0x8001 TYPE_WATER
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraWater MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetGrass:
    setvar 0x8001 TYPE_GRASS
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraGrass MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetElectric:
    setvar 0x8001 TYPE_ELECTRIC
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraElectric MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetPsychic:
    setvar 0x8001 TYPE_PSYCHIC
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraPsychic MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetIce:
    setvar 0x8001 TYPE_ICE
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraIce MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetDragon:
    setvar 0x8001 TYPE_DRAGON
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraDragon MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetDark:
    setvar 0x8001 TYPE_DARK
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraDark MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFairy:
    setvar 0x8001 TYPE_FAIRY
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraFairy MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetStellar:
    setvar 0x8001 TYPE_STELLAR
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    fadescreen 1
    callasm FadeInFromBlack
    playsong 0x101
    msgbox gText_ChangeTeraTypeNPCFetchTeraStellar MSG_NORMAL
    release
    end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Woman in Pokemon Center 

EventScript_Cant_TeraEvolve:
faceplayer
lock
textcolor 1
msgbox gText_Cant_TeraEvolve MSG_NORMAL
releaseall
end