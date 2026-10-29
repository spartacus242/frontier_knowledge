#!/bin/bash
cd /tmp/claude-0/skeptic1
date +%s > start76.txt
./bt 76 5 7 ck76.txt > out76.txt 2>&1
date +%s > end76.txt
