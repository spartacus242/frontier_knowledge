#!/bin/bash
# Resumable driver: s=9, target=49, prefix depth 3 (729 parts). Each part writes
# parts/<idx>.out atomically (write to .tmp, then mv). Skips parts already done.
cd "$(dirname "$0")"
S=9; T=49; PD=3; NPARTS=729
mkdir -p parts
run_one() {
  i=$1
  [ -s parts/$i.out ] && exit 0
  ./g3s $S $T $PD $i > parts/$i.tmp && mv parts/$i.tmp parts/$i.out
}
export -f run_one; export S T PD
seq 0 $((NPARTS-1)) | xargs -P ${NPROC:-3} -I{} bash -c 'run_one {}'
echo "driver finished: $(ls parts/*.out 2>/dev/null | wc -l) / $NPARTS parts done"
