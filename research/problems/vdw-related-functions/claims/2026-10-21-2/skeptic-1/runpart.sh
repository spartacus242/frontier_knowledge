#!/bin/bash
# runs one prefix part for s=9; result written atomically
D=/home/claude/frontier_knowledge/research/problems/vdw-related-functions/claims/2026-10-21-2/skeptic-1
f=$D/parts/$1_$2_$3_$4.out
[ -s "$f" ] && exit 0
$D/dfs2 9 $1 $2 $3 $4 > $f.tmp && mv $f.tmp $f
