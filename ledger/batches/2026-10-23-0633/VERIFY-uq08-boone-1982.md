# VERIFY - UQ-20261023-08 second leg: Boone et al. 1982 AJPH, mailed / on-site / blind CDC proficiency testing surveys
Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-23.

## CLAIM

That the second leg holds: that this paper asks the candidate's question in the candidate's own
field, by the US Centers for Disease Control, comparing mailed, on-site and BLIND proficiency
testing surveys.

Source as the entry carries it: Boone D.J., Hansen H.J., Hearn T.L., Lewis D.S., Dudley D.,
'Laboratory evaluation and assistance efforts: mailed, on-site and blind proficiency testing
surveys conducted by the Centers for Disease Control', American Journal of Public Health
1982;72(12):1364-1368, DOI 10.2105/AJPH.72.12.1364.

## READ LEVEL

**Boone et al. 1982: ABSTRACT ONLY, and the abstract reached only through an AGGREGATOR
(RePEc/IDEAS), not through the publisher.** I did not open the publisher page either. The
record's read level is therefore UNCHANGED by this check, but I can now say what kind of
failure it is: three distinct publisher paths returned a site-level client error, and doi.org
returned a rate limit with a do-not-retry instruction that I did not retry because the fetch
budget was nearly gone. That is a mix of ROUTE FAILURE (publisher, three paths) and SPENT
BUDGET (doi.org, one attempt only) - I am recording both rather than logging the paper as
unreadable.

What I actually have of Boone 1982:
- Publisher-supplied bibliographic metadata, via https://ideas.repec.org/a/aph/ajpbhl/198272121364-1368_6.html
- A summariser's paraphrase of the abstract from that same page, plus ONE short verbatim
  fragment (the summariser caps quotation at ~125 characters).
- The page itself states the full text is not available for download.

I never saw the printed front matter, the Methods, the Results, or any table.

**A second, DIFFERENT paper that I did open at abstract level** (and which the entry does not
cite): LaMotte L.C., Guerrant G.O., Lewis D.S., Hall C.T., 'Comparison of laboratory performance
with blind and mail-distributed proficiency testing samples', Public Health Reports
1977;92(6):554-560, PMID 200968, via https://stacks.cdc.gov/view/cdc/65385 - ABSTRACT ONLY
(the record page's bibliographic fields plus a paraphrased abstract; the CDC record notes a
metadata error rendering the third author as "Lewis, D, Ssue"). Its full-text PDF is openly
posted at https://stacks.cdc.gov/view/cdc/65385/cdc_65385_DS1.pdf and I did NOT open it: the
budget was gone. That is a budget absence, not a source property.

## WHAT THE SOURCE SAYS (quotations as served)

Answering the sub-claims in order.

**(a) Read level and failed routes.** See READ LEVEL above and ROUTES THAT FAILED below. Plainly:
I stopped on doi.org because the budget ran out, not because doi.org refused twice. The publisher
host did refuse, three times, at three paths.

**(b) Front matter. I COULD NOT REACH THE FRONT MATTER, so I confirm nothing from it.** What I
can report is aggregator metadata, which is a short form someone else wrote and is exactly what
the quotation discipline says not to take author names from:

- Title, as RePEc lists it: "Laboratory evaluation and assistance efforts: mailed, on-site and
  blind proficiency testing surveys conducted by the Centers for Disease Control"
- Authors, in RePEc's listed order: Boone, D.J.; Hansen, H.J.; Hearn, T.L.; Lewis, D.S.; Dudley, D.
- Journal: American Journal of Public Health (publisher: American Public Health Association)
- Volume 72, Issue 12, pages 1364-1368, year 1982
- Handle: RePEc:aph:ajpbhl:1982:72:12:1364-1368_6
- **DOI: none listed on that page.** The DOI 10.2105/AJPH.72.12.1364 in the entry's citation was
  NEVER RESOLVED by me. It fits AJPH's volume.issue.page pattern, but every attempt to resolve
  it failed, so it is UNVERIFIED, not confirmed.

Every bibliographic field in the entry's citation that I could compare matches the aggregator
record exactly, including author order. That is consistency between the entry and a database,
not front-matter verification.

**(c) Does it compare the arms, and does it print an error rate for the blind arm and for the
declared arm?**

Comparison: YES at abstract level. The abstract as served describes three CDC efforts over the
preceding three years - on-site surveys (trained personnel visiting laboratories with performance
problems to review analytical procedures), special assistance surveys (referenced samples mailed
to underperforming laboratories, followed by telephone consultation), and blind surveys
(referenced samples sent through normal patient sample routes to measure day-to-day performance) -
and draws a conclusion that sets mailed results against routine-specimen performance.

Error rates: **I CANNOT NAME A NUMBER FOR EITHER ARM.** Not one figure, no numerator, no
denominator, no table or sentence location. At the read level I achieved, the source as served
ASSERTS a comparative conclusion and ANNOUNCES the three arms; it does not, in anything I saw,
MEASURE a printed error rate. Keep this strictly distinct from an absence: whether the paper's
tables print per-arm error rates is **COULD NOT CHECK**, because the only text I reached was an
abstract paraphrase. Unread silence is not evidence in either direction.

**(d) The sentence posing the question.** **COULD NOT CHECK.** I obtained no sentence in which
the paper poses a question, and so cannot quote one or report what its opening words scope. The
only verbatim string I hold is a CONCLUSION, served as a short fragment:

> "good performance in mailed PT does not necessarily imply good laboratory performance"

Three cautions on that fragment, because it is the one piece of verbatim text in this check and
it is the piece most likely to be leaned on:

1. **I cannot report its opening words or what they scope.** The summariser handed it to me as a
   fragment beginning in lower case ("good"), i.e. cut mid-sentence; the words that scope the
   clause - whatever stands before "good" - are not in anything I was served. By this ledger's
   own scope-setting-opener rule, that disqualifies the fragment from carrying weight until the
   sentence is read whole.
2. **Logical form: it DENIES SUFFICIENCY.** Good mailed-PT performance is asserted not to be
   sufficient for good routine performance. It says nothing about necessity, and it is not a
   claim that mailed PT is uninformative or that blind PT is superior on any metric. Read as
   "mailed PT is unreliable", or used to license any numeric gap, it is overread.
3. **Modality: hedged** ("does not necessarily imply"). It is not "does not imply". Any use that
   deletes "necessarily" changes the modality, which is precisely the failure mode flagged in
   the prior batch.

It is not a disjunction.

**(e) Population, analytes, years, unit of analysis.**

- Years: "the preceding three years" relative to a 1982 publication, i.e. roughly 1979-1982. The
  abstract gives the span as a relative phrase; no explicit calendar years reached me.
- Population: **selected, not representative.** The on-site arm is described as visiting
  "laboratories with performance problems" and the special-assistance mailed arm as sending
  samples to "underperforming laboratories". The blind arm is described only as measuring
  day-to-day performance via normal patient sample routes; I do not know how its labs were
  chosen.
- Analytes: **NOT STATED** in anything I read. ("referenced samples" is all I have.)
- Unit of analysis: **NOT STATED** in anything I read. A laboratory is the obvious candidate, but
  I will not supply it; naming it would be my inference, not a source finding.

**(f) Were the blind samples submitted through the routine patient workflow, quoted from the
Methods?** **COULD NOT CHECK - the Methods were never read.** The abstract-level paraphrase I was
served says the blind-survey samples were "sent through normal patient sample routes", which
points that way, but (i) that is a summariser paraphrase of an abstract, not a Methods quotation,
and (ii) I hold no verbatim for it. The sub-claim asks for a Methods quotation and I have none.

Related, and worth the entry's attention: the 1977 LaMotte paper's abstract (read at CDC Stacks,
abstract level, paraphrase) states the mechanism far more concretely - simulated urine samples
containing drugs were routed to laboratories through hospital administrators and methadone
center officials so the labs would treat them as routine patient specimens, with the same samples
also mailed through CDC's regular PT program. I have no verbatim for that either.

**(g) Asks, answers, or neither?** On the evidence I reached, Boone 1982 **ANSWERS** a comparative
question of this shape rather than merely asking it: it reports three executed survey programs
and states a conclusion about what mailed PT results do and do not imply. **This is MY OWN
READING of an abstract-level paraphrase, not a finding from the paper's own framing** - the paper's
question sentence is exactly what I could not reach (sub-claim d). What would ground it is the
paper's own introduction and Methods, i.e. the full text at pages 1364-1368.

## REGIME

**Boone et al. 1982, in its own words as served (abstract level only):** three CDC laboratory
evaluation and assistance efforts of the preceding three years; on-site surveys of laboratories
*with performance problems*; mailed special-assistance surveys to *underperforming* laboratories
with telephone follow-up; blind surveys with referenced samples *sent through normal patient
sample routes* to measure day-to-day performance. Operating condition: a national regulatory /
assistance programme run by CDC, not a research cohort. Analytes, instruments, thresholds for
"error" or "acceptable", and the unit of analysis: NOT REACHED.

Does the claim sit inside this regime? The leg's three descriptive components do:
- "in the candidate's own field" - laboratory proficiency testing: yes.
- "by the US Centers for Disease Control" - the title itself says "conducted by the Centers for
  Disease Control" and the author group is CDC's laboratory programme: yes, at title and
  metadata level.
- "comparing mailed, on-site and BLIND proficiency testing surveys" - all three arms are named
  in the title and described in the abstract: yes, at title and abstract level.

What does NOT sit inside the regime I can verify: anything numeric. And note the selection:
two of the three arms are explicitly aimed at laboratories already identified as performing
poorly. Any cross-arm contrast drawn from this paper is a contrast within a problem-selected
subpopulation unless the full text says otherwise, which I cannot check. A claim that treats a
per-arm error rate from this paper as a general lab-population rate would be outside the regime.

**LaMotte et al. 1977, in its own words as served (abstract level only):** drug-testing
laboratories serving hospitals and methadone centres; simulated urine samples containing drugs;
blind arm routed via hospital administrators and methadone centre officials to be handled as
routine patient specimens; mailed arm via CDC's regular PT programme. Served conclusion: most
labs performed acceptably on the mailed samples while many performed poorly on the blind samples,
and the authors proposed supplementing mailed PT with monitored on-site evaluation. Note this
regime is narrower in analyte (urine drug screens) and has NO on-site measurement arm - on-site
is a recommendation there, not an arm.

## DEFECTS FOUND

1. **The leg's descriptive content survives; its read level does not improve.** The entry's
   abstract-level read is confirmed as abstract-level, and I add the exact errors showing the
   publisher host refuses three paths. Two things follow. (i) "Publisher page never opened" is
   accurate here and is a route failure, not an oversight. (ii) Nothing in the leg that needs
   the full text - the question sentence, any error rate, the Methods on routine workflow - is
   checkable at the record's read level or at mine. Three of the seven sub-claims are COULD NOT
   CHECK.

2. **"Asks" is the wrong verb at abstract level.** The leg says the paper "asks the candidate's
   question". At abstract level the paper reports three executed programmes and states a
   conclusion - it looks like a paper that ANSWERS a version of the question. If the entry needs
   this leg to carry a *disguised-known finding on the QUESTION*, that is still available (a
   paper that answers the question a fortiori shows the question was asked), but the leg should
   say so in those terms rather than asserting the paper poses it, because the sentence in which
   it poses anything is the one sentence I could not reach.

3. **The one verbatim fragment is unsafe to lean on as served.** "good performance in mailed PT
   does not necessarily imply good laboratory performance" arrived cut mid-sentence, so its
   scoping opener is unknown; it denies SUFFICIENCY only; and its modality is hedged
   ("necessarily"). Any use of it that drops the hedge, reverses it into a claim about blind PT's
   superiority, or attaches a magnitude, fails on logical form, not on characters.

4. **The DOI in the entry's citation is unverified, not wrong.** I resolved nothing. doi.org
   rate-limited on its single attempt; RePEc lists no DOI for this article. I have no basis to
   correct the DOI and no basis to confirm it. Treat it as an unresolved identifier in the entry.

5. **Author names are not front-matter verified.** They match an aggregator record exactly,
   including order, which is the best I reached. By this ledger's own rule that is not
   confirmation. Flagging it because the entry's citation and the aggregator record could share
   a common upstream (publisher metadata feed) and would then agree without either being the
   printed page.

6. **An existence premise nearby, INSTANCED.** If the entry anywhere asserts that this CDC paper
   is the instance of its kind - the paper comparing declared against blind PT - that is now
   FALSE as a uniqueness claim and TRUE as an existence claim, on the instances I opened. I
   opened two records: Boone 1982 (AJPH 72(12):1364-1368) and LaMotte 1977 (Public Health Reports
   92(6):554-560, PMID 200968). They are distinct documents, five years apart, in different
   journals, sharing one author (D.S. Lewis) and one institution (CDC). So: at least two CDC
   papers of this kind exist (TRUE over the instances I opened); any claim that Boone 1982 is the
   only one is FALSE; and the full population of such papers is UNENUMERATED - I ran two searches
   and opened two records, and I name what I did not open below.

7. **One group, counted once.** Boone 1982 and LaMotte 1977 are not two independent
   corroborating groups. Both are CDC laboratory-programme output and they share author D.S.
   Lewis. If the entry stacks them, say that it is one institutional programme citing its own
   earlier work.

8. **A lead, named as a lead, with its kind stated first.** What kind of document could settle
   sub-claims (c), (d) and (f)? A primary research report that executed both a declared and a
   blind arm and prints per-arm performance with denominators, whose Methods describe the blind
   submission route. LaMotte 1977 is that kind of document - a journal research report of exactly
   that comparison - and its full text is openly posted at
   https://stacks.cdc.gov/view/cdc/65385/cdc_65385_DS1.pdf, one fetch away. I did not open it, so
   this is a LEAD justified by kind, not a finding. It would settle the LaMotte paper's own
   numbers, not Boone 1982's; Boone 1982 still needs pages 1364-1368 themselves.

9. **Sweeps I ran, so nobody reads my silences as absence.** I ran no keyword sweep inside
   Boone 1982, because I never had its text. Every "NOT STATED" above means "not present in the
   aggregator metadata and the abstract paraphrase I was served", nothing more. In particular I
   am NOT reporting that the paper prints no error rates.

## ROUTES THAT FAILED

For Boone et al. 1982, with exact errors:

1. `https://ajph.aphapublications.org/doi/10.2105/AJPH.72.12.1364` - WebFetch: "Not fetched:
   ... failed at its site (client_error), and nothing of the page was retrieved."
2. `https://doi.org/10.2105/AJPH.72.12.1364` - WebFetch error
   `{"error_type":"RATE_LIMIT_EXCEEDED","source":"target", ...}` with an instruction to fetch once
   more, one page at a time. **I did not retry. That is my spent budget, not a dead route.**
3. `https://ajph.aphapublications.org/doi/pdf/10.2105/AJPH.72.12.1364` - same site client_error.
4. `https://ajph.aphapublications.org/doi/abs/10.2105/AJPH.72.12.1364` - same site client_error.
   (This path pattern demonstrably serves other AJPH articles - search returned
   `/doi/abs/10.2105/AJPH.69.11.1094` - so the refusal is specific, not a bad path shape.)
5. `https://stacks.cdc.gov/view/cdc/65385` - SUCCEEDED, but it is a different paper (LaMotte 1977).
   Not a failure; a mis-hit worth recording so the next checker does not repeat it.
6. `https://ideas.repec.org/a/aph/ajpbhl/198272121364-1368_6.html` - SUCCEEDED; metadata plus an
   abstract paraphrase; the page states full text is not available for download.

Searches: 2 of 2 used, neither refused by the classifier. The second, domain-restricted to
stacks.cdc.gov / scholar.archive.org / ajph / pubmed / ideas / semanticscholar / openalex /
core.ac.uk, returned no record of Boone 1982 at all - four AJPH landing pages, none of them this
article. Note the repeated AJPH title returns in that result set are title matches, not
corroboration.

Not attempted, and why: PMC and Europe PMC are hard-blocked by this environment's rules, so I
made no PMC fetch (the first search surfaced `pmc.ncbi.nlm.nih.gov/articles/PMC1432053` and
`PMC268621` as candidate hosts; I did not open them and cannot say which, if either, is this
article). PMCID conversion via the idconv endpoint would have yielded an identifier, not a
readable route, so I spent the last fetch on text instead. Unpaywall skipped by rule (contact
email). Not opened for budget: `https://stacks.cdc.gov/view/cdc/65385/cdc_65385_DS1.pdf`,
scholar.archive.org, any institutional repository copy of AJPH 72(12).

## BEARING ON THE LEDGER ENTRY

**HOLD the second leg as a title-and-abstract-level identification, and NARROW it on three
points.**

Hold: the paper exists with the citation the entry carries (every comparable field matches an
aggregator record exactly); it is CDC work, by the title's own words "conducted by the Centers
for Disease Control"; and it does name and describe all three arms - mailed, on-site and blind -
with the blind arm described as sent through normal patient sample routes. The leg's descriptive
content is not in trouble.

Narrow it on:
1. **Verb.** Change "asks the candidate's question" to what the abstract supports - the paper
   reports and answers a comparative question of this shape. The sentence in which it poses
   anything is unreached, so the entry should not assert how it poses it.
2. **No number may be hung on this leg.** Sub-claim (c) is COULD NOT CHECK, and that cuts both
   ways: the entry may not cite an error rate from this paper, and it may not assert the paper
   lacks one. The entry's note that this leg would carry a disguised-known finding "on the
   QUESTION rather than the number" is the right division, and this check confirms the number
   side is simply unavailable at the entry's read level.
3. **Regime.** Two of the three arms target laboratories already identified as performing poorly.
   Any inference from this paper to laboratory performance generally is outside the regime I can
   verify.

**Read level: unchanged, and now documented.** The entry's "abstract level only, publisher page
never opened" stands, and I add that the publisher host returns a site-level client error at
three paths while doi.org rate-limited on one attempt I did not repeat. So the record's read
level is not a reviewer's shortfall - but neither is it a property of the paper. The full text is
very likely reachable in one or two fetches by a checker with a fresh budget (PMC is blocked
here, which is an environment constraint, not a paywall).

**Promotion conditions, in priority order.** (i) Open AJPH 72(12):1364-1368 by any non-PMC route
and answer (c), (d), (f) with printed numbers, denominators and a Methods quotation; then the leg
can be stated at full-text level. (ii) Open
`https://stacks.cdc.gov/view/cdc/65385/cdc_65385_DS1.pdf` - LaMotte et al. 1977, Public Health
Reports 92(6):554-560, PMID 200968 - which is the right KIND of document for the blind-versus-
declared comparison and is openly posted; it is a second CDC instance the entry does not cite,
and if the entry contains any uniqueness claim about Boone 1982, that instance refutes it. Count
the two as one institutional group, not two sources: they share author D.S. Lewis and CDC's
laboratory programme.

**Nothing here reverses the entry.** The leg survives as description. It cannot yet carry a
quantity, and it should stop using the verb "asks".
