.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Route 2 Building Tera Orb Aide 

EventScript_TeraOrb_Aide:
checkflag 0x301
@ compare  0x800D, 1         @ set compare flags based on VAR_RESULT
@ goto_if equal, skip @ if already set, bail out
if SET _goto SystemScript_End
lockall
applymovement 3, Movement_Aide
waitmovement 0
textcolor 0 
preparemsg gText_HereIsTera
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_TERA_ORB    @ which item
@ setvar 0x8000 0x306            @ which item
setvar 0x8001 1                @ how many
call SystemScript_ObtainItem
@ additem ITEM_TERA_ORB, 1
@ textcolor BLACK
@ preparemsg gGot_Tera_Orb
@ playsong 0x101 @ Fanfare 1
@ waitfanfare
@ waitbuttonpress
setflag 0xA08 @ FLAG_TERA_BATTLE
@ putitemaway ITEM_TERA_ORB, 1
@ waitbuttonpress
textcolor 0
preparemsg gThats_Tera
waitmsg
waitbuttonpress
closemessage
applymovement 3, Exit_Aide
waitmovement 0
hidesprite 3
setflag 0x300 @ Aide Flag
setflag 0x301 @ Aide Script Flag
releaseall
end

@ Aide Movement
Movement_Aide:
.byte walk_down, walk_down, end_m

Exit_Aide:
.byte walk_up, walk_up, walk_up, walk_up, walk_up, walk_up, end_m

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

@ Aide in eastern building. Gives Fly

EventScript_Aide_East:
checkflag 0x30C
if SET _goto Aide_East_Idle
lockall
faceplayer
textcolor 0
preparemsg gText_Aide_East
waitmsg
waitbuttonpress
setvar 0x8000 ITEM_HM02_FLY    @ Was U-Turn
setvar 0x8001 1               
call SystemScript_ObtainItem
textcolor 0
@ preparemsg gText_Thats_UTurn
preparemsg gText_Thats_Fly
waitmsg
waitbuttonpress
closemessage
setflag 0x30C
releaseall
end

Aide_East_Idle:
lockall
faceplayer
preparemsg gText_Thats_Fly
waitmsg
waitbuttonpress
closemessage
releaseall
end 