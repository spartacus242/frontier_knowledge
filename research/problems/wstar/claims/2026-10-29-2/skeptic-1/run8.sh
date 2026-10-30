#!/bin/bash
# relaunch loop for the resumable DFS phase (fc8; same unit numbering as fc7, same done file)
cd /tmp/claude-0/g2s1
while true; do
  # drop an incomplete trailing line, if a previous run was killed mid-write
  python3 -c "
import sys
p='done7.txt'
try:
    d=open(p).read()
except FileNotFoundError: sys.exit()
if d and not d.endswith('\n'): open(p,'w').write(d[:d.rfind('\n')+1])
"
  CAP=5000000 ./fc8 76 5 10 1 done7.txt cap7.txt >> run8.log 2>&1 &
  echo $! > fc8.pid; wait $!
  grep -q FINISHED run8.log && break
  sleep 2
done
echo "RUNNER EXIT $(date)" >> run8.log
