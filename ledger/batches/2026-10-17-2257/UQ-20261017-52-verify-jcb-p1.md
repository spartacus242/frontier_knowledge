# UQ-20261017-52 verify JCB 2025 224(2):e202409007

Read level: FULL TEXT via summariser (JCB html + bioRxiv PDF preprint). No raw page seen; all content passed through a summariser. Quotes under 125 chars.

## Calls
1. WebFetch rupress.org .../277169 : OK (summary of full text)
2. WebSearch title/DOI : OK; found PMC (blocked, not used), bioRxiv 10.1101/2024.05.29.596381, Mainz repository
3. WebFetch rupress .../277169/Genome-wide-conditional-degron-libraries-for : OK; added 61/38 paragraph context, essentiality refs
4. WebFetch openscience.ub.uni-mainz.de bitstream : returned EMPTY content
5. WebFetch bioRxiv full.pdf : OK; thresholds, 61% sentence
Searches 1/6, fetches 4/6.

## Findings
1. Saccharomyces cerevisiae. AID2 system (OsTIR1(F74G), AID* tag), inducer 5-Ph-IAA 1 uM. AID-v1 library 5,604 tagged ORFs; AID-v2 5,620 tagged ORFs. AID-v1 has two strains per ORF (+/- OsTIR1), so total strain count > 5,604; exact total strain number not extracted.
2. Both sentences appear (AID libraries section, Fig. 3; 499/906 cites Fig. 3b).
 - "fitness defects were observed for over 55% of essential ORFs (499 out of 906)". Denominator 906 essential ORFs among OsTIR1+ strains (all ORFs, degraded or not). Defect = size(OsTIR1+)/size(OsTIR1-) < 0.8 and p < 0.05. Non-essential: 176/4,698 (~4%). Overall 675/5,604 (~12%).
 - "degradation of 38% of essential proteins did not result in a fitness defect." In the NEXT paragraph. Context sentence: degradation gave a defect for "over 61%" of essential proteins (bioRxiv wording: "of essential proteins"; JCB summary: fully degraded ones; also ~22% partial, ~7% unaffected). No count given for 38%/61%. Denominator is therefore the essential proteins that were degraded (threshold mNG/bkg(OsTIR1-)>1.2, mNG/bkg(OsTIR1+)<=1.2, ratio <0.5, p<0.05), NOT the 906. 61+38=99 ~ complementary. So the two figures do not share a denominator: 55% = all 906 essential ORFs; 61/38 = degraded essential proteins. Exact degraded-essential count not found (inference on denominator; the summariser flagged this as inference).
 - Authors' explanations for the 38%: incomplete degradation under detection limit (~200 molecules/cell), conditional essentiality, overestimated degradation in sick colonies.
3. Comparator: essentiality "under standard laboratory growth conditions" per Winzeler et al. 1999, Giaever et al. 2002 (deletion collections) and Despres et al. 2020. Core vs conditional essential from van Leeuwen 2020 and Peter 2018. So a gene-deletion based annotation, not CRISPR. Summariser reports not SGD; did not verify exact list file.
4. Protein half-life/turnover analysis: NOT FOUND. Read JCB full text (via summariser) + bioRxiv version. Only immunoblot time courses (degraded within 60 min of 5-Ph-IAA).
5. Transcriptional/compensatory response: NOT FOUND in same reading. Caveat: summariser-based, absence not proven by direct text search.
