#!/bin/bash
# Resumable cube run of wdfs: rundfs.sh r n width outdir [jobs]. One result file per cube in outdir (named by its colours);
# a cube with a result file is skipped, so the script can be re-run after an interruption.
r=$1; n=$2; w=$3; out=$4; j=${5:-4}
here=$(cd "$(dirname "$0")" && pwd); mkdir -p "$out"
python3 "$here/wdcubes.py" $r $n $w > "$out/cubes.txt"
one() {
    name=$(echo "$4" | awk '{s=""; for (i = 2; i <= NF; i += 2) s = s $i; print s}')
    f="$3/c_$name.txt"; [ -s "$f" ] && return
    s=$(date +%s.%N); res=$("$5/wdfs" $1 $2 $4); e=$(echo "$(date +%s.%N) - $s" | bc)
    echo "$res secs=$e" > "$f.tmp" && mv "$f.tmp" "$f"
}
export -f one
tr '\n' '\0' < "$out/cubes.txt" | xargs -0 -P $j -I{} bash -c 'one "$@"' _ $r $n "$out" {} "$here"
