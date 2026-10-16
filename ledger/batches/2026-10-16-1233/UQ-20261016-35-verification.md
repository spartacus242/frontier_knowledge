# UQ-20261016-35 — verification notes

Checked 2026-10-16. Independent reading; reviewer reasoning not supplied.

Candidate question: in a biobank that mandates deletion of withdrawers' data, how far do
headline estimates move as withdrawals accumulate, and is withdrawal non-random w.r.t. the
exposures and outcomes the cohort studies?

---

## (a) What Elmas 2023 actually does

Tuğrulcan Elmas, "The Impact of Data Persistence Bias on Social Media Studies",
arXiv:2303.00902, DOI 10.1145/3578503.3583630. Venue confirmed from the ACM reference format
in the PDF: "In 15th ACM Web Science Conference 2023 (WebSci '23), April 30-May 1, 2023,
Evanston, TX, USA." (So WebSci '23 is right.)

**Unit of analysis** — tweets, authors, and whole topic-datasets. Not persons with covariates.
- "Data persistence is the availability of the data on the system." (S2.1)
- "We then compute the tweet turnout for each dataset by dividing the number of tweets we
  could collect / by the number of tweets in the original dataset." (S3)
- "We also compute the author turnout, which is the number of authors in the recollected
  dataset divided by / the number of authors in the original dataset." (S3)
- turnout = "the percentage of data that was still collectible at the time of collection,
  after the data was created." (Intro)
- Three dataset types: "controversial topics, trending topics, and framing of issues."

**Endpoint** — turnout, plus aggregate composition shifts. No exposure-outcome association,
no regression coefficient, no hazard/odds ratio, i.e. no "headline estimate" in the
epidemiological sense.
- "We quantify the data persistence bias using the change in political orientation, the
  presence of potentially harmful content / and topics as measures." (abstract)
- "We detect such content by using tweets with negative sentiments and hate speech as
  proxies." (S3)

**Comparator** — the dataset the author ORIGINALLY collected vs. what he can RE-collect later.
- "Social media studies often collect data retrospectively to analyze public opinion."
- "the collected dataset may differ from the complete dataset and the study may suffer from
  data persistence bias."

**Is the removal mandated and irreversible? NO on both counts.**
- The removal is removal *from the platform*, not from the researcher. The researcher keeps
  the original dataset throughout — that retention is the method.
- "On social media, the data on the platform may be removed or made uncollectable as the
  platforms suspend users / or users themselves remove their data." (S2.1)
- Causes (S7): "account suspension is the biggest factor in tweet removals as 54% of the
  tweets are uncollectable due to it across all datasets."; "The second biggest factor is
  deletions, which account for 34% of the removals."; "Removals due to accounts being
  protected make up 10%."
- Explicitly reversible for part of it: "However, the impact of such accounts may be
  ephemeral as accounts may switch back and forth between protected status to public status."
- The word "irreversible" does not appear in the paper. Neither does "rehydration" /
  "re-hydration".
- No requirement that researchers delete already-collected data appears anywhere in the
  paper — not from platform terms, not otherwise. (Twitter's developer terms did impose such
  a duty in practice, but Elmas does not study, invoke or measure it; making that connection
  is the reviewer's inference, not the paper's content.)
- MY OWN ARITHMETIC: 54 + 34 + 10 = 98, so ~2% of uncollectable tweets are unattributed in
  the stated breakdown. Also note the abstract's "Account suspensions are the primary factor
  contributing to data removals, if not the only one" sits awkwardly with the body's 54/34/10
  split: suspension is the plurality, not nearly the only cause, and author-initiated
  deletion — the one mechanism that is a real cognate of withdrawal — is a third of removals.

**Analogue of comparing withdrawers with retained on PRE-deletion attributes? PARTIAL, and
only at aggregate level.**
- Pre/post on the same dataset: "The mean political orientation score of the control dataset
  decreased from 0.15 to -0.23." (Case 1)
- Non-randomness of removal w.r.t. a pre-measured attribute, dataset-level:
  "We test this by computing the Pearson correlation between the turnout and the mean
  political orientation scores of trends." → "The Pearson correlation is -0.38 and is
  statistically significant (p < 0001)." (Case 2; "p < 0001" is as printed — evidently a
  typo for p < 0.001. Reported uncertainty carried through as printed.)
- "Overall, we found that the topics promoted by right-aligned users are more likely to suffer
  from data persistence." (abstract)
- "We observe that the percentage of tweets with harmful content decreases in almost all of
  the datasets, although the magnitude is rather small." (Case 1)
- So: yes, Elmas does show removal is non-random with respect to an attribute measured before
  removal — but the attribute is a dataset-level political-orientation score, the comparison
  is dataset-aggregate not individual-level, and the whole design is only possible BECAUSE
  the original is retained. The biobank mandate destroys exactly that retained frame. The
  candidate question's first leg (how far do headline estimates move) has no counterpart at
  all; the second leg (non-randomness of removal) has an aggregate, non-person-level
  counterpart.

---

## (b) Are withdrawal-ID lists public?

**Distribution channel: authenticated, per-application, not public.**
UK Biobank community article "Will User-Generated Files Be Automatically Filtered for
Withdrawals?" (updated 28 October 2025): the withdrawal list is obtained by signing in to AMS
as the PI or an approved delegate, opening the project's Data tab, going to Showcase,
selecting the Application, clicking "NNN withdrawals", then "Download withdrawals" — you
"download the latest withdrawal list and apply it to your dataset." User-generated files
"are not automatically filtered" and "researchers must manually apply the withdrawal filter
before using the data."
=> Behind an authenticated access-management system, scoped to one Application. Not public.

UK Biobank GDPR notice (ukbiobank.ac.uk/media/nt0p5s1k/gdpr.pdf): "Only UK Biobank has access
to participants' data with the personal identifiers."; "Before UK Biobank provides data to
researchers, we first remove all the personal identifiers."; data are provided "on the
execution of a legal agreement prohibiting the researcher from trying to identify a
participant." (The withdrawal subsection body was not retrievable from the extracted text —
recorded as not read, not as absent.)

UKB-RAP article (community article 34853452782621) is about platform enforcement, not about
the list: "A minimum of two weeks notice will be provided to researchers before an enforced
withdrawal period begins"; policy goal that "withdrawn participants' data are no longer
accessed, analysed, or retained within research environments". It says nothing about a
withdrawal ID list, its naming, or confidentiality.

**GitHub: code that READS a withdrawal file — yes. The file itself — not found.**
Every hit points at a private institutional filesystem path, not a repo-local file:
- lindgrengroup/obesity_femrepr_MR, nonlinearMR/general_QC.R:
  `#Path to UKBB provided list of individuals that have withdrawn consent`
  `withdrawn <- read.table("/well/lindgren/UKBIOBANK/DATA/QC/w11867_20210201.csv", header=F)`
  `cleaned <- subset(data, !(data$f.eid %in% withdrawn$V1))`
- same repo, observational_ukbb/general_QC.R: `/well/lindgren/UKBIOBANK/DATA/QC/w11867_20200204.csv`
- astheeggeggs/SAIGE_gene_munging, 01_phenotype_file_preparation_2.r:
  `# withdrawn <- fread("/well/lindgren/UKBIOBANK/DATA/QC/w11867_20210809.csv") %>% transmute(eid = V1)`
  `withdrawn <- fread("/well/lindgren-ukbb/projects/ukbb-11867/DATA/QC/w11867_20220222.csv") %>% transmute(eid = V1)`
- GenevieveLeyden/nlmr_vitd, pheno.dat/tidy.variables.R:
  `woc <- fread('/Volumes/MRC-IEU-research/data/ukbiobank/phenotypic/applications/81499/withdrawals/withdraw81499_55_20230915.txt')`
- privefl/paper-misspec, code/prepare-genotypes.R:
  `id_to_rm <- scan("../../UKBiobank/ukb_withdrawn_individuals_8Feb2021.id")` (path outside repo)
- MRCIEU/Smoking_IBD: `#3. Exclude participants who have withdrawn consent` (comment only)

So the claim's description "dated withdrawal-ID CSV files" is accurate about FILE NAMING
(w11867_20210201.csv, w11867_20200204.csv, w11867_20210809.csv, w11867_20220222.csv,
withdraw81499_55_20230915.txt, ukb_withdrawn_individuals_8Feb2021.id are all date-stamped,
which does confirm that dated snapshots exist and are retained locally by analysis groups).
It is NOT accurate that the files are "in third-party hands" publicly: the repos expose only
the paths and the filtering code.

Negative probes (all 0 results): `"ukb_withdrawn" OR "w_exclude" withdrawal eid csv`;
`"withdraw" in:path extension:csv ukb biobank eid`;
`filename:ukb_withdrawn_individuals_8Feb2021.id`. `filename:withdrawals.csv eid` returned 2
hits, both unrelated (ben-domingue/irw item text; CedynGroup/aequorOS teller transactions).
Finding = NOT FOUND in a public repo, on these probes. GitHub code search is keyword-indexed
and does not index every blob, so this is a strong negative, not a proof of non-existence.

**Additional defeater for Claim B's inference:** UKB participant IDs are re-coded per
Application, which is why bridging link files exist in the same corpus —
MRCIEU/Health-and-Wellbeing-MR, "One-sample MR Script - 3 Run one-sample.R":
`phen.link <- merge(phen, link, by.x="eid", by.y="app16729", all.x=T)`. The withdrawal
download is itself per-Application ("select your Application ... NNN withdrawals"). So a
withdrawal list is only meaningful against the frame of the same application; it is not a
portable public key into the cohort.

Separately noted but NOT relied on: a secondary aggregator reports that researchers have
leaked UK Biobank participant phenotype data to public GitHub repos. Even if true, a leak is
not a distribution channel, and it concerns phenotype data, not withdrawal lists. Not fetched,
not verified, no weight given.

---

## (c) Has anyone compared withdrawers with retained participants, or posed the drift question?

**Withdrawal literature found is motives/attitudes, qualitative or survey-based**, not
covariate comparison of withdrawers vs retained:
- "Motives for withdrawal of participation in biobanking and participants' willingness to
  allow linkages of their data" (PMC8904772)
- "«If you give them your little finger, they'll tear off your entire arm»: losing trust in
  biobank research" (PMC7538395)
- "The evolution of withdrawal: negotiating research relationships in biobanking" (PMC4512976)
- "Withdrawing from participating in a biobank – a comparative study" (elsihub listing)
- Kaya, "Rethinking the Right of Withdrawal Under the GDPR in the Context of Biobank
  Research" — legal monograph.

**UK Biobank's own lost-to-follow-up documentation does not make the comparison.** It also
draws a distinction that matters for the candidate question: its code 5 is "Participant has
withdrawn consent for future linkage" — "These are participants who have asked UK Biobank to
no longer contact them or obtain information." And crucially: "However, UK Biobank still has
permission to use their clinical information and samples collected previously." No count of
full withdrawals, no deletion discussion, and explicitly no baseline/exposure/outcome
comparison of withdrawn vs retained participants.

**The adjacent literature that DOES pose a deletion-induced-drift question is in ML, not
epidemiology** — and it is about models, not cohort estimates:
- "To Be Forgotten or To Be Fair: Unveiling Fairness Implications of Machine Unlearning
  Methods" (arXiv:2302.03350)
- "Protecting the Undeleted in Machine Unlearning"
- "From Machine Learning to Machine Unlearning: Complying with GDPR's Right to be Forgotten
  while Maintaining Business Value of Predictive Models" (arXiv:2411.17126)
These establish that non-random erasure requests shift downstream model behaviour, which is
the structural cognate; none is a cohort-estimate drift study, and none supplies the
pre-deletion-frame-vs-withdrawn-IDs comparison the candidate question needs.

**Posed in print?** On these 8 web queries plus 6 code-search probes, I did not find anyone
posing the candidate's drift question for a consent-withdrawal biobank. NOT FOUND — as
distinct from could-not-read. One source was partially unreadable: the withdrawal subsection
body of the UKB GDPR PDF (recorded above).

---

## Query list (8 WebSearch)

1. `UK Biobank participant withdrawal list w12345_20230401.csv repository withdrawal IDs`
   -> UKB community articles + ukbgene docs; no public list.
2. `github UK Biobank withdrawal participant IDs csv file public repository "withdraw"`
   -> same UKB pages + one aggregator post about leaked phenotype data; no public list.
3. `UK Biobank access terms participant withdrawal "destroy" data researchers notified withdrawal list confidential`
   -> UKB participant agreement + GDPR notice + UKB-RAP article; no list distribution detail.
4. `cohort study participants who withdrew consent compared with those who remained baseline characteristics differential withdrawal bias`
   -> general attrition/loss-to-follow-up methods literature, not consent withdrawal + deletion.
5. `UK Biobank participants who withdrew consent characteristics of withdrawers study`
   -> motives/trust qualitative papers + UKB lost_to_flup.pdf; no covariate comparison.
6. `biobank "consent withdrawal" characteristics of withdrawers versus continuing participants empirical analysis`
   -> motives/attitudes surveys only.
7. `"withdrawal" consent biobank mandated data deletion impact on study results bias sensitivity analysis estimates drift`
   -> ethics/legal and institutional SOPs; no quantitative drift study.
8. `"right to be forgotten" OR "consent withdrawal" research cohort "selection bias" machine unlearning statistical consequences of erasure requests`
   -> machine-unlearning fairness literature (the ML cognate).

## Query list (6 GitHub code-search probes)

9.  `"ukb_withdrawn" OR "w_exclude" withdrawal eid csv` -> 0 results.
10. `"withdrawals" "eid" extension:csv biobank` -> 21 hits, all unrelated.
11. `"withdraw" "eid" ukbiobank language:R` -> 42 hits; the decisive ones quoted above (code reads private paths).
12. `filename:withdrawals.csv eid` -> 2 hits, both unrelated.
13. `"withdraw" in:path extension:csv ukb biobank eid` -> 0 results.
14. `filename:ukb_withdrawn_individuals_8Feb2021.id` -> 0 results.

No search was refused by a safety classifier.

## Fetch list (6)

F1 https://arxiv.org/abs/2303.00902 — abstract, venue, DOI.
F2 https://arxiv.org/pdf/2303.00902 — full text; quotes in (a).
F3 https://community.ukbiobank.ac.uk/hc/en-gb/articles/34853452782621 — UKB-RAP enforcement; no list detail.
F4 https://www.ukbiobank.ac.uk/media/nt0p5s1k/gdpr.pdf — identifier/access-agreement quotes; withdrawal subsection body NOT retrievable.
F5 https://community.ukbiobank.ac.uk/hc/en-gb/articles/31349793190429-... — AMS download of withdrawal list; decisive for (b).
F6 https://biobank.ctsu.ox.ac.uk/ukb/ukb/docs/lost_to_flup.pdf — code 5 withdrawal-for-linkage; no comparison.

Partial read: F4 (withdrawal subsection body missing from extracted text) — could not read, not
"absent". Everything else read as needed.
