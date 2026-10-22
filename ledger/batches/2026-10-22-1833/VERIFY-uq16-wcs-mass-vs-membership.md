# VERIFY - WCS (Awad et al. 2026) measures membership, not mass: the Medium cap holds, but its "shipped defaults" leg does not

Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261022-16 holds that Prior 1 - Awad, Conde, Arriaga, Fu, Coronado-Blazquez & Reviriego,
"Lost in Sampling: Assessing Lexical Reachability in LLMs via the Word Coverage Score (WCS)",
arXiv:2605.27268 - builds the candidate's exact instrument and points it the opposite way, capping
novelty at Medium without making the candidate a known. Six sub-claims:

1. Endpoint is MEMBERSHIP in the truncated sampling set, explicitly NOT probability mass, disclaimed
   in Section 6.1 as not accounting for "this soft probabilistic erosion".
2. Unit is the word-context pair: 100 words from the 10k-40k frequency band x 10 PG-19 contexts = 1,000 pairs.
3. Operating condition is a FORCED-PATH audit along a ground-truth 256-token prefix, not free
   self-conditioned generation.
4. Word list consists by construction of legitimate human words and therefore EXCLUDES every
   under-trained or tokenizer-unreachable vocabulary item; stated aim "ensuring that the WCS measures
   the reachability of legitimate human expressions".
5. Printed numbers: WCS 0.059-0.230 in Table 2; 22-57% of target words erased; mean word-level
   reachability 0.740 base to 0.728 instruct.
6. Never mentions under-trained, glitch or unused tokens; does not cite Land & Bartolo.

Verdict in one line: sub-claims 1, 2, 3, 5 and 6 HOLD as printed. Sub-claim 4 holds as an ENTAILMENT
of the construction but is NOT a stated exclusion - the paper never speaks of under-trained tokens at
all, so the entry must not attribute the exclusion to the paper's own scope language. And one fact the
claim's framing obscures: the paper DOES have a documented-defaults arm, and it is the headline table.

## READ LEVEL

FULL TEXT, summariser-mediated, both versions:
- https://arxiv.org/html/2605.27268v2 - full text, all sections, tables, figures, bibliography. Three prompts.
- https://arxiv.org/html/2605.27268v1 - full text, used only to check version drift on the cited numbers.
- https://arxiv.org/abs/2605.27268 - front matter. Two prompts.

Quotation constraint, stated plainly: every quotation below came through the fetch summariser, which caps
verbatim return at roughly 125 characters. Anything longer than that is a RECONSTRUCTION FROM ORDERED
CONSECUTIVE SEGMENTS, labelled as such with its fragment count, assembled only from consecutive returns
and verified at each junction. I did not read the raw PDF glyphs - curl is tool-scoped blocked at this
proxy (CONNECT tunnel failed, 403), so the PDF route named in the entry was not available to me as a
greppable file. This is a limit on my quotation fidelity, not on coverage: every section the six
sub-claims touch was served.

(a) FRONT MATTER, as printed:
- Title: "Lost in Sampling: Assessing Lexical Reachability in LLMs via the Word Coverage Score (WCS)"
- Authors, printed order, with diacritics from the front matter: Samer Awad, Javier Conde, Carlos Arriaga,
  Tairan Fu, Javier Coronado-Blazquez [printed Coronado-Blazquez with an acute accent on the a: Blazquez],
  Pedro Reviriego. Six authors. The entry's order is correct.
- Submitted: 2026-05-26. This version: v2, 2026-08-21.
- Version read: v2 (and v1 for the drift check).
- Venue: no venue printed. No Journal-reference field.
- DOI: no DOI printed.
- Comments field: none.
- Subjects: cs.CL, cs.AI.

## WHAT THE SOURCE SAYS (quotations as served)

(b) SECTION 6.1 AND WHETHER MASS IS MEASURED ANYWHERE

Location: Section 6 is "Discussion"; subsection 6.1 is titled "Interpretation of the Word Coverage Score".
It is NOT the limitations section - the paper's Limitations is Section 8, which carries a separate,
related caveat about "soft probability suppression". The entry's "its Section 6.1" is right about where
the sentence sits; it should not be read as "its limitations section".

The disclaimer, with the sentence before and after. RECONSTRUCTION from 7 consecutive segments:

  [sentence before] "Such a word remains technically reachable, but its generational frequency is
  reduced, leading to a subtler form of soft erosion."

  [target] "Because the WCS focuses strictly on the total elimination of linguistic paths it does not
  account for this soft probabilistic erosion."

  [sentence after] "Consequently, our empirical results must be interpreted as a conservative lower
  bound on the true scale of word erosion; the absolute loss of human lexical diversity in practical
  applications is likely larger due to these cumulative, non-binary suppression effects that escape
  the WCS metric."

WHAT THE OPENING WORDS SCOPE: "Because the WCS focuses strictly on the total elimination of linguistic
paths" scopes the denial to the metric's own construction - it is a causal opener that derives the gap
from the binary design, not a hedge about data or a note about a result that came out null. The clause
my quoted words sit in DENIES the quantity: it asserts that the instrument does not account for soft
probabilistic erosion. The following sentence RECORDS A MOVE AWAY from measuring it - the authors convert
the gap into a directional claim about their own numbers ("conservative lower bound"), which is the
hedged, cited-in-context formulation and the one the entry should carry. This is the strongest available
reading for the entry, and it is the paper's own.

Does the paper measure probability mass anywhere at all? NO MASS QUANTITY PRINTED. There is no total
probability of target words, no mass retained or removed, no cumulative probability, in any table, figure
or sentence. The served results are binary reachability fractions, WCS values and erased-word percentages
(Table 2, Table 4, Figures 2-6). Table 3's "Count" column is corpus frequency in millions - a corpus
count, not a model probability. Section 6.1 discusses probability dampening QUALITATIVELY and says the
metric does not capture it. PUBLISHED IS NOT PERFORMED, in the other direction too: on mass, this paper
does not define, bound or predict a figure either - it NAMES the phenomenon and DISCLAIMS it.

The formal definition, as served (Eq. 4, Section 3.3), single segment:

  "WCS(\theta) = \frac{1}{\sum_{w \in W} |C_w|} \sum_{w \in W} \sum_{c \in C_w} \mathcal{R}_{\theta}(w, c)"

R_theta(w,c) is the binary reachability of Eqs. (1)-(3). Section 3.2 defines reachability as "a binary
indicator of whether a token remains in the 'active' vocabulary set after a sampling filter is applied."
Min-p (Eq. 3) compares P(t_i) against m * P(t_top) - a probability appears INSIDE the predicate, but the
output is a 0/1 indicator. That distinction is the whole of sub-claim 1 and it survives: a probability
used as a threshold test is not a mass measurement.

(c) WORD LIST CONSTRUCTION, AND THE STRING SEARCHES

Section 3.4, "Frequency-Based Lexical Selection". Frequency band, RECONSTRUCTION from 2 consecutive segments:

  "From the total corpus, we isolate the 'Middle-Long Tail' band by selecting words ranked between
  10,000 and 40,000 in total frequency."

Frequencies come from the Google Web Trillion Word Corpus as compiled by Norvig [17] - NOT from PG-19.
PG-19 supplies the contexts only. The entry's phrasing keeps these straight.

Selection and filtering, RECONSTRUCTION from 2 consecutive segments:

  "The words are selected randomly from that range, and before adding them to the lexical set W, we
  apply a Dictionary-Validation Filter."

The filter's content, RECONSTRUCTION from 3 consecutive segments:

  "Each candidate word was cross-referenced against the Moby Word Lists [18] to remove non-lexical
  artifacts such as URLs, OCR errors, and technical metadata while preserving the authentic
  frequency-based sampling of the web-scale corpus."

Contexts, Section 3.5, RECONSTRUCTION from 2 consecutive segments - this is the sentence the entry quotes:

  "Each word in W is then mapped back to C naturalistic contexts within the PG-19 corpus for evaluation,
  ensuring that the WCS measures the reachability of legitimate human expressions."

WHAT THE OPENING WORDS SCOPE: "Each word in W is then mapped back to C naturalistic contexts within the
PG-19 corpus for evaluation" scopes the "ensuring" clause to the CONTEXT MAPPING, not to the word list.
The entry attaches "ensuring that the WCS measures the reachability of legitimate human expressions" to
its word-list sub-claim. On the grammar as served, the purpose clause is governed by the mapping of words
into naturalistic human contexts - the legitimacy being secured is that of the EXPRESSIONS (word-in-context),
which is why the paper says "expressions" and not "words". The clause ASSERTS a design aim; it does not
assert a vocabulary exclusion. The entry's use is close but one word off the hinge.

Counts: N_w = 100 words (Section 4.2; Appendix Table 3 lists "the 100 target words"). N_c = 10 contexts
per word, drawn from the PG-19 test partition, each with a 256-token prefix. Total 1,000 word-context
pairs; the Appendix calls them "1,000 forced-path audit samples". Section 3.5 also records that incoherent
contexts were replaced after a check with gemini-2.5-flash. Sub-claim 2 holds exactly as written.

Could under-trained, glitch, unused or tokenizer-unreachable vocabulary items be in the list? Stated
position: the paper says NOTHING about them. Selection is at the WORD level from a frequency-ranked list,
not at the token level. The only explicit filter removes "URLs, OCR errors, and technical metadata" - it
does not name misspellings, proper nouns, non-English items, or glitch tokens. The Limitations section
notes that sub-word segmentation varies across tokenizers but states no exclusion rule on that ground.
My own reading of what that construction entails, labelled as MY INFERENCE and not the paper's words: a
word drawn from frequency ranks 10,000-40,000 of a web-scale corpus and then cross-validated against the
Moby dictionary cannot be an under-trained or unused vocabulary item, because those are by definition
near-zero-frequency strings that no dictionary carries. So the exclusion is real but it is an ENTAILMENT
of the construction, not a scope statement the paper makes. The entry's "by construction consists of
legitimate human words and therefore EXCLUDES" is sound reasoning; its "stated aim being..." clause
mis-sources that exclusion to a sentence that is about context mapping.

STRING SEARCH over full text, footnotes and bibliography, each reported separately:
- "under-trained"      ABSENT
- "undertrained"       ABSENT
- "glitch"             ABSENT
- "unused token"       ABSENT
- "SolidGoldMagikarp"  ABSENT
- "Land"               ABSENT. No bibliography entry with an author surnamed Land; no Land & Bartolo
                       reference anywhere. Sub-claim 6 holds in both halves.

(d) FORCED PATH OR FREE GENERATION

Forced path. The settling sentence, Section 3.1, served whole in a single segment (110 characters, so
this one is NOT a reconstruction):

  "We provide the model with the ground-truth prefix context C and force a deterministic traversal of
  the path w."

WHAT THE OPENING WORDS SCOPE: "We provide the model with the ground-truth prefix context C" scopes the
whole clause to an externally supplied human prefix; the verb "force" ASSERTS the operating condition.
The paper's own name for the procedure is the "Forced-Path Audit". Prefix length L = 256 tokens
(Section 3.5); contexts from PG-19 [19]. There is no free self-conditioned generation anywhere: nothing
the model samples is ever fed back as its own context. Sub-claim 3 holds.

(e) THE NUMBERS, WITH WHERE EACH IS PRINTED

Table 2 caption, RECONSTRUCTION from 7 consecutive segments:

  "WCS under documented default or recommended decoding settings for representative evaluated models.
  Words reachable is the fraction of target words reachable in at least one of their contexts; erased
  words are those with WCS(theta,w)=0. WCS is the aggregate WCS(theta) over all evaluated word-context
  pairs. Rows with both Top-p and Top-k use the combined filter. For Llama and DeepSeek, T=0.7 is the
  nearest evaluated temperature to the documented recommendations. Mistral-7B-Instruct-v0.3 is omitted
  because its model card does not specify a single default Top-p value."

Columns: Model / family | Default setting | Words reachable | Erased words | WCS. Six rows, six models.

- WCS RANGE: 0.059 to 0.230. CORRECT as the entry prints it. Minimum 0.059, Gemma-4-E4B-it
  (p=0.95, k=64, T=1.0); maximum 0.230, Llama-3.1-8B-Instruct (p=0.9, T=0.7). Full column:
  Qwen2.5-14B-Instruct 0.144; Qwen3.5-9B 0.124; Llama-3.1-8B-Instruct 0.230; Gemma-4-E4B 0.173;
  Gemma-4-E4B-it 0.059; DeepSeek-R1-Distill-Qwen-14B 0.160. Units: dimensionless fraction of the
  1,000 word-context pairs.
- ERASED WORDS 22-57%: CORRECT. Printed in Section 5, in the text after Table 2 - "word erosion is
  severe with 22% to 57% of words not being reachable in any of the contexts" - and as the Table 2
  "Erased words" column: 43%, 48%, 31%, 22%, 57%, 37%. It is NOT in the abstract or Section 1.
- 0.740 / 0.728: CORRECT, and correctly named. Section 5, the paragraph beginning "Averaging across
  matched base/instruct model pairs": "mean word-level reachability decreases from 0.740 for base models
  to 0.728 for instruct models". This is a prose figure - it appears in NO table. The same sentence also
  gives WCS 0.290 base to 0.277 instruct, likewise table-free. The entry correctly calls 0.740/0.728
  "mean word-level reachability" and does not confuse it with WCS.

Nothing in sub-claim 5 needs correcting.

VERSION DRIFT CHECK: v1 prints the identical Table 2 values (0.059-0.230, same six models), the identical
"22% to 57%", the identical 0.740/0.728 and 0.290/0.277, the identical Section 6.1 heading and the same
"soft probabilistic erosion" sentence. The entry's numbers are stable across v1 and v2, so its unversioned
PDF route and the v1 fallback route agree. No drift defect.

(f) IS THERE A DOCUMENTED-DEFAULTS ARM, AND WHERE DO THE DEFAULTS COME FROM

YES, and this is the most consequential thing the claim's framing leaves out. Table 2 IS the defaults arm -
its caption is literally "WCS under documented default or recommended decoding settings". The parameter
sweeps (Section 4.3, Figures 2-5) are a separate set of experiments.

The defaults are sourced from vendor model cards and Hugging Face generation configurations. Served
fragments: the text cites "in its Hugging Face generation configuration" (footnote 1) and, for Llama,
"a generation configuration of Top-p=0.9 and T=0.6" (footnote 3).

Values used, by model:
- Qwen2.5-14B-Instruct: p=0.8, k=20, T=0.7 (HF generation config).
- Qwen3.5-9B: p=0.8, k=20, T=0.7 (non-thinking mode); thinking mode also listed at p=0.95, k=20, T=1.0.
- Llama-3.1-8B-Instruct: documented p=0.9, T=0.6, but Table 2 uses T=0.7, "the nearest evaluated
  temperature to the documented recommendations" - so this row is a NEAR-default, not the default.
- Gemma-4-E4B and Gemma-4-E4B-it: p=0.95, k=64, T=1.0.
- DeepSeek-R1-Distill-Qwen-14B: recommended T=0.5-0.7 (0.6 recommended); Table 2 uses p=0.95, T=0.7.
- Mistral-7B-Instruct-v0.3: omitted, no single default Top-p on its card.

Tables and figures, for the reader's orientation: T1 model pairs; T2 defaults arm; T3 the 100 target words
with corpus counts in millions; T4 example low/high per-word reachability. F1 methodology; F2 Top-p at
T=0.7; F3 Top-k at T=0.7; F4 Min-p at T=0.7; F5 fraction of the 1,000 contexts reachable at T=1.5;
F6 mean word-level WCS versus source word frequency.

## REGIME

The source's regime, in its own words:
- POPULATION: 100 English words at frequency ranks 10,000-40,000 of the Google Web Trillion Word Corpus
  (Norvig), each dictionary-validated against the Moby Word Lists.
- UNIT OF ANALYSIS: the word-context pair. 100 words x 10 contexts = 1,000 "forced-path audit samples".
- OPERATING CONDITION: the Forced-Path Audit - "We provide the model with the ground-truth prefix context
  C and force a deterministic traversal of the path w", on a 256-token human-written PG-19 prefix. No
  self-conditioned generation.
- INSTRUMENT: binary membership. R_theta(w,c) is "a binary indicator of whether a token remains in the
  'active' vocabulary set after a sampling filter is applied"; WCS averages those indicators over pairs.
- THRESHOLD / CATEGORY: a word is "erased" when WCS(theta,w)=0, i.e. unreachable in all 10 of its contexts.
- DECODING: both a sweep over Top-p, Top-k, Min-p and temperature, AND a documented-defaults arm drawn
  from model cards and HF generation configs.

NUMERATOR CLASS of the number that most resembles the candidate's, the 22-57%: the numerator is target
words with WCS(theta,w)=0, i.e. words whose ground-truth continuation token fell outside the post-filter
candidate set in every one of their 10 contexts. Its exclusions, from the construction: no non-lexical
artifacts (URLs, OCR errors, technical metadata), nothing outside frequency ranks 10,000-40,000, nothing
absent from the Moby dictionary, nothing non-English.
DENOMINATOR: 100 target words per model. Checked against the near neighbours it is NOT - it is not the
1,000 word-context pairs (that denominator belongs to the aggregate WCS and to the separate "5.9% of all
evaluated contexts" figure for Gemma-4-E4B-it), and it is not the model vocabulary.

OVERLAP, BOTH DIRECTIONS:
- What the source's class MISSES relative to the candidate: all probability-mass erosion, explicitly
  ("it does not account for this soft probabilistic erosion"); every under-trained, unused or
  tokenizer-unreachable vocabulary item, since none can sit in a dictionary-validated mid-frequency word
  list (MY INFERENCE from the construction, not the paper's statement - the paper is silent on them);
  and everything that only arises when the model conditions on its own samples.
- What the source's class INCLUDES that the candidate excludes: ordinary legitimate mid-frequency English
  words, which are precisely what an under-trained-token population excludes; behaviour measured on
  human-authored PG-19 prose rather than on model output; and a 10-context-unanimity threshold that has no
  counterpart in a mass measurement.
A number one word away from the claim's is a different quantity: "fraction of words whose ground-truth
token is absent from the candidate set in all contexts" and "fraction of probability mass removed from
reachable vocabulary" are not the same measurement, and the paper says so itself.

Does the candidate's claim sit inside this regime? Partly, and the partition is clean: the candidate's
DECODING CONDITION (documented defaults, from model cards and HF generation configs) sits INSIDE - that is
Table 2. The candidate's ENDPOINT (mass), its POPULATION (under-trained / unreachable items) and its
OPERATING CONDITION (free self-conditioned generation) all sit OUTSIDE. A result proved under forced-path
binary membership on dictionary words is silent about mass on under-trained tokens under free generation -
silent, not supportive, and equally not contradictory.

## DEFECTS FOUND

1. FRONT-MATTER DATE WRONG, twice over. The entry carries "submitted 2026-08-24". The abstract page prints
   submitted 2026-05-26, with "This version: v2 2026-08-21". Neither 08-24 nor a single-date reading is
   right. Correct to: submitted 2026-05-26; v2 dated 2026-08-21. The entry should also record that it is
   grading v2, since its unversioned PDF link resolves to v2 while its named fallback is the v1 HTML.
   (Harmless in substance - v1 and v2 print identical numbers - but the citation front matter is wrong.)
2. ACCENT DROPPED in the author list: the front matter prints Coronado-Blazquez with an acute accent on the
   first a (Blazquez). Minor, but the discipline says take names from the front matter.
3. MIS-SOURCED PURPOSE CLAUSE, and this is the real one. Sub-claim 4 hangs "ensuring that the WCS measures
   the reachability of legitimate human expressions" on the WORD LIST. In the sentence as served, that
   purpose clause is governed by the CONTEXT MAPPING - "Each word in W is then mapped back to C naturalistic
   contexts within the PG-19 corpus for evaluation, ensuring that..." - and it speaks of "expressions", not
   of vocabulary items. The paper's only actual word filter removes "URLs, OCR errors, and technical
   metadata". So the exclusion of under-trained and unreachable items is an ENTAILMENT the entry is
   entitled to draw and should label as its own, not a scope statement to attribute to the authors. The
   entry's "by construction ... and therefore EXCLUDES" is fine; "its stated aim being" is not.
4. SECTION 6.1 IS NOT THE LIMITATIONS SECTION. 6.1 is "Interpretation of the Word Coverage Score" inside
   Section 6 "Discussion"; Limitations is Section 8, which carries its own related caveat about "soft
   probability suppression". The entry's locator is correct and should simply not be glossed as a
   limitations disclaimer.
5. THE FRAMING "POINTS IT THE OPPOSITE WAY" UNDERSTATES ONE AXIS OF OVERLAP. The paper has a
   documented-defaults arm, and it is the headline table - Table 2 is "WCS under documented default or
   recommended decoding settings", sourced from model cards and Hugging Face generation configs. Anyone
   reading the entry's three "opposite way" axes could infer there is no defaults arm. There is. The axes
   that genuinely run opposite are endpoint (membership vs mass), population (dictionary words vs
   under-trained items) and operating condition (forced path vs free generation) - not decoding settings.
   Caveat in the entry's favour: the Llama and DeepSeek rows use T=0.7 as "the nearest evaluated
   temperature" rather than the documented T=0.6, so two of six rows are near-defaults; and Mistral is
   omitted for want of a single documented Top-p.

No defect found in sub-claims 1, 2, 3, 5 or 6. Nothing in the numbers needs correcting.

## ROUTES THAT FAILED

- curl to https://arxiv.org/html/2605.27268v2 and .../v1: "curl: (56) CONNECT tunnel failed, response 403",
  HTTP 000, zero bytes, both URLs. Tool-scoped, as expected at this proxy; WebFetch reached both pages.
  Consequence for this note: I could not grep the text myself, so all long quotations are
  summariser-mediated reconstructions from ordered consecutive segments, labelled with fragment counts.
  I read /root/.ccr/README.md rather than routing around the refusal; it confirms 403 is a policy denial
  not to be retried, and directs that TLS verification never be disabled. It was not.
- No WebSearch was needed: the citation resolved directly to the arXiv identifier. 0 of 2 searches used.
- No search classifier refusal occurred.
- Not attempted and not needed: the PDF route named in the entry. I did not open it, so I make no claim
  about whether its pagination or typesetting differs from the HTML; the HTML of both versions served all
  the sections, tables and bibliography the six sub-claims require.

## BEARING ON THE LEDGER ENTRY

HOLD the Medium cap. NARROW one leg. Not a disguised known.

The three tests that would have sent novelty to Low all come back negative, on full text:
- Does it measure MASS? No. No mass quantity is printed anywhere - no retained or removed mass, no
  cumulative probability - and Section 6.1 disclaims the phenomenon in the authors' own words. On mass the
  paper NAMES and DISCLAIMS; it does not define, bound, predict or measure.
- Does its word list include under-trained or unreachable items? Not by any route I can find. The list is
  100 dictionary-validated English words from frequency ranks 10,000-40,000 - a population that cannot
  contain near-zero-frequency glitch or unused vocabulary items. The paper never mentions such items, and
  does not cite Land & Bartolo. Important distinction for the ledger: this is CONSTRUCTIVE EXCLUSION plus
  SILENCE, not a tested negative, and the entry should say so in those terms.
- Does it run free generation? No. Every measurement is a Forced-Path Audit on a given 256-token PG-19
  prefix: "We provide the model with the ground-truth prefix context C and force a deterministic traversal
  of the path w."

So limbs (i) and (ii) of the candidate are NOT substantially published here, and the cap at Medium is
correctly placed: the paper builds the same family of instrument - decoder-side truncation auditing of
lexical reachability at vendor-documented settings - and that genuine instrument overlap is what forbids a
grade above Medium, while the three regime inversions are what forbid Low.

The one change I would make to the entry, as a NARROWING rather than a strike: any sub-limb of the
candidate that claims novelty for "auditing at shipped / documented default decoding settings" must be
struck, because Table 2 is exactly that, sourced from model cards and Hugging Face generation configs for
six models. What remains novel after this source is the conjunction of mass-valued endpoint, under-trained
and tokenizer-unreachable population, and free self-conditioned generation - not the defaults framing.

One promotion condition worth recording, since it is cheap and decisive: the candidate's limb (i) becomes
a clean delta over this prior the moment it reports a mass figure with its denominator stated, because the
prior's own Section 6.1 concedes the gap and even predicts the direction - "our empirical results must be
interpreted as a conservative lower bound on the true scale of word erosion". That concession is the
strongest novelty warrant this source gives the candidate, and the entry should cite it as such.

A note on what I did NOT nominate. I can see no further document that would change this bearing, and I am
not naming one. The kind of document that could make the candidate a known would have to print a
mass-valued erosion figure over an under-trained or unreachable vocabulary population under free
self-conditioned generation - that is, an empirical evaluation paper, not a metric-definition paper. This
source is a metric-definition-plus-audit paper of the wrong population and the wrong endpoint, which is
precisely why it caps rather than kills. Whether such an evaluation paper exists is a separate search and
I did not run it; its absence from this note is not evidence that it does not exist.
