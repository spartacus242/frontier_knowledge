#!/bin/bash
D=/home/claude/frontier_knowledge/research/problems/vdw-related-functions/claims/2026-10-21-2/skeptic-1
for a in 1 2 3 4 5 6 7 8 9; do for b in 1 2 3 4 5 6 7 8 9; do for c in 1 2 3 4 5 6 7 8 9; do for d in 1 2 3 4 5 6 7 8 9; do
 [ -s $D/parts/${a}_${b}_${c}_${d}.out ] || echo "$a $b $c $d"; done; done; done; done | xargs -P 3 -n 4 $D/runpart.sh
echo DONE > $D/driver.done
