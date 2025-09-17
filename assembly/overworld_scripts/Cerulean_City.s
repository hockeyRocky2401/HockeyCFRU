.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Cerulean City — Rival by Nugget Bridge (no Fame Checker)

EventScript_Rival_NoFameChecker1:
@ Trigger A (tile #1 near Exit A)
setvar 0x4001, 0        @ VAR_TEMP_1 = Exit A variant 0
call Rival_NoFameChecker
end

EventScript_Rival_NoFameChecker2:
@ Trigger B (tile #2 near Exit A)
setvar 0x4001, 1        @ VAR_TEMP_1 = Exit A variant 1
call Rival_NoFameChecker
end

EventScript_Rival_NoFameChecker3:
@ Trigger C (tile near Exit B)
setvar 0x4001, 2        @ VAR_TEMP_1 = Exit B
call Rival_NoFameChecker
end

Rival_NoFameChecker:
    lockall
    textcolor 0
    @ setvar VAR_TEMP_1, 0

    @ Entrance + approach
    playsong 0x191, 1
    showsprite 8

    @ after playsong, showsprite 8 …
    compare 0x4001, 0
    goto_if 1 Do_Approach_Center
    compare 0x4001, 1
    goto_if 1 Do_Approach_Right1
    compare 0x4001, 2
    goto_if 1 Do_Approach_Right2

Do_Approach_Center:
    applymovement 8, Movement_Rival_Approach
    goto Approach_Done

Do_Approach_Right1:
    applymovement 8, Movement_Rival_Approach_Right1
    goto Approach_Done

Do_Approach_Right2:
    applymovement 8, Movement_Rival_Approach_Right2
    goto Approach_Done

Approach_Done:
    waitmovement 0

    @ applymovement 8, Movement_Rival_Approach
    @ waitmovement 0

    @ Pre-battle taunt
    preparemsg gText_Rival_Cerulean_Intro
    waitmsg
    waitbuttonpress
    closemessage
    setvar 0x800F, 8

    @ --- Starter-based branch (equal = 1) ---
    @ compare 0x4031, 2
    @ goto_if 1 Do_Rival_Section2
    @ compare 0x4031, 1
    @ goto_if 1 Do_Rival_Section3
    @ compare 0x4031, 0
    @ goto_if 1 Do_Rival_Section4
    @ goto After_Rival_Sections

    @ --- Starter-based branch (equal = 1) ---
    compare 0x4031, 2
    goto_if 1 Cerulean_Rival_Section2
    compare 0x4031, 1
    goto_if 1 Cerulean_Rival_Section3
    compare 0x4031, 0
    goto_if 1 Cerulean_Rival_Section4
    goto After_Rival_Sections

/*Do_Rival_Section2:
    call Cerulean_Rival_Section2
    goto After_Rival_Sections

Do_Rival_Section3:
    call Cerulean_Rival_Section3
    goto After_Rival_Sections

Do_Rival_Section4:
    call Cerulean_Rival_Section4
    goto After_Rival_Sections*/

After_Rival_Sections:

    @ Post-battle Bill dialogue
    setvar 0x8004, 13
    setvar 0x8005, 0
    @ special SetFlavorTextFlagFromSpecialVars
    @ preparemsg gText_Rival_Cerulean_Outro
    @ waitmsg
    @ waitbuttonpress
    @ closemessage

    @ Departure cue
    @ playsong MUS_RIVAL_EXIT, 0
    

    @ --- Exit branching (equal = 1) ---
    compare 0x4001, 2
    goto_if 1 Do_Rival_ExitB     @ 2 -> ExitB
    goto Do_Rival_ExitA          @ 0/1 -> ExitA

Do_Rival_ExitA:
    applymovement 255, Movement_Player_ExitA_Pose
    waitmovement 0
    applymovement 8, Movement_Rival_ExitA
    waitmovement 0
    goto After_Rival_Exits

Do_Rival_ExitB:
    applymovement 255, Movement_Player_ExitB_Pose
    waitmovement 0
    applymovement 8, Movement_Rival_ExitB
    waitmovement 0
    goto After_Rival_Exits

After_Rival_Exits:

    @ --- Gift section removed ---
    @ (removed) “Oh yeah … present” textbox
    @ (removed) giveitem ITEM_FAME_CHECKER, 1
    @ (removed) “chatty gossip” textbox
    @ --------

    @ Mark the event as completed so it never triggers again
    fadedefault
    hidesprite 8
    setvar 0x4052, 1
    setflag 0x029B
    releaseall
    end
    
@ --------------------------------
@ Rival battle sections (as provided)
@ --------------------------------

Cerulean_Rival_Section2:
    trainerbattle1 0, 332, 0, 0, gText_Rival_Cerulean_PostBattle Rival_Cerulean_Outro 
    return

Cerulean_Rival_Section3:
    trainerbattle1 0, 333, 0, 0, gText_Rival_Cerulean_PostBattle Rival_Cerulean_Outro
    return

Cerulean_Rival_Section4:
    trainerbattle1 0, 334, 0, 0, gText_Rival_Cerulean_PostBattle Rival_Cerulean_Outro
    return

@ Post-battle continuation (falls back to your main script flow)
Rival_Cerulean_Outro:
preparemsg gText_Rival_Cerulean_Outro
waitmsg
waitbuttonpress
closemessage
goto After_Rival_Sections


@ --------------------------------
@ Exit branches (wired from your section5/section6)
@ --------------------------------

Cerulean_Rival_ExitA:
    applymovement 255, Movement_Player_ExitA_Pose   @ player look/pose
    waitmovement 0

    applymovement 8, Movement_Rival_ExitA     @ right, then down x7
    waitmovement 0
    pause DELAY_HALFSECOND                                        @ ~half-second (adjust if your repo differs)
    return

    /*applymovement 8, Movement_Rival_ExitA_Part2     @ left, then up x5
    waitmovement 0
    return*/

@ ---- Exit B (route left of player) ----
Cerulean_Rival_ExitB:
    applymovement 255, Movement_Player_ExitB_Pose
    waitmovement 0

    applymovement 8, Movement_Rival_ExitB     @ left, then down x7
    waitmovement 0
    pause DELAY_HALFSECOND
    return

    /*applymovement 8, Movement_Rival_ExitB_Part2     @ right, then up x5
    waitmovement 0
    return*/

@ --------------------------------
@ Movements
@ --------------------------------

Movement_Rival_Approach:
    .byte walk_down, walk_down, walk_down, walk_down, walk_down, end_m

Movement_Rival_Approach_Right1:     @ shift one tile right, then down
    .byte walk_right
    .byte walk_down, walk_down, walk_down, walk_down, walk_down
    .byte end_m

Movement_Rival_Approach_Right2:     @ shift two tiles right, then down
    .byte walk_right, walk_right
    .byte walk_down, walk_down, walk_down, walk_down, walk_down
    .byte end_m

@ --- Player pose blocks from section5/section6 ---

Movement_Player_ExitA_Pose:
    .byte DELAY_HALFSECOND, DELAY_1SECOND           @ if your repo doesn't allow these in tables,
                                                    @ remove them and keep only the walk_in_place lines
    .byte look_right
    .byte look_down
    .byte end_m

Movement_Player_ExitB_Pose:
    .byte DELAY_HALFSECOND, DELAY_1SECOND
    .byte look_left
    .byte look_down
    .byte end_m

@ ---- Exit A path split ----
Movement_Rival_ExitA:
    .byte walk_right
    .byte walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down
    .byte end_m

/*Movement_Rival_ExitA_Part2:
    .byte walk_left
    .byte walk_up, walk_up, walk_up, walk_up, walk_up
    .byte end_m*/

@ ---- Exit B path split ----
Movement_Rival_ExitB:
    .byte walk_left
    .byte walk_down, walk_down, walk_down, walk_down, walk_down, walk_down, walk_down
    .byte end_m

/*Movement_Rival_ExitB_Part2:
    .byte walk_right
    .byte walk_up, walk_up, walk_up, walk_up, walk_up
    .byte end_m*/


