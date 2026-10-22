#!/bin/sh
# Resumable independent check: btp for each forced (g1, g2) with g1 in the given list; results in btp_res/. Usage: runbtp.sh s P g1...
cd "$(dirname "$0")"; s=$1; P=$2; shift 2; mkdir -p btp_res
for a in "$@"; do for b in $(seq 1 $s); do echo "$a $b"; done; done | xargs -P "$P" -L 1 sh -c 'f=btp_res/G_s'"$s"'_$0_$1.txt; [ -f "$f" ] && exit 0; ./btp '"$s"' $0 $1 > "$f.tmp" && mv "$f.tmp" "$f"'
