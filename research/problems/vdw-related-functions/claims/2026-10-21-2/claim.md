# Claim packet 2026-10-21-2

## Problem statement
T. Brown, B. M. Landman and A. Robertson, "Bounds on van der Waerden numbers and some related functions",
arXiv:0706.4420 (v1, 29 Jun 2007), Section 3, define (quoted verbatim from the arXiv PDF):

- "G(k, s) is the least positive integer n such that for every set S = {x1 < x2 < · · · < xn} with xi − xi−1 ≤ s,
  2 ≤ i ≤ n, S contains a k-term arithmetic progression."

Their Table 1 ("Small values of van der Waerden-like functions", "computed with a standard backtrack algorithm") lists, for k = 3,
G(3, s) for s = 2..9 as 5, 9, 11, 17, 22, 33, 37, 48 (then "?"). This claim concerns only the entry G(3, 9) = 48.

## Frozen definition of "solved"
The correct exact value of at least one k = 3 entry of that Table 1 for M or G that is "?" or wrong in the table, established
by (a) an explicit 3-AP-free object of size v − 1 meeting the definition exactly as printed and (b) an exhaustive proof that
size v is impossible; and not already published elsewhere (the journal version, the Landman–Robertson book, OEIS, later papers).
A witness alone, showing a printed value too small, would only be a sub-result ("published value disproved").

## The claim
G(3, 9) = 49, not 48 as printed: there is a set of 48 integers with every consecutive gap at most 9 and no 3-term arithmetic
progression, and there is no such set of 49 integers.

## Artifact (witness for G(3,9) > 48; 48 integers)
0 8 9 17 23 31 40 47 56 64 73 79 84 93 101 110 117 126 134 140 148 157 165 172 176 183 191 200 208 214 222 231 238 247 255 264 269 270 275 284 292 301 308 317 325 331 339 348

## Impossibility (the other half)
Claimed: no 3-AP-free set of 49 integers with all consecutive gaps ≤ 9 exists. This is a finite search (translate so x_1 = 0;
then all elements lie in [0, 432]). Reproduce it with your own exhaustive method. Expect it to need on the order of a few CPU-hours
for a straightforward backtracking search in C; splitting the search into independent parts and running them in parallel helps.

## Practical note for skeptics
This machine has 4 cores shared with other skeptics, and it has been restarting roughly once an hour, killing running processes
(files on disk survive). Keep each process short (well under 30 minutes), write each part's result to its own file as soon as
it finishes, and make your runs resumable so that a restart costs at most the parts in flight.
