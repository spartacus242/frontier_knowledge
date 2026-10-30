#!/bin/bash
# Climb with mext.py: from the witness for T-1 blocks, try T blocks with the central `keep` blocks fixed and shift 0 or 1,
# keep in 40, 30, 20, 10; on SAT check with checkM.py, save witness/M_s8_<T>blocks.txt and continue.
cd "$(dirname "$0")"; s=$1; T=$2
while :; do
  prev=../witness/M_s${s}_$((T-1))blocks.txt; got=""
  for keep in 40 30 20 10; do for sh in 1 0; do
    r=$(timeout 1200 python3 mext.py $s $T $prev $keep $sh); echo "$r" | cut -c1-60
    case "$r" in *" SAT "*) w=$(echo "$r" | sed 's/.*: //'); python3 checkM.py $s $T $w | grep -q OK && { echo "$w" > ../witness/M_s${s}_${T}blocks.txt; got=1; }; esac
    [ -n "$got" ] && break
  done; [ -n "$got" ] && break; done
  [ -z "$got" ] && { echo "stuck at T=$T"; break; }
  T=$((T+1))
done
