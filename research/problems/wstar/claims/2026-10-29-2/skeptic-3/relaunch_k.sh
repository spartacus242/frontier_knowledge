#!/bin/bash
cd /tmp/claude-0/g2s3
if [ -f kc.pid ] && ps -p "$(cat kc.pid)" >/dev/null 2>&1; then echo "running pid $(cat kc.pid)"; exit 0; fi
if grep -q 'ALL CUBES DONE' kcrun76.log 2>/dev/null; then echo finished; exit 0; fi
echo "=== (re)launch $(date)" >> kcrun76.log
nohup python3 sat_kcubes.py 76 5 2 kcstate76.txt >> kcrun76.log 2>&1 &
echo $! > kc.pid; echo "launched pid $(cat kc.pid)"
