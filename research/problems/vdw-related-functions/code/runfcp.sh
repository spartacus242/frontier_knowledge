#!/bin/sh
# Resumable: decide "is there a 3-AP-free set of T integers, x_1 = 0, gaps <= s, first two gaps (a, b)?" for every (a, b),
# P at a time, one result file per cube in fcp_res/; finished cubes are skipped. Usage: runfcp.sh s T P
cd "$(dirname "$0")"; s=$1; T=$2
for a in $(seq 1 $s); do for b in $(seq 1 $s); do echo "$a $b"; done; done | xargs -P "${3:-4}" -L 1 sh -c '
  f=fcp_res/G_s'"$s"'_T'"$T"'_$0_$1.txt; [ -f "$f" ] && exit 0
  /usr/bin/env time -f "%e" true 2>/dev/null; t0=$(date +%s); r=$(./fcp G '"$s"' '"$T"' $0 $1); [ -n "$r" ] && echo "$r secs=$(( $(date +%s) - t0 ))" > "$f.tmp" && mv "$f.tmp" "$f"'
