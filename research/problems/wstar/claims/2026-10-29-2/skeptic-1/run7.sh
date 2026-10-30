#!/bin/bash
# relaunch loop for the resumable DFS phase
cd /tmp/claude-0/g2s1
while true; do
  CAP=5000000 ./fc7 76 5 10 1 done7.txt cap7.txt >> run7.log 2>&1 &
  echo $! > fc7.pid; wait $!
  grep -q FINISHED run7.log && break
  sleep 2
done
echo "RUNNER EXIT $(date)" >> run7.log
