# Claim packet 2026-10-22-1

## Problem statement
T. Brown, B. M. Landman and A. Robertson, "Bounds on van der Waerden numbers and some related functions",
arXiv:0706.4420 (v1, 29 Jun 2007), Section 3, define (quoted verbatim from the arXiv PDF):

- "M(k, s) denotes the least positive integer n such that whenever X = {x1, x2, . . . , xn} and xi ∈ [(i − 1)s, is − 1],
  1 ≤ i ≤ n, there is a k-term arithmetic progression in X."

Their Table 1 ("Small values of van der Waerden-like functions", "computed with a standard backtrack algorithm") lists, for k = 3,
M(3, s) for s = 2..7 as 7, 11, 18, 29, 37, 48 (then "?"). This claim concerns only the entry M(3, 7) = 48.

## Frozen definition of "solved"
The correct exact value of at least one k = 3 entry of that Table 1 for M or G that is "?" or wrong in the table, established
by (a) an explicit 3-AP-free object of size v − 1 meeting the definition exactly as printed and (b) an exhaustive proof that
size v is impossible; and not already published elsewhere (the journal version, the Landman–Robertson book, OEIS, later papers).
A witness alone, showing a printed value too small, would only be a sub-result ("published value disproved").

## The claim
M(3, 7) = 51, not 48 as printed: there is a choice x_i ∈ [7(i − 1), 7i − 1], i = 1..50, containing no 3-term arithmetic
progression, and for n = 51 every such choice x_i ∈ [7(i − 1), 7i − 1], i = 1..51, contains one.

## Artifact (witness for M(3,7) > 50; x_1, ..., x_50 in order)
6 11 20 22 30 39 44 52 59 63 73 78 89 92 103 108 118 122 129 137 142 151 159 161 174 175 188 190 198 207 212 220 227 231 241 246 257 260 271 276 286 290 297 305 310 319 327 329 338 343

## Impossibility (the other half)
Claimed: no 3-AP-free choice of 51 elements, one from each block [7(i − 1), 7i − 1], i = 1..51 (all inside [0, 356]), exists.
This is a finite search over at most 7^51 choices. Reproduce it with your own exhaustive method. A plain left-to-right
backtracking search in C is too slow here (tens of CPU-hours); you will need stronger pruning, a better branching order,
symmetry, or a SAT solver. Whatever you use, validate it on smaller cases first (the true values for s = 2..6 are not
given here; compute them yourself and compare against anything you trust).

## Practical note for skeptics
This machine has 4 cores shared with other skeptics, and it restarts roughly once an hour, killing running processes
(files on disk survive). Keep each process short (well under 30 minutes), write each part's result to its own file as soon as
it finishes, and make your runs resumable so that a restart costs at most the parts in flight.
