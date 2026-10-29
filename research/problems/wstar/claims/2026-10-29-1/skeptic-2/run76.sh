#!/bin/bash
cd /tmp/claude-0/skeptic2
start=0; [ -f jobs76.txt ] && start=$(grep -c '^JOB' jobs76.txt)
./dfs 76 5 7 $start >> jobs76.txt
