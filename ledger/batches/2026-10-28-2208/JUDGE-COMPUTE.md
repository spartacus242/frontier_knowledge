# Judge's own computation — UQ-20261028-01 and UQ-20261028-05

Both of this batch's solitary kills are exact finite computations rather than
readings of a document, so I reproduced each myself, from my own
implementation, before the verification pass returned. The pass runs its own
checks on the same two legs (VERIFY-01-a, VERIFY-01-b, VERIFY-05-a) and does
not see this file; where they disagree with it, that disagreement is the
finding.

Scripts, kept outside the repository because they are scratch:
`uq01-check.py` and `uq05-check.py` in this session's scratchpad. Their
output is reproduced verbatim below.

## UQ-20261028-01 — adversary #2's attack 1 STANDS, and is now measured

The leg claimed that under the entry's reverse-significance order with
m = t^d the degree-n monics sort into class-constant intervals, so the
equal-class statistic tends to phi(t^d) - 1 for reasons that never touch
irreducibility. All three parts hold.

Defining the statistic as (observed equal-class adjacent pairs) / (expected
under uniform independent classes), minus one:

| q | m | n | forward order | reverse order | phi(m) - 1 |
|---|---|---|---|---|---|
| 2 | t^2 | 12 | 0.713 (deficit) | 1.994 -> delta = 0.994 | 1 |
| 3 | t^2 | 7 | 0.444 (deficit) | 5.904 -> delta = 4.904 | 5 |
| 3 | t | 8 | 0.858 (deficit) | 1.998 -> delta = 0.998 | 1 |
| 5 | t | 5 | 0.629 (deficit) | 3.981 -> delta = 2.981 | 3 |

The reverse-order limb is degenerate to the limit the adversary named, and
converges to it exponentially: at q = 2, m = t^2 the equal-class count is 333
of 334 adjacent unit-class pairs at n = 12. Run over ALL monics of degree n
rather than only the irreducible ones, the same degeneracy appears with the
same limit (2046 of 2047 at q = 2, n = 12), which settles the part of the
claim that mattered most: the mechanism does not use irreducibility at all.

One finding beyond the leg, which belongs in the entry because it bears on
the replacement candidate the entry recommends. The FORWARD order shows a
real and substantial deficit of equal classes at every cell computed -
ratios 0.71 to 0.89 at q = 2 and 3, and 0.46 to 0.63 at q = 5 - so the
phenomenon the candidate was transplanting does appear in F_q[t] under the
coefficient-string order. What died is the reverse-order control limb the
Gate 1 repair was built around, not the observation that motivated the
question.

## UQ-20261028-05 — adversary #2's attack 4 computation STANDS in every figure

Recomputed from scratch, with the 2-cyclotomic cosets counted INCLUDING the
zero coset, which is the convention that reproduces the adversary's numbers
(excluding it shifts every count by one and changes nothing structural):

- pairs at the four orders where exhaustive search found no quadruple:
  35 -> (12, 6), 47 -> (23, 3), 53 -> (52, 2), 59 -> (58, 2). All four match.
- those four values are disjoint from the values on the other 29 orders, so
  the pair does separate the known failures: confirmed.
- 32 distinct values over the 33 orders, 31 orders carrying a value no other
  order carries: matches "injective on 31 of 33".
- four-element subsets of the frame separated by the pair: **31,930 of
  40,920, 78.0%** - the adversary's figure exactly.
- pairs at the untested orders: 65 -> (12, 7), 67 -> (66, 2). Neither value
  occurs anywhere else in the frame, so the separator classifies neither and
  issues no prediction: confirmed.
- attack 1's counter-reading also holds: ord_2 = 12 at the failing order 35
  and at the realisable orders 13, 39 and 45, and the failures' coset counts
  {2, 3, 6} all recur on the realisable side - {3, 5, 11, 13, 19, 29, 37} at
  2, {7, 9, 17, 23, 25, 41} at 3, and 21 at 6.

A robustness note the adversary did not report and the entry should carry:
the separation statistics are IDENTICAL across all four plausible readings of
"the 33 odd orders whose status the record establishes" (odd 1..65, odd 3..67,
odd 1..63 plus 65, odd 3..65 plus 67) and under both coset conventions. The
78.0% is therefore not an artefact of where the frame's endpoints were drawn.
What the computation cannot settle is whether those four orders are the right
four and the other 29 genuinely realisable; that is a question for the
literature, and VERIFY-05-b has it.

## Verbatim output

### uq01-check.py
```
=== UQ-20261028-01: equal-class adjacency among consecutive monic IRREDUCIBLES ===
ratio = observed equal-class pairs / expected under uniform independent classes
adversary 2's claim: under the REVERSE order with m = t^d, delta -> phi(t^d) - 1 > 0 exponentially

  n=10 q=2 m=t^2 forward: monics=99     pairs=98     equal=37     expected=   49.00 ratio=0.7551  (phi-1=1)
  n=10 q=2 m=t^2 reverse: monics=99     pairs=98     equal=97     expected=   49.00 ratio=1.9796  (phi-1=1)
  n=11 q=2 m=t^2 forward: monics=186    pairs=185    equal=72     expected=   92.50 ratio=0.7784  (phi-1=1)
  n=11 q=2 m=t^2 reverse: monics=186    pairs=185    equal=184    expected=   92.50 ratio=1.9892  (phi-1=1)
  n=12 q=2 m=t^2 forward: monics=335    pairs=334    equal=119    expected=  167.00 ratio=0.7126  (phi-1=1)
  n=12 q=2 m=t^2 reverse: monics=335    pairs=334    equal=333    expected=  167.00 ratio=1.9940  (phi-1=1)

  n=10 q=2 m=t^1 forward: monics=99     pairs=98     equal=98     expected=   98.00 ratio=1.0000  (phi-1=0)
  n=10 q=2 m=t^1 reverse: monics=99     pairs=98     equal=98     expected=   98.00 ratio=1.0000  (phi-1=0)
  n=12 q=2 m=t^1 forward: monics=335    pairs=334    equal=334    expected=  334.00 ratio=1.0000  (phi-1=0)
  n=12 q=2 m=t^1 reverse: monics=335    pairs=334    equal=334    expected=  334.00 ratio=1.0000  (phi-1=0)
  n=14 q=2 m=t^1 forward: monics=1161   pairs=1160   equal=1160   expected= 1160.00 ratio=1.0000  (phi-1=0)
  n=14 q=2 m=t^1 reverse: monics=1161   pairs=1160   equal=1160   expected= 1160.00 ratio=1.0000  (phi-1=0)

  n= 6 q=3 m=t^1 forward: monics=116    pairs=115    equal=51     expected=   57.50 ratio=0.8870  (phi-1=1)
  n= 6 q=3 m=t^1 reverse: monics=116    pairs=115    equal=114    expected=   57.50 ratio=1.9826  (phi-1=1)
  n= 7 q=3 m=t^1 forward: monics=312    pairs=311    equal=132    expected=  155.50 ratio=0.8489  (phi-1=1)
  n= 7 q=3 m=t^1 reverse: monics=312    pairs=311    equal=310    expected=  155.50 ratio=1.9936  (phi-1=1)
  n= 8 q=3 m=t^1 forward: monics=810    pairs=809    equal=347    expected=  404.50 ratio=0.8578  (phi-1=1)
  n= 8 q=3 m=t^1 reverse: monics=810    pairs=809    equal=808    expected=  404.50 ratio=1.9975  (phi-1=1)

  n= 6 q=3 m=t^2 forward: monics=116    pairs=115    equal=5      expected=   19.17 ratio=0.2609  (phi-1=5)
  n= 6 q=3 m=t^2 reverse: monics=116    pairs=115    equal=110    expected=   19.17 ratio=5.7391  (phi-1=5)
  n= 7 q=3 m=t^2 forward: monics=312    pairs=311    equal=23     expected=   51.83 ratio=0.4437  (phi-1=5)
  n= 7 q=3 m=t^2 reverse: monics=312    pairs=311    equal=306    expected=   51.83 ratio=5.9035  (phi-1=5)

  n= 4 q=5 m=t^1 forward: monics=150    pairs=149    equal=17     expected=   37.25 ratio=0.4564  (phi-1=3)
  n= 4 q=5 m=t^1 reverse: monics=150    pairs=149    equal=146    expected=   37.25 ratio=3.9195  (phi-1=3)
  n= 5 q=5 m=t^1 forward: monics=624    pairs=623    equal=98     expected=  155.75 ratio=0.6292  (phi-1=3)
  n= 5 q=5 m=t^1 reverse: monics=624    pairs=623    equal=620    expected=  155.75 ratio=3.9807  (phi-1=3)

=== the same over ALL monics, to test whether the degeneracy uses irreducibility at all ===
  n=10 q=2 m=t^2 forward: no unit-class pairs
  n=10 q=2 m=t^2 reverse: monics=1024   pairs=511    equal=510    expected=  255.50 ratio=1.9961  (phi-1=1)
  n=12 q=2 m=t^2 forward: no unit-class pairs
  n=12 q=2 m=t^2 reverse: monics=4096   pairs=2047   equal=2046   expected= 1023.50 ratio=1.9990  (phi-1=1)

  n= 6 q=3 m=t^1 forward: monics=729    pairs=243    equal=0      expected=  121.50 ratio=0.0000  (phi-1=1)
  n= 6 q=3 m=t^1 reverse: monics=729    pairs=485    equal=484    expected=  242.50 ratio=1.9959  (phi-1=1)
  n= 8 q=3 m=t^1 forward: monics=6561   pairs=2187   equal=0      expected= 1093.50 ratio=0.0000  (phi-1=1)
  n= 8 q=3 m=t^1 reverse: monics=6561   pairs=4373   equal=4372   expected= 2186.50 ratio=1.9995  (phi-1=1)

```

### uq05-check.py
```
pair = (ord_2(n), number of 2-cyclotomic cosets mod n), cosets counted INCLUDING the zero coset

n    ord2  cos(+0)  cos(no0)   status
3    2     2        1         realisable
5    4     2        1         realisable
7    3     3        2         realisable
9    6     3        2         realisable
11   10    2        1         realisable
13   12    2        1         realisable
15   4     5        4         realisable
17   8     3        2         realisable
19   18    2        1         realisable
21   6     6        5         realisable
23   11    3        2         realisable
25   20    3        2         realisable
27   18    4        3         realisable
29   28    2        1         realisable
31   5     7        6         realisable
33   10    5        4         realisable
35   12    6        5         FAIL
37   36    2        1         realisable
39   12    5        4         realisable
41   20    3        2         realisable
43   14    4        3         realisable
45   12    8        7         realisable
47   23    3        2         FAIL
49   21    5        4         realisable
51   8     8        7         realisable
53   52    2        1         FAIL
55   20    5        4         realisable
57   18    5        4         realisable
59   58    2        1         FAIL
61   60    2        1         untested?
63   6     13       12        untested?
65   12    7        6         untested?
67   66    2        1         untested?
69   22    6        5         realisable

=== cosets including the zero coset ===
  odd 1..65        : fail values [(12, 6), (23, 3), (52, 2), (58, 2)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 7)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 2)  (outside this frame)
  odd 3..67        : fail values [(12, 6), (23, 3), (52, 2), (58, 2)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 7)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 2)  (occurs elsewhere in frame: False)
  odd 1..63 + 65   : fail values [(12, 6), (23, 3), (52, 2), (58, 2)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 7)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 2)  (outside this frame)
  odd 3..65 + 67   : fail values [(12, 6), (23, 3), (52, 2), (58, 2)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 7)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 2)  (occurs elsewhere in frame: False)

=== cosets excluding the zero coset ===
  odd 1..65        : fail values [(12, 5), (23, 2), (52, 1), (58, 1)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 6)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 1)  (outside this frame)
  odd 3..67        : fail values [(12, 5), (23, 2), (52, 1), (58, 1)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 6)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 1)  (occurs elsewhere in frame: False)
  odd 1..63 + 65   : fail values [(12, 5), (23, 2), (52, 1), (58, 1)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 6)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 1)  (outside this frame)
  odd 3..65 + 67   : fail values [(12, 5), (23, 2), (52, 1), (58, 1)]
                     separates the four failures: True | distinct values 32/33 | singleton-valued orders 31/33
                     four-subsets separated: 31930 of 40920 = 78.0%
                     pair at 65 = (12, 6)  (occurs elsewhere in frame: False)
                     pair at 67 = (66, 1)  (occurs elsewhere in frame: False)

=== the adversary's quoted values, checked one by one ===
  n=35  claimed (12, 6)   computed incl-zero (12, 6)  MATCH | excl-zero (12, 5)  no
  n=47  claimed (23, 3)   computed incl-zero (23, 3)  MATCH | excl-zero (23, 2)  no
  n=53  claimed (52, 2)   computed incl-zero (52, 2)  MATCH | excl-zero (52, 1)  no
  n=59  claimed (58, 2)   computed incl-zero (58, 2)  MATCH | excl-zero (58, 1)  no
  n=65  claimed (12, 7)   computed incl-zero (12, 7)  MATCH | excl-zero (12, 6)  no
  n=67  claimed (66, 2)   computed incl-zero (66, 2)  MATCH | excl-zero (66, 1)  no

=== attack 1's counter-reading: does ord_2 alone separate? ===
  ord_2 at the four failures: [(35, 12), (47, 23), (53, 52), (59, 58)]
  ord_2(13) = 12  (entry says 12, a realisable order sharing the failing value at 35)
  ord_2(39) = 12  (entry says 12, a realisable order sharing the failing value at 35)
  ord_2(45) = 12  (entry says 12, a realisable order sharing the failing value at 35)
  coset counts at the failures (incl zero): [2, 3, 6]
  realisable orders sharing each of those coset counts: {2: [3, 5, 11, 13, 19, 29, 37], 3: [7, 9, 17, 23, 25, 41], 6: [21]}
```
