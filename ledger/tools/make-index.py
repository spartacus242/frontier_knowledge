#!/usr/bin/env python3
"""Regenerate ledger/INDEX.md from ledger/unasked-ledger.md.

INDEX.md carries one line per entry so a run can do the Gate 2 duplicate check
without reading the whole append-only ledger (which is already hundreds of KB).
Run this after appending a batch's entries:

    python3 -I ledger/tools/make-index.py

Entry formats vary between runs: the canonical question may appear as
"Question (canonical): ...", as "Question (canonical) - R1 (...): ...", or as a
"## Question (canonical)" heading with the text on the following lines. All
three are handled; an entry whose question cannot be found is reported on
stderr rather than silently emitted with an empty cell.
"""

import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
LEDGER_DIR = os.path.dirname(HERE)
SRC = os.path.join(LEDGER_DIR, "unasked-ledger.md")
DST = os.path.join(LEDGER_DIR, "INDEX.md")

HEADER = """# Ledger index

One line per entry, newest last. Generated from `unasked-ledger.md`, which stays the append-only record.
Read this file for the Gate 2 duplicate check, then open the full entry in `unasked-ledger.md` only for candidates that look close.

Regenerate with `python3 -I ledger/tools/make-index.py` after appending a batch.

| ID | Status | Domain | Question (truncated) |
|---|---|---|---|
"""

# A field label at the start of a line ends the previous field's text.
NEXT_LABEL = r"(?=\n#{0,3}\s*[A-Z][^\n:]{2,70}(?::|\s+—)|\Z)"


def field(body, name):
    """Return the text of a named field, whichever of the three shapes it uses."""
    pats = [
        # "Name: text" or "Name - R1 (...): text"
        rf"^#{{0,3}}\s*{re.escape(name)}\s*(?:[—-][^\n:]*)?:\s*(.*?){NEXT_LABEL}",
        # "## Name" heading with the text on following lines
        rf"^#{{1,3}}\s*{re.escape(name)}\s*$\n+(.*?){NEXT_LABEL}",
    ]
    for pat in pats:
        m = re.search(pat, body, re.S | re.M)
        if m and m.group(1).strip():
            return " ".join(m.group(1).split())
    return ""


def cell(text):
    """Make text safe for a markdown table cell."""
    return text.replace("|", "\\|").replace("\n", " ")


def main():
    src = open(SRC, encoding="utf-8").read()
    blocks = re.findall(r"^ID:\s*(UQ-\S+)\n(.*?)(?=\n---\n|\Z)", src, re.S | re.M)
    if not blocks:
        sys.exit(f"no entries found in {SRC}")

    rows, missing = [], []
    for eid, body in blocks:
        status = field(body, "Status").split("—")[0].split("(")[0].strip() or "?"
        domain = field(body, "Domain(s)").split(";")[0].strip()[:60]
        question = field(body, "Question (canonical)")
        # Drop a leading "(V1, ...)" or "[...]" version marker so the truncated
        # cell shows the question itself rather than the bookkeeping.
        question = re.sub(r"^\[[^\]]*\]\s*", "", question)
        question = re.sub(r"^\((?:V\d|R\d|Gate)[^)]*\)\s*", "", question)
        if not question:
            missing.append(eid)
        rows.append(
            "| {} | {} | {} | {} |".format(
                eid, cell(status), cell(domain), cell(question[:200])
            )
        )

    with open(DST, "w", encoding="utf-8") as fh:
        fh.write(HEADER)
        fh.write("\n".join(rows) + "\n")

    print(f"wrote {DST}: {len(rows)} entries")
    if missing:
        print("WARNING: no canonical question found for: " + ", ".join(missing),
              file=sys.stderr)


if __name__ == "__main__":
    main()
