# Claim packet 2026-10-21-1

## Problem statement
T. Brown, B. M. Landman and A. Robertson, "Bounds on van der Waerden numbers and some related functions",
arXiv:0706.4420 (v1, 29 Jun 2007), Section 3, define (quoted verbatim from the arXiv PDF):

- "M(k, s) denotes the least positive integer n such that whenever X = {x1, x2, . . . , xn} and xi ∈ [(i − 1)s, is − 1],
  1 ≤ i ≤ n, there is a k-term arithmetic progression in X."
- "G(k, s) is the least positive integer n such that for every set S = {x1 < x2 < · · · < xn} with xi − xi−1 ≤ s,
  2 ≤ i ≤ n, S contains a k-term arithmetic progression."

Their Table 1 ("Small values of van der Waerden-like functions", "computed with a standard backtrack algorithm") lists, for k = 3:
- G(3, s), s = 2..9: 5, 9, 11, 17, 22, 33, 37, 48 (then "?")
- M(3, s), s = 2..7: 7, 11, 18, 29, 37, 48 (then "?")

## Frozen definition of "solved"
The correct exact value of at least one k = 3 entry of that Table 1 for M or G that is "?" or wrong in the table, established
by (a) an explicit 3-AP-free object of size v − 1 meeting the definition exactly as printed and (b) an exhaustive proof that
size v is impossible; and not already published elsewhere (the journal version, the Landman–Robertson book, OEIS, later papers).
A witness alone, showing a printed value too small, would only be a sub-result ("published value disproved").

## The claim
With the definitions exactly as printed, four k = 3 entries of the table are wrong. The correct values are:

| entry   | printed | correct |
|---------|---------|---------|
| M(3,4)  | 18      | 19      |
| M(3,5)  | 29      | 31      |
| M(3,6)  | 37      | 38      |
| G(3,6)  | 22      | 23      |

The other printed entries for s ≤ 5 (M) and s ≤ 8 (G), apart from these, are not part of this claim.

## Artifacts (witnesses for the lower bounds; one integer list per line)
Each M witness lists x_1 < ... < x_{v-1} with x_i in [(i-1)s, is-1]. The G witness has every gap at most 6. None contains a 3-term AP.

M(3,4) > 18, s = 4, 18 elements:
2 4 11 12 19 23 24 30 32 38 43 47 50 55 59 61 66 69

M(3,5) > 30, s = 5, 30 elements:
2 6 12 15 20 26 33 35 42 48 53 56 62 66 74 75 83 87 93 96 101 107 114 116 123 129 134 137 143 147

M(3,6) > 37, s = 6, 37 elements:
4 11 13 19 24 31 40 47 52 59 65 68 74 79 88 95 98 103 113 115 121 130 133 140 148 155 160 164 169 176 184 191 194 203 209 210 216

G(3,6) > 22, s = 6, 22 elements:
0 3 8 12 18 22 25 30 34 40 45 51 53 59 64 70 71 74 79 85 86 92

## Upper bounds (the impossibility half)
Claimed: no 3-AP-free choice exists for M(3,4) with 19 blocks, M(3,5) with 31, M(3,6) with 38, or a 3-AP-free set of 23 integers
with all gaps ≤ 6. These are finite searches; reproduce them with your own exhaustive method.
