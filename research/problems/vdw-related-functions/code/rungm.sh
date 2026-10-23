#!/bin/sh
# Usage: rungm.sh s T depth [jobs] [timeout-seconds]. Runs every cube from gmcubes.py through gm, one result file per cube in
# gm_res/; resumable (finished cubes are skipped; a killed cube leaves no file). A cube that hits the timeout is recorded as
# TIMEOUT and is NOT a NONE.
cd "$(dirname "$0")"; s=$1; T=$2; d=$3; mkdir -p gm_res
python3 gmcubes.py "$s" "$T" "$d" | xargs -P "${4:-4}" -L 1 sh -c 'k=$(echo "$@" | tr " " "_"); f=gm_res/s'"$s"'_T'"$T"'_$k.txt
  [ -f "$f" ] && exit 0; t0=$(date +%s); r=$(timeout '"${5:-100000}"' ./gm '"$s"' '"$T"' "$@"); e=$?
  case "$r" in *FOUND*|*NONE*) echo "$r secs=$(( $(date +%s) - t0 ))" > "$f.tmp" && mv "$f.tmp" "$f";;
    *) [ $e = 124 ] && echo "TIMEOUT $* secs='"${5:-100000}"'" > "$f";; esac' sh
