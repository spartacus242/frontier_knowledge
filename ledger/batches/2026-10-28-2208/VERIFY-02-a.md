# VERIFY-02-a — Fouvry–Klüners leg of UQ-20261028-02

Checker: fresh context, did not write the entry. Entry checked:
/home/claude/frontier_knowledge/ledger/batches/2026-10-28-2208/UQ-20261028-02-entry.md
Adversary logs: not read (the claims under test are all carried in the entry's own
citations, per the brief; I used the entry's citation, not any label in a log).

## What I opened, by what route, at what read level

Target: Étienne Fouvry and Jürgen Klüners, "On the Spiegelungssatz for the 4-rank",
Algebra & Number Theory 4 (2010) no. 5, 493–508.

- ROUTE FAILED: `curl https://msp.org/ant/2010/4-5/ant-v4-n5-p01-p.pdf` →
  `curl: (56) CONNECT tunnel failed, response 403`. The agent proxy's status endpoint
  records `{"kind":"connect_rejected","detail":"gateway answered 403 to CONNECT
  (policy denial or upstream failure)","host":"msp.org:443"}`. This is a policy denial
  on the raw-HTTP route, i.e. a fact about this session's egress, not about the document.
  Per the README I did not retry or route around it.
- ROUTE WORKED: WebFetch on the same URL, https://msp.org/ant/2010/4-5/ant-v4-n5-p01-p.pdf,
  five times, each a targeted request. The document OPENED on every call.
- READ LEVEL: **section read / targeted passages**, not full text. I have verbatim or
  near-verbatim text of: the complete heading list; Conjecture 1.1 (p. 494);
  Conjecture 1.2 (p. 496); Theorem 1.8 (p. 497); Corollary 1.9 (p. 497); the section-1
  passage containing eqs. (9), (10), (11) and the "conjectural for the moment" sentence
  (p. 495); the opening of Theorem 3.5 (p. 505); and a summariser's characterisation of
  the "The case p=3." passage (p. 504) after it refused a full verbatim transcription.
- ONE SUMMARISER REFUSAL, recorded: my request for the whole "The case p=3." passage in
  ≤125-character consecutive segments was refused on copyright grounds ("I can't
  transcribe that section verbatim because it's a long excerpt from a copyrighted journal
  article"). I then re-asked for single sentences and single displayed formulas and got
  them. That refusal is a fact about my request's length, not about the document; the
  passage's prose is therefore read at **paraphrase-plus-short-quote** level only, while
  every numbered statement I report below is read at quotation level.
- BUDGET: 5 of 6 fetches spent, 0 of 2 searches spent. Budget did not bind this check.

## Findings, item by item

### (1) Does section 3 carry the heading "The case p = 3"? — **REFUTED as stated; the
substance survives in corrected form.**

Read level: heading list across the whole paper (section read).

The heading of Section 3 is **"3. Proofs of our main results"** (p. 501). The paper has
no numbered subsections inside Section 3. Its internal divisions are unnumbered run-in
headings, in order: "The main step." (p. 502), "Proof of Theorem 1.8." (p. 504),
"Proof of Corollary 1.10." (p. 504), **"The case p=3."** (p. 504), "A weighted version."
(p. 505).

So the string "The case p=3." IS in the paper, as an unnumbered run-in heading inside
Section 3 on p. 504 — printed without spaces around the equals sign. The entry's
sentences "Fouvry–Klüners 2010 carries a section headed 'The case p = 3'" (Motivating
gap) and "Section 3 is headed 'The case p = 3'" (nearest-prior row 2, and again in
Strongest remaining objection and in attack 2) are **wrong at the grain of section vs.
run-in heading, and misquote the spacing**. The claim they were doing work for — that the
paper contains a passage explicitly headed as the p = 3 case — is **CONFIRMED**.

### (2) "we see that everything works for p = 3 as soon as we have a suitable proven
version of Conjecture 1.2" — **CONFIRMED, verbatim, located.**

Read level: quotation. Location: p. 504, inside the run-in passage "The case p=3." of
Section 3. The printed sentence is longer than the entry's quotation and begins:

> "Analyzing the proof of Theorem 1.8, we see that everything works for p = 3 as soon as
> we have a suitable proven version of Conjecture 1.2."

The entry quotes the fragment from "we see that" onward. The fragment is exact; the entry
does not mark the elision, which is a presentational flaw and not a misattribution.

### (3) "But this equality is conjectural for the moment" — **CONFIRMED, located, and the
equation it refers to is (11).**

Read level: quotation. Location: p. 495, Section 1, immediately after displayed equation
(11). Served context, in order: eq. (9) is the normalisation of the a⁺₃(r); eq. (10) is the
rearrangement it implies; then "Hence, letting R → ∞ in (8), we obtain the equality" and
the display numbered **(11)**, whose left-hand side is

> "Prob⁺(rk₃(C₋₃D) = rk₃(C_D) + 1)"

and whose printed right-hand side is "= 0. 29765117 . . . .". Then:

> "But this equality is conjectural for the moment."

So the entry's "section 1, of the 3-rank equality (11), 'But this equality is conjectural
for the moment'" is **exactly right**, including the equation number.

Note the pair: equation (11) is on **C₋₃D against C_D**, not on (D, −D).

### (4) The numerals the record says were never served — **ALL NOW SERVED.**

Read level: quotation (subscripts/superscripts flattened by PDF extraction; I mark that).

**Theorem 1.8** (p. 497), four displayed densities, numbered (15)–(18):
- (15) Prob⁻({D ∈ 𝒟⁻ : rk₄(C_D) = rk₄(C₋D) = r}) = a⁻₂(r)·2⁻ʳ
- (16) Prob⁻({D ∈ 𝒟⁻ : rk₄(C_D) = rk₄(C₋D) + 1 = r}) = a⁻₂(r)·(1 − 2⁻ʳ)
- (17) Prob⁺({D ∈ 𝒟⁺ : rk₄(C_D) = rk₄(C₋D) = r}) = a⁺₂(r)·(1 − 2⁻⁽ʳ⁺¹⁾)
- (18) Prob⁺({D ∈ 𝒟⁺ : rk₄(C_D) = rk₄(C₋D) − 1 = r}) = a⁺₂(r)·2⁻⁽ʳ⁺¹⁾
followed by: "The given densities are the same, if we further restrict to the negative
(positive) fundamental D congruent to 1 mod 4, 0 mod 8, or 4 mod 8."

**Corollary 1.9** (p. 497), the conditional form:
- "For D < 0 we get the conditional probabilities" Prob⁻({rk₄(C₋D) = s | rk₄(C_D) = r}) =
  2⁻ʳ if r = s; (1 − 2⁻ʳ) if s + 1 = r; 0 otherwise.
- "For D > 0 we get the conditional probabilities" Prob⁺({rk₄(C₋D) = s | rk₄(C_D) = r}) =
  (1 − 2⁻⁽ʳ⁺¹⁾) if r = s; 2⁻⁽ʳ⁺¹⁾ if s − 1 = r; 0 otherwise.
The entry's characterisation of Cor. 1.9 — "the reflection +0/+1 split in
conditional-probability form" — is **CONFIRMED**, and the positive-discriminant jump
probability is exactly 2⁻⁽ʳ⁺¹⁾, the p = 2 instance of the candidate's own 3⁻⁽ᵃ⁺¹⁾.

**Conjecture 1.2** (p. 496) is the Cohen–Lenstra p-rank density conjecture **for a general
prime p**: "Let p be prime and r ≥ 0, and for all k ∈ ℕ ∪ {∞} and t > 1 define
η_k(t) := ∏_{j=1}^{k} (1 − t^{−j}) (4). Then: (i) Prob⁻({D ∈ 𝒟⁻ : rk_p(C_D) = r}) =
a⁻_p(r) := p^{−r²}·η_∞(p)·η_r(p)⁻²; (ii) Prob⁺({D ∈ 𝒟⁺ : rk_p(C_D) = r}) = a⁺_p(r) :=
p^{−r²−r}·η_∞(p)·η_r(p)⁻¹·η_{r+1}(p)⁻¹." (Extraction flattened the exponents; I
reconstructed them and then CHECKED them numerically — see "Numbers" below, where both
families sum to 1 and a⁺₃(0) reproduces the 0.8402 the entry attributes to Malle's Table 9.)

**Conjecture 1.2 is a RANK conjecture.** That is why p = 3 waits on it: for p = 2 Fouvry–
Klüners had proved it, for p = 3 it is unproven.

### (5) THE DECISIVE FINDING THE ENTRY DOES NOT RECORD: **Conjecture 1.1, p. 494, IS the
candidate's repaired question, posed as a numbered conjecture, at rank grain.**

Read level: quotation of the displayed formula.

Conjecture 1.1 (p. 494) opens "For every integer r ≥ 0 we have" and displays

> lim_{X→+∞} ♯{D : 0 ≤ D ≤ X, rk₃(C_D) = r, rk₃(C₋₃D) = r + 1}
>            / ♯{D : 0 ≤ D ≤ X, rk₃(C_D) = r}  =  3^{−(r+1)}

That is, character for character in content, the entry's own repaired wording: "over
positive fundamental discriminants d ≤ X, does the measured P(r₃(−3d) = r₃(d)+1 | ...)
equal 3^{−(a+1)} at a = r₃(G)" — at the candidate's prime, on the candidate's pair
(d, −3d), over the candidate's family (positive discriminants up to X), with the
candidate's constant.

And the paper leaves it OPEN. Three independent markers, each read at quotation level:
(a) eq. (11), the rank-averaged consequence, is followed by "But this equality is
conjectural for the moment." (p. 495); (b) "everything works for p = 3 as soon as we have
a suitable proven version of Conjecture 1.2" (p. 504); (c) Theorem 3.5 (p. 505) opens
"Assume that the following four equations are true, where ∗ ∈ {+, −} and b can be 0 or
6= 0:" and concludes that Conjecture 1.1 would then follow — i.e. Conjecture 1.1 is
delivered only conditionally, on unproven congruence-class p = 3 Cohen–Lenstra input.

### (6) The grain — rank only, not the module. **Established.**

Asked directly: does the paper anywhere state a conjecture or theorem about the full
group structure / isomorphism type / full p-part as a module of a reflection pair's class
groups? Answer: no. Conjecture 1.1 is in rk₃ only; Conjecture 1.2 in p-ranks only;
Theorem 1.8 and Corollary 1.9 in rk₄ only. The "The case p=3." passage is likewise
rank-level: its hypotheses are phrased "rk₃(C_D) = r". (Read level for this item:
section read plus summariser answer over the whole paper — strong, but not an exhaustive
line-by-line read of pp. 499–507, so I mark it as high-confidence rather than certain.)

Also established from the p = 3 passage: it concerns **(D, −3D)**, using "−3D is a
fundamental discriminant, when D 6≡ 0 mod 3", and discriminant −D/3 when D ≡ 0 mod 3.
This CORRECTS the entry's "Novelty — how this differs" row, which lists the pair as a
difference: "pair ((d, −3d) vs (d, −d))". That is true of Theorem 1.8 and Corollary 1.9
at p = 2, and FALSE of Conjecture 1.1 and equation (11) at p = 3, which are on the
candidate's own pair.

## Numbers I computed, and the code that produced them

Script: /tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/fk_check.py
(exact rational arithmetic, `fractions.Fraction`, η_∞(3) truncated at j ≤ 89, printed to
40 significant digits; run with `python3 -I`). All of this is MY OWN arithmetic, not a
source finding.

1. Normalisation, the paper's eq. (9): Σ_r a⁺₃(r) = 1.000000000000000000000000000000000000000
   (and Σ_r a⁻₃(r) = 1 likewise), on the reconstructed Conjecture 1.2 formulas. This is
   my cross-check that I reconstructed the flattened exponents correctly.
2. a⁺₃(0..4) = 0.8401891168919234, 0.1575354594172356, 0.0022721460492871,
   0.0000032771337249, 5.0782030862e-10.
   a⁻₃(0..4) = 0.5601260779279489, 0.4200945584459617, 0.0196919324271545,
   0.0000873902326649, 4.0964171562e-08.
   MY OBSERVATION: a⁺₃(0) = 0.84018911689… reproduces to four places the "CL .8402" the
   entry's attack-3 row attributes to Malle's Table 9 at rank 0.
3. **The paper's printed constant reproduces exactly.** Σ_r 3^{−(r+1)}·a⁺₃(r) =
   0.2976511729171347348893768408332889219110, against the paper's printed
   "0. 29765117 . . . ." at eq. (11). This independently confirms that eq. (11) is the
   rank-average of the conditional 3^{−(r+1)} against the real-quadratic 3-rank law — and
   so that Conjecture 1.1 and eq. (11) are the same statement at two aggregation levels.
4. **The transport identity holds exactly**, not to 1e-12. With j(r) := 3^{−(r+1)},
   a⁻₃(s) = a⁺₃(s)(1 − j(s)) + a⁺₃(s−1)·j(s−1) for s = 0..8 with difference **identically
   0** in exact rationals (max |diff| = 0). The entry's "THE REJECTION'S OWN VULNERABILITY"
   paragraph records adversary 1's version of this as "checked only in floating point at
   b = 0..5 to 1e-12"; it is now exact at b = 0..8.
5. **Uniqueness, forward-solved rather than argued.** Solving the same recursion forward
   for j, given a⁺₃ and a⁻₃ and no assumption about j, returns j(0..7) =
   1/3, 1/9, 1/27, 1/81, 1/243, 1/729, 1/2187, 1/6561, i.e. exactly 3^{−(s+1)} at every s.
   So 3^{−(a+1)} is the unique jump law carrying the real 3-rank law to the imaginary one,
   as a consequence of the recursion and a⁺₃(s) > 0. MY DERIVATION — and note its
   PREMISES, which the entry does not check: it assumes (i) the jump probability depends
   on the real-side 3-rank and nothing else, and (ii) the law of rk₃(C₋₃D) as D ranges over
   POSITIVE discriminants is the full imaginary-side law a⁻₃, although {−3D : D > 0
   fundamental} is a thin subfamily of the imaginary fundamental discriminants. Neither
   premise is verified by me or, so far as this record shows, by any opened document.
   Premise (i) is precisely the entry's declared measurand ("whether the conditional
   depends on G beyond rank(G)"), so the uniqueness argument assumes away the candidate's
   own open question and cannot be used against it.

## What this means for the entry's verdict

The leg **STANDS, and stands harder than the entry claims**, with two citation errors to
fix and one grain limit to keep.

- The three strings the entry attributes to this paper are all in it. Two are exact in
  content ("everything works for p = 3 …"; "But this equality is conjectural for the
  moment", and it does refer to eq. (11)). One is misdescribed: "The case p=3." is an
  unnumbered run-in heading on p. 504 inside Section 3, whose own heading is "Proofs of
  our main results". No string is NOT LOCATED; nothing is reattributed.
- The entry under-reports its own strongest evidence. It never names **Conjecture 1.1**,
  which is the candidate's repaired question verbatim at rank grain — same prime, same
  pair (D, −3D), same family, same constant 3^{−(r+1)} — stated as a numbered conjecture
  in 2010 and left explicitly open. The entry's Gate 2 "disguised known / askedness"
  finding therefore has a stronger foundation than the record shows.
- The entry's novelty-distinction row needs correcting on the pair: "(d, −3d) vs (d, −d)"
  is a real difference only for the p = 2 theorems. At p = 3, Fouvry–Klüners are on the
  candidate's pair.
- The grain limit the entry asserts is **CORRECT and is the only thing that survives for
  the candidate**: this paper is rank-only throughout, and poses nothing about the full
  3-part as a module. So the entry's routed limb — the conditional law at full-module
  grain, and a measurement rather than a conditional derivation — is NOT posed by this
  paper. The routing recommendation in the entry is sound, and its own caveat that the
  absence of a published measurement is Unverified remains correct: I ran no search and
  established nothing about what other authors have computed.
- I did not inherit any label from the adversary logs; I did not open them. One correction
  to the brief that commissioned me: the brief asserted as settled that "section 3 carries
  the heading 'The case p = 3'". It does not; that is the entry's error repeated, and I
  report the heading as printed.
