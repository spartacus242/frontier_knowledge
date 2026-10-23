#!/bin/sh
# Usage: climb.sh s start.txt outdir wmax cap. Repeatedly refills holes (regrow) in the current best set and its mirror
# image, keeping every improvement in outdir/best_<n>.txt; stops when neither direction improves.
cd "$(dirname "$0")"; s=$1; cur=$2; out=$3; wmax=${4:-30}; cap=${5:-20000000}; mkdir -p "$out"
while :; do
  n=$(wc -w < "$cur"); cp "$cur" "$out/best_$n.txt"
  python3 -c "import sys; xs=list(map(int,open(sys.argv[1]).read().split())); m=max(xs); print(' '.join(str(m-x) for x in reversed(xs)))" "$cur" > "$out/rev.txt"
  ./regrow "$s" 1 "$wmax" "$cap" < "$cur" > "$out/try_f.txt" &
  ./regrow "$s" 1 "$wmax" "$cap" < "$out/rev.txt" > "$out/try_r.txt" &
  wait
  nxt=""
  for t in "$out/try_f.txt" "$out/try_r.txt"; do grep -q "^n=" "$t" && { sed 's/.*: //' "$t" > "$out/next.txt"; nxt="$out/next.txt"; break; }; done
  [ -n "$nxt" ] || { echo "stuck at $n"; break; }
  python3 checkG.py "$s" $(cat "$nxt") | grep -q "OK gap no 3-AP" || { echo "BAD set"; break; }
  cp "$nxt" "$out/cur.txt"; cur="$out/cur.txt"; echo "now $(wc -w < "$cur")"
done
