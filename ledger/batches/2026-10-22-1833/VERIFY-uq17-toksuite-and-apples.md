# VERIFY - TokSuite and "Apples to Apples?" do not occupy UQ-17's interface limb (d), but the entry's paraphrase of the Apples attribution drops a word the abstract prints

Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

The entry claims that neither of the two further sources in this cluster supplies the candidate's
interface claim - that corrupted encoder targets confound published per-language loss. Specifically
as the entry carries it: "TokSuite reports no per-language loss; *Apples to Apples?* (per the record,
abstract-level) attributes crosslingual metric bias to metric normalisation and orthography, not to
corrupted targets" (UQ-20261022-17-adversary-2.md line 69; repeated at entry lines 23-24).

The claim as handed to me adds "Both were read at abstract level only, per the record." **That
sub-premise is false on the record's own face for TokSuite.** The record (UQ-...-17-record.md:60, 92)
has TokSuite as "returned twice, NOT OPENED ... COULD NOT READ - not attempted"; adversary #2
(line 27) then has it "**READ LEVEL: full text of the served extraction**". So TokSuite's record
status is NOT-OPENED-then-OPENED, never ABSTRACT ONLY. Only *Apples to Apples?* was abstract-only
(record:59). I check the substance regardless, at better read levels than either.

## READ LEVEL

**Source 1. TokSuite: Measuring the Impact of Tokenizer Choice on Language Model Behavior.**
arXiv:2512.20757 (v1 2025-12-23 per the entry; v2 dated "06 Jul 2026" on the served page). No DOI,
no venue, no journal-ref. First author and full front-matter author list, taken from the front matter
of the served HTML, not from any short form: Gül Sena Altıntaş (University of Toronto; Vector
Institute; corresponding), Malikeh Ehghaghi (Toronto; Vector), Brian Lester (Toronto; Vector; Google
DeepMind), Fengyuan Liu (McGill; Mila), Wanru Zhao (Cambridge), Marco Ciccone (Vector), Colin Raffel
(Toronto; Vector; Hugging Face). Year 2025 (v1) / 2026 (v2).

READ LEVEL: **PARTIAL, at two routes, and the two routes serve different spans.**
- `https://arxiv.org/html/2512.20757v2` - FULL main text (Abstract; 1 Introduction; 2 Background;
  3 The TokSuite Models incl. 3.1 Tokenizer Selection, 3.2 Cross-Tokenizer Vocabulary Alignment,
  3.3 Architecture; 4 The TokSuite Benchmarks incl. 4.1 Multi-lingual Parallel Dataset, 4.2 Math &
  STEM, 4.3 Evaluation Framework; 5 Findings, all five subsections; 6 Related Work; 7 Discussion;
  8 Future Work & Limitations; 9 Conclusion) plus Table 1 and Figures 1-2 captions. The served
  conversion is **84,361 characters and stops inside the reference list**, so in v2 numbering
  Appendices A-H, Table 2, Table 9 and Figure 7 are **COULD NOT READ at this route.**
- `https://arxiv.org/html/2512.20757v1`, offset 70,000 - page length 82,830 chars; the tail served
  the **end of Appendix A (glossary) incl. A.1 Decoding Algorithms, all of Appendix B with Tables
  4-6, and the opening of Appendix C**. This is where the NFKC and whitespace glossary entries live
  and I read them. Still **COULD NOT READ in v1 numbering: Appendix E / "Detailed Benchmark Results",
  v2 Table 2 (the OOV / byte-fallback table the entry's P1 cites), v2 Table 9, Figure 7, and
  Appendix C's PCW definition onward.** Version numbering differs between v1 and v2, so I report
  each table by the version I read it in and never silently merge the two.

**Source 2. "Apples to Apples? Towards Comparable Crosslingual Language Model Evaluation."**
arXiv:2608.25089 (submitted 2026-08-25; v2 2026-08-30). No DOI, no journal-ref, no venue stated.
Front-matter authors, in order, **three not four**: Xiulin Yang, Ethan Gotlieb Wilcox, Catherine
Arnett (Georgetown University; EleutherAI). The v2 HTML rendered an image placeholder where my first
read expected a fourth name; the /abs front matter settles it at three. First author Xiulin Yang,
year 2026.

READ LEVEL: **FULL TEXT of the served extraction** via `https://arxiv.org/html/2608.25089v2`
(Abstract; 1 Introduction; 2 Background & Related Work incl. 2.1 Tokenization & Representation
Biases with its "Tokenization" and "Orthography and Encoding" paragraphs, 2.2 Crosslinguistic
Evaluation; 3 Existing Intrinsic Metrics & Their Potential Confounds; 4 Experiment 1; 5 Experiment 2;
6 Experiment 3; 7 Considerations for Downstream Tasks incl. Translated Benchmarks, Culture-specific,
Language-specific; 8 Discussion & Conclusion; Limitations; References; Appendices A-F listed),
**PARTIAL only inside the figures**: Table 1's Spearman values were served, but the numeric cell
values of Figures 2, 3 and 4 were not, so per-language metric values are **COULD NOT READ**.
Appendices A-F contents not served. Abstract verified a second time, word for word, at
`https://arxiv.org/abs/2608.25089`. This is a promotion from the record's ABSTRACT ONLY to full
served body.

**This is my read, not a property of the papers.** Nothing below treats an unread appendix's silence
as evidence in either direction.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) TokSuite: per-language loss, BPB, or any per-language model-quality quantity; fidelity

**Per-language LOSS / PERPLEXITY / BITS-PER-BYTE / BITS-PER-CHARACTER / NLL: ABSENT.** Not in the
full main text; not in Appendix A, B or Tables 4-6 of v1. No such quantity is printed anywhere I
read, in any aggregation - not per language, not pooled, not at all. TokSuite is not a loss paper:
its endpoint is multiple-choice benchmark accuracy under perturbation.

**What it does print, named with units and denominator.** Table 1, captioned "Tokenization robustness
under multilingual text perturbations. Values represent relative performance drop...". The quantity
is a **relative performance drop**, dimensionless, numerator = (canonical accuracy - perturbed
accuracy), denominator = **canonical accuracy** of that same model. Section 5 prints the headline
values: noise drops of **0.21 for non-English vs 0.15 for English**. Table 1's non-English is
**POOLED into a single "NEN" column**; only the Orth. & Gram., Morph and Noise columns carry a
separate EN column. There is **no per-language breakdown in Table 1**.

**Per-language quantities that do exist, so the entry's sentence must not be read too widely.**
v1 Appendix B, **Table 5**, captioned "Canonical performance after applying Exact-Byte Level
conversion from Phan et al. (2025)", carries **per-language columns ZH, EN, FA, IT, TR** alongside
Math and STEM. The cell values were served **without a stated unit or denominator**, so I name the
column set and decline to name a number: on the paper's own framing these are canonical benchmark
performance, i.e. a per-language MODEL-QUALITY quantity, but it is **accuracy-family, not loss**.
Separately, the v2 main text cites **Table 9** for a per-language figure - ByT5's zero-width-character
result of **-0.11 on Turkish and Chinese** - a per-language *relative drop*; Table 9 itself is
COULD NOT READ, so I carry that number only as the main text's own cross-reference. v1 Table 6
reports "Data consumed during training across different tokenizers" in **GB per tokenizer, not per
language**. v1 Appendix C defines fertility and parity; those are tokenization statistics, not model
quality.

So, precisely: **"TokSuite reports no per-language loss" is TRUE, and so is "no BPB"; "no per-language
model-quality quantity" is FALSE** - per-language canonical performance (Table 5, v1) and per-language
relative drops (Table 9, cited) exist. The entry as written says only the first, so the entry is
accurate; a reader who widens it to the second would be wrong.

**Does TokSuite measure encoding fidelity at all? NO - it DEFINES and ANNOTATES it, in a glossary,
and measures nothing.** The fidelity vocabulary occurs exactly where I found it: v1 **Appendix A, "A
Tokenizer Processing Glossary"**. Reconstruction from 3 consecutive served fragments, junction
verified at "applies" / "compatibility" and at "composition." / "Note":

> "NFKC Normalization Form Compatibility Composed: Similar to NFC but also applies compatibility
> mappings, converting visually similar characters to their canonical equivalents before composition.
> Note that this can result in lossy detokenization"

Opening words and what they scope: the sentence opens as a **dictionary headword**, "NFKC
Normalization Form Compatibility Composed:" - it scopes the clause to *what the preprocessing option
NFKC is*, i.e. a definitional entry in a glossary of tokenizer processing choices. The operative
clause "Note that this can result in lossy detokenization" **ASSERTS a possibility** ("can result"),
hedged, about a named configuration option. It does not assert a rate, an incidence, or an observed
instance. Two further glossary entries, reconstructed from 2 fragments each:

> "Normalized Whitespace like tabs, newlines, and contiguous spaces are normalized to a single space.
> This results in lossy detokenization and often stops the downstream model"

(opener is again a headword, "Normalized Whitespace", scoping a definition; the clause ASSERTS that
the option is lossy, categorically, as a property of the option - still no rate), and, for the
Learned / Manual / Individual whitespace entries:

> "This results in whitespace being preserved and allows for lossless detokenization."

That third one matters for symmetry: TokSuite's glossary **partitions its 14 shipped tokenizers'
whitespace options into lossy and lossless**, which is a configuration taxonomy. It is exactly the
"DEFINES/ANNOUNCES, does not MEASURE" case. **Published is not performed: no round-trip rate, no
reconstruction exact match, no character error rate of re-decoding, no fidelity number of any kind,
at any route I read.** Terms "round-trip", "reversib", "reconstruct" do not appear in the served main
text at all.

The nearest the main text comes, Section 5 "Universal Challenges Across Tokenizers":

> "the tokenizer cannot faithfully represent or generate the diverse Unicode formatting"

with the sentence opening "XGLM shows strong robustness to these perturbations thanks to its NFKC
normalization...". **The opener scopes this to one tokenizer and RECORDS A TRADE-OFF, not a defect
finding**: the clause's force is that NFKC *buys* robustness, and unfaithful representation is named
as its cost. Read with the opener gone, it looks like an assertion that encoders corrupt text; read
whole, it is a qualitative remark about why one model scores well. No number attaches to it.

### (c) "Apples to Apples?": what it attributes crosslingual metric differences to

The abstract's attribution sentence, verified twice (HTML body and /abs), reconstructed from 2
consecutive served fragments, junction verified at "rooted in" / "tokenization":

> "Our results show that several widely used normalized metrics introduce crosslinguistic biases
> rooted in tokenization, encoding, and orthographic differences."

Opening words and what they scope: **"Our results show that several widely used normalized metrics
introduce..."** scopes the clause to *several* - not all - *normalized* metrics, and the very next
abstract sentence supplies the exception: "In contrast, sentence-level negative log-likelihood
computed over semantically equivalent sequences / provides more meaningful and consistent crosslingual
comparisons." The clause **ASSERTS** the bias and names **three** causes: tokenization, **encoding**,
and orthographic differences.

The hedged, cited in-body formulation, which I prefer per discipline, Section 4:

> "we argue that the inconsistencies are attributable to specific, identifiable biases in the
> normalization unit of each metric."

Opener "we argue" - this is the authors' claim, hedged, and it scopes the attribution to **the
normalization unit of each metric**. Also Section 4:

> "These results suggest that rankings under surface-normalized metrics are largely predictable from
> engineering choices alone, rather than reflecting genuine differences in language modeling quality."

(hedged "suggest"; scoped to "surface-normalized metrics"; the clause ASSERTS predictability from
engineering choices and DENIES that the rankings track model quality). And Section 8, Discussion,
reconstruction from 3 consecutive served fragments, junctions verified at "largely" / "determined"
and "rather than" / "genuine":

> "The apparent stability of metrics such as BPB, BPC, PPL, and Token-NLL is artificial: their
> rankings are largely determined by engineering choices - script properties, tokenization
> granularity, and vocabulary size - rather than genuine differences in language modeling quality."

Opening words and what they scope: **"The apparent stability of metrics such as BPB, BPC, PPL, and
Token-NLL is artificial:"** scopes everything after the colon to those four metrics specifically.
The clause ASSERTS the causes and names them exhaustively in a dash-set: **script properties,
tokenization granularity, vocabulary size.**

**Is corrupted or lossy encoding among the causes it names? NO.** The terms "lossy", "lossless",
"round-trip", "reversib", "corrupt", "detokeniz", "reconstruct" and "information loss" **do not appear
anywhere in the served full text.** The word "encoding" *does* appear in the abstract's cause list,
and this is the trap in this cluster: in this paper "encoding" means **representation length** -
UTF-8 bytes and characters per unit of text - and is developed under Section 2.1's paragraph headed
"Orthography and Encoding", citing the byte premium / length premium of Arnett et al. (2024), with
the worked example that **Khmer runs about three bytes per character against one for Latin** and that
Chinese has shorter character and byte sequences, so BPB and BPC rank it last. That is a claim about
*how many bytes the same meaning costs*, not about whether the bytes survive the encoder. The only
tokenizer-handling note in the paper is a footnote to load with `PreTrainedTokenizerFast` rather than
`AutoTokenizer` - a reproducibility instruction, not a fidelity check.

What it studies, for the regime record: BPB, BPC, MRR, PPL, token-level NLL, sentence-level NLL
(Information Parity and Bits per English Character treated as transformations of Sent-NLL). Table 1
prints **Spearman correlations between each metric and a surface statistic**: BPC vs #characters
rho = -0.81, p = 0.0082; BPB vs #bytes rho = -0.94, p < 0.001; PPL vs CTC rho = -0.93, p < 0.001;
MRR vs CTC rho = 0.89, p = 0.001; Token-NLL vs CTC rho = -0.93, p < 0.001; and for the metric it
endorses, Sent-NLL vs #characters rho = -0.38, p = 0.28, Sent-NLL vs #bytes rho = 0.14, p = 0.71,
Sent-NLL vs CTC rho = -0.19, p = 0.19. The stated uncertainty is carried: the three Sent-NLL rows
are the non-significant ones, which is the paper's point. Accuracy is not studied in the intrinsic
experiments; Section 7 discusses downstream benchmarks **without running experiments on them**.

### (d) Does either source condition a cross-language loss or benchmark comparison on round-trip fidelity?

**NO, in neither source, explicitly answered.**

*TokSuite.* No. Its comparability machinery is Section 3.2 "Cross-Tokenizer Vocabulary Alignment" and
Section 4.1's "Multi-lingual Parallel Dataset" - alignment of vocabularies and parallelism of the
evaluation text, neither of which is a decode(encode(x)) == x condition. Its stated caveats are
elsewhere: Section 7 "A key limitation of studying off-the-shelf tokenizers..." (an attribution
caveat) and Section 8 on multilingual mixing rates. v1 Appendix B.3 does say detokenized batches were
used to count UTF-8 bytes consumed - **a measurement method, not a fidelity condition or filter.**
No comparison anywhere I read is restricted to, filtered by, or caveated on round-trip success.

*Apples to Apples?* No. Its remedy conditions comparability on **semantic equivalence of the source
text** - "sentence-level negative log-likelihood computed over semantically equivalent sequences" -
and on the **choice of normalization unit**. That is the near neighbour that is not the claim: it
controls that the *input texts mean the same thing* across languages, and says nothing about whether
each language's text **survives its own encoder intact**. One is a property of the parallel corpus;
the other is a property of the tokenizer. Treating the first as the second would be the error this
sub-claim exists to catch.

**Neither source attributes any loss gap to encoder provenance.** Apples attributes to script
properties, tokenization granularity and vocabulary size; TokSuite attributes accuracy drops to
tokenizer algorithm design and normalization behaviour, and prints no loss at all.

## REGIME

**TokSuite, in its own words.** Population: 14 preexisting off-the-shelf tokenizers (ByT5, GPT-2,
Llama-3.2, Qwen-3, mBERT, TokenMonster, XGLM, Gemma-2 among those named), with "14 models that share
the same initialization, architecture, and data but differ only in their tokenizers" (Figure 2
caption). Unit of analysis: tokenizer x perturbation category, with non-English **pooled** as NEN in
Table 1. Operating condition: "real-world perturbations that change tokenization" (Figure 1 caption)
over a multilingual parallel benchmark in English, Chinese, Farsi, Italian, Turkish, plus Math and
STEM sets. Instrument: relative multiple-choice performance drop. Threshold: none; values reported as
proportions. Revisions of the 14 shipped tokenizers are not pinned or reported in anything I read.
**Does the candidate's claim sit inside this regime? NO.** The candidate's unit is a *document* and
its measurand is *encoder invertibility*; TokSuite's unit is a *model x perturbation* and its
measurand is *benchmark robustness*. A result about accuracy drops under perturbation is **silent**
about round-trip failure rates, not supportive of them.

**Apples to Apples?, in its own words.** Population: "controlled monolingual language models trained
on parallel data with varying tokenizer vocabulary sizes and model sizes", then validated "on
multilingual LLMs" (BLOOM-7b1 and BLOOM-1b1 appear in Figure 4; GPT2-small in Figure 2). Unit of
analysis: language x metric, as a **ranking** of languages under each metric. Operating condition:
parallel/translated data so that content is held fixed across languages. Instrument: six intrinsic
metrics plus Spearman correlation of metric against surface statistic. Threshold: statistical
significance of those correlations. **Does the candidate's claim sit inside this regime? PARTLY -
same object, different mechanism.** The paper's object *is* the validity of cross-language loss
comparison, which is limb (d)'s object. But its mechanism space is the normalization denominator and
the orthographic/byte cost of the same meaning. The candidate's mechanism - that the target text
itself differs from the document because the encoder mangled it - is **not in this paper's mechanism
space at all**, and the paper's controlled design would hide it rather than test it, since it holds
content fixed and varies vocabulary size.

**Overlap in both directions, for the one number that looks closest.** Apples's BPB-vs-#bytes
rho = -0.94 is the nearest thing to the candidate's confound quantity. Numerator class: the rank
correlation between a language's **BPB value** and its **UTF-8 byte count** for the same parallel
content - it quantifies *how much a metric's language ranking is explained by the length of that
language's encoding*. Denominator: languages in the parallel set (a correlation over languages, not a
share of documents). What the source's class **MISSES**: any case where decode(encode(x)) != x, since
byte counts are computed on the text as given and no reconstruction is attempted; it also misses
per-script round-trip strata entirely. What it **INCLUDES that the candidate excludes**: the entire
orthographic byte premium for text that encodes perfectly - Khmer's three bytes per character is a
property of Unicode, present with a flawless tokenizer, and has nothing to do with corruption. The
two quantities are one word apart in English and disjoint in content.

## DEFECTS FOUND

1. **The premise handed to me is wrong about TokSuite's read level.** "Both were read at abstract
   level only, per the record" does not match the record: TokSuite went NOT OPENED (record:60, 92) ->
   OPENED at full served text (adversary-2:27). Only *Apples to Apples?* was abstract-only
   (record:59). The entry's own line 69 says it correctly ("*Apples to Apples?* (per the record,
   abstract-level)"), so the defect is in the checking premise, not the entry.

2. **The entry's paraphrase of the Apples attribution drops a word the abstract prints.** The entry
   says Apples attributes bias "to metric normalisation and orthography". The abstract's own list is
   **three** items: "tokenization, encoding, and orthographic differences." Omitting "encoding" is
   the one omission that matters here, because "encoding" is the word a later reader would seize on to
   claim the interface limb is occupied. The entry should carry the paper's full three-item list and
   then say what "encoding" means in it (byte/character length, the byte premium of Arnett et al.
   2024), rather than silently dropping the term. **This does not change the bearing - it strengthens
   the entry's conclusion once the gloss is added - but as written the entry is one word short of its
   own source and invites exactly the misreading it is trying to foreclose.**

3. **The entry's "no per-language loss" should not be widened.** TokSuite *does* print per-language
   model-quality values: v1 Appendix B Table 5's per-language canonical-performance columns
   (ZH, EN, FA, IT, TR) and the per-language -0.11 Turkish/Chinese drop the v2 main text attributes
   to Table 9. These are accuracy-family, not loss. The entry's sentence is correct as written; any
   restatement as "TokSuite reports nothing per-language" would be false.

4. **One P1 citation in the entry is not verified by me and should not be upgraded on my read.**
   Entry line 15 and line 23 cite "TokSuite Table 2: TokenMonster 'Ignores Unknowns', mBERT '[UNK]'".
   **Table 2 is COULD NOT READ at both of my routes** (v2 conversion truncates inside the references;
   v1 tail skips it). I neither confirm nor contradict it. By contrast I **do** now confirm, at
   verbatim level, the other half of P1: v1 Appendix A's NFKC "Note that this can result in lossy
   detokenization" and the whitespace entries' "This results in lossy detokenization" /
   "allows for lossless detokenization". P1's glossary leg is sound; its Table 2 leg stands on
   adversary #2's read alone.

5. **A correction to front matter: *Apples to Apples?* has three authors, not four.** The v2 HTML
   renders an image placeholder that can be mistaken for a fourth name. /abs gives: Xiulin Yang,
   Ethan Gotlieb Wilcox, Catherine Arnett. Neither paper carries a DOI or journal-ref; both must be
   cited by arXiv id.

6. **TokSuite's robustness-faithfulness trade-off sentence is the strongest thing in this cluster
   against the entry, and the entry does not mention it.** Section 5 has one tokenizer (XGLM) whose
   NFKC normalization buys robustness at the cost that "the tokenizer cannot faithfully represent or
   generate the diverse Unicode formatting", in a paper that also prints pooled non-English-vs-English
   drops of 0.21 vs 0.15. The *ingredients* of the interface claim co-occur in one paper. What is
   missing is the join: TokSuite never says the NEN-EN gap is partly encoder unfaithfulness, never
   conditions the comparison on fidelity, and prints no fidelity quantity. Flagging it because an
   adversary who finds it later will say the entry missed it; it does not change the verdict, and the
   entry should absorb it rather than be surprised by it.

7. **No defect in the core of the checked claim.** On documents I read at better levels than the
   record had, TokSuite reports no per-language loss and no fidelity measurement, and Apples does not
   name corrupted or lossy encoding among its causes. Both parts of the entry's sentence hold.

## ROUTES THAT FAILED

- `https://arxiv.org/html/2512.20757v2` - **served, but the markdown conversion stops at 84,361
  characters, inside the reference list.** Appendices A-H, Table 2, Table 9 and Figure 7 are
  unreachable at this route. A read at offset 80,000 returned only the conclusion tail and the first
  five reference entries, confirming the truncation rather than a mis-set offset.
- `https://arxiv.org/html/2512.20757v1` at offset 70,000 - **served** (82,830 chars total) and
  recovered Appendix A's glossary tail plus Appendix B Tables 4-6, but the appendix lettering differs
  from v2, and the span served does not include v1's equivalent of v2's Appendix E / Detailed
  Benchmark Results, nor Table 2. **Next route for anyone who needs the per-language benchmark
  appendix and Table 2: `https://arxiv.org/html/2512.20757v2` at offsets below 80,000 does not reach
  them either, so the honest next step is the e-print source, `arxiv.org/e-print/2512.20757v2`, or an
  OpenReview/venue copy if one exists.** What *kind* of document would settle it: the paper's own
  appendix tables - a primary-source table of per-language benchmark results. The e-print is that
  kind of document (it is the same paper's untruncated source); an OpenReview page would be too, if
  one exists, which I have not established. **I did not open either, and I call that a lead, not a
  finding.**
- Figures 2, 3 and 4 of arXiv:2608.25089 - rendered as images in the HTML, so the per-language metric
  values behind the ranking heatmaps are **COULD NOT READ**. Table 1's correlations were served and
  are what I rely on.
- No search was refused; I ran none. No PMCID conversion was needed; neither source has one. Unpaywall
  was not used, by rule.

## BEARING ON THE LEDGER ENTRY

**(e) Limb (d) is NOT occupied by either source, and the rejection does not reach it. HOLD the
entry's sentence, with one narrowing correction to its wording.**

The second adversary's concession stands and my read tightens it. The interface claim - that corrupted
encoder targets confound published per-language loss - requires one of two things from a source:
either it conditions a cross-language comparison on round-trip fidelity, or it attributes a loss gap
to encoder provenance. **Neither source does either, and I answered that explicitly at (d).** Apples
conditions comparability on semantic equivalence of the parallel text and on the normalization unit,
which is a different control; TokSuite conditions nothing on fidelity and prints no loss to confound.
Apples's cause list - "script properties, tokenization granularity, and vocabulary size" in Section 8,
"tokenization, encoding, and orthographic differences" in the abstract - contains no corruption term,
and its "encoding" is byte-length, not fidelity, on the paper's own Section 2.1 development. So the
narrow interface limb survives this kill, and the entry should say so in those words.

**What this does to the entry, concretely.** (i) **Hold** the finding at entry lines 23-24 and
adversary-2 line 69 that neither further source supplies the interface claim; it is now checked at
full served body for Apples and full main text plus Appendix A/B for TokSuite, not at abstract level.
(ii) **Narrow** the entry's paraphrase of Apples to carry its own three-item list - "tokenization,
encoding, and orthographic differences" - with a parenthetical gloss that "encoding" there means the
byte/character premium of Arnett et al. (2024), not lossy encoding. Without that gloss the entry is
vulnerable to a reader who reads the abstract and thinks the limb is occupied. (iii) **Hold** P1's
glossary leg, now verbatim-confirmed from v1 Appendix A, and **mark P1's Table 2 leg as resting on
adversary #2's read alone**, COULD NOT READ by me. (iv) **Hold** the Leg-3 grading: TokSuite
corroborates the premise that lossy preprocessing exists as a configuration fact and reaches nothing
further - it DEFINES lossy detokenization in a glossary and measures no fidelity quantity anywhere I
read. (v) **Add** defect 6 to the entry as a known near-miss, so the XGLM trade-off sentence is on the
record as examined and found insufficient rather than unexamined.

**What my check does NOT establish.** It does not show that limb (d)'s magnitude is non-negligible;
that remains exactly what no source measures, and my read adds no number to it. It does not establish
anything from TokSuite's unread per-language benchmark appendix, whose silence I am not treating as
evidence. And it leaves the entry's Leg 1 (TokEval §3.4) untouched - I opened neither TokEval nor Qtok
and say nothing about them. The overall Gate 2 rejection, which rests on TokEval publishing limb (a)'s
formulation, is unaffected either way by this check; what this check settles is that the rejection
**does not widen** to cover limb (d).
