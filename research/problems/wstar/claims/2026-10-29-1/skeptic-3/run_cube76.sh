#!/bin/bash
cd /tmp/claude-0/skeptic3
echo "start $(date +%s)" >> cube76.times
until grep -q "ALLDONE\| SAT " cube76.log 2>/dev/null; do
  python3 -I cube2.py 76 5 cube76.log 2 >> cube76.out 2>&1
  sleep 3
done
echo "end $(date +%s)" >> cube76.times
