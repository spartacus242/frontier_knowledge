#!/bin/bash
cd /tmp/claude-0/skeptic3
echo "start $(date +%s)" >> lemma76.times
until grep -q "^FINAL\|^SAT" lemma76.log 2>/dev/null; do
  python3 -I lemma.py 76 5 lemma76.log cadical153 1000000 3 >> lemma76.out 2>&1
  sleep 3
done
echo "end $(date +%s)" >> lemma76.times
