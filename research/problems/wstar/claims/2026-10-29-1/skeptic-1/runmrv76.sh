#!/bin/bash
# resumable driver: restarts the search from its checkpoint until a RESULT line appears
cd /tmp/claude-0/skeptic1
until grep -q RESULT mrv2_76.log 2>/dev/null; do
  echo "start $(date +%s)" >> mrv2_76.log
  ./mrv2 76 5 0 mrv2_76.ck >> mrv2_76.log 2>&1
  echo "exit $(date +%s) rc=$?" >> mrv2_76.log
  sleep 2
done
