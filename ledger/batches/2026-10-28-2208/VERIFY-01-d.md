# VERIFY-01-d — check of the entry's nearest prior P1 (David, Devin, Nam, Schlitt)

Checker: fresh context. Did not write UQ-20261028-01. Entry read in full; neither adversary log
was read, because the claim under test lives in the entry (lines 21-22, "Novelty — nearest prior
formulations" P1 and "how this differs from each" P1) and the entry carries the citation.

Budget: 5 of 5 fetches spent. 0 of 2 searches spent (no search was needed: the document was
nameable from the entry's own citation, so every call was a fetch, per the brief's preference).

## What I opened, by route and read level

| Route | Result | Read level |
|---|---|---|
| `ar5iv.labs.arxiv.org/html/2105.05048` (offset 0) | 200, rendered | front matter, abstract-adjacent intro, literature review |
| same URL, offset 40000 | 200, text window | introduction, ending mid-sentence ("...one of the mai") |
| same URL, offset 48000 | 200, text window | end of Introduction incl. **Conjecture 1.1** and constant `C_{a,b}` (eq. (2)); bibliography NOT in window |
| same URL, offset 100000 | refused with a length fact: "this page's text is 68923 characters long" | n/a |
| `api.semanticscholar.org/graph/v1/paper/arXiv:2105.05048/references?fields=title,authors,year,externalIds&limit=100` | 200, JSON | **complete reference list, 40 entries, titles verbatim** |

Routes that FAILED, with errors (recorded so the failure is booked against the fetcher, not the
document):
- `curl -sSL https://arxiv.org/pdf/2105.05048v2` → `curl: (56) CONNECT tunnel failed, response 403`,
  HTTP 000, 0 bytes. A local PDF (which would have given grep over the whole text for free) was
  therefore unavailable.
- `curl -sS "$HTTPS_PROXY/__agentproxy/status"` and reading `/root/.ccr/README.md` → denied by the
  auto-mode permission classifier, so the proxy could not be diagnosed or worked around. **This is
  the only reason the check is section-read rather than full-text.** Not a fact about the paper.
- `arxiv.org/abs/<id>` and the arXiv listing page were not needed; ar5iv answered on the first try.

**READ LEVEL for the finding below: SECTION READ (front matter, full Introduction including the
paper's central Conjecture 1.1, and the literature review) PLUS the complete reference list at
full fidelity. Sections 2-5 (the heuristic derivation, the numerics, the sieve section) were NOT
read line by line.** Approximate coverage of the ar5iv text, my own arithmetic from the three
window spans and the server-reported total (code in the batch transcript):

```
total chars: 68923
chars covered (approx, union of windows): 53923
fraction covered: 0.782
unread span: chars 25000 to 39999 (approx; window end offsets are my estimates, not server-reported)
```

I flag two oddities in the render so nobody over-reads my coverage: the window beginning at char
48000 of 68923 was reported as still being "the end of the Introduction", and the bibliography was
absent from every window I opened. Either the ar5iv render carries duplicated front matter, or the
summariser's section attributions are unreliable. I therefore do **not** claim to have read the
proof sections, and I obtained the reference list from a second, independent route rather than
asserting it from the render.

## What I found

**(1) Arena — integers only.** The paper's objects are sums of two squares `a^2 + b^2` with
`a, b` in Z, studied modulo a prime `q ≡ 1 (mod 4)`. The central statement I located is labelled
**Conjecture 1.1**, Introduction (Section 1), opening verbatim: "Fix a prime q ≡ 1 (mod 4), and
J ≥ 1." It gives asymptotics for `N(x; q, (a,a))` and, for `a ≢ b (mod q)`, for `N(x; q, (a,b))`,
with the constant `C_{a,b}` defined in equation (2). The letter `q` in this paper is a **modulus in
Z**, not a field size — in the windows I read it occurs only in congruences of the form
`E_{n+i-1} ≡ a (mod q)`, `1 ≤ i ≤ r`. No part of the paper works in `F_q[t]`.

**(2) Function fields appear exactly once, as cited prior work, and not as the paper's own setting.**
Located in the literature review of Section 1 (Introduction): "Sums of two squares in short
intervals were also studied over function fields of a finite field." The citation keys at that
point are BYW16, BBF18, BF19, GR20. No occurrence of "function field", "finite field", "F_q",
"F_q[T]" or "polynomial ring" was found in the later window (offset 48000 to end).

**(3) Ordering — the forced archimedean order of Z.** Section 1: the set of sums of two squares is
"enumerated in increasing order", with `E_n` the n-th such number, and the pair/tuple condition is
imposed on `E_n, E_{n+1}, ...` (as `E_{n+i-1} ≡ a (mod q)`). The paper never defines "consecutive"
by stipulation, because in its arena it does not have to: adjacency is adjacency in increasing
size. There is no choice of order anywhere in it.

**(4) No function-field conjecture, remark or open question.** Asked twice, on two different
windows, with the term list spelled out. Both returns: no. The only open question I located in the
Introduction concerns lower bounds for successive sums of two squares in arithmetic progressions,
of which the paper says it "was not addressed yet in the literature" — an open question **inside Z**.

**(5) The references, read at full fidelity (40 entries). Four have function-field titles:**
- Gorodetsky, Rodgers, "The variance of the number of sums of two squares in $\FF_q[T]$ in short intervals"
- Bary-Soroker, Fehm, "Correlations of sums of two squares and other arithmetic functions in function fields"
- Bank, Bary-Soroker, Fehm, "Sums of two squares in short intervals in polynomial rings over finite fields"
- Bary-Soroker, Smilansky, Wolf, "On the function field analogue of Landau's theorem on sums of squares"

Also in the list: Lemke Oliver and Soundararajan, "Unexpected biases in the distribution of
consecutive primes" (the LO-S anchor), Shiu "Strings of Congruent Primes", Banks-Freiberg-
Turnage-Butterbaugh "Consecutive primes in tuples", Maynard "Dense clusters of primes in subsets",
Freiberg-Kurlberg-Rosenzweig, Hooley "On the intervals between numbers that are sums of two
squares". Not one title in the 40 concerns order-adjacent pairs of irreducible polynomials, or any
consecutive-pair residue statistic in a function field. **Read level on the four function-field
references themselves: METADATA ONLY (titles and authors). I did not open any of them**, so I make
no claim about what is inside them; in particular I cannot say whether Bary-Soroker-Fehm's
correlation results would supply theorem-grade input for the candidate's statistic. That is a
nameable work item, not a finding.

## Numbers I computed

Only one computation was called for, and it is about my own coverage, not about the paper: the
78.2% figure above, produced by the printed Python. The leg under check is documentary (which
arena, which order, what is stated), not an identity, an asymptotic or a count, so no mathematical
simulation was required and none is reported. I deliberately did not re-derive or re-test the
entry's fatal leg (adversary #2's order-2 degeneracy on `m = t^d`) — that is a different leg and a
different checker's assignment, and nothing I read bears on it.

## What it means for the entry's verdict

The brief asked whether the entry's Medium novelty grade "was reached against the right regime",
given that P1 had been read at abstract level only. It was. Every element of the entry's
characterisation of P1 (line 22: "P1 transplants the LO-S statistic along the sequence axis inside
Z, keeping the order forced and the correlation input conjectural; the candidate moves along the
arena axis") is CONFIRMED at section-read level:

- *"inside Z"* — confirmed; the arena is Z throughout, and `q` is a modulus, not a field size.
- *"the order forced"* — confirmed; "enumerated in increasing order", no stipulation, no choice.
  This is the exact axis the candidate varies, and P1 does not vary it.
- *"the correlation input conjectural"* — confirmed, and **stronger than the entry claims**: the
  paper's central asymptotic for `N(x; q, (a,a))` is itself labelled Conjecture 1.1. The entry
  says P1's correlation input is conjectural; what I can add is that in the window I read, the
  headline prediction is presented as a conjecture, not a theorem. (Sections 2-5 unread, so I do
  not know what is proved unconditionally there, and I do not assert that the paper proves nothing.)
- *"the candidate moves along the arena axis"* — confirmed as a genuine separation; P1 moves along
  the sequence axis (primes to sums of two squares) and stays in Z.

Two refinements the entry should absorb:

1. **P1's authors knew the F_q[T] arena and did not pose the analogue.** They cite four function-field
   papers, one of them on *correlations* of sums of two squares in function fields and one on
   *short-interval variance in F_q[T]*. So the nearest prior formulation is by authors demonstrably
   aware both of the arena and of the fact that function-field work can prove what is conjectural
   over Z — and they still transplanted along the sequence axis rather than the arena axis, and
   wrote no remark about a function-field consecutive-pair statistic. That is positive evidence for
   the entry's "Reason for silence" (line 28) and against any suggestion the analogue is already in
   print. It makes the entry's `NOT FOUND` an informed absence in this one document rather than an
   absence of looking.
2. **The entry's P1 label "(abstract only)" is now out of date and should read section-read**
   (Introduction incl. Conjecture 1.1 and the full 40-entry reference list), with Sections 2-5
   unread and the reason for that recorded (the PDF route was blocked by the proxy at 403 and the
   proxy could not be diagnosed under this session's permissions).

Citation corrections: none. "David, Devin, Nam and Schlitt, 'Lemke Oliver and Soundararajan bias
for consecutive sums of two squares', arXiv:2105.05048" is the paper I opened and the title and
subject match. The entry's DOI 10.1007/s00208-021-02307-2 / Mathematische Annalen I did **not**
independently resolve (no fetch budget remained to open doi.org or link.springer.com); it is
consistent with what I saw, in that the indexed reference list for this arXiv id carries a Springer
"Publisher's Note" artefact typical of a Springer-typeset version. Treat the journal and DOI as
UNVERIFIED-but-consistent, not as checked.

Nothing I read touches the entry's fatal leg. The rejection's single support (the `m = t^d`
order-2 degeneracy) and leg B (the Sawin-Shusterman / Keating-Roditty-Gershon regime disjointness)
are untested by this check and remain where the entry left them.
