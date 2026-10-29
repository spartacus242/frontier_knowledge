# Claim packet 2026-10-29-1

## Problem
Brown, Landman and Robertson, "Bounds on van der Waerden numbers and some related functions", arXiv:0706.4420 (2007),
Section 3 and Table 1. Their definition: w*(k; s) is the least positive integer n such that every s-colouring
chi : [1, n] -> [1, s] admits either a monochromatic k-term arithmetic progression or a k-term arithmetic progression whose
colours form an arithmetic progression (increasing or decreasing). Table 1 prints w*(3, s) = 9, 23, 40, >= 75 for
s = 2, 3, 4, 5, and "?" for s >= 6.

Equivalently for k = 3: a colouring of [1, n] is "good" if there are no a < b < c with b - a = c - b and
chi(b) - chi(a) = chi(c) - chi(b) (the monochromatic case is the common difference 0). w*(3; s) is the least n such that
no good s-colouring of [1, n] exists.

## Frozen definition of "solved"
w*(3; 5) is solved when (1) a good 5-colouring of [1, N - 1] is exhibited, (2) it is shown by an exhaustive check that no
good 5-colouring of [1, N] exists, and (3) the value N is not already published.

## The claim
w*(3; 5) = 76. (The table prints only the lower bound ">= 75", so the printed bound is not tight.)

## Artifact
(1) A good 5-colouring of [1, 75], colour of position 1 first:
115442212114125512525422541445455112411544221211412551252542254144545511242

(2) Search statement: every 5-colouring of [1, 76] (all 5^76 of them) contains a 3-term AP a, a+d, a+2d (d >= 1) whose
colours c1, c2, c3 satisfy c2 - c1 = c3 - c2.

## Compute note
Our exhaustive check of (2) took about 4.3 CPU-hours. Budget for a long job: run it in the background, poll it, and make it
resumable (save partial results to disk), because long-running processes in this container can be killed without warning.
