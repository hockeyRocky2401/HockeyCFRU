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

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Giovanni Script

EventScript_Giovanni_Gym:
lockall
faceplayer
textcolor 0
trainerbattle1 0, 350, 0, gText_Giovanni_Intro, gText_Giovanni_Lost, Giovanni_PostBattle
end

Giovanni_PostBattle:
textcolor 0
preparemsg gText_Giovanni_PostBattle
waitmsg
waitbuttonpress
textcolor 0xFF
preparemsg gText_Got_EarthBadge
playsong 0x101
waitfanfare
waitmsg
waitbuttonpress
setflag 0x0AD @ Misc Kanto Rockets
setflag 0x4B7 @ Defeated Giovanni 
setflag 0x827 @ Got Earth Badge 
setvar 0x4054, 3 @ Blue Battle Var
textcolor 0
preparemsg gText_Here_Earthquake
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_TM26    
setvar 0x8001 1               
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Thats_Earthquake
waitmsg
waitbuttonpress
closemessage
fadescreen 1
hidesprite 8
setflag 0x055 @ Giovanni Flag
callasm FadeInFromBlack
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Dream Eater Guy 

EventScript_Wide_Lens:
checkflag 0x316
if SET _goto Wide_Lens_Idle
lockall
faceplayer
textcolor 0
preparemsg gText_Here_Wide_Lens
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_WIDE_LENS
setvar 0x8001 1               
call SystemScript_ObtainItem
setflag 0x316
goto Wide_Lens_Idle

Wide_Lens_Idle:
lockall
faceplayer
textcolor 0
preparemsg gText_Thats_WideLens
waitmsg
waitbuttonpress
closemessage
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Rare Candy Youngster

EventScript_Rare_Candy:
checkflag 0x318
if SET _goto Rare_Candy_Idle
lockall
faceplayer
textcolor 0
preparemsg gText_Want_RareCandy
waitmsg
showmoney 0, 0, 0
yesnobox 0, 0
compare LASTRESULT, 1
if equal _goto Give_Rare_Candy
hidemoney 0, 0
preparemsg gText_Candy_Again
waitmsg
waitbuttonpress
closemessage
releaseall
end

Give_Rare_Candy:
checkmoney 5000, 0
compare LASTRESULT, true  @ compare against 1
if notequal _goto Not_Enough_Candy
playse 248
removemoney 5000, 0
updatemoney 0, 0, 0
waitse
setvar 0x8000 ITEM_RARE_CANDY    @ which item
setvar 0x8001 200                @ how many
call SystemScript_ObtainItem
setflag 0x318
hidemoney 0, 0
goto Rare_Candy_Idle

Not_Enough_Candy:
hidemoney 0, 0
preparemsg gText_Not_Enough_Candy
waitmsg
waitbuttonpress
closemessage
releaseall
end

Rare_Candy_Idle:
lockall
faceplayer
textcolor 0
preparemsg gText_Got_Candy
waitmsg
waitbuttonpress
closemessage
releaseall
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Poke Vial explainer Pokemon Center 

EventScript_PokeVial_Explain:
lockall
faceplayer
textcolor 0
preparemsg gText_PokeVial_Explain
waitmsg
waitbuttonpress
closemessage
releaseall
end

