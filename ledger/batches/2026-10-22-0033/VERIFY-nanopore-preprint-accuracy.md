# VERIFY — nanopore multi-pass protein-reading preprint: the 28% / 61% accuracy numbers

Checker: fresh context. Budget used: 3 searches, 5 fetches (cap 6 / 5).

---

## CLAIM

As carried in `UQ-20261022-04-entry.md` (attack 4, and restated in "Strongest remaining objection"
and "Vulnerability of this rejection"), the enabling single-molecule protein-sequencing source does:

> "classification of one substitution at a KNOWN position among KNOWN candidates in a SYNTHETIC
> background, 20-way single-read accuracy 'around 28%' rising to 61% only in a SIMULATED 10-read
> consensus, no de novo per-residue accuracy, no limit of detection and no false-positive rate for a
> substitution published anywhere"

Sub-claims handed to me: (a) printed ~28% single-read on a 20-way task; (b) a printed 61% that is
SIMULATION not experiment; (c) what the task actually is — classification among a known candidate
set at a known position, or de novo reading; (d) native vs designed/synthetic sequence background;
(e) whether a de novo per-residue accuracy, a limit of detection, or a substitution false-positive
rate is printed anywhere in the preprint.

### Source identification — the preprint that prints these numbers

**bioRxiv 10.1101/2023.10.19.563182.** Not 2025.04.18.649569 (that is the unrelated mistranslation-
overdispersion intake paper, a different question in the same entry), and not a "2024 preprint" — the
bioRxiv accession is dated **2023.10.19**. The entry's own attack-4 row and adversary-3 log name
563182 correctly; the brief handed to me did not.

---

## READ LEVEL

**Split read, and the split matters.**

* **Preprint BODY: full text.** `https://www.biorxiv.org/content/10.1101/2023.10.19.563182.full.pdf`
  opens and serves Introduction, all Results sections, Discussion and figure captions. Every
  quotation below marked "(preprint body)" came from that route.
* **Preprint FRONT MATTER: COULD NOT READ.** The served text of that PDF begins at the first
  Introduction sentence ("Annotating the complexity of protein variation is important in
  understanding biological processes"). No title line, no author list, no affiliations, no
  correspondence line, no bioRxiv DOI/date banner, **and no Abstract section** are served. The same
  is true at `https://www.biorxiv.org/content/10.1101/2023.10.19.563182v1`, which returned body text
  headed by the Results heading "An unfoldase-mediated approach to nanopore protein sequencing on a
  nanopore array" and no metadata at all. This independently reproduces what adversaries 2 and 3
  recorded ("front matter not served"); it is a route property of bioRxiv through this reader, not a
  missing-paper finding. **COULD NOT READ, not NOT FOUND.**
* **PUBLISHED version front matter: full front matter**, read at
  `https://par.nsf.gov/servlets/purl/10560827` (NSF Public Access Repository copy of the published
  article, carrying the journal's own volume/pages and the CC BY-NC-ND notice).

Consequence I am flagging rather than papering over: **per check (7), I cannot take the PREPRINT's
title, author list or posting date from its own front matter.** The only preprint title string I have
is search-engine metadata, i.e. a short form somebody else wrote. I attach no guess. The front matter
I actually read is the published version's:

> Title: "Multi-pass, single-molecule nanopore reading of long protein strands"
> Authors: Keisuke Motone (1,4,5), Daphne Kontogiorgos-Heintz (1,5), Jasmine Wee (1), Kyoko Kurihara
> (1), Sangbeom Yang (1), Gwendolin Roote (1), Oren E. Fox (1), Yishu Fang (1), Melissa Queen (1),
> Mattias Tolhurst (2), Nicolas Cardozo (2), Miten Jain (3), Jeff Nivala (1,2; corresponding)
> 1 Paul G. Allen School of Computer Science and Engineering, University of Washington, Seattle, WA, USA
> 2 Molecular Engineering and Science Institute, University of Washington, Seattle, WA, USA
> 3 Department of Bioengineering and Department of Physics, Northeastern University, Boston, MA, USA
> 4 Present address: Department of Biotechnology, Graduate School of Engineering, Osaka University, Suita, Japan
> 5 Motone and Kontogiorgos-Heintz contributed equally.
> Nature, vol. 633, pp. 662–669, 19 September 2024. doi 10.1038/s41586-024-07935-7
> Received 28 June 2023; Accepted 9 August 2024; Published online 11 September 2024

Two front-matter facts the ledger does not have right (see DEFECTS): the published title **drops**
"with single-amino acid sensitivity", and the author list relayed into the entry from preLights is
four names short.

Also unread, and therefore outside what my "absent" findings can license: the preprint's
supplementary material, and the Nature version's Extended Data / Supplementary Information.

---

## WHAT THE SOURCE SAYS (quotations as served)

All quotations are from the preprint body PDF. The summariser caps a single returned quotation at
~125 characters, so the longer ones below are **reconstructions assembled only from ordered
consecutive returned segments**, with the fragment count stated. No cut string was completed from
inference.

### Document type

A **primary research study** (unfoldase-driven nanopore reading of designed protein constructs, with
a machine-learning classifier). Not a review, protocol, guideline or editorial. The accuracy figures
are the authors' own, not attributed to anyone else.

### (a) The ~28% figure — PRESENT

Reconstruction from 3 consecutive segments, Results section "Resolving single-amino acid
substitutions":

> "In the most challenging task of all 20-way amino acid classification, our top-performing model
> substantially outperformed a dummy classifier, obtaining an accuracy of around 28%, compared to the
> latter's 5.5% ([Fig fig4])."

Immediately following sentence, reconstruction from 2 consecutive segments:

> "Lastly, when we considered top-N accuracy measurements, our model attained 67% accuracy for top-5
> and 81% for top-8 accuracy in the 20-way classification task ([Fig fig4])."

**Where printed:** Results running text, with Fig. 4c. **Unit:** dimensionless classification
accuracy over variable-region (VR) calls in the held-out test set. **Comparator:** a dummy classifier
at 5.5%. **Uncertainty: none printed.** The Fig. 4c caption attaches only "Results averaged over 20
models." No SD, no CI, and **no number of reads, molecules or VR calls is stated** for the 28%.

Also printed in the same neighbourhood (same instrument, other class counts): 5-way 86%; a pairwise
heatmap "averaged over five Random Forests"; and per-read whole-strand figures, reconstruction from
2 consecutive segments:

> "Overall sequencing accuracy per read averaged about 62% and 42% for the HDKER sequence, and roughly
> 51% and 21% for the AVLIM sequence, using five-way and 20-way classification models respectively."

### (b) The 61% figure — PRESENT, and it is a SIMULATION

Reconstruction from 2 consecutive segments, Results section on rereading:

> "Using this approach, the accuracy for the all 20-way amino acid classification task improved from
> 28% to 61% (compared to a 5% random baseline) with 10 rereads ([Fig fig5])."

Preceding sentence (2 segments): "Within each group, the class prediction with the highest average
confidence was selected to represent the entire group." Following sentence (2 segments): "Likewise,
the accuracy for a 7-way classification task improved from 66% to 99% (against a 14% random
baseline)."

The simulation label is in the figure caption. Fig. 5f caption, reconstruction from 5 consecutive
segments:

> "f, Simulated effect of rereading on 2 (Y, D), 4 (A, W, R, D), 7 (G, Q, W, F, R, D, E), 10 (A, G, V,
> N, Y, W, F, R, D, E), 14 (C, A, G, T, V, N, Q, M, Y, W, F, R, D, E), 17 (C, S, A, G, T, V, N, Q, M,
> I, Y, W, F, H, R, D, E), and 20-way (all 20 a.a.) classification tasks, compared to a baseline
> random classifier. Each value is the average over 100 train-test trials."

**So: which is which.** The **28%** is the measured single-read starting point of the same curve; the
**61%** is the **simulated** 10-read consensus end point, averaged over 100 train-test trials, with
**no SD or CI printed**. The ledger's "61% only in a SIMULATED 10-read consensus" is exactly right
and is the paper's own word, "Simulated".

One asymmetry I am obliged to report under check (4): the source states the 20-way chance level
**twice and differently** — "the latter's 5.5%" for the dummy classifier beside the 28%, and "a 5%
random baseline" beside the 61%. Neither carries a citation; both are the authors' own. No ledger
text notes the discrepancy.

On the experimental side of the split, a precision point: **the paper never labels the 28% (or Fig.
4c) "experimental" in so many words.** Fig. 4c's caption describes only the top-N definition, the
dummy classifier and "averaged over 20 models". That it is measured on real nanopore reads is
inferable from the surrounding pipeline description and from the fact that only Fig. 5f carries the
word "Simulated" — but it is an inference, and I am naming it as one.

### (c) What the task is — classification at a designed position, not de novo

The construct design puts the substitution at a position the authors chose:

> "We introduced a unique amino acid mutation at the central position within each block"

The learning target (2 segments):

> "We addressed this by initially training machine learning models to identify the single mutation
> present within a VR."

The label spaces, Fig. 4 caption, reconstruction from 4 consecutive segments:

> "For the 5-way classification task (top box shading), the classes are the 5 mutations found in that
> protein, while the 20-way classification task (bottom box shading) considers all possible amino acid
> classes."

The position is supplied by a segmenter, not discovered, Fig. 4 caption:

> "Transformed ionic current traces are plotted with a box around the variable regions defined by the
> segmenter."

The authors' own statement of reach, reconstruction from 3 consecutive segments (Results closing):

> "These results expand the capabilities of nanopore protein reading, moving beyond discriminating
> among a limited set of amino acids to sequencing individual amino acids across a protein strand,
> albeit in a synthetic sequence background."

What is deferred, Discussion, reconstruction from 2 consecutive segments:

> "This result could eventually enable a 'lookup table' approach reminiscent of mass spectrometry,
> facilitating full-length, single-molecule protein identification and fingerprinting."

And the pore caveat, one segment:

> "However, we note that the CsgG pore variant (R9.4.1) employed in our study was optimized for DNA
> sequencing."

**The string "de novo" is ABSENT from the served body text — zero occurrences.** So the paper neither
claims nor disclaims de novo reading in those words; what it does is 2-, 4-, 5-, 7-, 10-, 14-, 17-
and 20-way classification at segmenter-defined VR positions.

**Important distinction for the ledger.** "Known position" is correct at every class count: the VR
position is designed and segmenter-defined. "Known candidates" is correct for the 3-way and 5-way
tasks, where the classes are "the 5 mutations found in that protein". It is **not** correct for the
20-way task, which "considers all possible amino acid classes" — there the label space is the full
alphabet. The 28% and the 61% are both 20-way numbers, i.e. full-alphabet calls at a known position.

### (d) Sequence background — designed/synthetic, with one natural domain embedded

> "we designed protein constructs that included five repeating sequence blocks, each containing 59
> amino acids."

> "albeit in a synthetic sequence background."

> "as we begin to turn our attention to natural proteins, this methodology will require synthetic N-
> and C-terminal sequences"

"native protein" is **ABSENT**; "endogenous" is **ABSENT**. Nearest served wording: "natural,
full-length state" (Introduction) and "natural protein molecules" (Discussion).

One thing neither the entry nor any adversary records: a **natural domain is embedded in the designed
scaffold**. PASTOR-Titin uses a titin domain that "consists of 89 amino acids", "inserted into the
third VR position". That does not make the background native — it is a natural domain sitting inside
a synthetic scaffold with synthetic flanks — but a reader checking "synthetic background" should know
the construct set is not uniformly de novo-designed sequence.

### (e) De novo per-residue accuracy / limit of detection / substitution false-positive rate — ABSENT

Explicit string sweep of the served body text:

| String | Result |
|---|---|
| "de novo" | **ABSENT** |
| "limit of detection" | **ABSENT** |
| "LOD" | **ABSENT** |
| "false positive" / "false-positive" | **ABSENT** |
| "false discovery" | **ABSENT** |
| "specificity" | **ABSENT** |
| "sensitivity" | 4 occurrences, all qualitative, none a rate: "detection sensitivity, dynamic range, analytical throughput" (Intro); "did not demonstrate the level of single-amino acid sensitivity required for sequencing"; "we next sought to investigate the sensitivity of this method to single-amino acids"; "This method achieves single-amino acid sensitivity and demonstrates the capability" (Discussion) |
| "native protein" | ABSENT |
| "endogenous" | ABSENT |

So, in the published-is-not-performed grammar the ledger asks for: on the three quantities the entry
turns on, the preprint **does not DEFINE, BOUND, PREDICT, ANNOUNCE or MEASURE** a de novo per-residue
accuracy, a limit of detection, or a substitution false-positive rate. They are simply not in the
document at my read level. What it **MEASURES** instead is classification accuracy at designed VR
positions (3-way ~95%, 5-way 86%, 20-way ~28%, top-5 67%, top-8 81%; per-read whole-strand ~62%/42%
HDKER and ~51%/21% AVLIM). What it **SIMULATES** is the reread consensus gain (20-way 28%→61% at 10
rereads; 7-way 66%→99%). This absence is scoped to the **preprint main text**; supplementary material
and the Nature version's Extended Data were not read.

---

## REGIME

| Axis | As served |
|---|---|
| Construct | PASTOR: "five repeating sequence blocks, each containing 59 amino acids", one VR per block with "a unique amino acid mutation at the central position". Eight PASTORs, covering each amino acid in two sequence contexts. Variants: PASTOR-reread (VRs "separated by an increasing number of tyrosine residues, ranging from two to five"); PASTOR-Titin (89-aa titin domain "inserted into the third VR position"); P1 with "an unstructured N-terminal sequence of 42 amino acids". |
| Total strand length | **NOT STATED.** The paper says only that the method works on strands "up to hundreds of amino acids in length". 5 x 59 = 295 is arithmetic a reader performs, not a figure the paper prints. |
| Background | Designed/synthetic; natural flanks explicitly named as future work. |
| Unit of analysis | A single variable region within a single nanopore read (plus a per-read whole-strand aggregate for Fig. 4d,e). |
| Endpoint | Classification accuracy (and top-N accuracy) of the amino-acid identity at the VR. |
| Comparator | Dummy / random classifier: 5.5% quoted beside the 28%, 5% beside the 61%, 14% for 7-way. |
| Number of classes | 2, 4, 5, 7, 10, 14, 17 and 20 reported; the two numbers at issue are both 20-way. |
| Passes | 28% = single read. 61% = 10 rereads, simulated. Cluster convention is the paper's own: "clusters of size n (representing n reads, or n - 1 rereads)". |
| Experimental vs simulated | 28% measured on the held-out test set (not labelled "experimental" in the caption; "averaged over 20 models"). 61% explicitly "Simulated effect of rereading", "average over 100 train-test trials". |
| Instrument | CsgG pore variant R9.4.1, which the authors note "was optimized for DNA sequencing". |
| Uncertainty | None printed on either headline figure. |

**Does the claim handed to me sit inside this regime?** The two numbers do, exactly. The *use* the
entry puts them to — bounding a per-residue reading-error floor for **de novo** calls at **unknown**
positions on a **native full-length** chain — sits **outside** it on three axes at once (known vs
unknown position, synthetic vs native background, classification vs de novo reading). Under the
ledger's own scope rule, a result proved in this regime is **silent** outside it. That cuts both ways,
and I say so in BEARING: it does not license the entry's extrapolated floor as a measurement either.

---

## DEFECTS FOUND

Defects in the ledger's handling of this source, ordered by how much they bear on the verdict.

1. **"published anywhere" is an overreach at any read level reached here.** Attack 4 says "no de novo
   per-residue accuracy, no limit of detection and no false-positive rate for a substitution
   published anywhere". I confirm all three are ABSENT from the **preprint main text**. "Anywhere"
   additionally covers the preprint's supplementary, the Nature version and its Extended Data — none
   of which anyone on this entry read, as the entry's own "Vulnerability" paragraph concedes. The
   defensible sentence is "absent from the preprint main text, with the reviewed version and its
   supplementary unread".
2. **"among KNOWN candidates" is wrong for the 20-way task**, which is the task both headline numbers
   describe. Fig. 4's caption: the 20-way task "considers all possible amino acid classes". The
   candidate-shortlist description fits the 3-way and 5-way tasks. What is known at 20-way is the
   **position**, not the candidate list. The entry's phrase conflates the two and makes the
   instrument look narrower than the 28%/61% numbers actually are.
3. **Front matter was taken from a secondary source and is wrong.** Adversary 1's F4 row relays the
   author list from preLights as "Motone, Kontogiorgos-Heintz, Wee, Kurihara, Yang, Roote, Fang,
   Cardozo, Nivala". The published front matter has **thirteen** authors: that list omits **Oren E.
   Fox, Melissa Queen, Mattias Tolhurst and Miten Jain**, and silently reorders Fang past the omitted
   Fox. Check (7) violated.
4. **The published title differs from the preprint title.** The Nature front matter reads
   "Multi-pass, single-molecule nanopore reading of long protein strands" — **without** "with
   single-amino acid sensitivity". Every ledger mention carries the longer preprint-style title
   against the Nature DOI. Also: no agent, including me, read the preprint's title from its own front
   matter; the long form circulating in the entry is search metadata.
5. **Accession misdescribed in the brief handed to me** (and loosely in the entry's prose): the
   enabling preprint is **2023.10.19.563182**, not "a 2024 preprint", and 2025.04.18.649569 is a
   different paper on a different question.
6. **The source's own chance-level inconsistency goes unrecorded**: 5.5% beside the 28%, 5% beside
   the 61%, for the same 20-way task.
7. **No stated uncertainty is carried, because the source prints none.** Check (8) asks for the
   figure re-derived at its own author's threshold with the stated uncertainty. There is none to
   carry: 28% has only "averaged over 20 models", 61% only "average over 100 train-test trials", and
   the 28% has **no stated read or molecule count at all**. Adversary arithmetic that treats 61% as a
   point estimate ("f = 0.39 -> ~117 miscalls") therefore propagates an unhedged number.
8. **The 300-residue denominator is the adversaries' arithmetic, not the source's.** The paper states
   block length (59 aa) and block count (five) but **never prints a total construct length**, and says
   only "up to hundreds of amino acids". Both adversary 1's "~117 spurious calls per 300-mer" and the
   entry's "over 300 residues" rest on a conversion the source does not perform.
9. **"tops out at 28–42% 20-way per-read accuracy"** (adversary 2) drops the low end: the paper prints
   **21%** 20-way per-read for the AVLIM sequence alongside 42% for HDKER.
10. **The embedded natural titin domain is unreported** by the entry and all three adversaries. It
    does not overturn "synthetic background", but it is the one place the construct set touches
    natural sequence, and an 89-aa natural domain at VR position 3 is the nearest thing in the paper
    to the native-background regime the entry says is absent.
11. **Adversary 3's "no de novo capability is claimed"** understates what is actually the case: the
    phrase "de novo" occurs **zero** times. Silence, not a disclaimer — and per check (9), silence is
    not a prohibition.

What is **correct** and survives unqualified: the 28% number, its 20-way task, its 5.5% dummy
comparator, the 61% number, its identity as a **simulated** 10-reread consensus (the paper's own word
is "Simulated"), the synthetic sequence background, the known/designed VR position, the "lookup
table" deferral, the R9.4.1 "optimized for DNA sequencing" caveat, and the absence of a de novo
per-residue accuracy, an LOD and a substitution false-positive rate from the preprint main text.

---

## ROUTES THAT FAILED

* `https://www.biorxiv.org/content/10.1101/2023.10.19.563182.full.pdf` — **body text: success.**
  **Front matter: failed.** Served text begins at the Introduction; no title, authors, affiliations,
  correspondence, DOI/date banner, and no Abstract section. Reproduces adversaries 2 and 3.
* `https://www.biorxiv.org/content/10.1101/2023.10.19.563182v1` — **failed for metadata.** Returned
  body text headed by the Results heading "An unfoldase-mediated approach to nanopore protein
  sequencing on a nanopore array"; no title, author, version, posted date, DOI or "Now published in"
  line served.
* **Preprint version could not be determined.** No version banner is served at either route, so I
  cannot say whether the PDF I read is v1, v2 or v3. The preLights highlight's own URL slug ends
  "-v3", so at least three versions appear to exist; I attach no guess as to which one prints these
  numbers, beyond noting that the numbers I quote are in the latest-served PDF.
* **One quotation request refused by the summariser's cap** rather than by a host: a request to
  reproduce the document's first ~1200 characters returned "quotes are limited to 125 characters"
  plus a summary. Beaten everywhere it mattered by ordered consecutive segments; recorded because it
  is why the front-matter attempt produced nothing even where front matter might have been present.
* **PubMed Central / Europe PMC: not attempted**, per the routing brief (hard-blocked here). The
  search did surface `pmc.ncbi.nlm.nih.gov/articles/pmid/39261738`; I treated PMID 39261738 as an
  identifier to convert, not a route, and went to the publisher-side PAR copy instead.
* **nature.com: not attempted** (brief states it fails both ways even for open access). The published
  front matter came from the NSF PAR copy instead, which carries the journal's own volume, pages and
  dates.
* **Unpaywall: skipped entirely**, as instructed — no contact address supplied anywhere.
* **Not read, and therefore outside my absence findings:** the preprint's supplementary material, and
  the Nature version's Extended Data and Supplementary Information.

---

## BEARING ON THE LEDGER ENTRY

**The instrument facts attack 4 rests on are confirmed as served. The kill is not reversed. Two of
its sentences need correcting, and one of them is the sentence the entry's own reopening condition
depends on.**

1. **Attack 4's factual core stands.** 20-way single-read "around 28%" against a 5.5% dummy, printed
   in the Results with Fig. 4c; 61% at 20-way reached only in a run the paper itself labels
   "Simulated effect of rereading" over 10 rereads, averaged over 100 train-test trials; the
   substitution sits at a designed, segmenter-defined position; the background is a designed scaffold
   and the authors say so in their own words, "albeit in a synthetic sequence background"; natural
   flanks and a mass-spectrometry-style "lookup table" are deferred to future work; and no de novo
   per-residue accuracy, limit of detection or substitution false-positive rate appears anywhere in
   the main text. Adversaries 2 and 3 read this source correctly on every number.
2. **Correct "among KNOWN candidates".** At 20-way the label space is "all possible amino acid
   classes". The right formulation is *full-alphabet classification at a known position in a synthetic
   background*. This slightly strengthens rather than weakens the instrument, and the entry should not
   be resting a kill on a description of the instrument that is narrower than the instrument.
3. **Correct "published anywhere" to "absent from the preprint main text".** This is the load-bearing
   edit. The entry's "Vulnerability of this rejection" paragraph already identifies the reviewed
   Nature 633 text and its supplementary as the likeliest place an LOD or false-positive rate would be
   printed, and names it as unopened. My read does not open it either. So the entry's self-declared
   reopening condition — "If it prints one that clears ~10^-4 per residue de novo on a native chain,
   this rejection should be reopened at Gate 4" — remains **live and unchecked**, and the absence
   claim must be scoped to the preprint until someone opens the reviewed version. I have established
   the route for that: `par.nsf.gov/servlets/purl/10560827` serves the published article's front
   matter at this proxy where nature.com does not.
4. **Both sides of the extrapolation are now explicitly unmeasured.** The source prints no
   uncertainty on 28% or 61%, no read or molecule count behind 28%, and **no total construct length**.
   The adversaries' "f = 0.39 -> ~117 miscalls per 300-mer, a 3-to-4-order-of-magnitude gap" is
   therefore an unhedged conversion over a denominator the source does not print, performed on a
   simulated figure, in a regime (de novo, unknown position, native chain) in which the source is
   silent. The entry already labels attack 4's core "EMPIRICAL AND UNMEASURED, not algebraic" and
   distinguishes it from the attack-8 identity; this check confirms that self-assessment and tightens
   it — the arithmetic is not merely unmeasured, it is an extrapolation out of the proved regime in
   the direction the ledger's own scope rule warns about.
5. **Net effect on the verdict: none.** Attack 4 does not need "anywhere" to carry; it needs only that
   the named enabling instrument does not perform the candidate's measurement in kind, and the
   preprint's own words establish that. The FATAL status and the Provisional-floor reasoning in
   "Strongest remaining objection" are undisturbed. What should change in the entry text: the three
   corrections above, the thirteen-author front matter with the Nature title as actually published,
   the accession year, and a one-line note that the preprint's own front matter is not served at
   bioRxiv through this reader so no agent has read it.
