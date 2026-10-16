# UQ-20261016-24 — independent verification of the load-bearing prior/kill

Fresh-context checker, neutral framing, handed the claim and its source but not the reviewer's reasoning. 22 queries, 0 refused.

## Claim under test: `UQ-24-archive`

## Verdict: **PARTLY_CONFIRMED**

## What the sources actually say

The claim has two halves. The second is confirmed by primary sources; the first is refuted.

(1) PAST-DATE RETRIEVAL ON THE CURRENT CHANNEL — REFUTED. It is implemented, documented, and CI-tested.

- Source code, qiskit-ibm-runtime main (latest release 0.50.0, uploaded 2026-09-24 per PyPI), `qiskit_ibm_runtime/ibm_backend.py`: `def properties(self, refresh: bool = False, datetime: python_datetime | None = None) -> BackendProperties | None`, with docstring "datetime: By specifying `datetime`, this function returns an instance of the BackendProperties whose timestamp is closest to, but older than, the specified `datetime`." The body does NOT raise; it calls `self._api_client.backend_properties(self.name, datetime=datetime, calibration_id=self.calibration_id)` and returns uncached results when datetime is given.
- `qiskit_ibm_runtime/api/rest/cloud_backend.py` (the IBM Cloud / IBM Quantum Platform REST adapter) translates it to a query parameter: `if datetime: params["updated_before"] = datetime.isoformat()` against `/backends/{backend_name}/properties`.
- IBM's current docs page https://quantum.cloud.ibm.com/docs/guides/get-qpu-information has a section headed "Retrieve historical data": "You can retrieve historical backend properties data in Qiskit with the following code:" followed by `backend.properties(datetime=<datetime>)`.
- A live integration test exists in `test/integration/test_backend.py`: `properties_today = backend.properties(datetime=datetime.today())` with `assert properties_today is not None`.
- IMPORTANT CAVEAT, and the likely origin of the claim: the docstrings are stale and self-contradictory. `ibm_backend.py` still lists "Raises: NotImplementedError: If `datetime` is specified when IBM Quantum Compute is used", and `api/client.py` `backend_properties()` still documents "Raises: NotImplementedError: If `datetime` is specified" — yet neither function contains a `raise NotImplementedError`. The API reference page rendered from these docstrings (https://quantum.cloud.ibm.com/docs/en/api/qiskit-ibm-runtime/ibm-backend) therefore says both that datetime is supported and that it raises. I did not execute the call (no IBM credentials in this environment), so my end-to-end evidence is the code path, IBM's own guide, and the CI integration test, not a live response.
- Retention depth is NOT documented anywhere I could find: no `updated_before` parameter appears in the public REST reference (https://quantum.cloud.ibm.com/docs/api/qiskit-runtime-rest/tags/backends lists only configuration/defaults/list endpoints with `fields` and `calibration_id`), and the REST changelog has no entry on properties history. The integration test only exercises `datetime=today`. So "live devices, window of unknown depth" is the honest statement.

(2) RETIRED DEVICES — CONFIRMED, and this is load-bearing.

- `qiskit_ibm_runtime/ibm_backend.py`, class `IBMRetiredBackend` (main, ~lines 544-546): `def properties(self, refresh: bool = False, datetime: python_datetime | None = None) -> None:` / `"""Return the backend properties."""` / `return None`. The datetime argument is accepted and silently ignored; the method is a stub.
- Open issue https://github.com/Qiskit/qiskit-ibm-runtime/issues/2255, "Retrieve properties at datetime from retired devices", filed 2025-05-08, still OPEN: "Jobs run on retired devices can be recalled via `my_job = service.job(<job_id>)`. However, the properties at the time of that job, `my_job.properties()` relies on the backend still being available to query the properties at that time. Once a backend is retired, this `RuntimeJobV2` instance method is semi-broken in that it returns `None` rather than a `BackendProperties` object because `RuntimeJobV2._backend` is now an `IBMRetiredBackend(...)`, with `.properties()` stubbed to return `None`." It asks IBM to expose `.../properties?updated_before=...` for retired backends. No maintainer fix or commitment found.
- IBM's own "Retired QPUs" guide (https://eu-de.quantum.cloud.ibm.com/docs/en/guides/retired-qpus) documents only job retrieval for retired QPUs ("Use the following code to retrieve a job from a retired QPU"); it says nothing about properties or calibration, and notes jobs submitted via `qiskit-ibmq-provider` "are no longer available". No bulk download or published dataset of retired-device calibration history exists from IBM.
- Independent corroboration: arXiv 2605.15233 ("Control-Plane Openness in Near-Term Quantum Computing: A Survey of Vendor Stacks", data cutoff 2026-05-01, catalog at Zenodo doi 10.5281/zenodo.20163276) grades IBM's calibration-data publication "partial": "per-job metrics remain fetchable through backend.properties()" but "historical archives are not retained on a documented cadence."

(3) OTHER VENDORS — dated calibration history a third party could join to a publication date.

- IonQ: YES, best-in-class. `GET /backends/{backend}/characterizations` (https://docs.ionq.com/api-reference/v0.4/backends/get-characterizations) is explicitly "Retrieve historical performance" with `start` and `end` query params (e.g. `start=2025-12-31`), `limit` (max 10), `page`; each record carries an ISO `date` (e.g. `2025-06-16T00:00:00Z`). BUT the `backend` path parameter accepts only `qpu.forte-1` and `qpu.forte-enterprise-1` — i.e. live devices. Retired Harmony/Aria history is not exposed. Cirq's older IonQ page documents only `service.get_current_calibration()`.
- VTT / IQM (QX, Finland): YES but 30 days. `GET /api/devices/{device}/calibration/runs` returns paginated runs with `calibration_set_id`, `calibration_set_created_timestamp`, `quality_metric_set_id`, and supports `start_date`, `end_date`, `include_metrics`; `GET /api/devices/{device}/calibration/metrics/{calibration_set_id}` fetches a set's metrics. Hard limit quoted: "Regular users can only access calibration runs from the last 30 days", with earlier `start_date` values silently capped (https://qx.vtt.fi/docs/calibration.html).
- Quantinuum: PARTIAL — dated snapshots, not a time series. https://docs.quantinuum.com/systems/user_guide/hardware_user_guide/benchmarks/hardware_data.html offers downloadable JSON with dates in the paths (e.g. `2025_08_28`): component benchmarks only for H2-1 (2025-04-30), H1-1 (2025-05-02), reimei (2025-05-09, 2025-09-08), H2-2 (2025-05-29, 2025-08-28); Quantum Volume results dated 2020-09-29 to 2025-09-08 for H1-1/H1-2/H2-1/H2-2. Code and data at https://github.com/CQCL/quantinuum-hardware-specifications and https://github.com/CQCL/quantinuum-hardware-quantum-volume (announced 2023-02-14). A handful of dates per device over five years — too sparse to join to an arbitrary publication date, and the page does not state whether the component "Date" is measurement or publication date.
- Rigetti: NO. `get_qcs_quantum_processor(quantum_processor_id, client_configuration=None, timeout=10.0)` and `QCSQuantumProcessor(quantum_processor_id, isa, noise_model=None)` take no datetime; pyquil docs mention no ISA timestamps or historical calibration.
- AWS Braket: NO, explicitly. AWS re:Post answer (https://www.repost.aws/questions/QU8qoy15vhRr2Yf5Qvo4kxuA/): "You cannot access historic calibration data (gate errors) via Amazon Braket today. This is true for all devices, including Rigetti's quantum processing units", directing users to email braket-feedback@amazon.com with a date range.
- Azure Quantum: no public dated calibration history found in 19 queries. arXiv 2605.15233 does not grade Azure as a vendor row.
- OQC: no public dated calibration history found; arXiv 2605.15233 grades OQC "partial" with no history detail.

(4) PUBLIC ARCHIVES / DATASETS.

- https://github.com/HUANG-KUAN-HSIANG/IBM_quatum_hardware_calibration_data — a student project; `ibm_calibration_history.csv` (~44 MB, 305,292 rows x 17 cols) covering ibm_fez, ibm_kingston, ibm_marrakesh, "31 March 2026 to 27 September 2026 (180 days)", 649/673/635 snapshots, collected by polling every 6 hours via qiskit-ibm-runtime. Only 2026, only three live devices.
- qiskit-ibm-runtime `fake_provider` (https://quantum.cloud.ibm.com/docs/en/api/qiskit-ibm-runtime/fake-provider) does preserve real device characterization: "The fake backends are built to mimic the behaviors of IBM Quantum systems using system snapshots. The system snapshots contain important information ... such as coupling map, basis gates, qubit properties (T1, T2, error rate, etc.)". But it is ONE frozen snapshot per device with NO recorded snapshot date — the page says only "obtained in the past (sometimes a few years ago)". So it is not a time series and cannot be joined to a publication date.
- IBM Quantum Platform UI permits downloading a QPU's calibration data as CSV from its information card — current snapshot only, live devices only.
- arXiv 2407.21462 gathered IBM calibration "every time there was a new calibration cycle" for ibm_perth and ibm_brisbane over "several months" with "daily acquisitions", but released NO public dataset and did not describe its collection method.
- No Zenodo deposit of general IBM calibration history found; Zenodo hits (17352115, 17970758, 18045662, 20768087) are device-calibration-adjacent experiment datasets, not calibration archives for third-party joins.

## Effect on the ledger verdict

The ledger verdict should be narrowed and re-worded, not upheld as stated. Its first clause is wrong and its second is right.

Change to: "Dated calibration retrieval IS implemented for currently-live IBM QPUs on the qiskit-ibm-runtime channel — backend.properties(datetime=...) maps to the REST parameter updated_before, is documented under 'Retrieve historical data' in IBM's QPU-information guide, and is exercised by a live CI integration test as of release 0.50.0 (2026-09-24). Two real limits remain: (a) the retained history depth is nowhere documented, no public REST reference lists updated_before, and the only CI coverage uses datetime=today, so the usable window is unverified; (b) for RETIRED devices there is no path at all — IBMRetiredBackend.properties() is a stub returning None, open issue #2255 (filed 2025-05-08, still open) asks for exactly this capability, and IBM's retired-QPU guide offers only job retrieval, with no bulk download and no published archive."

The feasibility conclusion the claim draws therefore survives in weakened form, driven entirely by (b) and by scope rather than by any API gap on live hardware. Most IBM hardware results in the literature ran on devices that are now retired, and for those the calibration epoch is irretrievable from IBM by any route; the fake_provider snapshots cannot substitute because they carry no date. A study restricted to currently-live QPUs is feasible subject to the unverified window. Two corrections also matter for study design: IonQ does expose genuinely dated per-characterization history by REST (so the "no vendor does this" framing would be wrong), and AWS Braket is the clearest negative, stating outright that historic calibration data is unavailable for all devices.

Residual uncertainty I could not close: I had no IBM credentials, so I could not measure how far back updated_before actually reaches. That single number decides whether the live-device half of the study is viable, and it should be established empirically before the feasibility question is treated as settled.

## Sources opened

- https://raw.githubusercontent.com/Qiskit/qiskit-ibm-runtime/main/qiskit_ibm_runtime/ibm_backend.py
- https://raw.githubusercontent.com/Qiskit/qiskit-ibm-runtime/main/qiskit_ibm_runtime/api/client.py
- https://raw.githubusercontent.com/Qiskit/qiskit-ibm-runtime/main/qiskit_ibm_runtime/api/rest/cloud_backend.py
- https://github.com/Qiskit/qiskit-ibm-runtime/issues/2255
- https://quantum.cloud.ibm.com/docs/en/api/qiskit-ibm-runtime/ibm-backend
- https://quantum.cloud.ibm.com/docs/guides/get-qpu-information
- https://quantum.cloud.ibm.com/docs/en/guides/qpu-information
- https://quantum.cloud.ibm.com/docs/api/qiskit-ibm-runtime/release-notes
- https://quantum.cloud.ibm.com/docs/api/qiskit-runtime-rest/tags/backends
- https://quantum.cloud.ibm.com/docs/api/qiskit-runtime-rest/changelog
- https://eu-de.quantum.cloud.ibm.com/docs/en/guides/retired-qpus
- https://quantum.cloud.ibm.com/docs/en/api/qiskit-ibm-runtime/fake-provider
- https://pypi.org/pypi/qiskit-ibm-runtime/json
- https://docs.ionq.com/api-reference/v0.4/backends/get-characterizations.md
- https://quantumai.google/cirq/hardware/ionq/calibrations
- https://qx.vtt.fi/docs/calibration.html
- https://docs.quantinuum.com/systems/user_guide/hardware_user_guide/benchmarks/hardware_data.html
- https://docs.quantinuum.com/systems/user_guide/hardware_user_guide/performance_validation.html
- https://www.quantinuum.com/blog/trust-and-verify-quantinuum-hardware-team-posts-performance-data-on-github
- https://raw.githubusercontent.com/CQCL/quantinuum-hardware-specifications/main/README.md
- https://pyquil-docs.rigetti.com/en/stable/apidocs/pyquil.quantum_processor.qcs.html
- https://www.repost.aws/questions/QU8qoy15vhRr2Yf5Qvo4kxuA/gate-errors-from-an-old-job-in-a-rigetti-device-from-results-json
- https://arxiv.org/html/2605.15233v1
- https://arxiv.org/html/2407.21462v1
- https://github.com/HUANG-KUAN-HSIANG/IBM_quatum_hardware_calibration_data
- https://docs.rigetti.com/qcs/references/qcs-api
