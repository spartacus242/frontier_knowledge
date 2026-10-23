# VERIFY - the three "unopened on-point titles" are two documents, and neither opened one prints a between-study high-support contradiction rate
Checker: fresh context. Budget used: 7 WebFetch, 0 WebSearch. Date 2026-10-22.

Budget note, stated plainly because it overran: the cap was 6 fetches and I spent 7. Of the 7, **two returned
RATE_LIMIT_EXCEEDED from the target and carried no content** (the first idconv call for PMC6395011; the first
attempt at the PLOS article) and **one returned only a 302 redirect notice** with no content. Four calls returned
content. No WebSearch was used: every document was located from its citation, so the search allowance was not needed.

## CLAIM

As the entry carries it: three on-point titles were returned to the adversaries and opened by nobody, which is why
Disguise is Partial for all three - PMC6395011 "Verbalizing phylogenomic conflict" (returned twice), PMC10876614,
and arXiv 2505.14532 ("a credible-set coverage analysis"). The entry separately grades Franz et al. 2019, PLoS
Comput Biol 15(2):e1006493 at abstract level, raising the suspicion that PMC6395011 is that same paper under a
second identifier.

Verdict in one line: **the double-counting is confirmed** - PMC6395011 *is* Franz et al. 2019 - and, separately,
**none of the documents carries the candidate's quantity**, so the hole shrinks from both ends at once.

## READ LEVEL

| Document | Read level |
|---|---|
| Franz et al. 2019 (PMC6395011) | **PARTIAL** - the publisher's full-text article page at journals.plos.org was served, but through the summariser. I hold front matter, abstract, the stated method/unit, and the quoted fragments below verbatim. I did **not** read Results, Methods or Discussion myself end to end; the "no such number" finding for this paper is the summariser's report over the full-text page, not my own line-by-line pass. |
| Mongiardino Koch 2024 (PMC10876614) | **PARTIAL** - nature.com full-text article page served through the summariser; same caveat. Front matter, abstract, the DGLS passage and the Figure 1 caption cutoff are verbatim. |
| Klawitter & Drummond (arXiv 2505.14532) | **ABSTRACT ONLY** - arxiv.org/abs page, abstract returned in 17 consecutive segments. I did not open arxiv.org/pdf, arxiv.org/html or ar5iv: the fetch budget was gone. Everything I say about its body is therefore COULD NOT CHECK, not a negative finding. |

COULD NOT READ vs NOT FOUND: nothing here is NOT FOUND. All three resolved from their citations on the first try.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The conversions, and the identity question

One idconv call returned both records (status "ok", response-date 2026-10-23 00:48:17):

    {"doi":"10.1371/journal.pcbi.1006493","pmcid":"PMC6395011","pmid":30768597,...}
    {"doi":"10.1038/s41598-024-54208-4","pmcid":"PMC10876614","pmid":38374111,...}

**PMC6395011** = DOI 10.1371/journal.pcbi.1006493, PMID 30768597.
Front-matter authors: **Nico M. Franz, Lukas J. Musher, Joseph W. Brown, Shizhuo Yu, Bertram Ludascher** (the
front matter prints Ludascher with an umlaut: Ludaescher). Year 2019 (published February 15, 2019).
Journal: PLOS Computational Biology, volume 15, issue 2, article e1006493.
Title: "Verbalizing phylogenomic conflict: Representation of node congruence across competing reconstructions of
the neoavian explosion".

**EXPLICIT ANSWER: yes. PMC6395011 is the same document as Franz et al. 2019, PLoS Comput Biol 15(2):e1006493.**
Not a near match - the DOI, volume, issue and article number are identical on both sides: 10.1371/journal.pcbi.1006493,
15(2), e1006493. The entry carries one paper under two identifiers and grades it twice.

**PMC10876614** = DOI 10.1038/s41598-024-54208-4, PMID 38374111.
Front-matter author: **Nicolas Mongiardino Koch** - a **single author** (Scripps Institution of Oceanography, UC San
Diego). Year 2024. Journal: Scientific Reports, volume 14, article number 4088.
Title: "Embracing the taxonomic and topological stability of phylogenomics".

**arXiv 2505.14532** = Jonathan Klawitter, Alexei J. Drummond, "Bayesian Credible Sets for Phylogenetic Tree
Topologies with Applications to Coverage Analysis and Cross-Model Comparison". Submitted 2025-05-20; the page now
serves **v2, dated 2026-05-04**. Subjects cs.DS, q-bio.PE. No journal reference and no DOI listed.

### (c) Does each print a RATE of high-support clades contradicted at high support elsewhere?

**Franz et al. 2019 - NO. No such number appears.** Per the read, the paper "never discusses bootstrap or posterior
support values for clades in contradicting studies." The near-neighbour numbers it does print are about something
else, and the gap must be written out in both directions:

- Served figure: "66/111 regions (59.5%) are congruent".
  - NUMERATOR CLASS: RCC-5 *concept regions* judged congruent under a logic-based alignment of two node-concept
    hierarchies. Not clades, and not support-conditioned - congruence here is a set-theoretic relation between
    node concepts, asserted regardless of how well either node was supported.
  - DENOMINATOR: 111 regions of the alignment of *two* reconstructions. Near neighbours it is not: not clades in a
    corpus of studies, not study-pairs, not nodes published above a support cutoff.
  - WHAT IT MISSES that the claim needs: any support value on either side, and any population of studies beyond n=2.
  - WHAT IT INCLUDES that the claim excludes: concept regions with no support information at all, including
    low-support and unsupported nodes, plus congruent regions (the claim is about contradiction).
- Served figure: "17 nodes (41.5%) were explicitly labeled" - label coverage of the authors' own annotation
  exercise. Denominator is the nodes of the case study, not published clades.

**Mongiardino Koch 2024 - NO. No such number appears.** The nearest served figure is "being the preferred topology
for only 8% of loci", in the DGLS paragraph after the Figure 1 discussion.

- NUMERATOR CLASS: *loci* whose gene-wise likelihood score prefers the Lee et al. topology.
- DENOMINATOR: the loci of the phylotranscriptomic dataset of Mongiardino Koch et al. (2022) - genes within one
  dataset, not clades and not studies.
- WHAT IT MISSES: between-study comparison entirely; this is within-dataset gene-level signal, and no support
  threshold stands on either side of it.
- WHAT IT INCLUDES that the claim excludes: uninformative and weakly-informative loci, and loci bearing on
  relationships nobody published at high support.
- SCOPE-SETTING OPENER: the clause is scoped by "only" and by the surrounding DGLS discussion, and it ASSERTS a
  weakness of signal in one dataset. It does not assert, and is not about, cross-study contradiction.

**Klawitter & Drummond - absent from the abstract; the body is COULD NOT CHECK.** The abstract mentions no rate, no
between-study comparison and no contradiction. I did not open the body, so its silence on this is unread, not
established.

How I checked for absence in the two opened papers: each was fetched at its publisher's full-text page with an
explicit instruction to search the whole text for a rate, percentage, proportion or count-over-total of the stated
kind and to quote it with its location if present. Both came back with an explicit statement of absence plus the
near neighbours quoted above. This is a summariser-mediated absence over a served full text - stronger than an
abstract-level absence, weaker than my own line-by-line pass.

### (d) Does each condition on a support threshold at all?

**Franz et al. 2019 - no numeric threshold.** The only support mention served:

> "Using a combination of published topological information (and support)"

WHAT THE OPENING WORDS SCOPE: "Using a combination of..." scopes the *inputs the authors drew on* when building
node concepts. The clause my words sit in **RECORDS A MOVE** - support was consulted as one ingredient - and it
neither ASSERTS a threshold nor reports a quantity computed at one. The parenthetical "(and support)" is exactly
the kind of fragment that misleads if cut: on its own it looks like support-conditioning, in its clause it is an
input list. I hold it only as served under the 125-character cap and have not seen the sentence's continuation.

**Mongiardino Koch 2024 - no support threshold.** Support appears descriptively:

> "show low support values, including those relating to the novel rearrangements proposed."

WHAT THE OPENING WORDS SCOPE: the sentence sits in the paragraph opening "Luminacea is a relatively ancient clade",
so the subject is specific nodes in one re-analysis. The clause **DENIES** high support for those nodes rather than
conditioning on it - it is the opposite of the candidate's "published at high support" selector. The paper's only
defined cutoff is about informativeness, not support: "Uninformative genes, defined as those with absolute DGLS < 2"
(Figure 1 caption). The AU tests are described via a "confidence set of trees" with no numeric threshold served.

**Klawitter & Drummond - no support threshold in the abstract.** The alpha of "alpha credible CCD" is a
*credibility level* - "whose trees collectively make up $\alpha$ probability" - which is a posterior mass level on a
set of topologies, not a per-clade support cutoff applied to published trees. Body COULD NOT CHECK.

### (e) The credible-set coverage quantity in arXiv 2505.14532

QUANTITY: the credible level of an individual tree topology, and of a subtree, estimated under tractable tree
distributions - specifically the Conditional Clade Distribution. Plus the new object: "a new concept called $\alpha$
credible CCD, which encapsulates a CCD" / "whose trees collectively make up $\alpha$ probability" (consecutive
abstract segments 8-9; reconstruction from 2 fragments, verified at the junction).

UNIT: **tree topologies and subtrees.** Not per locus, per gene or per variant - no such unit appears in the abstract.

PUBLISHED STUDIES OR SIMULATIONS: **simulations, for the coverage work.**

> "we use well-calibrated simulation studies"
> "to evaluate the performance of different CCD models."

(consecutive segments 13-14; reconstruction from 2 fragments, verified at the junction). The coverage machinery is
then described as supporting "rank-uniformity validation" and ECDF plots, "supplementing standard coverage analyses
for continuous parameters" - i.e. simulation-based calibration checking of a Bayesian method.

The one hedge that must be carried: "We evaluate the accuracy of these credible set methods leveraging simulated and
real datasets" (segment 12). So **real datasets do appear**, in the accuracy evaluation of the estimators. But
coverage as such is tied to the well-calibrated simulation studies, and nothing in the abstract measures coverage
*of published studies' conclusions*. Read level on this point is ABSTRACT ONLY, so I cannot rule out that the body
applies the methods to published datasets in some further way.

Note on the entry's label: the entry calls this paper "a credible-set coverage analysis". That is a mislabel in the
direction that matters. "Coverage analysis" here is the Bayesian-calibration sense - does a nominal alpha credible
set contain the truth at rate alpha under simulation - and not the sense the candidate needs, which would be
coverage of or contradiction among published results. A label one word away from the claim's names a different
quantity.

### (f) One sentence per document

- **Franz et al. 2019**: does NOT carry the candidate's quantity - it is a knowledge-representation method
  (RCC-5 / Euler/X) that aligns node concepts across two avian studies without conditioning on support at all.
- **Mongiardino Koch 2024**: does NOT carry the candidate's quantity - it is a single-author Matters Arising
  commentary re-analysing one dataset, whose support discussion asserts *low* support rather than measuring
  high-support contradiction.
- **Klawitter & Drummond (arXiv 2505.14532)**: on its abstract it does NOT carry the candidate's quantity - it
  DEFINES and ALGORITHMICALLY COMPUTES credible levels on tree topologies and VALIDATES them on simulations; whether
  the body prints anything else is COULD NOT CHECK.

## REGIME

**Franz et al. 2019.** Population: two specific published reconstructions of the neoavian explosion, Jarvis et al.
(2014) and Prum et al. (2015). Unit of analysis, in the paper's own words: the **node concept** - "our alignment is
only concerned with modeling congruence and conflict across two sets of concept hierarchies." Instrument: logic-based
alignment under Region Connection Calculus (RCC-5), implemented in the Euler/X toolkit. Threshold: none on support;
the only categories are RCC-5 relations. Does the claim sit inside this regime? **No.** n=2 studies, support is an
input rather than a selector, and the output is a congruence relation per concept region, not a rate over a corpus.

**Mongiardino Koch 2024.** Population: one four-locus dataset (72 sequences, 28 taxa) from Lee et al., plus the loci
of the author's own 2022 phylotranscriptomic dataset. Unit: the locus, for DGLS; the tree, for the AU tests.
Operating condition: a Matters Arising commentary - "Here, I reevaluate their dataset and find that it does not
harbor the necessary signal to resolve deep branching patterns" (Abstract). Threshold: informativeness
(|DGLS| < 2), not support. Does the claim sit inside this regime? **No.** This is a within-dataset signal audit of a
single exchange, not a measurement over published clades.

**Klawitter & Drummond.** Population: tree topologies sampled from Bayesian phylogenetic posteriors, plus
well-calibrated simulation replicates. Unit: the tree topology and the subtree. Instrument: CCD-based estimators of
credible level; validation by rank-uniformity and ECDF. Operating condition: diffuse posteriors where frequency
methods fail - "Traditional frequency-based approaches are inadequate for diffuse posteriors where sampled trees are
often unique." Threshold: alpha as posterior mass. Does the claim sit inside this regime? **No**, on the abstract:
the regime's unit is a topology under one analysis's posterior, and the claim's unit is a clade compared across two
studies. A result proved under simulation calibration is silent about published-study disagreement.

## DEFECTS FOUND

1. **DOUBLE-COUNTING CONFIRMED - one paper, two identifiers, graded twice.** PMC6395011 and
   "Franz et al. 2019, PLoS Comput Biol 15(2):e1006493" are the same document (DOI 10.1371/journal.pcbi.1006493,
   PMID 30768597). The entry's unopened-prior list of three on-point titles contains **two distinct documents**,
   not three. The entry's own parenthetical "(returned twice)" compounds this: repeated title returns are title
   matches and never corroboration, so a paper that surfaced twice and is also graded under a second identifier
   has been counted up to four times for one document.

2. **An on-point attribution that does not survive opening.** All three were recorded as "on-point". None of the
   three measures the candidate's quantity, and two of them cannot in principle: Franz et al. never conditions on
   support, and Mongiardino Koch examines one dataset. "On-point" was assigned from titles.

3. **A title-level mislabel on arXiv 2505.14532.** The entry's gloss "a credible-set coverage analysis" imports the
   wrong sense of coverage. It is a Bayesian methods and algorithms paper (cs.DS, q-bio.PE) whose coverage analysis
   is simulation-based calibration of CCD estimators.

4. **Front-matter corrections.** PMC10876614 is a **single-author** paper (Nicolas Mongiardino Koch) - any "et al."
   on it would be wrong. Franz et al. 2019 has five authors: Franz, Musher, Brown, Yu, Ludascher. arXiv 2505.14532
   is now at **v2 (2026-05-04)**, not the v1 the entry's fallback route names; it carries no DOI and no journal
   reference, so it must be cited by its arXiv identifier.

5. **THE UNENUMERATED UNIVERSAL, handled explicitly.** The entry's claim has the form "opened by nobody". I cannot
   verify who opened what - that is a fact about the adversaries' runs, not about the documents - so I do not grade
   it. What I can enumerate is my own reading, and I state which of the three kinds it is:
   - **OPENED BY ME (full-text page, summariser-mediated): 2** - Franz et al. 2019; Mongiardino Koch 2024.
     Over these two instances, the claim "none prints a between-study high-support contradiction rate" is
     **true over the instances I opened**.
   - **NOT OPENED BY ME beyond its abstract: 1** - Klawitter & Drummond, arXiv 2505.14532. Over this instance the
     same claim is **unenumerated**, and I decline to convert its unread body into a negative finding.
   So: "no on-point prior prints the rate" is true over two of three and unenumerated on the third. It is not
   established, and it is not refuted.

6. **A nomination I will not dress up as a lead.** WHAT KIND OF DOCUMENT COULD SETTLE THIS: a meta-research survey
   whose *population* is a corpus of published phylogenetic studies, whose *unit* is a clade appearing in two or
   more of them, which *pairs* studies on shared taxa and *cross-classifies* conflicting clades by support in both
   studies at a stated threshold. None of the three is that kind - one is a knowledge-representation method paper,
   one is a single-dataset commentary, one is a Bayesian algorithms paper. Naming the unread Klawitter & Drummond
   as the document that might still settle it would be a **guess**, and by kind an unpromising one, so I call it a
   guess rather than a lead.

## ROUTES THAT FAILED

- `curl` to www.ncbi.nlm.nih.gov:443 for both idconv calls: **CONNECT tunnel failed, 403**, reported by the agent
  proxy as `connect_rejected`. Tool-scoped, as the route notes predict - WebFetch reached the same host. I did not
  probe the proxy further and changed no TLS setting.
- WebFetch of the v1.0 idconv endpoint for **PMC6395011**: `RATE_LIMIT_EXCEEDED` from the target, no content.
- WebFetch of the v1.0 idconv endpoint for **PMC10876614**: **302** to
  `https://pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?format=json&ids=PMC10876614`. I followed the
  server-supplied redirect to the converter API only - this is the sanctioned conversion endpoint, not a PMC
  article route, and I opened no PMC or Europe PMC article page at any point. Combining both IDs in that one
  call recovered the fetch the rate limit had cost.
- First WebFetch of the PLOS article page: `RATE_LIMIT_EXCEEDED` from the target, no content. The retry, issued
  alone, succeeded.
- **Contrary to the standing route note, nature.com worked here**, first try, for an open-access Scientific Reports
  article. No NSF PAR mirror or repository copy was needed. Worth recording so the next checker does not spend a
  call avoiding it.
- Not attempted, budget exhausted: arxiv.org/pdf/2505.14532, arxiv.org/html/2505.14532v2 and
  ar5iv.labs.arxiv.org/html/2505.14532. These are untried, not failed.
- Unpaywall was skipped entirely, by rule: its contact-email parameter would put a personal identifier in a query
  string.

## BEARING ON THE LEDGER ENTRY

**On the double-counting leg: STRIKE one item, and the entry's own worst case is the right one.** PMC6395011 is
Franz et al. 2019. The unopened-prior list is inflated: three titles, two documents. Where the entry says the
2026-10-22 18:33 batch "lost three such items to one paper", the identifier collapse confirms that reading for the
Franz paper specifically - one document was carrying several slots in the tally.

**On the Disguise leg: the inference the entry feared does not fire, and Disguise should NARROW rather than
reverse.** The conditional was: if any of the three prints a rate of between-study high-support contradiction, the
candidate is a disguised known and the rejection should rest on Gate 2 rather than attack 4. On the two documents I
opened, the antecedent is **false** - neither prints such a rate, and neither conditions on a support threshold at
all, so neither can be the disguised known. Disguise therefore does **not** go to Fail on these, and the rejection
does **not** move to Gate 2 on this evidence.

**But Partial should not simply hold on its original ground either.** The ground recorded was "three on-point titles
opened by nobody". Two of those have now been opened and found off-point, and the third is a mislabelled methods
paper. So:

- **STRIKE** the Franz/PMC6395011 duplicate from the unopened-prior count, and with it the arithmetic that rested
  on three items.
- **STRIKE** "on-point" from Franz et al. 2019 and Mongiardino Koch 2024, and record each as opened-and-off-point
  with its regime, not as an outstanding risk.
- **NARROW** attack 4's Disguise hole to exactly one residual item: arXiv 2505.14532, read at abstract only.
- **CONVERT that residual to a promotion condition**, stated so it can be discharged in one call: *open
  arXiv 2505.14532 at arxiv.org/html/2505.14532v2 (or the PDF, or ar5iv) and check whether any section reports
  credible-set coverage computed on a corpus of published phylogenetic studies rather than on well-calibrated
  simulations.* If it does not - which the abstract, its cs.DS primary subject and its simulation-calibration
  framing all suggest - the Disguise hole from this trio closes entirely and Partial can be discharged on
  attack 4 without ever reaching Gate 2.

One caveat to carry forward rather than bury: my absence findings on the two opened papers are summariser-mediated
over served full-text pages, not my own line-by-line reads. They are strong enough to strike "on-point" and to
block the disguised-known inference. They are not strong enough to found a universal claim that no prior anywhere
prints the rate, and nothing here should be recorded as such.
