#!/bin/sh
# Resumable: decide "is there a 3-AP-free choice of one element in each of T blocks of length s, with the first three
# offsets (a, b, c)?" for every (a, b, c), P at a time; one result file per cube in fcpm_res/. Usage: runfcpm.sh s T P
cd "$(dirname "$0")"; s=$1; T=$2; mkdir -p fcpm_res
for a in $(seq 0 $((s-1))); do for b in $(seq 0 $((s-1))); do for c in $(seq 0 $((s-1))); do echo "$a $b $c"; done; done; done |
  xargs -P "${3:-4}" -L 1 sh -c 'f=fcpm_res/M_s'"$s"'_T'"$T"'_$0_$1_$2.txt; [ -f "$f" ] && exit 0
  t0=$(date +%s); r=$(./fcpm M '"$s"' '"$T"' $0 $1 $2); echo "$r secs=$(( $(date +%s) - t0 ))" > "$f.tmp" && mv "$f.tmp" "$f"'
