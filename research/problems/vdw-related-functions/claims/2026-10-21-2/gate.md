# Skeptic gate outcome, claim 2026-10-21-2: G(3,9) = 49 (printed 48)

- Skeptic 1 (default model): SIGN-OFF. Own plain DFS, 6561 parts on the first four gaps, 2.08e11 nodes, max 48; validated
  against the printed G(3,s) for s = 2,3,4,5,7,8 and against CaDiCaL for s = 5..7.
- Skeptic 2 (Sonnet): SIGN-OFF. Own C search with forbidden-position bitset and a reachability prune, 1000 parts on 9-element
  prefixes, 5.7e10 nodes, no 49-set; finds the witness from its prefix at 47 and 48. Caveat: impossibility rests on one program.
- Skeptic 3 (Fable): SIGN-OFF. Own C backtracker, 729 parts on the first three gaps, 2.08e11 nodes, max 48 reached in exactly
  three parts (8,1,8), (9,8,6), (9,8,9). Found that the 2008 journal version removed Section 3 and the G/M table entirely.

Result: 3 of 3, unanimous. CONFIRMED under RULE ZERO.
Stated limitation shared by all three: the full text of the Landman-Robertson book (1st ed. 2004, 2nd ed. 2014) could not be read
here, so "not published" rests on every source that could be reached. All three also independently found G(3,6) = 23 (printed 22),
which was the subject of claim 2026-10-21-1.
