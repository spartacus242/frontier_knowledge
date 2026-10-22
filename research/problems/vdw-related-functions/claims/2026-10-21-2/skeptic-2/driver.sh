#!/bin/bash
cd "$(dirname "$0")"
seq 0 999 | xargs -P3 -n1 ./runpart.sh
