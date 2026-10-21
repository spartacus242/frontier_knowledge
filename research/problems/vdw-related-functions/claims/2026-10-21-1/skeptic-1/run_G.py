from check import *
printedG = {2:5,3:9,4:11,5:17,6:22,7:33,8:37,9:48}
for s in range(2, 10):
    t=time.time(); v, w = value(G_sat, s, 2)
    assert check_G_witness(w, s) and len(w) == v-1
    vs = value(G_sat, s, 2, strict=True)[0] if s > 2 else None
    print(f"G(3,{s}) = {v} (printed {printedG.get(s)}) [{time.time()-t:.1f}s]; gaps<s variant {vs}; witness {w}", flush=True)
