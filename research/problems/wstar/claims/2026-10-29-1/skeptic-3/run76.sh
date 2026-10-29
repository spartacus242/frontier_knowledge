#!/bin/bash
cd /tmp/claude-0/skeptic3
echo "start $(date +%s)" >> run76.times
until grep -q ALLDONE n76.log 2>/dev/null; do
  python3 -I cube.py 76 5 5 n76.log >> run76.out 2>&1
  sleep 3
done
echo "end $(date +%s)" >> run76.times
