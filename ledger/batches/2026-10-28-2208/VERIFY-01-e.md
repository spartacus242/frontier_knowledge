# VERIFY-01-e — Checker note on UQ-20261028-01, novelty leg

Role: fresh-context checker. I did not write the entry. Assigned leg: the entry's
grade **"Novelty confidence: Medium"** (line 23) and the record under it (lines 20-22,
and the Routing universal at line 41), tested in function-field vocabularies the three
readings were least likely to have used, plus one search with no date filter, plus a
look for the quantity having already been COMPUTED for polynomial rings.

**Budget: 3/3 web searches spent, 4/4 fetches spent.** No search call was refused.
I read the entry in full and grepped the two adversary logs only for their query lists
(to avoid duplicating queries). I did not call any mcp__hearthbot__ tool.

---

## 1. What I opened, with route and read level

| # | Document | Route | HTTP | READ LEVEL |
|---|---|---|---|---|
| F1 | Cobb, Knox, Lopez, McDonald, Mitchell, NNTDM 25(4) (2019) 72-82 | `nntdm.net/volume-25-2019/number-4/72-82/` direct (publisher landing page) | 200 | **Abstract + keywords (metadata-grade).** Summariser declined a verbatim abstract citing the 125-char limit; I did not re-ask — budget. |
| F2 | "Weirdness in the Primes", n-Category Cafe, 2016-03-14 | `golem.ph.utexas.edu/category/2016/03/unexpected_biases_in_the_distr.html` (returned by my searches 2 and 3) | 200 | **Full page INCLUDING the comment thread** (comment text served). Fetched twice with two different prompts; attributions, dates and thread positions agreed on both reads. |
| F3 | Tao, "Biases between consecutive primes", 2016-03-14 | `terrytao.wordpress.com/2016/03/14/biases-between-consecutive-primes/` | 200 | **Post body: full. COMMENTS: COULD NOT READ** — see section 5. |
| F4 | Gorodetsky & Sawin, "Correlation of arithmetic functions over F_q[T]", Math. Ann. 376 (2020) 1059-1106, DOI 10.1007/s00208-019-01929-x | `link.springer.com/article/10.1007/s00208-019-01929-x` (DOI resolved at publisher) | 200 | **Abstract verbatim**; theorem-hypothesis strings are summariser-reported, not located by me. |

Searches run (3, vocabularies chosen against the three logs' lists):

1. `consecutive irreducible polynomials finite field same residue class modulo bias deficit`
   (function-field own-words, **no date filter**) -> Chebyshev-bias thesis (Taams, Groningen BSc 2017),
   arXiv:2302.13665, "The Arithmetic of Consecutive Polynomial Sequences over Finite Fields"
   (1509.01936 — consecutive *sequences*, not adjacency pairs), textbook/lecture PDFs. **No
   order-adjacency pair statistic.**
2. `function field analogue Lemke Oliver Soundararajan bias consecutive irreducible polynomials F_q[t]`
   (the obvious title/direct-analogue query) -> LO-S itself (PNAS), P1 (sums of two squares, Springer
   + HAL), Tao's blog, **the n-Category Cafe thread**, Gorodetsky-Sawin, unrelated F_q[T] L-function
   papers. **No function-field consecutive-pair paper.**
3. `"function field" analogue "consecutive primes" bias Lemke Oliver checked irreducible polynomials computation open question`
   (aimed at the question having been ASKED and at a computation) -> LO-S mirrors (1603.03720 v1/v3,
   ar5iv), **the n-Category Cafe thread again**, Tao's blog, 1709.06168, Pollack's bounded-gaps-in-
   number-fields notes. **No paper; one blog thread.**

---

## 2. THE FINDING: a prior public asking of the question exists, and the entry says none does

The entry's line 20 records, as one of its three most informative novelty queries,
`"mathoverflow function field analogue of Lemke Oliver Soundararajan ..." (aimed at the
question being ASKED) -> no thread, talk or survey`, and line 41 states `no prior
formulation was found in any vocabulary`.

**A thread exists.** In F2, the comment thread of the n-Category Cafe post on LO-S,
posted one day after LO-S appeared. Locations are thread positions with the page's own
displayed timestamps; both of my reads of F2 returned the same text, names, positions
and dates.

- **1st comment, Asvin, March 15 2016 4:53 AM:**
  "Has anyone checked the function field analog? Does anyone know if it is easier to prove?"
- **2nd comment, John Baez replying to Asvin, March 15 2016 5:44 AM:**
  "Since this paper is only 3 days old and it doesn't mention the function field analogue, maybe it's open."
  / "What would it be, exactly? How hard is it to check via computer?"
- **3rd comment, Jesse C. McKeown, March 16 2016 7:43 AM:**
  "Terry Tao considers instead congruence classes of prime differences" / "(p'-p'') for
  p',p''~x+O(log x), so perhaps something can be said about differences of irreducible
  polynomials" / "given that the differences are in small-degree terms?" / "Or is
  'function field analogue' something completely different?"

My second read of F2 asked specifically whether anything later in the thread answers it:
**no later comment answers the function-field question, defines the analogue, or reports a
computation.** (The thread's only computation, Filippo, 2016-04-20, is on last digits of
the first million primes in Z; Tsimmerman 2017-10-22 is unrelated.)

This item was returned **in the same result set as the entry's own primary citation**
(LO-S) on two of my three searches, i.e. it sits one click from the entry's anchor and was
reachable by a plain-language query, not an exotic one.

### What the prior asking actually claims
Nothing. It is three sentences of question-asking. It stipulates **no total order**,
defines **no statistic**, names no modulus, and reports no number. Baez's "What would it
be, exactly?" and McKeown's "Or is 'function field analogue' something completely
different?" are the definitional gap left open. So it is a prior **ASKING** at the grain
of the entry's alternative formulations 1 and 3 — not a prior **FORMULATION** in the
canonical question's sense, and it contains none of the candidate's distinguishing
content (the order stipulation, delta, the forward-vs-reverse comparison).

### What it does to the entry
- Line 20's `-> no thread, talk or survey` is **FALSE**.
- Line 41's `no prior formulation was found in any vocabulary` is **FALSE as a universal**.
- The **grade Medium survives** — for the formulated question nothing prior exists, and
  Medium (not High) was already the ceiling. But the evidence printed under the grade is
  refuted and has to be rewritten.
- It **corroborates the entry's own "Reason for silence"** (line 28) with direct evidence
  the entry never had: the boundary mechanism the record hypothesised (the transplant reads
  as ill-defined because an order must be stipulated) is observable in the wild, as Baez's
  "What would it be, exactly?" and McKeown's "something completely different?" one day
  after LO-S, followed by ten years of nobody answering. The question was asked, by name,
  in public, and died on exactly the ill-definedness the entry diagnosed.

---

## 3. CITATION CORRECTION: the entry's nominated unopened source is a false lead

Entry line 39: "The single unopened source most likely to settle the fatal leg: Cobb, Knox,
Lopez, McDonald and Mitchell, NNTDM 25(4) (2019) 72-82, nntdm.net/... — returned to
adversary #1 on a snippet match to 'consecutive irreducible polynomials' plus 'same class'
... it is the only unopened item in any log whose snippet matched the candidate's own
phrase combination."

Opened (F1). Its actual title is **"Distribution of constant terms of irreducible
polynomials in Z_p[x]"**; authors as the entry gives them; keywords "Irreducible
polynomials; Finite fields". Its subject is explicit counting formulas for monic
irreducibles with a **prescribed constant term** of degree q^k, building on Yucas, with the
count depending only on whether the constant term is a residue. Per the fetch, the word
"consecutive" does not appear and the word "class" does not appear.

So the snippet match was an artefact: this paper is prescribed-coefficient enumeration,
the same genre adversary #2's Carlitz-era historical sweep already found and dismissed
("prescribed-coefficient enumeration only, nothing ordered and paired"). **It is not prior
art for anything in this candidate, and the entry's sentence calling it the source most
likely to settle the fatal leg should be struck.** Read level is abstract/metadata, which
is enough to settle topic but would not be enough to settle a number.

---

## 4. The quantity has NOT been computed for polynomial rings in anything I opened

F4 is the method-owning paper and the one item adversary #1's query 6 returned (as a
Princeton record) and did not open. Abstract, verbatim segments as served:

> "For a fixed polynomial Delta, we study the number of polynomials f of degree n over F_q
> such that f and f+Delta are both irreducible, an F_q[T]-analogue of the twin primes
> problem." / "In the large-q limit, we obtain a lower-order term for this count if we
> consider non-monic polynomials, which depends on Delta in a manner which is consistent
> with the Hardy-Littlewood Conjecture." / "We obtain a saving of q if we consider monic
> polynomials only and Delta is a scalar."

Its unit is the **shifted pair (f, f+Delta)** at fixed Delta, not a pair adjacent in a total
order, and it counts no residue classes of adjacent pairs. This **confirms the entry's
line 20 characterisation** ("the correlation machinery exists, none of it about
order-adjacent pairs") on an actually-opened source rather than a snippet, and it
independently **supports leg B**: "In the large-q limit" is a regime disjoint from
q in {2,3,5}, the same disjointness the entry attributes to Sawin-Shusterman and
Keating-Roditty-Gershon. Read level: abstract only — it cannot settle a number, only the
genre.

Across all four documents I opened and all three search result sets: **no prior
computation of delta(a,a;m,n,q), and no equal-class adjacency rate for a polynomial ring,
anywhere.** The entry's line 22 claim ("No opened source anywhere in the three logs prints
any value of delta ... the kill is NOT that someone published the number") **STANDS**, now
with a fourth reader's searches behind it.

---

## 5. COULD NOT READ (recorded as a failure, not an absence)

**Tao, "Biases between consecutive primes" (F3), comment thread.** The post body contains
**no mention** of function fields, F_q[t], polynomial rings over finite fields, irreducible
polynomials or GF(2)[x] (read level: body, full). But the fetch reported: "The page shows
only commenter names and the titles of the posts they commented on. It does not include
comment text, so I could not search any comment content." That is a fact about what the
fetch served, not about the page. **Tao's comment thread is unread**, and given that the
sibling blog's comment thread is where the function-field question turned out to live, this
is the single most likely place for a second prior asking. I had no fetch left to retry
(0/4 remaining); the obvious retry is the same URL with `offset` paging, or a
`?replytocom=` / comment-feed route. **Its silence is not a check that passed.**

---

## 6. Mathematics I ran (all my own code and my own derivation)

Scripts: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/delta.py`
and `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/recip.py`.
Polynomials over F_2 as bitmasks; forward order = ascending base-2 value of the coefficient
string with the constant term least significant; reverse order = bit-reversed position;
pairs restricted to both members coprime to m; delta aggregated over a as
eq/(N/phi(m)) - 1 and also per class a as P(a,a)/(N/phi(m)^2) - 1.

**Sieve validation (mine):** monic irreducible counts over F_2 came out 99 (n=10),
186 (n=11), 335 (n=12), matching the known values — so the irreducibility test is right.

**(a) The quantity, computed. q=2, m=t^2, phi=2:**

| n | #irred | #unit-pairs | eq pairs | delta FORWARD | eq pairs | delta REVERSE |
|---|---|---|---|---|---|---|
| 10 | 99 | 98 | 37 | **-0.2449** | 97 | **+0.9796** |
| 11 | 186 | 185 | 72 | **-0.2216** | 184 | **+0.9892** |
| 12 | 335 | 334 | 119 | **-0.2874** | 333 | **+0.9940** |

Per-class, n=12 forward: a=1 delta=-0.3174, a=1+t delta=-0.2575.

**This is exactly adversary #2's named falsification condition** ("brute-force
delta(a,a;t^2,n,2) for n = 10,11,12 over 4096 monics, where a small or negative value
under order 2 breaks the leg"). **It does not break the leg; it confirms it.** The reverse-
order values are +0.9796, +0.9892, +0.9940, converging to phi(t^2) - 1 = 1 and doing so
exponentially, precisely as adversary #2 derived. The entry's fatal leg **STANDS on the
computation the entry said nobody in the batch ran.**

Also: the forward-order answer to the question's first limb is a real, nonzero,
**negative** number, same sign as the LO-S deficit in Z. The first limb is not empty.

**(b) m = t, q=2:** phi(t)=1, delta identically 0.0000 in both orders at n=10,11,12 —
confirms attack 5's "contentless cells".

**(c) NEW, and a broader kill than adversary #2's: the reverse-significance order IS the
reciprocal involution.** My derivation: for a monic degree-n irreducible with n>=2 the
constant term a_0 is forced to 1, so with S = sum_{j=1..n-1} a_{n-j} 2^{j-1} the reverse
position is 2^{n-1} + S while the forward position of the reciprocal f*(t) = t^n f(1/t) is
1 + 2S. Both are strictly increasing in S, so **the two orders coincide as orders.**
Confirmed in code (CHECK A, n=10): reverse-order sequence == forward-order-of-reciprocal
sequence `True`; f -> f* is an involution on degree-n irreducibles `True`.

Consequence, derived then confirmed numerically — for **self-reciprocal m coprime to t**
the reciprocal map induces the automorphism t -> t^{-1} of (F_2[t]/m)^x and twists both
members of a pair identically, so equal-class pairs map to equal-class pairs and the two
orders give the **same** equal-class count exactly:

| m | n=10 | n=11 | n=12 | equal? |
|---|---|---|---|---|
| t^2+t+1 (self-recip) eq_fwd / eq_rev | 12 / 12 | 30 / 30 | 73 / 73 | **exactly equal** |
| delta_fwd = delta_rev | -0.6327 | -0.5135 | -0.3443 | |
| t^3+t+1 eq_fwd / eq_rev | 6 / 2 | 10 / 6 | 18 / 10 | differ |
| t^3+t^2+1 (its reciprocal) eq_fwd / eq_rev | 2 / 6 | 6 / 10 | 10 / 18 | mirrored |
| CHECK C: eq_rev(t^3+t+1) vs eq_fwd(t^3+t^2+1) | 2 = 2 | 6 = 6 | 10 = 10 | **match** |

(The t^4 pair mirrors the same way: t^4+t^3+1 gives 3/4/7 forward and 1/2/5 reverse,
t^4+t+1 gives 1/2/5 forward and 3/4/7 reverse.)

So the forward-vs-reverse comparison — the clause the entry concedes "carries the whole
claim" and around which Gate 1's single permitted reformulation was built — **is not a
mechanism discriminator anywhere on the declared index set**: it is trivially positive for
t | m (adversary #2's route), identically zero-difference for self-reciprocal m by an exact
bijection, and for all other m it merely relabels m -> m*. This is a **third, independent
and broader derivation of the same degeneracy**, and unlike the other two it is backed by
numbers. It does not rescue the candidate; it widens the rejection. **My own derivation
and my own code — no source asserts it.**

---

## 7. What this means for the entry's verdict

- **The novelty leg I was assigned: PARTIAL.** The grade *Medium* survives; the record
  under it does not. Lines 20 and 41 assert a universal ("no thread, talk or survey";
  "no prior formulation was found in any vocabulary") that is false — the question was
  asked publicly by name on 2016-03-15, by three people, and never answered.
- **The entry's rejection is untouched and strengthened.** The fatal leg now has the
  numbers its author said were missing (section 6a), and section 6c kills the same clause
  on much wider cells.
- **Two corrections the entry must carry:** the NNTDM source is not about consecutive
  irreducibles and must stop being described as the item most likely to settle the fatal
  leg (section 3); and Tao's comment thread is unread, not clear (section 5).
- **Routing (line 41) needs amending.** "No prior formulation was found in any vocabulary"
  must go. The routing *decision* (no row) can stand on the stated ground that the
  rejection is for triviality rather than prior art, but it can no longer be justified by
  the absence of any prior asking.
