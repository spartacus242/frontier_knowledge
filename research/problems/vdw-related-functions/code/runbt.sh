#!/bin/sh
# Independent check (plain exhaustive backtracking, no forward checking): max size of a 3-AP-free set with x_1 = 0,
# x_2 = f and all gaps <= s, for each f in 1..s; one result file per f in bt_res/ (resumable). Usage: runbt.sh s P
cd "$(dirname "$0")"; s=$1
seq 1 $s | xargs -P "${2:-4}" -I{} sh -c 'f=bt_res/G_s'"$s"'_x2_{}.txt; [ -f "$f" ] && exit 0; ./btv2 G '"$s"' 0 {} | tail -1 > "$f.tmp" && mv "$f.tmp" "$f"'
