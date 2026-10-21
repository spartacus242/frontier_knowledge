#!/bin/sh
# Resumable: run every job line "KIND s n a b" through cube1.py, P at a time; finished cubes are skipped.
cd "$(dirname "$0")" && xargs -P "${2:-4}" -L 1 sh -c 'python3 cube1.py "$0" "$1" "$2" "$3" "$4" cubes >> cubes/run.log 2>&1' < "$1"
