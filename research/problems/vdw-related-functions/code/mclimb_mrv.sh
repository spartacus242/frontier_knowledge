#!/bin/bash
# Witness climb for M(3,s) with the complete cube search: for T = T0, T0+1, ... run runmrv16.sh until some cube reports
# FOUND, then stop that run and go to T+1. Stops at the first T where every cube reports NONE (that T is then exhausted).
cd "$(dirname "$0")"; s=$1; T=$2
while :; do
  setsid ./runmrv16.sh $s $T 4 > m8/run$T.log 2>&1 & pid=$!
  while kill -0 $pid 2>/dev/null; do
    if ls mrv16_res/ | grep "^s${s}_T${T}_" | sed "s#^#mrv16_res/#" | xargs -r grep -l FOUND 2>/dev/null | grep -q .; then
      kill -- -$pid 2>/dev/null; sleep 2; rm -f mrv16_res/*.tmp; echo "T=$T FOUND $(date -u +%H:%M)"; break
    fi
    sleep 15
  done
  if ! ls mrv16_res/ | grep "^s${s}_T${T}_" | sed "s#^#mrv16_res/#" | xargs -r grep -l FOUND 2>/dev/null | grep -q .; then
    echo "T=$T run ended with no FOUND $(date -u +%H:%M)"; break
  fi
  T=$((T + 1))
done
