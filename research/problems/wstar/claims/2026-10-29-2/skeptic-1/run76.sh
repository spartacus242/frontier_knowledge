#!/bin/bash
# relaunch loop: keeps running acc.py (resumable) until it reports FINISHED or SAT
cd /tmp/claude-0/g2s1
while true; do
  python3 acc.py 76 5 s76b.json 300000 cadical153 3000 >> run76b.log 2>&1 &
  echo $! > acc.pid; wait $!
  tail -1 run76b.log | grep -q "FINISHED" && break
  grep -q "SAT FOUND" run76b.log && break
  sleep 2
done
echo "RUNNER EXIT" >> run76b.log
