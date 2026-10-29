# VERIFY-05-b — the FRAME leg of UQ-20261028-05

Checker note. Fresh context; I did not write the entry. I read the entry in full and
did not read either adversary log, because the claim assigned to me (the frame of 33
odd orders and its four failures) is stated in the entry itself (presuppositions 1-2
and the "Strongest remaining objection" paragraph), and the entry carries the citations.

BUDGET: 3 searches allowed, 1 used. 5 fetches allowed, 5 used (exhausted).

## What the entry actually claims about the frame

Not quite what my brief says. The brief says "33 odd orders whose Williamson status is
established". The entry's own wording is narrower: "over the 33 odd orders whose status
THE RECORD establishes" (line 87), and the entry already self-flags frame-dependence in
its vulnerability paragraph: "the frame it is computed over - 33 orders, chosen because
those are the orders whose status is known - is itself a creature of how far the search
has reached, not of the mathematics." So the entry is not naive about the frame. The
open question is whether the frame's MEMBERSHIP and its four failures match print.

## What I opened

1. arxiv.org/abs/1804.01172 (Bright, Kotsireas, Ganesh, "Applying Computer Algebra
   Systems with SAT Solvers to the Williamson Conjecture"). READ LEVEL: abstract +
   metadata. The summariser declined a verbatim abstract (a fact about my request, so I
   re-asked in short fragments on later fetches). It reports the paper enumerates
   "all Williamson matrices whose orders are divisible by 3 and less than 70" — odd
   orders 3,9,...,63,69. It does NOT claim an exhaustive sweep of all odd orders < 70.
2. ar5iv.labs.arxiv.org/html/1804.01172. READ LEVEL: section read (introduction), cut
   off before Table 3. Located in the introduction: Williamson matrices "do not exist
   for orders 47, 53, and 59"; nonexistence at 35 attributed to Dokovic 1993; known to
   exist at all odd orders below 35 and all other odd orders under 65; and
   "Turyn's construction works in orders 61 and 63". Table 3 NOT SEEN — so the entry's
   63:2 and 69:1 counts are NOT verified by me at first hand.
3. link.springer.com/article/10.1007/s10623-007-9163-5 — Holzmann, Kharaghani,
   Tayfeh-Rezaie, "Williamson matrices up to order 59", DCC 46(3):343-352, 2008. This
   is the entry's "SINGLE UNOPENED SOURCE MOST LIKELY TO SETTLE IT". The DOI resolves;
   the route works. READ LEVEL: abstract only (landing page; full text paywalled, not
   pursued). Two strings LOCATED in the abstract:
     - "We find all nonequivalent Williamson matrices of odd order n up to n = 59"
     - "there are none for n = 35, 47, 53, 59"
   The abstract also suggests the Turyn class may be the only infinite family. The body,
   which is where member (iv)'s per-character/PSD structure would live, I did NOT read.
4. arxiv.org/pdf/2605.08661 (Kharaghani, Mohammadian, Tayfeh-Rezaie, Zaitsev).
   READ LEVEL: section read + Table 1 transcribed cell by cell.
     - Printed title: "A Search for Hadamard Matrices of Near-Williamson Type". This
       RESOLVES the entry's flagged title discrepancy IN THE ENTRY'S FAVOUR: the
       document prints "Near-Williamson", while the search index returned the string
       "A search for Hadamard matrices of Williamson type" (the label both adversaries
       recorded). The entry's citation is the correct one.
     - Turyn's family, as printed: order n = (q+1)/2 with q a prime power, q = 1 (mod 4).
     - Exhaustive classification covers odd n <= 59, Table 1, cited to [9] (i.e. to
       Holzmann et al. 2008, not re-derived).
     - Table 1, transcribed: 1:1, 3:1, 5:1, 7:2, 9:3, 11:1, 13:4, 15:4, 17:4, 19:6,
       21:7, 23:1, 25:10, 27:6, 29:1, 31:2, 33:5, 35:0, 37:4, 39:1, 41:1, 43:2, 45:1,
       47:0, 49:1, 51:2, 53:0, 55:1, 57:1, 59:0. Zeros exactly at 35, 47, 53, 59.
     - It never names a smallest open order; it groups n in {53, 59, 65, 67} as orders
       where Williamson matrices are "either known not to exist or have not yet been
       found". So 65 and 67 are in print as not-yet-found, but "smallest unknown" is the
       entry's own inference, not a quoted claim.
5. ajc-new.maths.uq.edu.au/v73.p207 — Barrera Acevedo and Dietrich, "New infinite
   families of Williamson Hadamard matrices", AJC 73(1):207-219, 2019. Opened as a
   kind-K work item: a document that could enlarge the realisable side. READ LEVEL:
   abstract only. Its families are all of EVEN block order (4a(q+1), 2(q+1)(r+1),
   2^b(q+1)), so it adds NO odd orders. It does not enlarge the frame.

## What I did NOT open

Dokovic 1993 (the sole source for the zero at 35) — not opened by me either; fetch
budget exhausted. Schmidt 1999 (DOI 10.1023/A:1008398319853) — not opened. Bright et
al. Table 3 — not reached. No search for SPORADIC odd-order constructions between 71
and 99 outside Turyn's family, so my enlarged frame below is a sourced LOWER BOUND, not
the exact set.

Independence note, confirming the entry's presupposition 4: my two documents that print
the four zeros are ONE author group. HKT 2008 is Holzmann-Kharaghani-Tayfeh-Rezaie; the
2026 paper is Kharaghani-Tayfeh-Rezaie et al. and its Table 1 CITES [9] rather than
re-deriving. Two readers of one group are one support. The entry says this already.

## The frame, computed (my own arithmetic, labelled as mine)

Membership. Exhaustively enumerated odd orders: n <= 59 (30 orders, HKT 2008 abstract)
plus 63 and 69 (Bright et al., multiples of 3 below 70) = 32 orders. Order 61 is NOT
exhaustively enumerated but IS realisable: 61 = (121+1)/2, 121 = 11^2, 121 = 1 (mod 4)
(Turyn's condition as printed in arXiv:2605.08661; Bright et al. state Turyn's
construction works at 61 and 63). So the orders whose status the record establishes are
the 32 odd orders 1..63 together with 69 = 33 orders, four failures, 29 realisable.

  odd 1..63 count 32 ; frame size with 69: 33 ; realisable in frame: 29 ; C(33,4) = 40920

THE ENTRY'S COUNT IS CORRECT: 33 = 32 + 1, four failures, 29 realisable. I reproduce it.
One caveat the entry does not state: the 33 conflate two epistemic kinds — 32 orders
with a known COUNT and 61, realisable by construction with no enumeration. Also, the
entry's presupposition 2 says "complete enumeration runs to odd n <= 59" while its
separation leg uses 63 and 69; Bright's reach to 63/69 is used in one place and
understated in the other. Minor internal inconsistency, not fatal.

I also independently reproduced the entry's invariant cells (third computation):
  35 -> (12,6)   47 -> (23,3)   53 -> (52,2)   59 -> (58,2)
  65 -> (12,7)   67 -> (66,2)   61 -> (60,2)   63 -> (6,13)   69 -> (22,6)
  13 -> (12,2)   39 -> (12,5)   45 -> (12,8)
with ord_2 the multiplicative order of 2 mod n and the second coordinate the number of
orbits of x -> 2x on Z/n including {0}. 2 mod 35 has 6 orbits, matching the hand check.

## WHERE THE FRAME IS WRONG, AND WHICH WAY

The frame is too SMALL, on the realisable side, and it is wrong by its own declared
domain. The question is defined over invariants "computable at every odd n <= 100".
Turyn's family, n = (q+1)/2 for q a prime power = 1 (mod 4), establishes realisability
at infinitely many odd orders. Within n <= 100 it covers, beyond the record's 33:

  n=75 (q=149 prime), 79 (157 prime), 85 (169=13^2), 87 (173 prime),
  91 (181 prime), 97 (193 prime), 99 (197 prime)   [each q = 1 mod 4 — my computation]

and it does NOT cover 65 (q=129=3*43) or 67 (q=133=7*19), which is consistent with those
two being open. So over n <= 100 at least 40 odd orders have established status — 4
failures, >= 36 realisable — not 33. HKT 2008's own abstract, suggesting the Turyn class
may be the only infinite family, is the source that makes the realisable side infinite.

## Does the correction rescue the entry? No — it strengthens the kill.

I re-ran the separation and the null baseline on the corrected 40-order frame:

  FRAME33  size 33  realisable 29  distinct pair values 32
    four failures separated? True   failure values (12,6) (23,3) (52,2) (58,2)
    4-subsets separated: 31930/40920 = 78.0%
    pair(65)=(12,7) on neither side ; pair(67)=(66,2) on neither side
  FRAME40 (+ Turyn 75,79,85,87,91,97,99)  size 40  realisable 36  distinct values 39
    four failures separated? True
    4-subsets separated: 74518/91390 = 81.5%
    pair(65)=(12,7) on neither side ; pair(67)=(66,2) on neither side

The 78.0% figure the entry reports is exactly reproduced (31930/40920). On the corrected
frame the pair still separates all four failures, the baseline RISES to 81.5%, and 65 and
67 still land on neither side, so the separator still issues no prediction at either test
order. The frame error therefore does not cut in the entry's favour in any respect.

The soft part stays soft. Enlarging the frame does not supply the missing null model: the
step from "81.5% of arbitrary 4-subsets are separated" to "this is not a test" still
rests on no published significance convention for order-invariant separation in design
theory, and I found none. The entry says this about itself.

## Bearing on the verdict

The frame leg STANDS. The membership, the count of 33, the four failures and the 29
realisable orders all match print, with the four zeros confirmed on two documents of one
author group and the exhaustive range confirmed by a located quotation. The frame is
mis-described in one respect — it is not the set of all odd orders with established
status, since at least 7 further odd orders <= 100 are realisable by Turyn's family — but
the mis-specification runs the wrong way to help the entry: on the corrected frame the
load-bearing separation leg survives unchanged and its null baseline worsens from 78.0%
to 81.5%. Nothing in the entry's computational kill depended on the frame being exactly
33 orders, and the 61-vs-enumerated distinction is bookkeeping, not a defect in the kill.
