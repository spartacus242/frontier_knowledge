# Verification: arXiv:2204.04220 (Hu et al. 2022)
READ LEVEL: FULL TEXT via summariser (arxiv.org/pdf, ar5iv HTML); /abs/ also read. Summariser output, not raw PDF; table cells come from flattened extraction (two independent fetches agreed on Table 6 values).

Searches: 1 (title+authors) -> arXiv pdf/abs, ar5iv, paperswithcode, and a related CAIN 2023 paper "Towards Understanding Model Quantization for Reliable DNN Deployment" (same 7 authors).
Fetches: 6
 1 arxiv.org/abs/2204.04220 - OK (title, authors, v1 2022-04-08, no journal ref)
 2 arxiv.org/pdf/2204.04220 - OK (Table 6, 27/30, 23/30)
 3 arxiv.org/pdf/2204.04220 - OK (second pass, full Table 6, Sec 3.5 definition)
 4 ar5iv html - OK (Table 5 and 6 cross-check)
 5 list.lu publication page - FAILED
 6 conf.researchr.org CAIN 2023 page - OK (venue of related version; does not cite arXiv id)

## Findings
1. Title/authors confirmed: Qiang Hu, Yuejun Guo, Maxime Cordy, Xiaofei Xie, Wei Ma, Mike Papadakis, Yves Le Traon. arXiv v1 2022-04-08, cs.LG/AI/SE. No venue on arXiv page. A same-author paper with a different title (Towards Understanding Model Quantization...) appeared at CAIN 2023 (ICSE-co-located); abstract near-identical, but the page does not link it to 2204.04220.
2. Unit: a disagreement is an input; Sec 3.5: "A disagreement is an input that triggers different outputs by the original model and its quantized version." Counted per test input per (model, quantization config).
3. FOUND, Sec 5.3 (RQ3): "27 out of 30" Margin classifiers have greater AUC-ROC (than other metrics: Entropy, Gini, LC); "23 (out of 30)" have >90% AUC-ROC. Wording is "in most cases"; note 27/30 = highest AUC among the 4 metrics. The 30 settings are NOT enumerated in text; from Table 5 (AUC-ROC of logistic regression classifiers) rows: DNN x training strategy (Standard, Quantization-aware, Adversarial, Mixup): LeNet1 4, LeNet5 4, ResNet20 4, NiN 4, DenseNet 4, ResNet50 4, LSTM 3, GRU 3 (no QAT for RNNs) = 30. So settings = model x training strategy, not quantization configs. Classifiers use one 9:1 split.
4. Table 6 EXISTS (Sec 5.4, RQ4 retraining). Not an "In Total column": "In total" is a ROW. Columns: 4 datasets (MNIST, CIFAR-10, IMDb, iWildCam) x 2 DNNs each, each split Before/After retraining, cells show count with change in brackets. Rows: TensorFlowLite-8, TensorFlowLite-16, CoreML-8, CoreML-16, In total, Stubborn, New (IMDb lacks TFLite-8 row). Caption: "In total: disagreements in a test dataset regardless of the quantization technique." Values are ID-test-set counts. It does NOT say "union" explicitly.
5. Arithmetic (Before column): LeNet1 14+9+2+0 = 25; In total 15 -> at least 10 overlap. NiN 514+24+45+7 = 590; In total 540 -> at least 50. Arithmetic checks out (assuming In total = distinct inputs; caption wording is consistent, but union is inferred, not stated). Only a lower bound on overlap-by-count-reduction; pairwise/which-configs not recoverable. After column also: LeNet1 7+4+8+0=19 vs 16; NiN 371+26+31+4=432 vs 401. Paper never discusses cross-config overlap in text (per two summariser passes; not a literal full-text grep).
6. Small vision/NLP models, no LLMs: MNIST (LeNet1, LeNet5), CIFAR-10 (NiN, ResNet20), iWildCam (DenseNet-121, ResNet50), IMDb (LSTM, GRU); 4 datasets, 8 architectures, 42 shifted datasets; quantization via TensorFlowLite and CoreML, 8 and 16 bit.
7. No uncertainty reported: single values, no std/CI/repeated runs/significance tests.

Full Table 6 (Before -> After): 
MNIST LeNet1/LeNet5: TF8 14->7 / 4->3; TF16 9->4 / 3->1; CM8 2->8 / 1->1; CM16 0->0 / 0->0; Total 15->16 / 6->4; Stubborn 1/0; New 15/4
CIFAR NiN/ResNet20: TF8 514->371 / 456->439; TF16 24->26 / 54->49; CM8 45->31 / 181->56; CM16 7->4 / 7->13; Total 540->401 / 536->480; Stubborn 47/100; New 354/380
IMDb LSTM/GRU: TF16 8->7 / 3->1; CM8 6->2 / 2->0; CM16 0/0; Total 13->8 / 5->1; Stubborn 0/0; New 8/1
iWildCam DenseNet/ResNet50: TF8 2830->3319 / 326->373; TF16 167->12 / 187->143; CM8 2035->7 / 226->101; CM16 34->2 / 16->27; Total 3834->3324 / 469->462; Stubborn 2230/24; New 1094/438
Check: ResNet20 456+54+181+7=698 vs 536; DenseNet 2830+167+2035+34=5066 vs 3834.
Caveat: "New" (15 for LeNet1) exceeding "After" total (16) is plausible; Stubborn+New=16 for LeNet1 matches After total; NiN 47+354=401 matches. Consistent.
