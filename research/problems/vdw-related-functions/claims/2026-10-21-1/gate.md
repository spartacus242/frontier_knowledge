# Skeptic gate outcome, claim 2026-10-21-1

- Skeptic 1 (default model): SIGN-OFF. Reproduced all four by C backtrack and SAT (SAT for M(3,6) at 38 unfinished).
- Skeptic 2 (Sonnet): REJECT. Reproduced all four (SAT and two C searches) and HONEST = YES, but NOVEL = UNSURE: the
  Landman-Robertson book, 2nd ed. (2014), could not be inspected.
- Skeptic 3 (Fable): SIGN-OFF. Reproduced all four (C search, independent SAT; engine validated against Rabung 1975's N*(M,3));
  found the 2008 journal version has no M or G at all, so the table exists only in arXiv:0706.4420v1.

Result: 2 of 3. Not unanimous, so the claim DOES NOT COUNT (RULE ZERO). Label: PROMISING.
Remaining objection: novelty against the Landman-Robertson 2nd edition. A skeptic would need to see that book's treatment of the
bounded-gap and one-per-block functions (or a statement from the authors) to answer NOVEL = YES.
Per PROMPT.md the objecting skeptic is not re-asked; any revised or re-checked claim goes to a NEW set of three skeptics.
- Skeptic 1's SAT check of M(3,6) at 38 blocks finished after the gate: UNSAT in 6451 s (`skeptic-1/sat_M6_38.txt`), so M(3,6) = 38 now has a second method too.
