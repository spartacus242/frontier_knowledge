#!/bin/bash
cd /tmp/claude-0/skeptic1
echo "start $(date +%s)" >> run76sat.log
python3 cube76.py 76 5 6 cubes76.jsonl >> run76sat.log 2>&1
echo "end $(date +%s)" >> run76sat.log
