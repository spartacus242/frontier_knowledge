import os,itertools
D=os.path.join(os.path.dirname(os.path.abspath(__file__)),'parts')
inv=val=0; best=0; nodes=0; bad=[]; bestsets={}
for g in itertools.product(range(1,10),repeat=4):
    t=open(os.path.join(D,'%d_%d_%d_%d.out'%g)).read().strip()
    if t=='prefix invalid': inv+=1; continue
    if not t.startswith('s=9 prefix_len=5 best='): bad.append(g); continue
    val+=1; f=t.split(); b=int(f[2].split('=')[1]); nodes+=int(f[3].split('=')[1])
    if b>=best: best=b; bestsets.setdefault(b,[]).append(list(map(int,f[5:])))
print("parts:",inv+val+len(bad),"invalid-prefix:",inv,"searched:",val,"malformed:",bad)
print("total nodes:",nodes,"max set size over all parts:",best,"#parts attaining it:",len(bestsets[best]))
for S in bestsets[best]:
    print(S); gaps=[S[i]-S[i-1] for i in range(1,len(S))]
    print(" len",len(S),"maxgap",max(gaps),"3AP-free",all(2*b-a not in set(S) for i,a in enumerate(S) for b in S[i+1:]))
