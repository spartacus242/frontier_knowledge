#!/bin/bash
cd /tmp/claude-0/skeptic2
start=0; [ -f jobs76b.txt ] && start=$(grep -c '^JOB' jobs76b.txt)
./mrv 76 5 1 12 $start >> jobs76b.txt
