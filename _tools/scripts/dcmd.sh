#!/bin/bash
# dcmd.sh <workDir> <js expression>  -> sends the next command to drive.mjs and prints the result
D="$1"; shift
n=$(( $(ls "$D" | grep -c '^cmd_') + 1 ))
printf '%s' "$*" > "$D/cmd_$n.tmp" && mv "$D/cmd_$n.tmp" "$D/cmd_$n.js"
for i in $(seq 1 600); do [ -f "$D/res_$n.json" ] && break; sleep 0.5; done
echo "#$n  shot: $D/shot_$n.png"; cat "$D/res_$n.json" | head -c 6000; echo
