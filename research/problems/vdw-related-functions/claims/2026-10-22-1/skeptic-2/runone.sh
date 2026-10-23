#!/bin/sh
# usage: runone.sh s n solver ; resumable: skips if result file exists
f=r_$1_$2_$3.txt; [ -f $f ] && exit 0
timeout 1500 python3 sat2.py $1 $2 $3 > $f.tmp 2>&1 && mv $f.tmp $f
