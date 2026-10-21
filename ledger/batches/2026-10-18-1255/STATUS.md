# Unfinished batch — committed as work in progress, NOT part of the ledger

This folder holds the raw output of the medicine batch launched at 2026-10-18 12:55 UTC.
The batch never completed: the session hit the account's weekly usage limit shortly after
generation finished, and the workstream was then paused at Jace's request from 2026-10-19
16:12 to 2026-10-21 03:45 UTC. The files are committed so the work is not lost with the
container, not because the batch is finished.

## What ran

Generation and Gate 4 completed for all five candidates. Each has a record (Gates 0–3), two
independent adversary logs, and an entry carrying a Gate 5 verdict:

| ID | Area | Verdict as written | Ground, as the entry states it |
|---|---|---|---|
| UQ-20261018-21 | Medicine — hospital medicine, diagnostic safety | Rejected | Presupposition failure and dissolution at Gate 4; not a duplicate (18 Disguise queries across two adversaries found no equivalent) |
| UQ-20261018-22 | Medicine — emergency/critical-care research, research ethics | Rejected | Headline comparison already answered; a residue is posed in print and still open, noted for routing |
| UQ-20261018-23 | Medicine — clinical informatics, real-world-evidence methods | Rejected | Two grounds, the second being that the obstacles it rests on are obstacles to measuring rather than to asking |
| UQ-20261018-24 | Medicine — radiation epidemiology, radiation protection | Rejected | Rejected at Gate 4; novelty graded Medium, defensibly High on the Gate 4 reads |
| UQ-20261018-25 | Medicine — clinical-trial methodology, research ethics | Rejected | Gate 2, novelty Low (substantially overlapping / disguised known), confirmed by Unresolved Disguise from both adversaries |

## What never ran

- The post-batch verification pass. Every verdict above is **unverified**, and that pass is
  exactly what has moved verdicts in both directions in earlier batches — including two
  double reversals of Rejected to Provisional.
- The batch report (`ledger/batches/2026-10-18-1255.md` does not exist).
- The append to `ledger/unasked-ledger.md` and the `ledger/INDEX.md` rebuild.
- The rotation advance in `ledger/rotation.md`.
- The routing handoff for the open residue UQ-22 and UQ-23 each identify.

## Consequences for any later run

- **These five are not ledger entries.** The ledger stands at 165 entries and its high-water
  mark is UQ-20261018-20. Do not count, cite or index the IDs in this folder as ledger entries.
- `ledger/rotation.md` was not advanced, so **medicine is still the next area**, and a fresh
  medicine batch is the clean way to resume. The routine prompt treats the repo as the source
  of truth, which it is.
- If these five are ever promoted into the ledger instead, run the verification pass on them
  first and say in each entry that Gate 5 was reached before the pass and separately from it.
