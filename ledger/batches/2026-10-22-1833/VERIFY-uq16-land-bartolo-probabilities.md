# VERIFY - Land & Bartolo measure an *output* probability, but no truncation rule and no emission rate
Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261022-16 asserts, of Land & Bartolo, "Fishing for Magikarp: Automatically
Detecting Under-trained Tokens in Large Language Models", arXiv:2405.05417, EMNLP 2024:

1. the paper's ONLY probability measurement is p(token | prompt containing that token)
   under forced repetition at temperature zero;
2. it contains no top-k, no top-p, no generation_config and no logit masking anywhere;
3. therefore it establishes the existence of the set U "without measuring anything on
   the output side".

Verdict in one line: (2) holds on the read I could get; (1) holds only after two
narrowings (the statistic is a double maximum, and one of the three probes is not a
repetition probe); (3) is **wrong as worded** - the paper's own name for the measured
quantity is "output probability", and it prints a rate over that quantity. What is
genuinely absent is a *sampling-truncation-conditioned* probability and an *emission
rate*. The entry needs the third leg rewritten, not deleted.

## READ LEVEL

**Land & Bartolo 2024 - FULL TEXT, SUMMARISER-MEDIATED, via one document opened twice.**

Route that worked: `https://aclanthology.org/2024.emnlp-main.649.pdf` - the EMNLP 2024
version named in the entry's third route. Two WebFetch passes with different prompts
over that same PDF: pass 1 broad (front matter, probability definitions, term search,
counts), pass 2 narrow (verbatim re-quotation of the five load-bearing sentences, with
opening words demanded explicitly).

**Two passes over one PDF is ONE document, not two sources, and I do not count the
agreement between them as corroboration.** Both passes were served by the summariser.

The limitation that matters most: **I never obtained raw text.** `curl` to arxiv.org
was refused at the proxy (tool-scoped `connect_rejected`), and WebFetch on
`https://arxiv.org/html/2405.05417v3` was rate-limited on three separate attempts. So I
could not run my own grep. Sub-claim (c) is an **absence** claim, and every absence
below is attested by the summariser's scan of the PDF, not by a string search I
performed. Pass 2 volunteered its own caveat on exactly this point: "This is a manual
scan, not a verified text search." I am recording that caveat rather than burying it.
The absences are consistent across two independent prompts and are what one would
expect of this paper's method, but they are one grade weaker than grep-verified.

Front matter, from the PDF's own first page (not from any short form):
- Authors: **Sander Land**, Cohere, sander@cohere.com; **Max Bartolo**, Cohere,
  max@cohere.com. Two authors, both Cohere.
- Title as printed: "Fishing for Magikarp: Automatically Detecting Under-trained Tokens
  in Large Language Models".
- Venue line as printed: "Proceedings of the 2024 Conference on Empirical Methods in
  Natural Language Processing, pages 11631-11646" / "November 12-16, 2024 (c)2024
  Association for Computational Linguistics".
- Anthology identifier: 2024.emnlp-main.649. I did **not** see a DOI string in the
  document and do not assert one.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below arrived as fragments under the summariser's ~125-character cap and
are assembled **only from consecutive returns**. Each assembled sentence is labelled a
reconstruction with its fragment count, and I verify the junction wording rather than
completing any cut by inference.

### (b) Every probability the paper measures, with prompt construction and temperature

**The definition, Section 2.3** - reconstruction from 3 consecutive fragments:

> "This verification process involves constructing specific repetitive prompts that
> induce a high output probability for normal tokens, and checking if a particular
> candidate token has a very low (< 1%) output probability."

Opener analysis: the sentence opens "This verification process involves constructing
specific repetitive prompts that induce...". Those words scope everything after them to
the *verification stage* of the pipeline, i.e. a confirmation step applied to candidates
already ranked by an embedding-space indicator - not to the detection method itself. The
clause my words sit in **ASSERTS** the quantity: it is the paper's definition of what is
measured. And the term it uses is **"output probability"**, twice in one sentence.

**The statistic, Appendix B** - reconstruction from 2 consecutive fragments:

> "For each prompt we generate three tokens and check the maximal probability of our
> target token being predicted, and then take the maximum of this again over all three
> prompts."

Opener analysis: "For each prompt we generate three tokens and check..." scopes the
measurement to a per-prompt loop; the clause **ASSERTS** the statistic. This is the
first narrowing of the entry's wording: the measured quantity is **not** a single
p(token | prompt). It is a maximum over three generated token positions, then a maximum
again over three prompts - a max-of-maxes over 9 positions.

**Temperature, Appendix B** - reconstruction from 2 consecutive fragments:

> "By using a temperature of zero, and designing our prompts such that the desired token
> is typically the first one to be sampled, we minimize the effect of random sampling."

Opener analysis: the sentence opens "By using a temperature of zero, and designing our
prompts such that...", and the opener is the *instrument description*; the main clause
is "we minimize the effect of random sampling". So the clause **ASSERTS** temperature
zero. Note what this sentence also does: it frames the probe in sampling vocabulary
("the first one to be sampled", "random sampling"). The paper is not innocent of the
output side of the pipeline - it is deliberately *neutralising* the stochastic part of
it. That is a recorded **move away from** sampling variation, which reads alike to a
denial once the opener is gone, and is the one place where a careless cut could make the
paper look as though it discussed truncation. It does not.

**The probe prompts, Appendix B** (three, served as templates):
1. "This device repeats its input exactly, as shown in these 100 identical trials." then
   repeated `Input: <<token>>` / `Output: <<token>>` pairs, "<repeated 18 additional
   times>", closing with `Input: <<token>>` / `Output:`.
2. "This helpful assistant explains what a phrase means, replying with identical" ... a
   few-shot exchange ending `User: what does '<token>' mean?` / `Assistant:`.
3. "Below is the output, as you can see it's just giving the same phrase repeated"
   followed by `<token>` repeated, "<95 additional repeats>".

Second narrowing of the entry's wording: prompts 1 and 3 are repetition prompts; **prompt
2 is a definition prompt** ("what does '<token>' mean?"), which is not forced repetition
in any sense. The entry's "under forced repetition" describes two of the three probes.
All three do contain the target token in the prompt, so the entry's
"prompt containing that token" survives intact.

**Other probability-shaped quantities the paper prints:**
- Section 2.4: the indicator is "highly predictive of the maximal token output
  probability (Figure 3)" - again "output probability", the same instrument.
- Figure 3 caption - reconstruction from 4 consecutive fragments:
  > "Under-trained token indicators are predictive of verification probability. The rate
  > of successful verification (p < 0.01) correlates very highly with our proposed
  > indicator, with no false positives at low values of the indicator scores and a low
  > rate of false negatives. The dotted vertical line indicates the default 2% threshold
  > used for verification."
  Opener analysis: "Under-trained token indicators are predictive of verification
  probability." scopes the whole caption to the *indicator-vs-probe* relationship. The
  phrase "The rate of successful verification" is a **rate over vocabulary items whose
  probe probability falls under 0.01**, not a rate over generated tokens. It is a
  detection rate, printed as a function of the indicator score.
- Section 3.2, Jamba: "the maximal probability of producing the token is ~ 10^-8", and
  "probabilities for token output are often unusually close to one". Same instrument,
  instantiated on one model; the 10^-8 figure is a probe-derived maximal output
  probability for a special token, not a generation frequency.
- Section 2.2 / Appendix A speak of "highly negative logits" - a logit-space indicator,
  not a probability. Table 1's footnote confirms the indicator side is embedding-based:
  "These models include a bias term in their final layer, which does not affect our
  results as we use their input embeddings."
- Section 2.3's "most likely 2%" / "the top 2% candidate tokens" is a **ranking cut on
  the indicator**, not a probability and not a top-p. The string "top 2%" is present and
  is the single most plausible thing to misread as a truncation parameter; it is not one.

### (c) Term-by-term search, both passes agreeing

| string | result | where / note |
|---|---|---|
| "top-k" | ABSENT | - |
| "top_k" | ABSENT | - |
| "top-p" | ABSENT | - |
| "top_p" | ABSENT | "top 2%" present but is an indicator-ranking cut, not a sampling parameter |
| "nucleus" | ABSENT | - |
| "min-p" | ABSENT | - |
| "generation_config" | ABSENT | - |
| "logit bias" | ABSENT | "logits" (App. A) and "bias term" (Table 1 footnote) present; neither is this string |
| "logit mask" | ABSENT | - |
| "temperature" | **PRESENT** | App. B: "By using a temperature of zero, ..." (quoted in full above) |
| "sampling" | **PRESENT** | App. B: "... we minimize the effect of random sampling." |
| "generate" | **PRESENT** | App. B: "For each prompt we generate three tokens ..." |
| "decoding" | **PRESENT** | Sec. 2.1: "We test this by checking if decoding a token to a string," - **tokenizer** decoding (string round-trip), NOT sampling/decoding strategy |
| "emission" | ABSENT | - |

The "decoding" hit is the trap in this row of the table. It is the tokenizer sense. A
checker who recorded "decoding: PRESENT" without the sentence would have handed the
ledger a false output-side hit.

### (d) Emission rate: ABSENT

Both passes: ABSENT. No quantity in the paper counts how often an under-trained token
appears in a model's own generated output under normal or unprompted generation. Pass 2,
asked directly: "ABSENT. The paper's verification uses constructed repetitive prompts
and checks output probabilities for candidate tokens. It does not report how often
under-trained tokens appear in a model's own unprompted generations."

Near neighbours that are **not** an emission rate, each one word away:
- "The rate of successful verification (p < 0.01)" (Fig. 3) - rate over **vocabulary
  items**, denominator = tested candidates, instrument = crafted probe.
- "191 out of 49,575 tokens pass our verification step" (Sec. 2.4) - count over
  **vocabulary items**.
- "the maximal probability of producing the token is ~ 10^-8" (Sec. 3.2, Jamba) - a
  single probe probability for one special token. "Producing" is the word that most
  invites the misreading; the quantity behind it is the Appendix B max-of-maxes under
  the crafted prompt, not an observed frequency in free generation.

So on the PUBLISHED-IS-NOT-PERFORMED test: the paper **does not measure** an emission
rate; it does not even define or bound one. There is nothing to name.

### (e) How many vocabulary items, how many models, count or share

**Per-model raw counts, Table 1, 24 models.** Caption - reconstruction from 5
consecutive fragments:

> "Table 1: Detection of under-trained tokens. #Confirmed are the confirmed/tested
> numbers for the tokens tested in verification that are predicted with a maximal
> probability of < 1% across verification prompts. Examples were manually chosen for
> readability, similarity across models or for being particularly striking. Note that
> the leading '_' in tokens such as _SolidGoldMagikarp indicates a leading space.
> *These models include a bias term in their final layer, which does not affect our
> results as we use their input embeddings."

**Numerator class, quoted with its exclusions:** "the tokens tested in verification that
are predicted with a maximal probability of < 1% across verification prompts". It
therefore EXCLUDES (i) every token that was never tested, i.e. everything outside the
top-2% indicator cut, and (ii) any token whose probe probability reaches 1% on any one of
the three prompts, since the statistic is a maximum. **Denominator, checked against its
near neighbours: "tested", i.e. the candidate set, NOT the full vocabulary and NOT the
trained vocabulary.** The column is printed as confirmed/tested.

Counts as served by pass 1, which I could not re-verify cell by cell: confirmed counts
run from 6 (Jamba v0.1) to 3161 (Gemma 2B) across the 24 models. **No aggregate total is
printed.** Pass 1 offered a sum of 11,210 across the 24 rows and labelled it its own
arithmetic; I did not verify it and I do not carry it as a figure. Anyone wanting a
cross-model total must add Table 1 themselves and label it as derived.

**Single-model counts, Section 2.4 (OLMo v1.7 7B), raw counts:** "191 out of 49,575
tokens pass our verification step", and 175 of 993 for the top-2% candidates. MY OWN
ARITHMETIC, labelled as such: 993/49,575 = 2.00%, consistent with 993 being the top-2%
cut; and 175/191 = 91.6% of all verifying tokens in the near-full sweep fall inside that
cut. Neither ratio is printed by the paper.

**Shares, Section 3** - the sentence carries two different denominators:

> "The percentage of verified tokens typically ranges between 5-50% of tested candidate
> tokens, corresponding to 0.1-1% of the total vocabulary size."

**Shares, Section 5 - this is the HEDGED, scoped formulation, and it is the one to
quote:** the sentence opens "Even with our relatively conservative threshold..." and
continues "with typically around 0.1-1% of the vocabulary consisting of severely
under-trained tokens,". The opener scopes the figure to *their* conservative threshold
and the word "typically" carries the paper's own uncertainty. The bare form (0.1-1% of
vocabulary, full stop) appears in Section 3; prefer Section 5's.

So the answer to (e): **both** - per-model raw counts for 24 models (Table 1, denominator
= tested candidates), plus share ranges 5-50% of tested candidates and 0.1-1% of
vocabulary. No single aggregate count, and no single share for a single model's whole
vocabulary.

One item I flag as **unverified**: pass 1 reported small disagreements between Table 2
(7 models, verified top-2% counts per indicator) and Table 1 for the same models -
Mistral 7B v0.3 63 vs 53, OLMo 7B v1.7 177 vs 178 vs 175 in text. I could not confirm
these against raw text and I will not assert a discrepancy in a published paper on a
summariser's cell reading. Treat it as a lead for whoever next gets raw text, not a
finding.

## REGIME

In the paper's own words:
- **Population:** the token vocabularies of open-weight and some API models - 24 models
  in Table 1, 7 in Table 2 - spanning several tokenizer families.
- **Unit of analysis:** the individual **vocabulary item / token id**. Not a prompt, not
  a generation, not a conversation.
- **Instrument, stage 1 (detection):** an indicator computed from the model's **input
  embeddings** ("we use their input embeddings") plus tokenizer-level checks ("checking
  if decoding a token to a string,"). Weight-space and tokenizer-space.
- **Instrument, stage 2 (verification):** three crafted prompts, each containing the
  target token; three tokens generated per prompt; "temperature of zero"; the statistic
  is the maximum over positions then over prompts of the model's next-token probability
  for the target.
- **Threshold / category:** candidate = "the top 2% candidate tokens" by indicator;
  confirmed under-trained = probe probability "< 1%", written elsewhere as "p < 0.01".
- **Operating condition:** adversarially-constructed repetition and definition prompts
  at temperature zero. No sampling truncation is configured because none is needed - the
  quantity read off is the distribution itself, not a draw from it.

**Does the entry's claim sit inside this regime?** The parts about temperature, about
the prompt containing the token, and about the absent sampling parameters: yes,
squarely. The part that says the paper measures "nothing on the output side": no. It
sits *outside* the regime by mis-describing it. The regime's stage-2 instrument reads
the model's output distribution and the paper calls it "output probability" in its own
definition sentence.

## DEFECTS FOUND

**D1 - "nothing on the output side" is contradicted by the paper's own noun. (strike
this leg as worded.)** Section 2.3 defines the measurement as checking whether a
candidate "has a very low (< 1%) **output probability**", and Section 2.4 calls the
target "the maximal token **output probability**". The instrument is a read of the
model's next-token output distribution. The entry's third leg, as written, is false
against the source's own vocabulary. The leg that *is* true, and is the one the entry
needs, is narrower: the paper measures no probability **conditioned on a sampling
truncation rule**, and no **emission rate**. Rewrite, do not delete.

**D2 - "ONLY probability measurement is p(token | prompt)" understates the statistic.
(narrow.)** It is a double maximum: "we generate three tokens and check the maximal
probability of our target token being predicted, and then take the maximum of this again
over all three prompts." Nine positions, max-of-maxes. Any downstream argument that
treats the paper's number as a single conditional probability at a single position is
working with the wrong object, and in particular the max makes the paper's criterion
*harder* to satisfy than a single-position probability would be - which matters if the
candidate ever contrasts its own threshold with the paper's.

**D3 - "under forced repetition" covers two of three probes. (narrow.)** Prompt 2 is
"User: what does '<token>' mean?" - a definition prompt, not repetition. The entry
should say "under crafted prompts (two repetition, one definition) each containing the
token".

**D4 - the paper DOES print a rate, and it is one word from the candidate's. (narrow,
and add the guard.)** Figure 3: "The rate of successful verification (p < 0.01)". Its
numerator class is vocabulary items whose max probe probability falls below 0.01; its
denominator is tested candidates. What it MISSES relative to an emission rate: every
token the model actually emits in ordinary use, since nothing here is measured during
generation; it also misses all untested tokens outside the 2% cut. What it INCLUDES that
an emission-rate claim excludes: tokens that never appear in any output at all - indeed
the whole point is that these tokens are ones the model will not produce. The two
quantities overlap nowhere. If the entry's novelty rests on "no one has measured an
emission rate", it must say so in those words, because "rate" alone is already in this
paper.

**D5 - the absences in (c) are summariser-attested, not grep-verified. (record as a read
limitation, not a weakening of the claim.)** I could not get raw text: curl refused at
the proxy, arXiv HTML rate-limited three times. Pass 2 flagged its own scan as "not a
verified text search". The absence findings are the strongest I could obtain within
budget and they are internally consistent across two prompts, but a future checker with
raw text should re-run the strings. This is COULD NOT GREP, which is distinct from the
strings being present.

**D6 - two near-miss hits a careless checker would mis-score. (guard.)** "decoding" is
PRESENT but in the tokenizer sense ("checking if decoding a token to a string"); "top 2%"
is PRESENT but is an indicator-ranking cut, not top-p. Neither is an output-side
sampling setting. If the entry's absence list is ever challenged with "but the paper says
decoding", this is the answer.

**D7 - citation front matter is thin. (fix in the entry.)** The entry carries
"arXiv:2405.05417, EMNLP 2024". The printed venue line is "Proceedings of the 2024
Conference on Empirical Methods in Natural Language Processing, pages 11631-11646",
November 12-16, 2024; anthology id 2024.emnlp-main.649; both authors at Cohere. No DOI
string was visible to me and I assert none. Also: I verified against the **EMNLP 2024
PDF**, while the entry's claim-text and routes lean on arXiv v3. I have no evidence the
two differ on any point above, but I did not compare them, so the claim as verified is
verified *against the EMNLP version*.

## ROUTES THAT FAILED

- `curl https://arxiv.org/html/2405.05417v3` - exit 56, "CONNECT tunnel failed, response
  403"; proxy reported `arxiv.org:443 - connect_rejected`. Tool-scoped: I did not retry
  by routing around it, and did not probe the proxy further.
- WebFetch `https://arxiv.org/html/2405.05417v3` - `RATE_LIMIT_EXCEEDED` (source:
  target). Three attempts across the session, all three rate-limited. **The arXiv HTML
  route named in the entry is COULD NOT READ for this session**, not NOT FOUND.
- `https://arxiv.org/pdf/2405.05417` - not attempted; the host was already refusing both
  tools, and spending the last fetch there would have cost the verbatim re-check.
- Unpaywall - deliberately skipped, since its API wants a contact email and no personal
  identifier goes into a URL here.
- 1 WebSearch, used only to locate the ACL Anthology identifier from the citation
  (returned 2024.emnlp-main.649). Not a refusal; no classifier refusal occurred. Note
  that the same paper came back under several titles and mirrors in that one result set -
  Cohere's research page twice, PapersWithCode, a preview.aclanthology mirror, Underline -
  and those are **repeated title returns of one document, counted as one, never as
  corroboration.**

On what would settle D5: the kind of document needed is **machine-readable raw text of
this exact paper** - the arXiv LaTeX source bundle (`/e-print/2405.05417`) or the HTML
render - opened by a tool that does not pass through the summariser, so the strings can
be grepped rather than scanned. `raw.githubusercontent.com` is the one host here where a
raw read bypasses the summariser, and the authors' released code lives on GitHub; but
the code repository is **not** the kind of document that can settle an absence claim
about the *paper's text*, so I name it as a route for the method's sampling settings
only, and I call that a guess, not a lead.

## BEARING ON THE LEDGER ENTRY

**Claim holds: MOSTLY. Two narrowings and one struck-and-rewritten leg.**

- Leg "no top-k / top-p / generation_config / logit masking": **HOLD**, with D5's read
  caveat attached. Nine strings, all ABSENT across two passes.
- Leg "temperature zero": **HOLD**, verbatim - "By using a temperature of zero, ... we
  minimize the effect of random sampling."
- Leg "prompt containing that token": **HOLD** - all three probes embed the target.
- Leg "under forced repetition": **NARROW** to two of three probes (D3).
- Leg "ONLY probability measurement is p(token | prompt)": **NARROW** to the max over
  three generated positions and then over three prompts (D2).
- Leg "measures nothing on the output side": **STRIKE AS WORDED; REWRITE.** The paper
  measures what it itself calls an "output probability", and prints "The rate of
  successful verification (p < 0.01)" over it. The surviving, defensible form is: *this
  paper measures the model's next-token output probability for a token under crafted
  prompts at temperature zero, but no probability conditioned on a sampling truncation
  rule, and no rate at which the token is emitted in ordinary generation.*

**On the question the entry actually turns on (sub-claim f):** the candidate's premise
that "the glitch-token literature is input-side only" is **not correct as to this paper**
if "input-side" is read literally - the verification stage is an output-distribution
measurement. It **is** correct in the sense the candidate needs - this paper configures
no truncation rule and measures no emission rate - and the entry should be made to say
that, because the stronger version is refutable by a single sentence of Section 2.3 and
would collapse the novelty claim the moment a reviewer opened the paper. The novelty
claim survives the correction; the wording does not.

**Promotion condition**, if the entry is to keep the absence leg at full strength: a
checker with raw text (arXiv e-print source or an unsummarised HTML read) re-runs the
nine strings and confirms ABSENT, and compares arXiv v3 against the EMNLP
2024.emnlp-main.649 text for any added appendix on decoding settings. Until then the
absence is a two-pass summariser scan of the EMNLP PDF, which is what I had and what I
am reporting.
