# VERIFY-05-e — fresh-context check of two smaller legs of UQ-20261028-05

Checker: fresh context, did not write the entry. Budget given: 2 web searches, 4 fetches. **Budget fully spent: 2/2 searches, 4/4 fetches.** Raw `curl` to external hosts is policy-denied in this container (gateway answered 403 to CONNECT), so every document below was opened through WebFetch; this is a fact about the fetcher, not about the documents.

Scope: (1) adversary 2's attack-4 clause 3, the `h+` availability ceiling; (2) the field-descent term sweep, re-run at first hand, plus the universal question the sweep could not ask.

---

## LEG 1 — "h+ unavailable above phi(m) <= 72" (entry presupposition 8; adversary 2 attack 4, clause 3)

### What the quantity is

From the entry (presupposition 8) and adversary 2's restatement (log line 7), member **(v)** of the pre-declared invariant list is *"h+ and the 2-rank of the class group of Q(zeta_n)^+"* — i.e. the class number of the maximal real subfield of the n-th cyclotomic field (the "plus part"), together with the 2-rank of that class group. The clause under test is the Gate 1 repair's own added clause: that each of (i)-(v) is **computable at every odd n <= 100**. Since the conductor of Q(zeta_n) for odd n > 1 is n itself, the clause requires h+ to be available at every odd conductor 3 <= n <= 99.

### What the entry asserts

> "FLAGGED, not established: that h+ and the 2-rank of Q(zeta_n)^+ are available at every odd n <= 100. Adversary 2 opened Miller 2014 (LMS JCM 17:404-417) and found its Table 1 begins at conductor 115 and the unconditional composite-conductor work it cites caps at phi(m) <= 72, **which excludes odd conductors 79, 83, 89, 97**." (entry line 29)

Adversary 2's log states the cap as a citation inside the paper it opened: that paper cites "Masley and van der Linden as having 'unconditionally establish[ed] the class numbers of all real cyclotomic fields of composite conductor' for m <= 200 with **phi(m) <= 72**" (adversary-2 log, Pages opened, item 3). The same log lists arXiv:1407.2373, prime-conductor h+, as "RETURNED, NOT OPENED (fetch budget spent)".

### My own arithmetic (labelled as mine; exact, integer, reproducible)

Code run — `python3 -I`, Euler phi by direct coprime count, trial-division primality:

```python
from math import gcd
def phi(m): return sum(1 for k in range(1,m) if gcd(k,m)==1)
def isp(n): return n>1 and all(n%d for d in range(2,int(n**.5)+1))
rows=[(m,phi(m),isp(m)) for m in range(3,101,2)]
print([(m,p) for m,p,pr in rows if not pr and p>72])   # odd COMPOSITE, phi>72
print([(m,p) for m,p,pr in rows if pr and p>72])       # odd PRIME, phi>72
print(max((p,m) for m,p,pr in rows if not pr))         # max phi over odd composites
```

Output:

```
odd COMPOSITE m<=100 with phi>72: []
odd PRIME   m<=100 with phi>72: [(79, 78), (83, 82), (89, 88), (97, 96)]
max phi over odd composites <=100: (72, 95)          # and phi(91)=72
odd m<=100 with phi<=72: 45 of 49
```

**So the four conductors the entry names as excluded — 79, 83, 89, 97 — are exactly the four odd numbers <= 100 with phi > 72, and all four are PRIME.** Every odd *composite* conductor below 100 has phi(m) <= 72 (the maximum is 72, attained at 91 and 95). A ceiling on the *composite*-conductor literature therefore excludes **no** odd conductor <= 100 at all: the conductors above the ceiling are not composite. This is an arithmetic mismatch between the cap and the exclusion drawn from it, and it is my own computation, not a source finding.

### The source that closes the gap, opened at first hand

- **Route:** `https://arxiv.org/abs/1407.2373` via WebFetch (one fetch). **READ LEVEL: abstract + metadata only** (arXiv abstract page; I did not open the full text or any table).
- **Document:** John C. Miller, "Real cyclotomic fields of prime conductor and their class numbers", arXiv:1407.2373v1 (math.NT, submitted 9 July 2014). No journal reference shown on the abstract page.
- **Quotation, located in the abstract:** "We prove that the plus part of the class number is 1 for prime conductors between 71 and 151." The same abstract states that under GRH the class number is determined for prime conductors **between 167 and 241**, and that before this work class numbers had been determined only for prime conductors up to 67.

My own inference from that sentence plus my phi computation: the odd prime conductors 71, 73, 79, 83, 89, 97 fall inside 71-151 and so have h+ determined **unconditionally** (h+ = 1); conductors up to 67 were already covered by the earlier prime-conductor work the abstract names; and all odd composite conductors <= 100 sit under the phi(m) <= 72 cap the adversary quoted. h+ = 1 also fixes the second half of member (v) at those conductors: a trivial class group has 2-rank 0. The GRH-conditionality the Cambridge paper flags, and the Table 1 that begins at conductor 115, both lie **above** the range member (v) needs.

**Caveat, stated rather than hidden.** The composite half of this rests on adversary 2's quotation of the Cambridge/LMS JCM paper, which I did **not** open (budget). Masley and van der Linden I did not open either. The prime half is first-hand but abstract-only. A read level of abstract-only cannot settle a positive claim that every one of 45 composite conductors has a tabulated h+; it is, however, enough to settle the *negative* claim the entry actually makes, because that claim identifies four specific excluded conductors and those four are not in the population the cited cap governs.

### Verdict on leg 1

**FALLS.** The entry's clause-3 claim is not merely "gratuitous because the n <= 100 ceiling is unused" (adversary 2's own Partial grading, repeated at entry lines 76 and 87) — as written it is **false**: the exclusion it reports does not follow from the cap it cites, since 79, 83, 89 and 97 are prime, and the prime-conductor paper adversary 2 listed as returned-but-unopened is the one that covers them unconditionally. The availability limit for h+ is real but sits elsewhere: above prime conductor 151 it becomes GRH-conditional, and for composite conductors above phi(m) = 72 / Table 1's start at 115 — all outside odd n <= 100. Member (v) remains, as the entry concedes independently, "a table lookup".

---

## LEG 2 — the field-descent sweep, re-run at first hand

### 2a. Schmidt, "The field descent method" — my own term sweep

- **Route:** `https://personal.ntu.edu.sg/bernhard/Publications/pub/field.pdf` via WebFetch (one fetch), with an explicit instruction to sweep title, abstract, body, corollaries, tables and bibliography. **READ LEVEL: summariser read of the full document with a directed term sweep** (not my own grep; `curl` to this host returned `CONNECT tunnel failed, response 403` from the agent proxy, so no local copy and no local grep was possible).
- **Result on "Williamson": NOT FOUND.** The sweep reports the string does not occur in title, abstract, body, examples, corollaries or references. This **reproduces** adversary 2's finding independently (different context, same document, same route).
- **What the method is applied to, with locations as served:**
  - Abstract: "We obtain a broadly applicable decomposition of group ring elements into a 'subfield part' and a 'kernel part'." / "Applications include the verification of Lander's conjecture for all difference sets whose order is a power of a prime $>3$" / "and for all McFarland, Spence and Chen/Davis/Jedwab difference sets." / "We obtain a new general exponent bound for difference sets." / "We show that there is no circulant Hadamard matrix of order $v$ with $4<v<548{,}964{,}900$" / "and no Barker sequence of length $l$ with $13<l \le 10^{22}$."
  - **Corollary 4.5:** "If there is a Hadamard difference set in a cyclic group of order $4u^2$, then $u\varphi(u) \le F(u^2,u)$." (circulant Hadamard matrices, via Hadamard difference sets)
  - **Corollary 4.6:** "There is no Barker sequence of length $l$ with $13<l \le 10^{22}$."
  - Section 2, Result 2.12(b): "If a circulant Hadamard matrix of order $v$ exists, then $v=4u^2$, $u$ odd".
  - "circulant weighing matrices" occurs only in the reference list (Arasu and Ma, [3]) — i.e. weighing matrices are *not* an application in this paper.

So the entry's sentence at line 54 — "adversary 2 opened Schmidt's 'The field descent method' and a dedicated term sweep found no occurrence of 'Williamson'; the method is applied to difference sets, circulant Hadamard matrices and Barker sequences" — **is accurate about that document**, on my independent re-run. The entry's own hedge that this is "one opened instance, not a universal over the field-descent literature" is also correct and I keep it.

### 2b. The question the sweep could not ask: has field descent been APPLIED to Williamson matrices anywhere, by anyone?

I spent my remaining fetch and both searches on this. **No instance found; and NOT FOUND here is not the same as established absence.**

- **Search 1** (no date filter): `"field descent" OR "self-conjugate" cyclotomic integers nonexistence "Williamson matrices" Schmidt`. Returned Jungnickel-Schmidt "Difference Sets: an Update"; arXiv:1610.01914 "Group Invariant Weighing Matrices"; arXiv:1908.08447; arXiv:1903.07310 (Butson Hadamard); arXiv:1903.07314 "Upper Bounds for Cyclotomic Numbers"; a NUS research-highlights PDF; plus two non-mathematical hits. **No item presenting field descent applied to Williamson matrices.**
- **Search 2** (no date filter): `"field descent" method applied Williamson matrices nonexistence odd order 35 47 53 59 cyclotomic obstruction`. Returned the field-descent method itself (`link.springer.com/article/10.1007/s10623-004-1703-7`), "The anti-field-descent method" (ScienceDirect S0097316515001429; ResearchGate), Schmidt's monograph *Characters and Cyclotomic Fields in Finite Geometry* and its chapter "2. The field descent" (`link.springer.com/chapter/10.1007/978-3-540-45797-8_2`), a 2017 Bordeaux seminar slide deck on the anti-field-descent method, a generalized-bent-functions paper, and the Wikipedia "Williamson conjecture" page — **the latter returned alongside, never as an application of the method to it.** Searches 2/2 spent; neither was refused.
- **Fetch (fourth and last):** `https://personal.ntu.edu.sg/bernhard/Publications/pub/update1.pdf` — Jungnickel and Schmidt, "Difference Sets: an Update", the survey of the apparatus by the method's own author. **READ LEVEL: summariser read of the full document with a directed term sweep.** Result: **"Williamson" occurs exactly once, in the reference list** — R. J. Turyn, "A special class of Williamson matrices and difference sets," *J. Combin. Theory (A)* **36** (1984), 195-228. The survey never uses the term "field descent"; it invokes self-conjugacy repeatedly but **never in connection with Williamson matrices or with quadruples of symmetric circulant matrices**. The self-conjugacy nonexistence/exponent-bound apparatus is applied there to abelian Hadamard difference sets (Thm 2.5), McFarland difference sets (Thm 2.9), Davis-Jedwab difference sets (Thm 2.11), and cyclic Hadamard difference sets / Barker sequences (Conj. 3.2, Thm 3.1).

**A genuine qualification the entry should carry, from a document I opened.** Williamson matrices *are* connected to the difference-set apparatus in the method-owning field, and by Schmidt himself:

- **Route:** `https://link.springer.com/article/10.1023/A:1008398319853` via WebFetch (one fetch; DOI-at-publisher route). **READ LEVEL: metadata + abstract + keywords + visible reference list only; full text paywalled.**
- Bernhard Schmidt, "Williamson Matrices and a Conjecture of Ito's", *Designs, Codes and Cryptography* **17**(1) (1999) 61-68 — confirming the citation the entry carries at line 54 and reading it one level above metadata-only.
- Abstract, verbatim in segments, located in the abstract: "We point out an interesting connection between Williamson matrices and relative difference sets in nonabelian groups." / "As a consequence, we are able to show that there are relative (4t, 2, 4t, 2t)-difference sets in the dicyclic groups" / "or there is a Williamson matrix over Z_m." / "Finally, we verify Ito's conjecture for all t <= 46."
- Keywords as served: Hadamard matrices, relative difference sets, Williamson matrices, Ito's conjecture, dicyclic groups.
- **"field descent", "self-conjugacy" and cyclotomic-integer language do NOT appear in any visible text** (abstract, keywords, headings, visible references). The visible content is **constructive and existence-directed** — it builds relative difference sets and supports Ito's conjecture — not a nonexistence argument and not an application of field descent. STRING NOT LOCATED for "field descent" in this document; I could not see the body, so I make no claim about it.

My own reading, labelled as mine: adversary 1's objection that "Schmidt 1999 carries 'Williamson matrices' in its title from inside the method-owning field, so the boundary is porous" (entry line 79) **survives one level of reading up** — the same author does cross the boundary, and the crossing is via relative difference sets in dicyclic groups. But the crossing I can see is a *construction* for Ito's conjecture, not the arithmetic-nonexistence apparatus pointed at Williamson realisability. So the porosity is real and the specific risk — that someone has already used field descent to explain the failures at 35, 47, 53, 59 — is **not instantiated by anything I opened**.

### What I did NOT open (so no absence is booked as a check that passed)

The published version of the field descent method (DCC, doi 10.1007/s10623-004-1703-7); "The anti-field-descent method" (JCTA / S0097316515001429); Schmidt's monograph *Characters and Cyclotomic Fields in Finite Geometry* and its chapter 2; Turyn 1984, "A special class of Williamson matrices and difference sets" (JCTA 36:195-228) — **the one item surfaced in this check whose title couples Williamson matrices to difference sets, and the natural next work item**; the body of Schmidt 1999 (paywalled); Miller's composite-conductor paper (LMS JCM 17:404-417); Masley; van der Linden; arXiv:1610.01914; arXiv:1908.08447; arXiv:1903.07310; arXiv:1903.07314. Budget was exhausted (2/2 searches, 4/4 fetches), and I stopped rather than guessing.

### Verdict on leg 2

**STANDS, with its own hedge intact and one qualification added.** The term sweep reproduces: "Williamson" is NOT FOUND in "The field descent method", and the method there is applied to difference sets, circulant Hadamard matrices (Cor. 4.5) and Barker sequences (Cor. 4.6). Extending the sweep to the method-owning field's own survey adds a second opened instance with the same result. The universal — "field descent has never been pointed at Williamson quadruples" — remains **UNVERIFIED by enumeration**, exactly as both the entry (line 54) and adversary 2 say; two opened instances and two unfiltered searches are not the literature. Turyn 1984 is named as the un-swept lead.

---

## What this means for the entry's verdict

Nothing here touches the load-bearing kill. The entry rests its rejection on attack 4 clause 6 and attack 1 — member (i)'s pair separating the four failures while assigning (12,7) at 65 and (66,2) at 67 to neither class, and the collapse of four of five members from a desk. Both legs I was asked to check are explicitly labelled by the entry as legs that "would NOT survive on their own" (line 87), and my results do not disturb that structure.

- **Leg 1 (h+ above phi(m) <= 72) FALLS, and falls harder than the entry records it.** The entry grades it Partial on the ground that the n <= 100 ceiling is unused. The sharper fact is that the claim is **wrong as written**: the four conductors named as excluded are the only odd conductors <= 100 with phi > 72 and are all prime, while the cited cap governs composite conductors; and Miller's prime-conductor abstract determines h+ = 1 unconditionally for prime conductors 71-151. Entry line 29 and the clause-3 clause of line 87 should be corrected from "not established at the top of its stated range" to "established across odd n <= 100 on an abstract-level read; the mis-attribution is the adversary's, not the candidate's". This is a correction **in the candidate's favour** on a non-load-bearing presupposition, and it removes clause 3 from the kill altogether rather than leaving it as a Partial.
- **Leg 2 (field descent) STANDS as the entry states it**, including its hedge; I add that Jungnickel-Schmidt's survey is a second opened instance with the same NOT FOUND, that Schmidt 1999 read at abstract level is constructive and names no field-descent apparatus, and that Turyn 1984 is the un-swept Williamson/difference-set lead the entry does not currently name.
