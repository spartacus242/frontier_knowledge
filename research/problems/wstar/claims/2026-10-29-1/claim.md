# Claim packet 2026-10-29-1

## Problem
Brown, Landman and Robertson, "Bounds on van der Waerden numbers and some related functions", arXiv:0706.4420 (2007),
Section 3 and Table 1. Their definition: w*(k; s) is the least positive integer n such that every s-colouring
chi : [1, n] -> [1, s] admits either a monochromatic k-term arithmetic progression or a k-term arithmetic progression whose
colours form an arithmetic progression (increasing or decreasing). Table 1 prints w*(3, s) = 9, 23, 40, >= 75 for
s = 2, 3, 4, 5, and "?" for s >= 6.

Equivalently for k = 3: a colouring of [1, n] is "good" if no a < b < c with b - a = c - b has
chi(b) - chi(a) = chi(c) - chi(b). w*(3; s) is the least n with no good s-colouring of [1, n].

## Frozen definition of "solved"
w*(3; 5) is solved when (1) a good 5-colouring of [1, N - 1] is exhibited and (2) it is shown by an exhaustive check that
no good 5-colouring of [1, N] exists, and the value N is not already published.

## The claim
w*(3; 5) = 75 (the table prints only the lower bound ">= 75").

## Artifact
(1) A good 5-colouring of [1, 74] (position 1 first):
51455142441411225452144552522425112515145514244141122541214455252242511251

(2) Search statement: every 5-colouring of [1, 75] contains a 3-term AP a, a+d, a+2d whose colours c1, c2, c3 satisfy
c2 - c1 = c3 - c2. The range is all 5^75 colourings; compute note: our exhaustive check took about 4 to 5 CPU-hours,
so budget for a long-running job (run it in the background and poll, and make it resumable).
