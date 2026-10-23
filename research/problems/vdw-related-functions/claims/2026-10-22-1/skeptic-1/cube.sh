#!/bin/bash
# cube.sh s n outdir c a b : run one cube (center block offset c, left neighbor a, right neighbor b)
D=/home/claude/frontier_knowledge/research/problems/vdw-related-functions/claims/2026-10-22-1/skeptic-1
s=$1; n=$2; out=$3; c=$4; a=$5; b=$6; m=$(( (n-1)/2 ))
f=$out/cube_${c}_${a}_${b}.txt
[ -s "$f" ] && exit 0
r=$(timeout 1500 $D/fc.bin $s $n $m $c $((m-1)) $a $((m+1)) $b) && [ -n "$r" ] && echo "$r" > $f.tmp && mv $f.tmp $f
