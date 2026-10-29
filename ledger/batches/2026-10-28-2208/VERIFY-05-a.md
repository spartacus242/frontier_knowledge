# VERIFY-05-a — fresh-context check of UQ-20261028-05, load-bearing leg of the kill

Checker: fresh context. I did not write the entry. Budget given: 0 searches, 2 fetches.
Budget used: 0 searches, 2 fetches (one DOI resolution + its mandatory cross-host redirect
hop, which is one document). Nothing in this note rests on an unread page.

## What I was asked to test

Adversary 2's attack 4 / clause 6, which the Gate 5 judge says it independently reproduced,
and which the entry names at line 87 as the LOAD-BEARING LEG of a solitary kill:

> over the 33 odd orders whose status the record establishes, the pair (ord_2(n), number of
> 2-cyclotomic cosets mod n) takes (12,6), (23,3), (52,2), (58,2) on the four failures and
> none of these on the 29 realisable orders, so it separates — but the pair is injective on
> 31 of 33 orders (32 distinct values), 31,930 of the 40,920 four-element subsets of the same
> frame are separated by it, 78.0%, and its values at 65 and 67 are (12,7) and (66,2), which
> occur on NEITHER side

Located in the entry at line 87 ("Strongest remaining objection"), and in
UQ-20261028-05-adversary-2.md at lines 26-55 (the table and the three result bullets), line
100 (clause 5) and line 101 (clause 6). The adversary's own hand-check of the six orbits of 2
mod 35 is at line 49. These strings are locatable in the documents they are attributed to.

## READ LEVEL, per finding

- The computation: MY OWN, run from scratch in two independent implementations. Not a read.
- Entry and adversary-2 log: FULL TEXT (local files).
- Holzmann-Kharaghani-Tayfeh-Rezaie 2008: ABSTRACT ONLY + bibliographic metadata, via
  publisher. Enough to settle the frame premise it is cited for; nothing more is grounded on it.
- Adversary 1's log: NOT OPENED. The claim under test does not live in it, so per the brief I
  did not read it, and I record no absence from it as a check.
- Dokovic 1993, Schmidt 1999, Bright et al. arXiv:1804.01172: NOT OPENED by me.

## The computation — my own arithmetic, labelled as mine

Definitions I used, stated explicitly as the brief requires:
- ord_2(n) = least k >= 1 with 2^k = 1 (mod n); ord_2(1) = 1 by the trivial-group convention.
- number of 2-cyclotomic cosets mod n = number of orbits of x -> 2x on Z/nZ, COUNTING THE
  ZERO COSET {0}. This is the convention the adversary used: its hand-check at log line 49
  lists {0} as one of the six orbits mod 35 and sums 1+12+12+3+3+4 = 35.
- Frame: the 33 odd orders whose status the entry establishes = all odd n <= 63 (32 orders)
  plus n = 69. Failures {35, 47, 53, 59}; the other 29 realisable.

Scripts (kept, re-runnable):
/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/check05.py
/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/recount.py
/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/robust.py

### The pair at every one of the 33 orders (zero coset counted)

n : (ord_2, #cosets)
 1:(1,1)   3:(2,2)   5:(4,2)   7:(3,3)   9:(6,3)   11:(10,2)  13:(12,2)
15:(4,5)  17:(8,3)  19:(18,2) 21:(6,6)  23:(11,3) 25:(20,3)  27:(18,4)
29:(28,2) 31:(5,7)  33:(10,5) 35:(12,6)*FAIL  37:(36,2) 39:(12,5) 41:(20,3)
43:(14,4) 45:(12,8) 47:(23,3)*FAIL  49:(21,5) 51:(8,8) 53:(52,2)*FAIL
55:(20,5) 57:(18,5) 59:(58,2)*FAIL  61:(60,2) 63:(6,13) 69:(22,6)
Untested: 65:(12,7)  67:(66,2)

This table agrees CELL FOR CELL with adversary 2's table (log lines 28-47). I found no
discrepancy in any of the 35 rows.

### The five numbers, recomputed

1. FOUR FAILING PAIRS: {(12,6), (23,3), (52,2), (58,2)}. DISJOINT from the 29 realisable
   pairs — intersection is empty. CONFIRMED.
2. DISTINCT VALUES over the 33 orders: 32. Orders carrying a value unique to them: 31. The
   single collision is (20,3), shared by n = 25 and n = 41. CONFIRMED ("injective on 31 of 33
   with 32 distinct values").
3. SEPARATED 4-SUBSETS: 31,930 of C(33,4) = 40,920 = 78.0303%, which is the 78.0% claimed.
   CONFIRMED EXACTLY.
4. PAIRS AT THE UNTESTED ORDERS: pair(65) = (12,7), pair(67) = (66,2). Neither occurs on the
   realisable side, and neither occurs on the failing side. The separator classifies neither
   65 nor 67 and issues no prediction. CONFIRMED.
5. The adversary's incidental figures also hold: ord_2 ALONE separates 1,320/40,920 = 3.23%
   (it says 3.2%) and fails on the true split (ord_2 = 12 at failing 35 and at realisable 13,
   39, 45); the coset count ALONE separates 10/40,920 = 0.024% (it says 0.0%) and also fails
   on the true split (failing coset values {2,3,6} all recur on the realisable side). So the
   second leg of the kill — attack 1's "two scalars" reading — also reproduces.

### How I counted the subsets, and an independent second method

I read "separated by the pair" as: the pair's value set on S is disjoint from its value set on
the complement of S within the same 33-order frame. That is the entry's own criterion applied
to an arbitrary 4-subset in place of the true failure set.

METHOD A: brute force over all C(33,4) = 40,920 subsets, testing set disjointness directly.
Result 31,930.

METHOD B (independent, closed form): under that criterion S is separated iff S is a union of
whole value-classes. The classes are 31 singletons and one class of size 2, so the count is
C(31,4) + C(31,2) = 31,465 + 465 = 31,930.

The two methods agree, so 31,930 is not an artefact of either implementation.

### Robustness of the leg to things I could not source

- n = 1 convention: setting ord_2(1) = 0, or dropping n = 1 from the frame entirely, leaves
  the disjointness verdict TRUE and leaves the shape unchanged (frame 32: 31 distinct, 30
  unique, 27,840/35,960 = 77.4% separated).
- Counting WITHOUT the zero coset: every coset count drops by exactly 1, so the pairs become
  35:(12,5), 47:(23,2), 53:(52,1), 59:(58,1), 65:(12,6), 67:(66,1). Disjointness still TRUE,
  distinct values still 32, unique still 31, separated subsets still EXACTLY 31,930, and 65
  and 67 still land on neither side. The convention changes the printed values and nothing
  else, so the leg does not depend on it. (The adversary's printed values are the
  zero-coset-included ones; it did not state the convention in words, which is the one
  presentational gap I found, and it is not load-bearing.)
- Restricting the frame to what Holzmann et al. actually enumerate (odd n <= 59, 30 orders):
  disjointness still TRUE, 29 distinct, 28 unique, 20,853/27,405 = 76.1% separated. The leg
  survives the narrower frame.

## The fetch: the one premise of the leg that needs a document

The leg's arithmetic needs no source, but its FRAME does — which orders are failing, which
realisable, which unknown. The entry names, at line 88, the "SINGLE UNOPENED SOURCE MOST
LIKELY TO SETTLE IT" and gives its DOI at line 91. That is a lead nominated by kind, so I
spent the fetch on it rather than on anything else.

ROUTE: https://doi.org/10.1007/s10623-007-9163-5 -> 302 to
link.springer.com/article/10.1007/s10623-007-9163-5?code=...&error=cookies_not_supported ->
fetched. No failures, no blocks. READ LEVEL: ABSTRACT ONLY (the full text is paywalled; I did
not have budget to try an alternate route and I did not try one).

Bibliographic record, confirmed at the publisher: W. H. Holzmann, H. Kharaghani, B.
Tayfeh-Rezaie, "Williamson matrices up to order 59", Designs, Codes and Cryptography 46
(2008), issue 3, 343-352, published 05 January 2008. The entry's citation at line 88 is
CORRECT in every particular, including the page range.

The abstract, served to me in consecutive segments under 125 characters (the summariser
limits quote length, so I asked for it that way per the brief's rule), located in the
Abstract section:

> "A recent result of Schmidt has brought Williamson matrices back into the spotlight."
> "In this article, a new algorithm is introduced to search for hard to find Williamson matrices."
> "We find all nonequivalent Williamson matrices of odd order n up to n = 59."
> "It turns out that there are none for n = 35, 47, 53, 59"
> "and it seems that the Turyn class may be the only infinite class of these matrices."

What this settles and what it does not:

- SETTLES, at first hand and from the primary enumeration paper rather than by citation: the
  failure set is exactly {35, 47, 53, 59} and the enumeration is complete ("all nonequivalent")
  to odd n = 59. The entry's presupposition 1 and 2 and the adversary's clause 1 are TRUE on a
  source I opened. The frame of the leg is sound.
- DOES NOT SETTLE: the realisability of 61, 63 and 69, which lie above this paper's range and
  rest in the entry on Bright et al. Table 3, which I did not open. The robustness run above
  shows the leg does not need them.
- DOES NOT add a second independent group to presupposition 4. This is the Holzmann-Kharaghani-
  Tayfeh-Rezaie group itself, i.e. the same group as the 2026 paper. Opening it upgrades the
  support from "cited" to "read at the source", not from one group to two. Presupposition 4's
  UNVERIFIED stands as written.
- CORRECTION TO THE ENTRY'S RECORD OF ITSELF, not to its mathematics: line 88 says this paper
  was "opened by nobody in this run" and line 54 withholds High novelty confidence partly
  because "Dokovic 1993 and Holzmann et al. 2008 were never opened by any reader". Both were
  true when written; one of the two is now opened at abstract level, by me, by DOI resolution
  at the publisher — a route line 88 records as never attempted. Dokovic 1993 remains unopened.
- A SIDE OBSERVATION I flag and do not grade, because it was not my assignment and I did not
  open the relevant paper: the abstract's first sentence, "A recent result of Schmidt has
  brought Williamson matrices back into the spotlight", is from inside the exhaustive-search
  paper and points at Schmidt. That is consonant with attack 7's objection (the disciplinary
  boundary is porous, and Schmidt 1999 "Williamson matrices and a conjecture of Ito's" is
  unread at metadata only) and mildly against the entry's "disciplinary boundary" reason for
  silence at line 69. It does not touch the leg I was asked to test, and one abstract sentence
  naming an author is not a finding about what Schmidt's method does. I record it as a work
  item, not as a result.

## Which of the adversary's numbers are right, and which are not

RIGHT, all of them, to the digit:
- the 35-row table of (ord_2, #cosets), cell for cell;
- the four failing pairs (12,6), (23,3), (52,2), (58,2);
- their disjointness from the 29 realisable pairs;
- 31 of 33 injective, 32 distinct values;
- 31,930 of 40,920 separated, 78.0%;
- pair(65) = (12,7), pair(67) = (66,2), both on neither side;
- ord_2 alone 3.2%, coset count alone 0.0% (exact: 3.23% and 0.024%).

NOT RIGHT, or imprecise: nothing of substance. Two presentational notes, neither load-bearing:
(a) the log never states whether the zero coset is counted — it does count it, as its own
hand-check shows, and the verdicts are invariant under the choice anyway; (b) "0.0%" for the
coset count alone is 0.024%, i.e. 10 subsets rather than none.

I could not find a single number in the leg that fails to reproduce.

## What this means for the entry's verdict

The ALGEBRAIC half of the kill — the part the entry itself classifies as "(a) ALGEBRAIC, exact
and reproducible by hand" at line 88 — STANDS in full on a third independent computation
(mine), and its frame premise is now sourced at first hand from the primary enumeration paper
the entry nominated and nobody had opened. Clause 6 is FALSE as the adversary grades it: the
only member of (i)-(v) that separates assigns 65 and 67 to neither class and predicts nothing.
The load-bearing leg of the rejection holds.

The entry's own recorded vulnerability also stands exactly as it recorded it, and my check does
nothing to relieve it. The 78.0% figure is an exact enumeration (I confirmed it twice), but the
INFERENCE from "78% of arbitrary 4-subsets are separated" to "this criterion is not a test" is
the adversary's own reasoning against no published null model, and it remains unsourced — I ran
no search and found no convention, so I add no support and no challenge there. Likewise the
frame of 33 orders is, as line 88 says, a creature of how far the search has reached; my
robustness run shows the leg is insensitive to plausible variations of that frame, which
strengthens the algebraic half without touching the interpretive half.

The entry's verdict (Rejected at Gate 4) does not need amending on the strength of this check.
The two amendments the record should absorb are both about its own audit trail, not its
mathematics: Holzmann et al. 2008 is now OPENED at abstract level by DOI resolution, with its
citation and its failure-set sentence confirmed verbatim; and the Schmidt sentence in that
abstract is a live work item against attack 7 and against the line-69 reason for silence.
