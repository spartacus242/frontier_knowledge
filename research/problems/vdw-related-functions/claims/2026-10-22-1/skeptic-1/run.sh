#!/bin/bash
# run.sh s n outdir : all cubes, center offset c in 0..floor((s-1)/2) (reflection symmetry), 2 parallel
D=/home/claude/frontier_knowledge/research/problems/vdw-related-functions/claims/2026-10-22-1/skeptic-1
s=$1; n=$2; out=$3; mkdir -p $out
for c in $(seq 0 $(( (s-1)/2 ))); do for a in $(seq 0 $((s-1))); do for b in $(seq 0 $((s-1))); do echo $c $a $b; done; done; done |
  xargs -P2 -n3 $D/cube.sh $s $n $out
