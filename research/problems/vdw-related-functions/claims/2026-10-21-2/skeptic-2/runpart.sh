#!/bin/bash
# resumable: runs part $1 of 1000 (S=9,N=49,D=9) unless already complete
cd "$(dirname "$0")"
f=parts/p$1.txt
grep -q RESULT $f 2>/dev/null && exit 0
./bt 9 49 9 $1 1000 > $f.tmp && mv $f.tmp $f
