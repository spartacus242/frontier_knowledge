#!/bin/bash
cd /tmp/claude-0/g2s3
if [ -f bt2.pid ] && ps -p "$(cat bt2.pid)" >/dev/null 2>&1; then echo "running pid $(cat bt2.pid)"; exit 0; fi
if grep -q '^DONE' bt2run76.log 2>/dev/null; then echo finished; exit 0; fi
echo "=== (re)launch $(date)" >> bt2run76.log
nohup ./bt2 76 5 6 bt2state76.txt 5 >> bt2run76.log 2>&1 &
echo $! > bt2.pid; echo "launched pid $(cat bt2.pid)"
