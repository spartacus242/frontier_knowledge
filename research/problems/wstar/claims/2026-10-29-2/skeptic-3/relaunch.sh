#!/bin/bash
# relaunch the resumable SAT search if it is not running; records PID in sat2.pid
cd /tmp/claude-0/g2s3
if [ -f sat2.pid ] && ps -p "$(cat sat2.pid)" >/dev/null 2>&1; then echo "running pid $(cat sat2.pid)"; exit 0; fi
if grep -q 'ALL CUBES DONE' sat2run.log 2>/dev/null; then echo "finished"; exit 0; fi
echo "=== relaunch $(date)" >> sat2run.log
nohup python3 sat_inc2.py 76 5 4 sat2state76.txt cadical195 >> sat2run.log 2>&1 &
echo $! > sat2.pid; echo "launched pid $(cat sat2.pid)"
