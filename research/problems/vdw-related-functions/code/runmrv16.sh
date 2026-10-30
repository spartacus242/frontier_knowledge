#!/bin/sh
# Usage: runmrv.sh s T [jobs]. Runs every canonical cube (mrvcubes.py) through mrv with the innermost tie-break,
# one result file per cube in mrv16_res/; resumable (finished cubes are skipped, a killed cube leaves no file).
cd "$(dirname "$0")"; s=$1; T=$2; mkdir -p mrv16_res
python3 mrvcubes.py "$s" "$T" | shuf --random-source=/dev/zero | xargs -P "${3:-4}" -L 1 sh -c 'k=$(echo "$@" | tr " " "_"); f=mrv16_res/s'"$s"'_T'"$T"'_$k.txt
  [ -f "$f" ] && exit 0; t0=$(date +%s); r=$(MRV_TIE=2 ./mrv16 '"$s"' '"$T"' "$@")
  case "$r" in *FOUND*|*NONE*) echo "$r secs=$(( $(date +%s) - t0 ))" > "$f.tmp" && mv "$f.tmp" "$f";; esac' sh
