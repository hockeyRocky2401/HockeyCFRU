.align 2
.thumb

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_Pallet_FatGuy

EventScript_Pallet_FatGuy:
    faceplayer
    lock
    setflag 0x926
    setflag 0x828
    setflag 0x4BD
    givepokemon 0x11A 0x5 0x0 0x0 0x0 0x0
    givepokemon 0x510 0x5 0x0 0x0 0x0 0x0
    givepokemon 0x456 0x5 0x0 0x0 0x0 0x0
    givepokemon 0x22C 0x5 0x0 0x0 0x0 0x0
    givepokemon 0x99 0x5 0x0 0x0 0x0 0x0
    giveegg 0x1
    setvar 0x8001 0xFD
    special 0xD1
    msgbox gText_TestScript MSG_NORMAL
    release
    end

.align 2
.global EventScript_Pallet_Girl

EventScript_Pallet_Girl:
    faceplayer
    lock
    msgbox gText_PalletGirl_Text1 MSG_YESNO
    compare LASTRESULT 0x1
    if YES _goto PalletGirl_ShowFollowerMon
    setflag 0xa02
    setflag 0xa03
    hidefollowermon
    setflag 0xA0B
    clearflag 0x4BD
    special 0xD2
    release
    end

PalletGirl_ShowFollowerMon:
    callasm ChangeFollowerPalette
    showfollowermon
    special 0xD1
    setflag 0x4BD
    release
    end

.align 2

.global EventScript_ChangeTeraTypeNPC
.global EventScript_Pallet_AideGuy

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/* 
EventScript_ChangeTeraTypeNPC:
    lock
    faceplayer
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
    msgbox gText_ChangeTeraTypeNPCFetchTeraNormal MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFighting:
    setvar 0x8001 TYPE_FIGHTING
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraFighting MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFlying:
    setvar 0x8001 TYPE_FLYING
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraFlying MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetPoison:
    setvar 0x8001 TYPE_POISON
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraPoison MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetGround:
    setvar 0x8001 TYPE_GROUND
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraGround MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetRock:
    setvar 0x8001 TYPE_ROCK
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraRock MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetBug:
    setvar 0x8001 TYPE_BUG
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraBug MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetGhost:
    setvar 0x8001 TYPE_GHOST
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraGhost MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetSteel:
    setvar 0x8001 TYPE_STEEL
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraSteel MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFire:
    setvar 0x8001 TYPE_FIRE
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraFire MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetWater:
    setvar 0x8001 TYPE_WATER
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraWater MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetGrass:
    setvar 0x8001 TYPE_GRASS
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraGrass MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetElectric:
    setvar 0x8001 TYPE_ELECTRIC
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraElectric MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetPsychic:
    setvar 0x8001 TYPE_PSYCHIC
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraPsychic MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetIce:
    setvar 0x8001 TYPE_ICE
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraIce MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetDragon:
    setvar 0x8001 TYPE_DRAGON
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraDragon MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetDark:
    setvar 0x8001 TYPE_DARK
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraDark MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetFairy:
    setvar 0x8001 TYPE_FAIRY
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraFairy MSG_NORMAL
    release
    end

EventScript_ChangeTeraTypeNPC_SetStellar:
    setvar 0x8001 TYPE_STELLAR
    callasm ChangeTeraTypeInOW
    buffernumber 0x1 0x4001
    msgbox gText_ChangeTeraTypeNPCFetchTeraStellar MSG_NORMAL
    release
    end
    */

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
EventScript_Pallet_AideGuy:
    lock
    faceplayer

        setvar 0x8000 MOVE_EXTREMESPEED
        setvar 0x8001 MOVE_CUT
        setvar 0x8002 MOVE_FLY
        setvar 0x8003 MOVE_DARKVOID
        setvar 0x8004 NATURE_ADAMANT
        setvar 0x8005 0
        setvar 0x8006 28
        setvar 0x8007 28
        setvar 0x8008 28
        setvar 0x8009 28
        setvar 0x800A 28
        setvar 0x800B 28
        givepokemon SPECIES_DRAGONITE 100 ITEM_HEAVY_DUTY_BOOTS 0 1 10

        setvar 0x8000 MOVE_FLAMINGEXIT
        setvar 0x8001 MOVE_FLAMECHARGE
        setvar 0x8002 MOVE_FLAREBLITZ
        setvar 0x8003 MOVE_VOLTSWITCH
        setvar 0x8004 NATURE_MODEST
        setvar 0x8005 0 
        setvar 0x8006 28
        setvar 0x8007 28
        setvar 0x8008 28
        setvar 0x8009 28
        setvar 0x800A 28
        setvar 0x800B 28
        givepokemon SPECIES_RAPIDASH 100 ITEM_LIFE_ORB 0 1 10

        setvar 0x8000 MOVE_DYNAMICPUNCH
        setvar 0x8001 MOVE_KNOCKOFF
        setvar 0x8002 MOVE_ROCKSLIDE
        setvar 0x8003 MOVE_BOUNCE
        setvar 0x8004 NATURE_ADAMANT
        setvar 0x8005 0 @ Shiny
        setvar 0x8006 28
        setvar 0x8007 28
        setvar 0x8008 28
        setvar 0x8009 28
        setvar 0x800A 28
        setvar 0x800B 28
        givepokemon SPECIES_MACHAMP 100 ITEM_LEFTOVERS 0 1 10

        setvar 0x8000 MOVE_DRILLPECK
        setvar 0x8001 MOVE_DOUBLEEDGE
        setvar 0x8002 MOVE_QUICKATTACK
        setvar 0x8003 MOVE_VOLTSWITCH
        setvar 0x8004 NATURE_SERIOUS
        setvar 0x8005 0
        setvar 0x8006 28
        setvar 0x8007 28
        setvar 0x8008 28
        setvar 0x8009 28
        setvar 0x800A 28
        setvar 0x800B 28
        givepokemon SPECIES_DODRIO 100 ITEM_SITRUS_BERRY 0 1 10

        setvar 0x8000 MOVE_FLIPTURN
        setvar 0x8001 MOVE_SHELLSMASH
        setvar 0x8002 MOVE_HYDROPUMP
        setvar 0x8003 MOVE_VOLTSWITCH
        random NUM_NATURES
        copyvar 0x8004, LASTRESULT       @ random naturesetvar 0x8005 0
        setvar 0x8005, 0 @ ability
        setvar 0x8006 28
        setvar 0x8007 28
        setvar 0x8008 28
        setvar 0x8009 28
        setvar 0x800A 28
        setvar 0x800B 28
        givepokemon SPECIES_BLASTOISE 100 ITEM_WHITE_HERB 0 1 0

        setvar 0x8000 MOVE_HYPNOSIS
        setvar 0x8001 MOVE_DREAMEATER
        setvar 0x8002 MOVE_PSYCHIC
        setvar 0x8003 MOVE_FUTURESIGHT
        random NUM_NATURES
        copyvar 0x8004, LASTRESULT       @ random naturesetvar 0x8005 0
        setvar 0x8005, 0 @ ability
        setvar 0x8006 28
        setvar 0x8007 28
        setvar 0x8008 28
        setvar 0x8009 28
        setvar 0x800A 28
        setvar 0x800B 28
        givepokemon SPECIES_HYPNO 100 ITEM_NONE 0 1 0

        setflag 0xA08 @ Tera Battle Flag
        setflag 0x828 @ Give flag 
        setflag 0x234 @ SS Anne Ticket flag 
        setflag 0x2A5 @ Can use hideout lift
        setflag 0x23C @ Grunt outside Silph
        setflag 0x23D @ Got Poke Flute 
        setflag 0x054 @ Snorlax flag Route 12
        additem ITEM_MEGA_RING 1
        additem ITEM_TERA_ORB 1
        additem ITEM_DOME_FOSSIL 0x1
        additem ITEM_POKE_FLUTE 1
        additem ITEM_BICYCLE 1
        additem ITEM_OLD_AMBER 1
        additem ITEM_ABILITY_CAPSULE 10
        additem ITEM_ABILITY_PATCH 10
        additem ITEM_EVIV_DISPLAYER 1
        additem ITEM_PROTEIN 10
        additem ITEM_GOLD_TEETH 1
        msgbox gText_TestScript2 MSG_NORMAL
        release
        end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
