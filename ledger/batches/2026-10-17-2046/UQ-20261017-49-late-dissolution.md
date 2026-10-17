# UQ-20261017-49 working notes
Budget used: 6 searches (of 8), 6 fetches (of 6). Search results returned titles/URLs only, so every claim below rests on a fetched page.

## Sources and read levels
- asht::prevSeSp R doc (search.r-project.org/CRAN/refmans/asht/html/prevSeSp.html): full doc page via summariser. Estimator theta=(AP-(1-Sp))/(Se-(1-Sp)); negative if AP < 1-Sp; truncation at zero only (neg.to.zero, default TRUE); Lang-Reiczigel CI; simulations support Se,Sp roughly 70% to >90%. Does NOT discuss upper bound / AP>Se.
- Kunz, Augustin, Kuchenhoff 2010 TR074 (LMU): PDF read via summariser. Prevalence not point-identified without Se/Sp; partial identification; needs Se+Sp>1; kappa transferability fails if prevalence differs between samples. Does not treat ratios.
- Rogan & Gladen 1978 AJE 107(1):71-6, PubMed 623091: ABSTRACT ONLY (summary; authors not shown on fetch). Frequency of positive tests is a bad prevalence estimate; adjustments supplied.
- Gelman & Carpenter 2020 (Columbia PDF): FULL TEXT. If observed rate below 1-gamma, estimate "becomes meaninglessly negative"; pi, gamma, delta not jointly identified from positive counts alone; delta-method propagation problematic near 0 or 1 with small n; no group-comparison/ratio treatment.
- Clinics letter (elsevier.es S1807593222004574): FULL TEXT of short letter. Calls R-G "often-used", "often yields negative estimates"; assumes known precision; Bayesian interval much wider; model not identifiable from positive proportion alone. Silent on estimates >1.
- Cai, Ioannidis, Bendavid, Tian arXiv:2011.14423: FULL TEXT (figures unreadable). Estimator (r+q-1)/(p+q-1); Wald interval may include negatives, logit-scale fix; delta method and bootstrap under-cover at high specificity (0.886 at Sp 99.6%, N=371, pi=1.2%); exact interval lower bound depends on specificity validation size (0.00-2.06% at N=371 vs 0.68-1.87% at N=3,324). No ratio/two-prevalence comparison.
- Not opened: Forman 2008, Lang & Reiczigel 2014, Reiczigel et al 2010, Speybroeck 2012, Walter & Irwig. Appeared in results as titles only; no claim made from them.

## Absences (scope stated)
- No fetched source gives identifiability conditions for a RATIO of two corrected prevalences. Scope: 5 documents read in full or near-full plus 1 abstract; 2 ratio-targeted searches returned titles only. This is "not found in what I opened", not "does not exist".
- No fetched source discusses estimates > 1 (asht silent, Clinics silent, Cai silent on negative point estimates).

## My own algebra (NOT from literature; label as derivation)
a_k, a_0 = apparent label rates in kept set and pool; f=FPR, s=Se, same in both (nondifferential), s>f.
pi = (a - f)/(s - f). R = pi_k/pi_0 = (a_k - f)/(a_0 - f). s cancels.
- If a_0 > f: R>1 iff a_k > a_0; dR/df = (a_k - a_0)/(a_0-f)^2 > 0 when a_k>a_0, so naive a_k/a_0 is a lower bound for R over f in [0,a_0) and R rises as f rises.
- If a_0 <= f: R undefined/unbounded; pool prevalence not distinguishable from zero.
- Needs: nondifferential error across kept/pool, transportability of published f to the new data, a_k>=f. Differential error (filter selects features detector reads) breaks cancellation; no fetched source tests this.
- Sampling error in a_k, a_0 is separate and needs its own interval; "bounded away from 1" is then a statement about a_k vs a_0 plus f uncertainty.
