#!/usr/bin/env python3
"""Check that the batch runner carries LEDGER.md's rule sections verbatim.

    python3 -I ledger/tools/check-runner-sync.py

LEDGER.md is the rule; the runner is what actually runs. A change made in one and
not mirrored in the other has never taken effect, so this compares them:
  - the Ambition requirement section must equal the runner's AMBITION constant
    byte for byte (one constant, interpolated into every prompt that needs it);
  - the Depth requirement section, as the runner embeds it on one line, must
    appear unchanged in the generator, researcher and adversary prompts.
Exits non-zero on any mismatch.
"""
import glob, json, os, re, sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(HERE))
ledger = open(os.path.join(REPO, "LEDGER.md"), encoding="utf-8").read()
runners = sorted(glob.glob(os.path.join(HERE, "unasked-ledger-batch-sequential-v*.js")),
                 key=lambda p: int(re.search(r"-v(\d+)\.js$", p).group(1)))
runner_path = runners[-1]
runner = open(runner_path, encoding="utf-8").read()
ok = True

def section(name):
    m = re.search(rf"^## {re.escape(name)}\n.*?(?=^## )", ledger, re.S | re.M)
    if not m:
        sys.exit(f"LEDGER.md has no '## {name}' section")
    return m.group(0).rstrip("\n")

amb = section("Ambition requirement")
m = re.search(r"^const AMBITION = (\".*\")$", runner, re.M)
if not m:
    print("FAIL: runner has no AMBITION constant"); ok = False
elif json.loads(m.group(1)) != amb:
    print("FAIL: runner AMBITION constant differs from LEDGER.md's Ambition requirement"); ok = False
else:
    print(f"ok: AMBITION constant matches LEDGER.md ({len(amb)} chars); used in {runner.count('${AMBITION}')} prompts")

depth = section("Depth requirement")
body = depth.split("\n", 1)[1].strip("\n")
# The runner embeds the section on one line: paragraphs joined by " || ", line breaks as spaces,
# and apostrophes and backticks escaped for the JS template literal.
want = body.replace("\n\n", " || ").replace("\n", " ")
start, end = "Jace, 2026-10-28, in project chat: delve", "which stay excluded under (b)."
copies, i = [], 0
while (i := runner.find(start, i)) >= 0:
    j = runner.find(end, i) + len(end)
    copies.append(runner[i:j].replace("\\'", "'").replace("\\`", "`"))
    i = j
good = sum(c == want for c in copies)
if len(copies) == 3 and good == 3:
    print("ok: Depth requirement embedded verbatim in all 3 prompts")
else:
    print(f"FAIL: {good} of {len(copies)} embedded Depth copies match LEDGER.md (expected 3 of 3)"); ok = False

print(f"runner checked: {os.path.relpath(runner_path, REPO)}")
sys.exit(0 if ok else 1)
