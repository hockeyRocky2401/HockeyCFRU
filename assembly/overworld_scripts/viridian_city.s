.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScriptP_ViridianCity_YoungMan
.global EventScriptP_ViridianCity_Youngster

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
EventScriptP_ViridianCity_YoungMan:
    lock
    faceplayer

    giveegg SPECIES_IVYSAUR
    setflag 0xA07 @ FLAG_TERA_BATTLE
@   setflag 0x918
    additem ITEM_DYNAMAX_BAND 1
    trainerbattle0 0 329 0 gText_ViridianCity_BattleStart gText_ViridianCity_BattleEnd
    msgbox gText_ViridianCity_BattleOver MSG_NORMAL

    release
    end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
EventScriptP_ViridianCity_Youngster:
    lock
    faceplayer
    additem ITEM_ICIUM_Z 1
    additem ITEM_MEGA_RING 1
@   additem ITEM_TM19 1

@   giveegg SPECIES_IVYSAUR

    @ Relatable Mons
    setvar 0x8000 MOVE_AURASPHERE
    setvar 0x8001 MOVE_DAZZLINGGLEAM
    setvar 0x8002 MOVE_THUNDERWAVE
    setvar 0x8003 MOVE_MOONLIGHT
    setvar 0x8004 NATURE_MODEST
    setvar 0x8005 NOT_SHINY
    setvar 0x8006 16
    setvar 0x8007 16
    setvar 0x8008 16
    setvar 0x8009 16
    setvar 0x800A 16
    setvar 0x800B 16
    givepokemon SPECIES_TOGETIC 26 ITEM_SHINY_STONE 0 1 10

    @ Set-Up Gyarados
    setvar 0x8000 MOVE_WATERFALL
    setvar 0x8001 MOVE_ICEFANG
    setvar 0x8002 MOVE_DRAGONDANCE
    setvar 0x8003 MOVE_EARTHQUAKE
    setvar 0x8004 NATURE_ADAMANT
    setvar 0x8005 IS_SHINY
    setvar 0x8006 16
    setvar 0x8007 16
    setvar 0x8008 16
    setvar 0x8009 16
    setvar 0x800A 16
    setvar 0x800B 16
    givepokemon SPECIES_GYARADOS 40 ITEM_WATERIUM_Z 0 1 5

    setflag 0x82F
    @ Mega Blaziken
    setvar 0x8000 MOVE_BLAZEKICK
    setvar 0x8001 MOVE_SKYUPPERCUT
    setvar 0x8002 MOVE_THUNDERPUNCH
    setvar 0x8003 MOVE_SWORDSDANCE
    setvar 0x8004 NATURE_ADAMANT
    setvar 0x8005 NOT_SHINY
    setvar 0x8006 31
    setvar 0x8007 31
    setvar 0x8008 31
    setvar 0x8009 31
    setvar 0x800A 31
    setvar 0x800B 31
    givepokemon SPECIES_BLAZIKEN 40 ITEM_BLAZIKENITE 0 9

    additem ITEM_MASTER_BALL 1
    msgbox gText_ViridianCity_BattleOver MSG_NORMAL
    release
    end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Viridian Mart Script
.equ VAR_RESULT,  0x800D
.equ ITEM_OAKS_PARCEL, 349
.extern sAllGameMart
EventScript_ViridianClerk:
lock
faceplayer

checkitem ITEM_OAKS_PARCEL, 1
compare VAR_RESULT, 1
goto_if 1, EventScript_Viridian_ParcelMessage
@ goto_if 0, EventScript_ViridianMart

EventScript_ViridianMart:
preparemsg gText_Viridian_HiThere
waitmsg

@ pokemart <auto>  → override to our global list
.byte  0x86                 @ pokemart opcode
.4byte sAllGameMart         @ pointer to your C array

@ "Please come again!"
preparemsg gText_Viridian_PleaseAgain
waitmsg
waitbuttonpress
closemessage
release
end 

@ Viridian Mart Parcel
EventScript_Viridian_ParcelMessage:
preparemsg gText_Viridian_ParcelThanks
waitmsg
waitbuttonpress
closemessage
release
end
