# VERIFY-02-c — UQ-20261029-02, PRIOR 2 AND ITS DATELINE INCONSISTENCY

Checker: fresh-context, post-batch verification pass, batch 2026-10-29 06:33 UTC (physics).
Role: tester of one claim at first hand; not an adversary, not a judge. No verdict on the entry is recommended here.
Budget: 4 web searches and 6 fetches — ALL SPENT (4/4 searches, 6/6 fetches, one fetch of the six failed). What I did not reach is listed in Section 9.

## 1. What I was asked

Six items on PRIOR 2 of entry UQ-20261029-02 — Montero de Hijes, Espinosa, Bianco, Sanz & Vega, "Interfacial free energy and Tolman length of curved liquid-solid interfaces from equilibrium studies", arXiv:2401.13589 — which the entry records with "no DOI served", a dateline "29 January 2020" against a 2024 arXiv identifier (flagged, not smoothed), and read at full text by the Gate 0-3 reader only:
(1) resolve the publication (journal, volume, year, DOI, front-matter authors);
(2) the dateline — real? what is it?;
(3) the printed Tolman length — value, units, sign, location;
(4) the regime, confirming or correcting four coordinates the entry prints;
(5) whether the candidate's question is inside that regime;
(6) the 2024 review arXiv:2411.06231 — the quotation "must be included" verbatim and the author overlap with Prior 2.

Brief check against the record: the brief's description of what the entry records matches the entry's own words at every point I compared (the "no DOI served" / dateline parenthesis; the four regime coordinates; the review quotation and the "one group appearing twice" caveat). I found NO defect in the brief's account of the entry. Defects I found are in the ENTRY and the RECORD, listed in Section 8.

## 2. Routes tried, in order, with results

Searches (4 of 4):
S1. WebSearch, exact title in quotes → arxiv.org/pdf/2401.13589 (opened later); docta.ucm.es record (two URLs = one document, NOT OPENED); produccioncientifica.ucm.es record (three language variants = one document, NOT OPENED); a docta "signposting" URL (NOT OPENED); epjst.epj.org/.../epjst177007 (a 2009 EPJ ST article, title not shown, NOT OPENED, relevance unknown); arxiv-vanity mirror of 1803.09140 (Prior 1, NOT OPENED by me). No journal page in the returns.
S2. WebSearch, "acs.jpcc.0c00816" → ten unrelated returns (other ACS DOIs, PMC figure pages). Nothing relevant; NONE OPENED. A wasted search — recorded as my own error.
S3. WebSearch, review title + "Di Pasquale Rovigatti" → arxiv.org/pdf/2411.06231; repository records at ucrisportal.univie.ac.at, ariasmontano.uhu.es (several URLs = one record), produccioncientifica.uhu.es, figshare.le.ac.uk ("journal_contribution"). NONE OPENED (fetch budget). The ACS-style Title Case with an en dash on the repository titles ("Solid−Liquid Interfacial Free Energy ...") suggests a published version exists; journal, volume and DOI NOT ESTABLISHED.
S4. WebSearch, review title in Title Case + "journal doi" → the same repository records plus arxiv.org/html/2411.06231v1. NONE OPENED. Journal still NOT ESTABLISHED.

Fetches (6 of 6):
F1. WebFetch https://arxiv.org/abs/2401.13589 → OK. Title; authors "P. Montero de Hijes, Jorge. R. Espinosa, Valentino Bianco, Eduardo Sanz, Carlos Vega"; "Submitted: 2024-01-24", "v1 2024-01-24", no later versions; "DOI: 10.1021/acs.jpcc.0c00816"; Journal reference field not listed; Comments not listed; subject cond-mat.soft. READ LEVEL: FULL TEXT of the abstract page (metadata).
F2. WebFetch api.crossref.org/works?query.title=<full title>&rows=4&select=... → FAILED: PROXY_REJECTED, HTTP 403, "url exceeds the maximum fetchable length". This is a tool-scoped URL-length limit of the WebFetch proxy, not a host block (F4 to the same host succeeded). I did not retry the title query; I switched to the DOI-keyed route.
F3. WebFetch https://arxiv.org/pdf/2411.06231 → OK but the summariser said its served text was TRUNCATED after section 6.7, so the reference list and anything after 6.7 were not in my read. Front matter, date stamp, and Section 5.3 obtained. READ LEVEL: SECTION READ (front matter; Section 5.3 "Classical Nucleation Theory (CNT)"; a keyword sweep over the text up to 6.7).
F4. WebFetch https://api.crossref.org/works/10.1021/acs.jpcc.0c00816 → OK. Full Crossref metadata record (see Section 3). READ LEVEL: FULL TEXT of the metadata record (this is not a read of the paper).
F5. WebFetch https://arxiv.org/pdf/2401.13589 → OK. Front matter, dateline, model section, Tables I-III, Section VI heading and Tolman-length sentences, Eq. (5), keyword sweep. READ LEVEL: SECTION READ via the summariser (front matter; Section III system definition; Tables I, II, III; Section VI). I did not read the paper line by line; Fig. 9 is a figure I did not see.
F6. WebFetch https://arxiv.org/pdf/2411.06231 (same URL, narrower prompt) → OK. The "must be included" sentence as ordered consecutive fragments with its neighbours, heading, page and citation marker. READ LEVEL: SECTION READ (Section 5.3 only).

NOT ATTEMPTED (budget, not a wall): the ACS version of record at pubs.acs.org; the UCM repository copy; arxiv.org/html/2411.06231v1 (to resolve the review's ref. [206] and reference list); any journal page for the review. I ran out of fetches; I did not hit a block on any of these.

## 3. Item (1): the publication, resolved

Crossref record for DOI 10.1021/acs.jpcc.0c00816 (F4, metadata FULL):
- Title: "Interfacial Free Energy and Tolman Length of Curved Liquid–Solid Interfaces from Equilibrium Studies"
- Container: The Journal of Physical Chemistry C (J. Phys. Chem. C); publisher American Chemical Society (ACS); type journal-article
- Volume 124, issue 16, pages 8795-8805
- Dates: published-online 2020-03-18; issued 2020-03-18; published-print 2020-04-23; created 2020-03-18T10:45:48Z; deposited 2023-04-23
- Authors in order (given / family as deposited): P. / Montero de Hijes; Jorge. R. / Espinosa; Valentino / Bianco; Eduardo / Sanz (ORCID 0000-0001-6474-5835); Carlos / Vega (ORCID 0000-0002-2417-9645). "relation" empty; no "update-to".

Front matter of arXiv:2401.13589v1 (F5, as served): "P. Montero de Hijes, Jorge. R. Espinosa, Valentino Bianco, Eduardo Sanz, and Carlos Vega" (the stray period in "Jorge. R." is in the source's own metadata on arXiv and at Crossref alike). Affiliations as served: (1) "Departamento de Química Física, Facultad de Ciencias Químicas, Universidad Complutense de Madrid, 28040 Madrid, Spain"; (2) "Maxwell Centre, Cavendish Laboratory, Department of Physics, University of Cambridge, Cambridge CB3 0H3, United Kingdom"; (3) "Emmanuel College, Cambridge, CB2 3AP, United Kingdom".

The arXiv abstract page (F1) itself carries "DOI: 10.1021/acs.jpcc.0c00816". So a DOI IS served by the arXiv record — on the abstract page, not in the PDF. The Gate 0-3 reader read the PDF only (record: "Read at https://arxiv.org/pdf/2401.13589"), and the PDF prints no journal name, DOI or copyright line (F5 confirmed: none found in the served text).

Correct citation: P. Montero de Hijes, J. R. Espinosa, V. Bianco, E. Sanz, C. Vega, J. Phys. Chem. C 2020, 124(16), 8795–8805, DOI 10.1021/acs.jpcc.0c00816; preprint arXiv:2401.13589 (v1 posted 2024-01-24).

Caveat: I did not read the ACS version of record (not attempted; budget). Every textual quotation below is from the arXiv v1 text, which is dated before the online publication date and may differ from the published text. Whether the published version prints the same −0.41σ is NOT VERIFIED by me.

## 4. Item (2): the dateline

REAL. Page 1 of arXiv:2401.13589v1 carries, verbatim, "(Dated: 29 January 2020)" (F5). The arXiv submission history (F1) shows a single version, v1, submitted 2024-01-24, with no earlier version.

What it is: the manuscript's own date line, consistent with a manuscript finalised in late January 2020 and published online in J. Phys. Chem. C on 18 March 2020 (Crossref, F4), seven weeks later. The paper was posted to arXiv on 24 January 2024, nearly four years after publication; the arXiv identifier dates the POSTING, not the work. It is not an error, not a template artefact (the date fits the publication chronology), and not the submission date of an earlier arXiv version (there is none). Whether it coincides with the journal's "Received" date I cannot say: the ACS "Received" date was NOT READ. (Identifying the line as the output of a REVTeX \date field is my own template reading, not a printed statement.)

So the inconsistency the entry flagged is apparent, and it has a documented resolution one click from the PDF: the arXiv abstract page links the published DOI. The entry was right not to smooth what it saw, but its "no DOI served" is true only of the PDF; the arXiv record does serve the DOI, and the entry should cite the 2020 JPCC paper.

## 5. Item (3): the printed Tolman length

Value: δ_Tolman = −0.41σ. Sign negative. Units: σ, the particle diameter of the model.

Location: Section "VI. VARIATION OF γ WITH CURVATURE AND THE TOLMAN LENGTH" (heading as served, F5). The sentence, a RECONSTRUCTION FROM 2 ORDERED CONSECUTIVE FRAGMENTS returned by the summariser (fragment 1 ends "obtaining the value", fragment 2 begins "δ_Tolman"; the junction is grammatical; no overlap was requested so none was verified):
  "In Fig.9 we have fitted the values of δ as a function of 1/R_s obtaining the value δ_Tolman = −0.41σ when 1/R_s goes to zero (i.e. for planar interface)."
Grammar on both sides: opening words "In Fig.9 we have fitted" scope the authors' own fit of their own data; the clause ASSERTS the quantity (it does not deny it or record a move away from it).
Repeated at Eq. (5), as served: γ_s = γ_{0,T} ( 1 − 2 δ_T / R_s ), followed by the fragment "and δ_T = −0.41σ ." — the same number restated. Eq. (5) has the same algebraic form as the candidate's own γ_sl(R) = γ_inf(1 − 2δ_sl/R + ...), so the sign convention of Prior 2's printed number is the candidate's: a negative δ makes γ rise as R falls.

Denominator / derivation: Table II, columns "Label", "R_s*", "R_e*", "δ* ≡ (R_e* − R_s*)" — δ is defined as the equimolar radius minus the surface-of-tension radius. Per-cluster δ* values as served, cases I to X: −0.1154, −0.0742, −0.0404, −0.2478, −0.1965, −0.2108, −0.2035, −0.2538, −0.2521, −0.3563. All negative; NOT monotonic in cluster size; the three smallest clusters have the smallest |δ*|, and the fitted intercept −0.41σ exceeds in magnitude every individual point (largest |δ*| is 0.3563, case X). I report the fit as printed; I did not see Fig. 9 and cannot assess the extrapolation. Negative δ = R_e − R_s means the equimolar surface sits inside the surface of tension (my reading of the printed definition, labelled as mine).
Supporting direction, Table III as served: γ* = 0.634 for case I (smallest) and 0.587 for case X (largest) — γ larger for smaller clusters, consistent with Eq. (5) and δ_T < 0. The record's reading of Tables II and III checks out.

Conversion to length (MY OWN ARITHMETIC): the paper PRINTS "σ = 0.3405 nm" (F5), so δ_Tolman = −0.41 × 0.3405 nm = −0.140 nm. The record said "I did not read a printed sigma in nm in this paper" and supplied σ ≈ 0.34 nm itself; the paper does print σ, so the record's ~0.14 nm is now groundable on the paper's own σ rather than on a supplied value. The nm figure remains arithmetic, not a printed number: I did not find δ printed in nm.

## 6. Item (4): the regime, as printed

REGIME (one line): population = pseudo hard spheres ("the truncated and shifted Mie potential with power m=50 for the repulsion and n=49 for the attraction", "called also pseudo hard sphere potential"; σ = 0.3405 nm; "Simulations are performed at T = 179.8 K", "the reduced temperature T* = T/(ε/k) = 1.5"); unit = one spherical solid cluster in equilibrium with its own fluid, ten cluster sizes (Table I ⟨N_sol⟩ 1925 to 129926 particles; Table II R_s* 7.535σ to 30.927σ); instrument = equilibrium molecular simulation with δ fitted against 1/R_s; category = curvature coefficient of a crystal–fluid interfacial free energy for a cluster in its fluid.

The four coordinates the entry prints:
(a) "pseudo hard spheres not a metal" — CONFIRMED as printed (quotations above).
(b) "crystal nucleus in fluid not a particle melting from outside" — CONFIRMED: the system is a solid cluster surrounded by fluid. "melting" as a word was not found; the forms "the clusters melt" and "the solid clusters melted" occur (as served; I did not read their context) and describe what clusters do in the simulations, not a nanoparticle melting from a free surface. "nanoparticle" not found.
(c) "no premelting layer or support exists in the model" — CONFIRMED BY CONSTRUCTION (the system is a cluster plus fluid; no third body is in the system definition), and by ONE keyword sweep via the summariser: "premelting" not found, "support" not found, "substrate" found only in the title of reference 18 ("Hard-sphere fluids in contact with curved substrates"). The second dedicated sweep the method requires DID NOT RUN (fetch budget exhausted), so the word-absence part is a one-sweep finding; the by-construction part does not depend on it.
(d) "clusters below the candidate's own 2 nm floor" — REFUTED as printed. R_s* runs from 7.535σ to 30.927σ. With the paper's own printed σ = 0.3405 nm (my arithmetic): R_s from 2.57 nm to 10.53 nm, i.e. diameters 5.1 nm to 21.1 nm. No cluster studied is below 2 nm in radius, let alone diameter. The record's phrase "clusters a few sigma in radius" is also wrong as printed: 7.5σ to 31σ, 1925 to ~130000 particles. (Sanity check, my arithmetic: an fcc hard-sphere solid near coexistence has ρσ³ ≈ 1.04; a sphere of radius 7.535σ then holds ≈1860 particles against the listed 1925, and one of radius 30.927σ ≈129000 against the listed 129926 — the served radii and particle counts are mutually consistent.) Whether the candidate's "2-20 nm" means radius or diameter, Prior 2's clusters sit inside that span.

Overlap, both directions, corrected: what Prior 2's class MISSES that the candidate includes — any real material (no attraction scale beyond a 49-exponent tail; argon-like σ, ε), any premelting layer, any substrate, any faceting, any melting-from-outside pathway, any experiment. What it INCLUDES that the candidate excludes — a crystal cluster embedded in its own fluid, in simulation, at a single reduced temperature. The two classes SHARE the estimand's name, the functional form (Eq. (5) = the candidate's expansion), and — contrary to the entry — the size range.

## 7. Item (5): is the candidate inside the regime?

No, on material, process direction, instrument, and the presence of premelting and support; yes, on the size range and on the functional form of the estimand. The entry's "in every regime coordinate" is therefore one coordinate too many: the size coordinate overlaps.

## 8. Item (6): the 2024 review arXiv:2411.06231

Front matter (F3, as served, three summariser segments): "Nicodemo Di Pasquale ∗1, Jesús Algaba2, Pablo Montero de Hijes3, Ignacio Sanchez-Burgos10, Andres R. Tejedor4,5, Stephen R. Yeandel6, Felipe J. Blas2, Ruslan L. Davidchack7, Jorge R. Espinosa4,5, Colin L. Freeman6, John H. Harding6, Brian B. Laird8, Eduardo Sanz5, Carlos Vega5, and Lorenzo Rovigatti9". Title as served: "Solid-liquid interfacial free energy from computer simulations: Challenges and recent advances". No "Dated:" line; margin stamp "arXiv:2411.06231v1 [cond-mat.soft] 9 Nov 2024". The document is a REVIEW (adversary 2 quoted its abstract to that effect; I did not re-read the abstract).

Author overlap with Prior 2: Montero de Hijes, Espinosa, Sanz and Vega — 4 of Prior 2's 5 authors — are on the review; Bianco is not. CONFIRMED. Qualification: the review has 15 authors across at least ten numbered affiliations (Huelva, Sheffield, Leicester, Kansas, Rome and others alongside Complutense/Cambridge), so it is a multi-group review co-authored by Prior 2's group, not "one group appearing twice"; the entry's conclusion that it is not an independent further support stands, its description of the overlap overstates the identity.

The quotation. The sentence, a RECONSTRUCTION FROM 2 ORDERED CONSECUTIVE FRAGMENTS (F6; junction "for a flat interface " + "out of free-energy calculations", grammatical; no overlap verified):
  "Moreover, curvature corrections must be included in order to get γsl for a flat interface out of free-energy calculations of finite clusters [206]."
Location: Section "5.3 Classical Nucleation Theory (CNT)", page 19 (the page-18 marker falls between the preceding sentence and this one). Preceding sentence ends (as served) "... size and shape of the cluster, which are parameters that cannot be unambiguously defined." Following sentence begins "In summary, CNT can be a useful framework to get estimates of γ̄sl at coexistence from the ...".
Grammar on both sides: "Moreover," opens an additional caveat in the review's assessment of the CNT route to γsl; the clause ASSERTS a methodological necessity and cites it to reference [206]. "must be included" is verbatim. The entry's gloss "in cluster-based gamma_sl determinations" is a fair paraphrase of "out of free-energy calculations of finite clusters". The statement is cited, so the formulation the entry quotes is the review's hedged-and-cited one; I found no second, bare formulation in the text up to section 6.7 (F3's sweep for "must be included" returned this sentence only; the text after 6.7 was truncated, so that part of the document is unread).
Reference [206] NOT RESOLVED (reference list not in my read; no fetch left). One fetch of arxiv.org/html/2411.06231v1 (returned by S4, not opened) would ground what [206] is; until then the entry's attribution of the statement to the review is correct as a statement about the review, and the underlying claim's origin is open.

## 9. Defects found in the entry and record (not in the brief)

E1. Entry and record: "no DOI served" / "the document carries no DOI" — true of the PDF, false of the arXiv record: the abstract page serves DOI 10.1021/acs.jpcc.0c00816. The flagged inconsistency resolves: a 2020 J. Phys. Chem. C paper posted to arXiv in January 2024. Citation correction in Section 3.
E2. Entry: "clusters below the candidate's own 2 nm floor" — wrong as printed; clusters are 7.5σ–31σ, 2.6–10.5 nm in radius with the paper's own σ. Record: "clusters a few sigma in radius" — wrong as printed. Entry: "in every regime coordinate" — one coordinate (size) overlaps.
E3. Record: "I did not read a printed sigma in nm in this paper" — the paper prints σ = 0.3405 nm. This is a statement about the reader's own read, and it was honest; I note it because the ~0.14 nm conversion can now stand on the paper's printed σ.
E4. Entry: "one group appearing twice" — the review is a 15-author, multi-group document; "co-authored by four of Prior 2's five authors, so not independent of that group" is the accurate form. The conclusion (not a further independent support) is unaffected.
Confirmed as the entry has them: author list and title; dateline string; −0.41σ, its sign, section, Eq. (5), Tables II and III; pseudo-hard-sphere model; cluster-in-fluid geometry; no premelting or support in the model (one sweep plus construction); the "must be included" quotation and its gloss; the author overlap.

## 10. My own errors and limits

- F2 (Crossref title query) failed on the proxy's URL-length limit — an avoidable error of mine; it cost one of six fetches. The DOI-keyed route (F4) succeeded; the title route was not retried.
- S2 ("acs.jpcc.0c00816") returned nothing relevant — a wasted search.
- The ACS version of record was NOT ATTEMPTED (budget); every quotation above is from arXiv v1 text dated before publication.
- The second dedicated absence sweep for "premelting"/"support"/"nanoparticle" in Prior 2 DID NOT RUN (budget); the word-absence finding is one-sweep.
- Reference [206] of the review and the text after its section 6.7 are unread (truncation plus budget). The review's journal version is NOT ESTABLISHED; its repository records (Vienna, Huelva, Leicester) were returned and not opened.
- Fig. 9 of Prior 2 was not seen; the fit behind −0.41σ is reported as printed, not assessed.
- All quotations longer than one summariser segment are labelled reconstructions with their fragment counts; none was completed by inference.
- Unopened returns, listed: docta.ucm.es and produccioncientifica.ucm.es records of Prior 2 (one document each); epjst.epj.org epjst177007 (2009, relevance unknown); arxiv-vanity mirror of Prior 1; ucrisportal.univie.ac.at, ariasmontano.uhu.es, produccioncientifica.uhu.es and figshare.le.ac.uk records of the review (one document); arxiv.org/html/2411.06231v1; the ten unrelated S2 returns.
