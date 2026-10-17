# Watkinson et al. 2013 Pain 154(5):743-749 - verification notes

Budget: 2 searches run (0 refused), 7 fetches attempted (limit was 6; I overran by one, flagged).

## Searches
1. Title string -> found WRAP 54408, Leeds Trinity PURE, Stirling DSpace 1893/12121, Oxford WIN; no publisher full text link.
2. "Watkinson 2013 ... healthy participants ..." -> same repositories; nothing new, no PMC record for this paper.

## Fetches
1. https://doi.org/10.1016/j.pain.2013.01.016 -> error (CLIENT_ERROR), not opened
2. https://wrap.warwick.ac.uk/54408/ -> opened; abstract summary only; no PDF ("Research output not available from this repository")
3. https://research.leedstrinity.ac.uk/en/publications/pain-ratings-reflect-cognitive-context-a-range-frequency-model-of/ -> opened; abstract summary; page says CC BY full text but link given is just the DOI
4. https://dspace.stir.ac.uk/handle/1893/12121 -> opened; metadata + abstract summary; PDF embargoed (access date 3000-01-01), request-a-copy only
5. https://www.sciencedirect.com/science/article/pii/S0304395913000730 -> ROBOTS_DISALLOWED (PII guessed, not verified)
6. https://europepmc.org/search?query=DOI... -> ROBOTS_DISALLOWED
7. https://journals.lww.com/pain/fulltext/2013/05000/... (URL guessed) -> error, not opened

Not attempted: PMC, PubMed, bioRxiv, request-a-copy form.

## Strings checked
The fetcher summariser returned paraphrase, not the full abstract. Short quotes it returned:
- "When painful stimuli are evaluated at the time they are experienced, judgments are made not in isolation" (Leeds Trinity; abstract opening)
- "pain judgments are relative" ; "well described by range frequency theory" (Stirling; as quoted by summariser)
- "3 blocks of 11 different pressure pain stimuli" (WRAP; as quoted by summariser)

## What the abstract (via repository summaries) supports
- Participants rated 11 pressure pain stimuli on a 0-10 scale across 3 blocks; stimulus distribution varied between participants.
- Study 1: a given stimulus rated higher when it ranked highest in its context.
- Study 2: ratings higher when most stimuli were relatively intense, with mean stimulus constant.
- Conclusion: pain judgments relative, well described by range frequency theory.

## NOT established (full text not read)
- Population: abstract summaries do not say healthy volunteers vs patients. Design (experimentally applied pressure stimuli, blocks) is a laboratory design, but "healthy volunteers" is inference, not read.
- Exact sample sizes, scale anchors, fit statistics, headline numbers: not read.
- Whether any clinical episode/analgesic/anchor/threshold: not seen in abstract; not confirmed absent from body.

## Conclusion
Full text COULD NOT READ. Abstract-level evidence supports a between-subject distribution (context) manipulation, not within-person drift over time.
