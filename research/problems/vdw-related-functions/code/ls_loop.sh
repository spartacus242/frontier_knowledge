#!/bin/bash
# repeated local-search attempts for w1(3,s) at size n
n=$1; s=$2; for seed in $(seq 1 100000); do r=$(./lsw1 $n $s 0 $seed 10000000 5 - ls_${s}_${n}.txt); echo "$seed $r"; case "$r" in SOLVED*) exit 0;; esac; done
