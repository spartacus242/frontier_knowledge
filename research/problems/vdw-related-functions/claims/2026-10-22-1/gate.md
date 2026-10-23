# Skeptic gate outcome, claim 2026-10-22-1: M(3,7) = 51 (printed 48)

- Skeptic 1 (default model): REJECT on novelty only. REPRODUCED YES: own most-constrained-first search, 196 symmetry-reduced
  cubes on blocks 24-26, all impossible at n = 51 (1.8e10 nodes), validated against plain backtracking and SAT for s = 2..6.
  NOVEL UNSURE: OEIS search and the Landman-Robertson 2nd ed. (2014) could not be reached. HONEST YES.
- Skeptic 2 (Sonnet): REJECT. Witness verified; its own searches (validated on s = 2..5) could not finish n = 51 (its tree
  estimate: ~3e12 nodes). NOVEL UNSURE (shallow search, book unreadable). HONEST YES.
- Skeptic 3 (Fable): REJECT. Witness verified; own search (validated on s = 2..6) finished only part of n = 51 by hand-back.
  After hand-back its driver ran on until the researcher stopped it: 16 of 49 parts finished, all impossible, none possible.
  NOVEL YES, HONEST YES.

Result: 0 of 3 sign-offs. DOES NOT COUNT. Label PROMISING.
What remains: (1) the Landman-Robertson book, the objection shared with both earlier claims; (2) a skeptic setup with enough
time for the search: the one skeptic that finished needed ~1.6 h on 2 cores.
Separately from the gate, M(3,7) = 51 has now been reached by three independently written exhaustive searches (the researcher's
fcpm.c and mrv.c, and skeptic 1's fc.c).
