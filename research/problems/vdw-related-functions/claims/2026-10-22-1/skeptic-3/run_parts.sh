#!/bin/bash
# Resumable partitioned exhaustive search. usage: run_parts.sh s n blockA blockB outdir
# Fixes x_blockA and x_blockB to every pair of values; one process per part; skips parts already done.
s=$1; n=$2; A=$3; B=$4; out=$5; mkdir -p "$out"
D=$(cd "$(dirname "$0")" && pwd)
for va in $(seq $((s*(A-1))) $((s*A-1))); do
 for vb in $(seq $((s*(B-1))) $((s*B-1))); do
  f="$out/part_${A}=${va}_${B}=${vb}.txt"
  if [ -f "$f" ] && grep -q "^RESULT" "$f"; then continue; fi
  start=$(date +%s)
  "$D/mrv3.bin" $s $n --tie=1 ${A}=${va} ${B}=${vb} > "$f.tmp" 2>&1
  echo "elapsed=$(( $(date +%s) - start ))s" >> "$f.tmp"
  mv "$f.tmp" "$f"
 done
done
echo ALLDONE > "$out/ALLDONE"
