#!/bin/bash
# ld.sh tap X Y | hold X Y MS | shot NAME | burst NAME N  — drive the original game in LDPlayer (1600x900)
A="/c/LDPlayer/LDPlayer9/adb.exe -s emulator-5554"
S="C:/Users/GM_CUO~1/AppData/Local/Temp/claude/d--Source-Game-zombies-derby-pixel-survival/ff7ae2f5-aa9a-46fe-920f-74db4ccbfd3a/scratchpad/ld"
mkdir -p "$S"
case "$1" in
  tap) $A shell input tap $2 $3 ;;
  hold) $A shell input swipe $2 $3 $2 $3 $4 ;;
  shot) $A exec-out screencap -p > "$S/$2.png"; echo "$S/$2.png" ;;
  sh) shift; $A shell "$@" ;;
esac
