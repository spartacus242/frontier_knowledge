W=[int(t) for t in "0 8 9 17 23 31 40 47 56 64 73 79 84 93 101 110 117 126 134 140 148 157 165 172 176 183 191 200 208 214 222 231 238 247 255 264 269 270 275 284 292 301 308 317 325 331 339 348".split()]
print("n =",len(W), "distinct:",len(set(W))==len(W), "sorted:",W==sorted(W))
gaps=[W[i]-W[i-1] for i in range(1,len(W))]
print("max gap",max(gaps),"min gap",min(gaps))
S=set(W); aps=[(a,b,2*b-a) for i,a in enumerate(W) for b in W[i+1:] if 2*b-a in S]
print("3-APs:",aps)
