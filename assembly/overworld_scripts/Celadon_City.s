.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@Map Script setter

CeladonCity_MapScripts:
    /*@.byte 1
    @ .byte MAP_SCRIPT_ON_TRANSITION
    mapscript MAP_SCRIPT_ON_LOAD, EventScript_Mega_Ring @CeladonCity_OnTransition
    @.byte MAP_SCRIPT_ON_LOAD
    @.4byte EventScript_Mega_Ring
    .byte MAP_SCRIPT_TERMIN */

    mapscript MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
    mapscript MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_OnFrame
    .byte MAP_SCRIPT_TERMIN 


@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ CeladonCity_OnTransition:
    setworldmapflag 0x0896
    end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Oak Post Gym Script

@ EventScript_Mega_Ring:

CeladonCity_OnTransition:
    setworldmapflag 0x0896
    checkflag 0x4B3         @ beaten Erika?
    if SET _goto CheckOak
    goto End

CheckOak:
    checkflag 0x22          @ Oak event done?
    if SET _goto End
    setvar 0x4001, 1        @ trigger Oak

.global End
End:
    end

CeladonCity_OnFrame:
    .hword 0x4001, 1
    .word  CeladonCity_RunOak
    .hword 0, 0            @ terminator

CeladonCity_RunOak:
    setvar 0x4001, 0           @ disable this table
    @setflag 0x22               @ mark Oak event done
    call Mega_Ring
    end

Mega_Ring:
lockall
textcolor 0
applymovement 16, Oak_Approach
waitmovement 0
applymovement 255, Look_Right
waitmovement 0
preparemsg gText_MegaRing
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_MEGA_RING    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
preparemsg gText_Thats_MegaRing
waitmsg
waitbuttonpress

@ --- Starter-based branch (equal = 1) ---
    compare 0x4031, 2
    goto_if 1 Charizardite
    compare 0x4031, 1
    goto_if 1 Blastoisinite
    compare 0x4031, 0
    goto_if 1 Venusaurite

Charizardite:
setvar 0x8000 ITEM_CHARIZARDITE_X    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
setvar 0x8000 ITEM_CHARIZARDITE_Y    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Charizardite 
waitmsg
waitbuttonpress
goto Bye_Oak

Blastoisinite:
setvar 0x8000 ITEM_BLASTOISINITE    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Blastoisinite 
waitmsg
waitbuttonpress
goto Bye_Oak

Venusaurite:
setvar 0x8000 ITEM_VENUSAURITE    @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
textcolor 0
preparemsg gText_Blastoisinite
waitmsg
waitbuttonpress
goto Bye_Oak

Bye_Oak:
textcolor 0
preparemsg gText_Bye_Oak
waitmsg
waitbuttonpress
closemessage
applymovement 16, Oak_Leave
waitmovement 0
hidesprite 16
setflag 0x22
@ setvar 0x403F, 1
releaseall 
end

@ Movement 

Oak_Approach:
.byte walk_down, walk_left, end_m

Oak_Leave:
.byte walk_down, walk_left, walk_down, walk_down, walk_down, walk_down, walk_right, walk_right, walk_right, walk_right, walk_right, walk_right, walk_right, walk_right, end_m