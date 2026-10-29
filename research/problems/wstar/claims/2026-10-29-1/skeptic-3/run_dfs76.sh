#!/bin/bash
# resumable driver: restarts dfs3 from the last completed cube index until DONE appears
cd /tmp/claude-0/skeptic3
LOG=dfs76.log
echo "start $(date +%s)" >> dfs76.times
until grep -q "^DONE" $LOG 2>/dev/null; do
  last=$(grep "^CUBE" $LOG 2>/dev/null | tail -1 | awk '{print $2}')
  if [ -z "$last" ]; then start=0; else start=$((last+1)); fi
  echo "resume from cube $start at $(date +%s)" >> dfs76.times
  ./dfs3 76 5 6 $start 5 >> $LOG 2>&1
  sleep 2
done
echo "end $(date +%s)" >> dfs76.times
