# VERIFY - GlitchProber and GlitchMiner: neither prints an emission rate or a post-truncation support share; GlitchProber's fix is MLP-activation patching
Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it: that GlitchProber and GlitchMiner - the two sources the Gate 2
record itself named as the first an adversary should open - were opened; that NEITHER
carries an emission rate nor a post-truncation support share; and that GlitchProber's
remedy is patching MLP activations, which is not serving-side.

Verdict in one line: **the claim holds**, and I opened both documents rather than their
abstracts. Two corrections are owed to the entry's front matter (GlitchMiner's venue and
year), and one word in the claim needs narrowing: GlitchProber's fix is activation-side
**and runs at inference time**, so "not serving-side" is right only if "serving-side"
means the decode/sampling layer. Detail below.

## READ LEVEL

**GlitchProber - FULL TEXT** (HTML v2 of the arXiv deposit, read in two passes:
front matter, all section headings, metrics tables, Sections 3.1/3.3, 4.2.1/4.2.2/4.2.3,
5, 6, 7.2/7.3/7.4). Route used: `https://arxiv.org/html/2408.04905v2`.

Citation from its own front matter:
- **DOI 10.1145/3691620.3695060** - Zhibo Zhang (first author, front matter), 2024,
  "GlitchProber: Advancing Effective Detection and Mitigation of Glitch Tokens in Large
  Language Models". arXiv:2408.04905.
- Front-matter author order: Zhibo Zhang (HUST); Mark Huasong Meng (TU Munich); Li Li
  (Beihang); Wuxia Bai (HUST); Kailong Wang (HUST, corresponding); Jun Wang (Beihang);
  Yuxi Li (HUST); Ling Shi (NTU Singapore); Haoyu Wang (HUST).
- Venue line as printed: "ASE '24, October 27-November 1, 2024, Sacramento, CA, USA";
  ACM ISBN 979-8-4007-1248-7/24/10; 13 pages.
- **Front-matter trap, recorded because this ledger keeps tripping on it:** the paper's
  own ACM reference-format line orders the authors differently from the title block
  (Zhang, Bai, Li, Meng, Wang, Shi, Li, Wang, Wang). I have taken the order above from
  the **title block**, per the discipline. Either way the first author is Zhibo Zhang.

**GlitchMiner - FULL TEXT** (HTML v5 of the arXiv deposit, read in two passes: front
matter, abstract, all headings, Sections 2.2, 3.1-3.3, 4.1-4.4, 5, Broader Impact).
Route used: `https://arxiv.org/html/2410.15052v5`. Bibliographic record confirmed
against the publisher's own landing page (`ojs.aaai.org/index.php/AAAI/article/view/40693`).

Citation from front matter plus publisher record:
- **DOI 10.1609/aaai.v40i40.40693** - Zihui Wu (first author), **2026**,
  "GlitchMiner: Mining Glitch Tokens in Large Language Models via Gradient-based Discrete
  Optimization". *Proceedings of the AAAI Conference on Artificial Intelligence*, Vol. 40
  No. 40 (AAAI-26 Technical Tracks 40), pp. 33998-34005, published 2026-03-14.
  arXiv:2410.15052 (preprint first posted 2024).
- Authors in order: Zihui Wu, Haichang Gao, Ping Wang, Shudong Zhang, Zhaoxiang Liu,
  Shiguo Lian. Note: the arXiv v5 front matter itself carries **no** DOI or venue line;
  the venue had to be established from the AAAI landing page.

**Routes not needed:** no PDF route, no PMC/Europe PMC, no doi.org resolution, no
Unpaywall (skipped entirely by rule).

## WHAT THE SOURCE SAYS (quotations as served)

The summariser caps verbatim quotation at roughly 125 characters. Where a sentence runs
longer I say so and mark the cut; I have not completed any cut string by inference.

### (b) The quantity each paper reports, with numerator and denominator

**GlitchProber.** Its detection metrics are **precision, recall and F1-score** plus raw
**True Positive** counts (Table 3, repeated in Table 7 for the ablation), and resource
figures: **time cost in minutes** for processing the full vocabulary (Table 2) and
**memory in GB** (Table 4). *Published is not performed check:* the paper **prints** the
precision/recall/F1 values but **does not print their formulas** - no numerator or
denominator is written out in the paper's own words anywhere I read. So for those three,
the paper **reports** values whose denominators it leaves to convention.

The one quantity it does define arithmetically is the repair metric, Eq. (13):

> Repair Rate = Repaired Token Number / Total Glitch Token Number

Numerator: glitch tokens GlitchProber's intervention fixes. Denominator: glitch tokens it
had already detected. Printed values (Table 5, rule-based -> GlitchProber): Llama-2-7b-chat
3,805/59.22% -> 4,021/62.58%; Mistral-7B-Instruct-v0.1 359/12.92% -> 1,045/37.60%;
Qwen-7B-Chat 10,645/34.68% -> 14,765/48.11%; Gemma-2b-it 9,865/35.28% -> 13,638/48.77%;
Yi-6B-Chat 3,390/41.83% -> 4,317/53.26%; average 5,613/36.79% -> 7,758/50.06%.

And one census figure, Section 3.1:

> "We traverse all the 32,000 tokens of the Llama2 model and eventually identify 6,425
> glitch tokens from the entire vocabulary."

**GlitchMiner.** Exactly one metric, **Detected@N**, defined thus:

> "This metric measures the absolute number of true glitch tokens identified within the
> top N predictions made by the algorithm."

and as a formula line:

> "Detected@N = Number of true glitch tokens among the top N predictions."

Numerator: true glitch tokens among the algorithm's top-N ranked candidates. **Denominator:
none.** There is no vocabulary size, no token-sampled count, no generation-step count in
the definition. Printed as Detected@1000 and Detected@2000 (Table 2). The paper's other
figures - "over 10% average efficiency improvement" (abstract), 10.5%/10.7%, "90% of
cases" - are relative gains over baselines and a share of method comparisons, not rates of
anything in a model's output.

### (c) Emission rate under generation? Share of generation steps surviving truncation?

**GlitchProber - emission rate: ABSENT.** Sections read to establish the absence: 3.1, 3.3,
all of 5 (detection evaluation, Tables 2/3/4/7), all of 6 (fix evaluation, Tables 5/8),
7.2, 7.3, and every section heading in the paper (listed above - there is no section whose
subject is generation-time behaviour). The paper's unit of analysis is a **vocabulary
entry**, not a decoding step. Its glitch criterion, Section 3.2, is a forced-repetition
probe:

> "otherwise, the token is classified as a glitch token."

*What the sentence's opening words scope:* "otherwise" scopes this to the branch of the
repetition task where the model fails to echo back a token it was explicitly asked to
repeat. The clause **asserts a classification rule**, not a quantity. It measures
**elicited failure under a forced prompt**, which is a different thing from how often the
model emits such a token when it is free to choose.

**GlitchProber - post-truncation support share: ABSENT.** No section computes any share
of generation steps, and the paper never applies or discusses a truncation rule (see (e)).

**GlitchMiner - emission rate: ABSENT.** Sections read to establish the absence: 2.2, 3.1
(Token Filter), 3.2 (Glitch Token Verification), 3.3 (Token Selection), 4.1 (Experimental
Setup), 4.2 (Main Results), 4.3 (Ablation), 4.4 (Token Entropy Analysis), 5, Broader
Impact. The only output-side sentence in the method is:

> "the red text {token} represents the model's predicted output."

which says nothing about how often anything is produced, and the paper's own answer when
asked directly for a vocabulary fraction or an output rate is that it prints raw counts
(Detected@1000, Detected@2000) and average entropies (Figure 5) and nothing else.

**GlitchMiner - post-truncation support share: ABSENT.** No truncation rule appears
anywhere in the paper.

### The near-neighbour number, checked in both directions

GlitchProber's **6,425 of 32,000** is the only figure in either paper that could be
mistaken for the candidate's quantity, so it gets the full overlap test.

- **Numerator class:** vocabulary entries that **fail the repetition task** under
  GlitchProber's template at temperature 0 (plus, in the detection pipeline, tokens the
  SVM classifier flags and the validation step confirms). Exclusions: the class is defined
  on tokens as *inputs to be echoed*, so it excludes any notion of the model choosing the
  token.
- **Denominator:** the **full 32,000-entry Llama-2 vocabulary** - checked against the near
  neighbours it is **not**: not the tokens the model actually emitted, not the tokens in
  any model's top-k or nucleus support at any step, not the tokens surviving a probability
  threshold.
- **What this class MISSES relative to an emission rate:** everything about generation.
  A token can be in this 6,425 and have zero probability of ever being sampled; the figure
  is silent on frequency of occurrence in output.
- **What it INCLUDES that an emission rate excludes:** the whole unsampled tail. Every
  glitch token the model would never emit at any temperature still counts in full here,
  with weight 1, exactly like a token the model emits constantly.

So it is **a vocabulary-membership count, one word away from and categorically different
from** either an emission rate or a post-truncation support share. Any percentage derived
from it (20.1%) would be **MY OWN ARITHMETIC** - the paper prints no such percentage, in
Section 3.3 or anywhere I read - and would still be a vocabulary share, which is the wrong
quantity twice over (wrong numerator class, wrong denominator).

### (d) GlitchProber's remedy, quoted

The abstract (sentence runs longer than the quote cap; opening words preserved, cut marked):

> "Taking one step further, GLITCHPROBER rectifies abnormal model intermediate layer
> values to mitigate the ..." [cut]

*What the opening words scope:* "Taking one step further" scopes this as an addition
**beyond** the paper's detection contribution. The clause **asserts** the remedy.

Section 4.2.1, the sentence that pins down what is and is not touched:

> "Note that we only adjust the activation values of the MLP module and not the attention
> patterns."

*Opening-words scope:* "Note that" flags a **restriction on the intervention's scope**.
The clause **asserts** that the mechanism is MLP activations and **denies** that attention
is touched. This is the load-bearing sentence for the claim.

> "By only adjusting MLP activation values, we aim to fix glitch tokens without
> introducing additional noise."

*Opening-words scope:* "By only adjusting MLP activation values" scopes the sentence to
that one mechanism and states the rationale. Note "we **aim to**" - this is the **hedged**
formulation of the goal, and I quote it in preference to any bare assertion of success.

Mechanism, Section 4.2.2 (sentence longer than the cap):

> "For neurons in Neu_n^up that should be activated but have insufficient activation in
> glitch tokens, the algorithm ..." [cut]

Per Algorithm 2 (Section 4.2.3) as served: neurons in the under-activated set are
amplified by beta and neurons in the over-activated set are divided by alpha; the
rule-based baseline fixes alpha = 4, beta = 1.5 (Section 6.2).

Section 7.3, which is the sentence that classifies the remedy (longer than the cap):

> "GLITCHPROBER adaptively modifies the process of model calculation without altering the
> model parameters, ..." [cut]

*Opening-words scope:* Section 7.3 is headed "Glitch Token Mitigation by Fine-tuning", so
this sentence sits in a **contrast against fine-tuning**. The clause **asserts** that the
intervention changes the computation, and **denies** that it changes weights.

**Classification.** Training-side: **no** - Section 7.3 explicitly contrasts the method
with fine-tuning and says the parameters are not altered. Activation-side: **yes** - MLP
activation values in selected key layers, mid-forward-pass. Serving-side: **this is where
the claim needs one word narrowed.** GlitchProber's fix is applied **at inference time**,
on every forward pass, which in plain English is "while the model is being served". What
it is **not** is a change to the serving stack's **decode or sampling layer** - no logit
masking, no vocabulary ban-list, no sampler parameter, no change to the truncation rule.
If the entry's "serving-side" means the sampler/decoder, the claim is correct as written.
If a reader takes "serving-side" to mean "anything you can deploy without retraining",
GlitchProber **is** that, and the entry's phrasing would mislead them. I recommend the
entry carry it as **"activation-side, inference-time, not a sampler-side change"**.

### (e) Does either read generation_config or apply top-k / top-p?

**GlitchProber: no top-k, no top-p, no generation_config.** It does set a decoding
parameter - temperature - and nothing else:

> "we set the temperature to 0 to eliminate randomness and ensure consistency in the
> model's responses."

followed immediately by:

> "All other configurations are default."

*Opening-words scope:* that second sentence sits in Section 3.1 (Experiment Setup) and
scopes to the empirical study's configuration. It **records a move away from** configuring
anything else - it is the paper declining to specify the decoding regime, not asserting a
truncation setting. Restated in Section 3.2: "which is configured by setting the
temperature parameter to zero." And Section 7.2: "LLMs are required to generate, on
average, twenty tokens at a zero temperature setting" - that is a **cost** statement about
exhaustive search, not a measurement of glitch emission. The words top-k, top-p, greedy,
generation_config and truncation are **absent**. The paper's "random sampling" refers to
sampling vocabulary tokens to train the SVM classifier, not to decoding.

**GlitchMiner: none of them.** Sections 3.2 and 4.1 contain no greedy, argmax, temperature,
sampling, max_new_tokens, generation_config, top-k or top-p. "argmax" appears only inside
the Section 3.3 optimization objective, not as a decoding setting. The paper **does not
state the decoding strategy** by which the model's predicted token is read off. Its
"decoding" vocabulary is tokenizer round-trips, not generation - "by decoding and then
re-encoding it", "If decoding fails, the token is classified as UNDECODEABLE" - and its
"large batch sampling" quote is about AutoPrompt/GCG candidate sampling in the related
work, not text sampling.

So: **neither paper reads a model's generation_config, and neither applies top-k or
top-p.** GlitchProber touches exactly one generation knob (temperature = 0) and leaves the
rest at library defaults without reporting them.

## REGIME

**GlitchProber, in its own words.** Population: the complete vocabulary of five
instruction-tuned open-weight models - Llama-2-7b-chat, Mistral-7B-Instruct-v0.1,
Qwen-7B-Chat, Gemma-2b-it, Yi-6B-Chat (32,000 entries for Llama-2). Unit of analysis: a
**vocabulary entry**. Instrument: features extracted from transformer intermediate layers
(attention patterns and hidden/MLP activations), dimension-reduced, fed to an **SVM
classifier**, then confirmed by a repetition task. Operating condition: **temperature 0,
all other generation settings default**, ~20 generated tokens per probe. Threshold:
whether the model echoes the token back. Category: "glitch token" as a property of a
vocabulary entry under that probe. Remedy regime: alpha/beta rescaling of MLP activations
in selected key layers, parameters unaltered; downstream cost measured on GSM8K, HumanEval
and MMLU (Table 8: original/GlitchProber/fine-tuning - GSM8K 0.315/0.301/0.238; HumanEval
pass@1 0.129/0.103/0.009; pass@5 0.190/0.161/0.024; MMLU 0.453/0.417/0.229), which the
paper calls "comparable" to the original model.

**GlitchMiner, in its own words.** Population: token space of several LLM architectures.
Unit of analysis: a **candidate token ranked by the optimizer**. Instrument: gradient-based
discrete optimization with **entropy as the measure of prediction uncertainty** plus local
search; a tokenizer round-trip filter; verification by a prefilled template ("Sure, the
string is:") that "ensures a uniform starting point for each token evaluation", with
cross-template confirmation - "A token is confirmed as a glitch token only if it fails the
repetition task across all templates." Operating condition: a fixed prefilled probe
template; decoding strategy unstated. Threshold: failure of the repetition task across all
templates. Category: glitch token as a ranked discovery, scored by Detected@N.

**Does the claim sit inside either regime?** The claim is about what these papers do and do
not print, so it sits inside both regimes by construction. The candidate's *quantities* -
emission rate under generation, share of generation steps on which an item survives a
truncation rule - sit **outside both**. Neither paper's unit of analysis is a decoding
step; neither paper has a truncation rule to survive. A result proved over a vocabulary
census is silent about decode-time frequency, not supportive of any figure for it.

## DEFECTS FOUND

1. **Citation front matter - GlitchMiner's year and venue.** This paper is **AAAI 2026**
   (Proc. AAAI, Vol. 40 No. 40, pp. 33998-34005, DOI 10.1609/aaai.v40i40.40693, published
   2026-03-14), with the arXiv preprint (2410.15052) first posted in 2024. An entry that
   carries it as "2024" or as venue-unspecified should be corrected. The entry's
   line-label "(FSE/ASE/AAAI)" covers the line, not these two papers: **GlitchProber is
   ASE 2024, GlitchMiner is AAAI 2026, and neither is FSE** - worth a word so a reader
   does not go looking for an FSE paper that is one of these two.

2. **Citation front matter - GlitchProber's author order.** The paper's own ACM
   reference-format line disagrees with its title block. Record from the title block:
   first author **Zhibo Zhang**, DOI **10.1145/3691620.3695060**, 2024.

3. **"Not serving-side" is one word too strong as written.** The remedy is activation-side
   **and inference-time**: Section 7.3 says the method "adaptively modifies the process of
   model calculation without altering the model parameters". It is not a sampler- or
   decoder-side change, which is the distinction the entry evidently means, but a reader
   who reads "not serving-side" as "cannot be deployed without retraining" would be misled
   in the opposite direction from the paper. Narrow the phrasing.

4. **A trap worth writing into the entry so the next reader does not fall in it.**
   GlitchProber prints "6,425 glitch tokens" out of "all the 32,000 tokens of the Llama2
   model". That is a **vocabulary-membership count**, and it is the number most likely to
   be mistaken for the candidate's. The overlap test above shows it misses all of
   generation and includes the entire never-sampled tail. If the entry does not already
   say so, it should say the near-miss number exists and why it is not the quantity.

5. **No defect in the substance of the negative finding.** Both documents were opened and
   read in full. Neither prints an emission rate. Neither prints a post-truncation support
   share. Neither reads a generation_config or applies top-k/top-p. On these points the
   entry is accurate.

## ROUTES THAT FAILED

None. All five fetches returned on the first attempt:
- `https://arxiv.org/html/2408.04905v2` (two passes) - served.
- `https://arxiv.org/html/2410.15052v5` (two passes) - served.
- `https://ojs.aaai.org/index.php/AAAI/article/view/40693` - served.

No PDF route, doi.org resolution, PMC/Europe PMC, NSF PAR or Unpaywall call was needed, so
no route is recorded as failing. Both searches returned; neither was refused by the
classifier.

**Not a route failure but a read limit worth recording:** the summariser's ~125-character
verbatim cap means four of the sentences I rely on in (d) and (b) are quoted as opening
words with the cut marked, not as complete sentences. I did not reconstruct any of them
from multiple fragments, and I have not completed any cut string by inference. The one
sentence that does the real work for the claim - "Note that we only adjust the activation
values of the MLP module and not the attention patterns." - fits under the cap and is
quoted whole, with grammar intact on both sides.

## BEARING ON THE LEDGER ENTRY

**HOLD the check, with a narrowing and two citation corrections.**

The entry records a promotion check as run and negative. It was run, and it is negative.
Both named documents were opened at FULL TEXT, not at abstract level. On the two
quantities that matter:

- **Emission rate under generation: neither paper prints one.** GlitchProber's unit of
  analysis is a vocabulary entry probed at temperature 0; GlitchMiner's is a ranked
  candidate scored by a denominator-free count. Neither paper has a section whose subject
  is decode-time frequency.
- **Post-truncation support share: neither paper prints one.** Neither paper applies or
  discusses a truncation rule at all - top-k and top-p are absent from both, and
  GlitchProber explicitly leaves every generation setting but temperature at "default".

So the second of the two reasons the grade is not Low **survives** this re-test. The
failure mode the task worried about - "if either paper does print one of the candidate's
quantities, the grade is wrong in the direction that matters most" - did not occur. The
nearest thing to a hit, GlitchProber's 6,425/32,000, fails the overlap test in both
directions and is a different quantity.

**Three edits to the entry, none of which change the bearing:**

1. Narrow "which is not serving-side" to **"which is activation-side and inference-time,
   not a sampler-side change"**, and cite Section 4.2.1 ("Note that we only adjust the
   activation values of the MLP module and not the attention patterns.") together with
   Section 7.3 ("adaptively modifies the process of model calculation without altering the
   model parameters").
2. Fix GlitchMiner's front matter: **DOI 10.1609/aaai.v40i40.40693, Zihui Wu, 2026**, AAAI
   Vol. 40 No. 40, pp. 33998-34005; arXiv:2410.15052 preprint 2024. And note that neither
   of these two papers is the "FSE" in the line label.
3. Record GlitchProber as **DOI 10.1145/3691620.3695060, Zhibo Zhang, 2024**, ASE '24,
   taking the author order from the title block rather than the paper's own ACM reference
   line, which disagrees with it.

**Nothing here converts to a promotion condition.** A promotion condition would need a
document of a kind that measures decode-time frequency - a serving-trace or
decoding-behaviour study with a generation step as its unit of analysis. Neither of these
two is that kind of document, and I am not nominating a replacement, because I have not
opened one; naming one here would be a guess dressed as a lead.
