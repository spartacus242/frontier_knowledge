# VERIFY — DPO Definition 1 / reward equivalence

## CLAIM

Source as the ENTRY cites it: Rafailov et al., "Direct Preference Optimization: Your Language
Model is Secretly a Reward Model", arXiv:2305.18290. Entry asserts that Section 5.1 Definition 1
defines reward equivalence, and that the paper calls the indeterminacy a well-known issue.

Sub-claims handed to me, each checked alone:

- (a) Section 5.1 contains a Definition 1 defining two reward functions as equivalent when their
  difference is a function of the prompt alone; and the string `r(x, y) - r'(x, y) = f(x) for some
  function f` appears in that form.
- (b) The string "a well-known under-specification issue with the Plackett-Luce family of models"
  appears; report the whole sentence it sits in.
- (c) Lemmas 1 and 2 are attached to the definition; in particular Lemma 2 says two equivalent
  reward functions induce the same optimal policy under the KL-constrained objective.
- (d) Section 3 records that prior works normalise the reward "such that Ex,y~D [r_phi(x, y)] = 0
  for all x"; is the normalisation per prompt?
- (e) Does the paper anywhere MEASURE the magnitude of the per-prompt term in a fitted reward
  model — variance share, magnitude, decision-flip rate?
- (f) In what regime, for which objective family, does the paper establish its results?

## READ LEVEL

**Full text, via the publisher-of-record route (arXiv PDF), for Section 3 and Section 5.1.**
Both routes the task named worked: `https://arxiv.org/abs/2305.18290` (metadata + abstract) and
`https://arxiv.org/pdf/2305.18290` (full text, 4 reads). No search calls used; 5 fetches used,
which is the cap.

Read-level qualifications, stated rather than smoothed over:

1. Every quotation below is a **reconstruction assembled from ordered consecutive segments**
   returned under the summariser's ~125-character quotation cap. Fragment counts and junction
   checks are given per quotation.
2. Sections 3 and 5.1 were read directly and the load-bearing strings were each returned twice,
   by two independent reads, with agreeing junctions.
3. **The appendices (A.2, A.5, A.6) and the experiments section were NOT read line by line.**
   The absence finding in (e) rests on a whole-document query plus the body text I did read. It
   is a strong absence, not a line-by-line-verified one. See DEFECTS FOUND #6.
4. Front matter taken from the abs page as served, not from any short form.

**Front matter as served** (arXiv abs page):
Title: *Direct Preference Optimization: Your Language Model is Secretly a Reward Model*.
Authors in order: Rafael Rafailov, Archit Sharma, Eric Mitchell, Stefano Ermon,
Christopher D. Manning, Chelsea Finn. No affiliations shown on the abs page.
Identifier: **arXiv:2305.18290v3**. Submitted 2023-05-29; this version (v3) 2024-07-29.
Subjects: cs.LG, cs.AI, cs.CL. **No Comments / journal-reference field shown.**

**Type of source:** a *primary methods paper* — it introduces an algorithm (DPO), proves
propositions about it, and runs experiments. It is not a review, protocol, guideline or
editorial. Sections 5.1's Lemma 1 is explicitly attributed to prior literature (see (b)).

## WHAT THE SOURCE SAYS (quotations as served)

### Section 5.1 heading

> "5.1 Your Language Model Is Secretly a Reward Model"

### (a) Definition 1 — HOLDS

Section 5.1's first two sentences, then the lead-in, then the definition.

Sentence 1 (reconstruction, 2 fragments):
> "DPO is able to bypass both fitting an explicit reward and performing RL to learn the policy using
> a single maximum likelihood objective."

Sentence 2 (reconstruction, 3 fragments):
> "Note the optimization objective Eq. 5 is equivalent to a Bradley-Terry model with a reward
> parameterization r*(x, y) = β log π*θ(y|x)/πref(y|x) and we optimize our parametric model πθ,
> equivalently to the reward model optimization in Eq. 2 under the change of variables."

Lead-in sentence, returned whole:
> "We begin with by defining an equivalence relation between reward functions."

(The doubled "with by" is in the source as served, not a transcription slip of mine.)

**Definition 1** (reconstruction, 2 fragments; junction cross-checked by two independent reads,
one of which returned the tail as the stated continuation of a 114-character cut and the other of
which returned it as its own consecutive segment — both gave the identical tail):
> "Definition 1. We say that two reward functions r(x, y) and r′(x, y) are equivalent iff
> r(x, y) − r′(x, y) = f(x) for some function f."

**Verdict on the string.** The entry's string `r(x, y) - r'(x, y) = f(x) for some function f`
**appears in that form**, with only typographic differences: the source prints a prime (′) not an
apostrophe, a minus sign (−) not a hyphen, and closes with a full stop. Nothing substantive
differs. The difference is a function of **x alone**, and x is the prompt throughout the paper, so
"a function of the prompt alone" is a correct gloss of f(x).

### (b) The "well-known under-specification issue" string — HOLDS, with a referent to fix

The string appears. In the source it is **split across a line break**. The whole sentence,
returned entire:

> "The first lemma is a well-known under-specification issue with the Plackett-Luce family of
> models [32]."

Three things about this sentence that the short form loses:

1. **Its grammatical subject is "The first lemma."** What the paper calls a well-known
   under-specification issue is *Lemma 1* — i.e. that two reward functions from the same
   equivalence class induce the same *preference distribution*. It is not Definition 1 itself, and
   it is not Lemma 2 (the policy-invariance result), which the paper does not call well known.
2. **It carries a citation, [32]**, and is a flat unhedged assertion. The paper is reporting a
   known property of a model family, not claiming a finding. Treat it as attributed, not as the
   paper's own result.
3. **Its scope is "the Plackett-Luce family of models."** The under-specification is predicated of
   that likelihood family, not of reward models in general.

The paper's word is **"under-specification"**, twice (see the following sentence), never
"indeterminacy". "Indeterminacy" is the ledger entry's word.

The paper states the consequence once more, immediately after (reconstruction, 2 fragments):
> "Due to this under-specification, we usually have to impose additional identifiability
> constraints to achieve any guarantees on the MLE estimates from Eq. 2 [4]."

That second formulation also carries a citation, **[4]**, and is hedged by "usually".

### (c) Lemmas 1 and 2 — PRESENT, and Lemma 2 says what the entry says it says

Both lemmas immediately follow Definition 1 in Section 5.1, so "attached to that definition" is
right.

**Lemma 1** (reconstruction, 2 fragments; single read — see DEFECTS FOUND #5):
> "Lemma 1. Under the Plackett-Luce, and in particular the Bradley-Terry, preference framework, two
> reward functions from the same class induce the same preference distribution."

**Lemma 2** (reconstruction, 2 fragments; single read — see DEFECTS FOUND #5):
> "Lemma 2. Two reward functions from the same equivalence class induce the same optimal policy
> under the constrained RL problem."

Immediately after both:
> "The proofs are straightforward and we defer them to Appendix A.5."

And the paper restates Lemma 2 in prose (reconstruction, 3 fragments):
> "The second lemma states that all reward functions from the same class yield the same optimal
> policy, hence for our final objective, we are only interested in recovering an arbitrary reward
> function from the optimal class."

Then: "We prove the following Theorem in Appendix A.6:"

**Theorem 1** (reconstruction, 3 fragments):
> "Under mild assumptions, all reward classes consistent with the Plackett-Luce (and Bradley-Terry
> in particular) models can be represented with the reparameterization
> r(x, y) = β log π(y|x)/πref(y|x) for some model π(y | x) and a given reference model
> πref(y | x)."

**Verdict on (c).** Yes to both lemmas, and Lemma 2 does assert same-optimal-policy for
equivalent reward functions. One wording point: the paper writes **"under the constrained RL
problem"**, not "under the KL-constrained objective". The referent is Eq. 3, which *is* the
KL-constrained reward maximisation objective (quoted under REGIME), so the entry's phrasing is a
substantively accurate paraphrase — but it is a paraphrase, and anyone re-deriving from the
paper's own string should expect "constrained RL problem".

### (d) The Section 3 normalisation sentence — string HOLDS; "per prompt" is the sentence's own claim and its own contradiction

The sentence, as served (reconstruction, 2 fragments; both parts returned identically by two
independent reads, including the expectation subscript, which I asked for explicitly because it
is the load-bearing part):

> "To ensure a reward function with lower variance, prior works normalize the rewards, such that
> Ex,y∼D [rϕ(x, y)] = 0 for all x."

The subscript printed under the expectation is **"x,y∼D"** — the *joint* draw, not a conditional
on x.

Context. The sentence before (reconstruction, 3 fragments):
> "In the context of LMs, the network rϕ(x, y) is often initialized from the SFT model π SFT(y | x)
> with the addition of a linear layer on top of the final transformer layer that produces a single
> scalar prediction for the reward value [51]."

The sentence after, returned whole:
> "RL Fine-Tuning Phase: During the RL phase, the learned reward function is used to provide
> feedback to the language model."

**Is the normalisation per prompt?** The sentence asserts it is: the qualifier "for all x" is a
per-prompt quantifier and is meaningless otherwise. But the expectation as printed,
`E_{x,y∼D}[rϕ(x,y)]`, is a **single scalar over the joint distribution**, which cannot be set to
zero "for all x" — there is no x left free in it. **The sentence as served is internally
inconsistent**: it states a per-prompt condition under a notation that expresses a global one.
The per-prompt reading is the only one that makes the "for all x" do any work, and is almost
certainly intended (a per-prompt zero-mean normalisation is exactly a choice of f(x)); but the
paper's own notation does not express it. This is a defect **in the source**, not in the entry,
which recorded the string correctly.

Two further qualifiers the short form drops:

- The normalisation is attributed to **"prior works"**, not performed by this paper.
- Its stated motive is **"to ensure a reward function with lower variance"** — variance reduction.
  The paper does *not* present it here as a fix for the under-specification/identifiability
  problem, which it discusses two sections later in Section 5.1. Do not let the entry fuse the
  two: Section 3's normalisation is motivated by variance; Section 5.1's identifiability
  constraints are motivated by MLE guarantees.
- No bracketed citation was returned on the normalisation sentence itself (the preceding sentence
  ends [51]); I cannot rule out an extraction artifact, so I do not claim the sentence is
  uncited.

### (e) THE ABSENCE THAT MATTERS — no number; the paper DEFINES and NORMALISES AWAY, it does not MEASURE

**The paper reports no number for the per-prompt term f(x).** No estimated magnitude, no variance
decomposition, no share of reward variance attributable to the prompt, no rate at which the term
flips a comparison or a decision. Naming what the paper does instead, place by place:

| Place | What it does with f(x) | Number? |
|---|---|---|
| Definition 1, §5.1 | **DEFINES** the equivalence class via f(x) | none |
| Lemma 1, §5.1 (proof A.5) | **PROVES** preference-distribution invariance under f(x) | none |
| Lemma 2, §5.1 (proof A.5) | **PROVES** optimal-policy invariance under f(x) | none |
| Theorem 1 / A.6 | **CONSTRUCTS** a projection, f(r; πref, β)(x, y) = r(x, y) − β log Σ_y πref(y|x) exp(r(x, y)/β) (Eq. 8) — a normalisation by the partition function | none |
| Proposition 1, A.6 | **PROVES** uniqueness: in the reparameterised form f(x) must be 0 | none |
| §5.2 | **INTERPRETS** the normalisation term as the soft value function of πref and notes it can cause high variance in policy gradients | **no magnitude quantified** |
| §3 | **CITES** prior works' zero-mean normalisation | none |
| §6, Figures 2–3, Tables 1–2 | measures reward–KL frontiers and GPT-4 win rates | numbers, but **not of f(x)** |

So on the published-is-not-performed axis: the paper **DEFINES** the term, **PROVES** that it is
irrelevant to two specific downstream objects, and **CONSTRUCTS** a canonical representative in
which it vanishes. It never **MEASURES** it. Note also that it does not **BOUND** its magnitude
either — Proposition 1 is a uniqueness result about the reparameterised form, not a bound on how
big f(x) is in any fitted reward model. The analytical route is deliberate: the term **cancels**
in the Bradley-Terry likelihood (Eq. 6, App. A.2), which is precisely why DPO never needs to
estimate it. An absence of measurement here is a *consequence of the method*, not an oversight —
but it is still an absence, and the paper cannot be cited for any quantity about how large the
per-prompt term is in practice.

Section 7 "Limitations & Future Work" names the paper's own open questions (reconstruction,
5 fragments, partial — the fragments on scaling and on GPT-4 prompt sensitivity were summarised
rather than returned verbatim):
> "How does the DPO policy generalize out of distribution, compared with learning from an explicit
> reward function? ... can training with self-labeling from the DPO policy similarly make effective
> use of unlabeled prompts? On another front, how does reward over-optimization manifest in the
> direct preference optimization setting, and is the slight decrease in performance in Figure
> 3-right an instance of it?"

**The magnitude of the per-prompt term is not among the open questions the paper names.** Per the
brief's rule (9): this silence is not a prohibition, and the paper's noting of *other* absences
(OOD generalisation, over-optimisation) is not a flag of the gap the ledger is checking. Do not
let the entry cite Section 7 as the paper acknowledging this particular gap.

## REGIME

What the paper establishes, and in what regime, in its own terms.

**Objective family.** Equation 3, Section 3, as served (text extraction drops the brackets; shown
as extracted):
> "max πθ Ex∼D,y∼πθ(y|x) rϕ(x, y) − βDKLπθ(y | x) || πref(y | x)"

introduced by:
> "Following prior works [17, 18], the optimization is formulated as"

i.e. **reverse-KL-regularised reward maximisation against a fixed reference policy πref, with a
single scalar temperature β.** Not any constrained-RL objective; this one.

**Preference family.** Plackett-Luce, with Bradley-Terry as the K=2 special case. Lemma 1 is
explicitly scoped: "Under the Plackett-Luce, and in particular the Bradley-Terry, preference
framework".

**Unit of analysis / endpoint.** The theory's unit is a *reward function up to an additive
prompt-dependent term*; its endpoints are (i) the induced preference distribution over pairs
(Lemma 1) and (ii) the argmax policy of Eq. 3 (Lemma 2). The partition function in Eq. 8 is a
**sum** over y, i.e. discrete, finitely-supported completions. The experiments' endpoints are
different objects entirely: reward–KL frontier position and GPT-4-judged win rate.

**Where the claim sits.** All four of the entry's textual claims (a)–(d) sit *inside* the regime
in which the paper proves them, and I found no regime mismatch in the entry as handed to me.

**Where a future use of this entry would leave the regime** — the scope boundary worth writing
down, since it is where this result gets over-cited:

- Lemma 1 licenses invariance of **pairwise preference prediction** within the Plackett-Luce
  family. It says nothing about any other read of a reward model.
- Lemma 2 licenses invariance of **the argmax of Eq. 3**. It is **silent** outside that objective:
  a different regulariser, no reference policy, unregularised RL, a different β schedule, or a
  reward used for Best-of-N selection, filtering, ranking across prompts, reward-model evaluation
  or over-optimisation monitoring are all outside what Lemma 2 proves. A result proved under one
  set of assumptions is silent outside them, not supportive.
- Neither lemma licenses reading an **absolute** reward value, or **comparing rewards across
  prompts** — those are exactly the quantities f(x) destroys, and the paper says so by
  construction rather than by measurement.

## DEFECTS FOUND

1. **Referent of the "well-known" sentence (claim (b)).** The entry says "the paper calls the
   indeterminacy a well-known issue." The sentence's subject is "The first lemma" — the
   *preference-distribution* invariance specifically. Lemma 2 (policy invariance) is not called
   well known. Minor but worth tightening in the entry.
2. **Vocabulary substitution.** The paper says "under-specification" (twice) and
   "identifiability"; it never says "indeterminacy". The entry's word is the entry's.
3. **Scope qualifier dropped.** The under-specification is predicated of "the Plackett-Luce family
   of models" and carries citation [32]. Stated bare, it reads as a claim about reward models in
   general and as the paper's own finding. It is neither.
4. **Source-side defect in (d), not entry-side.** The Section 3 sentence pairs a *joint*
   expectation `E_{x,y∼D}` with a *per-prompt* quantifier "for all x". The two cannot both hold.
   The entry transcribed the string faithfully; the incoherence belongs to the paper. Flagging as
   served rather than silently correcting the subscript to a conditional.
5. **Quotation provenance, unequal across strings.** Definition 1 and the Section 3 normalisation
   sentence were each returned by **two independent reads with agreeing junctions** — high
   confidence. The **Lemma 1 and Lemma 2 tails were returned once**, as the summariser's statement
   of what followed a reported cut, not as a second independently-returned consecutive segment. A
   third read corroborated them in substance only ("shifting a reward by f(x) leaves the
   preference distribution and the optimal policy unchanged"), not verbatim. The fetch cap was
   reached, so I could not re-request them as ordered segments. **Treat the lemma tails as
   substantively confirmed but not junction-verified.** Nothing was completed from inference.
6. **Appendix absence not line-by-line verified.** The (e) finding is a whole-document query plus
   the body I read directly. I did not enumerate the tables of A.2/A.5/A.6 myself. I report (e)
   as a strong absence, not an exhaustively audited one.
7. **Front matter carries no venue.** The abs page as served shows **no Comments or
   journal-reference field**. If the ledger entry carries a venue for this paper, that venue did
   not come from this front matter and should be sourced separately rather than assumed.
8. **Version drift to watch.** The route serves **v3 (2024-07-29)**, not the 2023 original.
   Section and equation numbers quoted here are v3's. Any earlier citation of "Section 5.1
   Definition 1" should be confirmed against the version it was taken from.

Not a defect, recorded so it is not mistaken for one: Section 3's normalisation and Section 5.1's
identifiability constraints are two different moves with two different motives (variance vs. MLE
guarantees). They are related but the paper does not present the former as a fix for the latter.

## ROUTES THAT FAILED

- `curl -sSL https://arxiv.org/pdf/2305.18290` → **curl: (56) CONNECT tunnel failed, response
  403.** Per the access brief this is **tool-scoped, not a host block**: the same URL answered
  WebFetch four times. I did not conclude arxiv.org was blocked, did not retry curl, and did not
  probe the proxy. `pdftotext` is installed and would have made the (e) absence check line-by-line,
  but no local copy could be obtained, which is the sole reason for DEFECTS FOUND #6.
- No other route failed. Both routes the task named worked on first attempt. No PMC/Europe PMC
  attempt was made (PMCID is not a route here, and this is an arXiv preprint with no PMCID).
  Unpaywall was skipped entirely, as instructed — no contact address was supplied anywhere, and no
  personal identifier appeared in any URL, query string, header or form.
- Budget: 5 of 5 fetches used, 0 of 6 searches used. No refusals.

## BEARING ON THE LEDGER ENTRY

**The entry's reading of this source holds.** Section 5.1 does contain Definition 1; it defines
equivalence exactly as the entry records, and the entry's quoted string appears in that form up to
typography. Lemmas 1 and 2 are both there, immediately attached, and Lemma 2 does state
same-optimal-policy for equivalent rewards. The "well-known under-specification issue" string is
verbatim and sits in a complete sentence that survives quotation. Section 3's normalisation
sentence is transcribed correctly.

**The absence the ledger is built on is real.** DPO defines the per-prompt term, proves it
irrelevant to the preference likelihood and to the Eq.-3 argmax, and constructs a representative
in which it is zero. It never measures how large it is in a fitted reward model — no variance
share, no magnitude, no decision-flip rate. The entry can assert that absence. It should assert it
in the DEFINES/PROVES/NORMALISES-AWAY vocabulary above rather than implying the paper overlooked
something: the cancellation in Eq. 6 is why DPO works, so not measuring f(x) is the method's
design, and the gap is that *nobody downstream* can get a magnitude from this paper, not that this
paper failed at something it set out to do.

**Three tightenings before the entry ships.** (i) Attribute the "well-known" sentence to Lemma 1
and to the Plackett-Luce family, with its citation [32], rather than to "the indeterminacy" at
large. (ii) Flag the Section 3 sentence's joint-expectation/"for all x" incoherence as the
source's, and do not let the entry assert that the paper cleanly specifies a per-prompt
normalisation — it asserts one in words under notation that does not express it. (iii) Do not cite
Section 7's open questions as the paper acknowledging this gap; it names other gaps.

**The live risk is scope, not accuracy.** Lemma 2's invariance is proved for reverse-KL-regularised
reward maximisation against a fixed reference, over discrete completions, under a Plackett-Luce
likelihood. If the entry or anything built on it carries "equivalent reward functions are
interchangeable" into Best-of-N, reward-model evaluation, cross-prompt reward comparison, or
over-optimisation monitoring, it has left the regime the theorem was proved in, and this paper is
silent there rather than supportive. Worth stating in the entry explicitly, because that is the
exact failure mode this ledger has already recorded five times.
