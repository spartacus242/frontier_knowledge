w=list(map(int,"6 11 20 22 30 39 44 52 59 63 73 78 89 92 103 108 118 122 129 137 142 151 159 161 174 175 188 190 198 207 212 220 227 231 241 246 257 260 271 276 286 290 297 305 310 319 327 329 338 343".split()))
s=7
print("len",len(w))
ok=all(7*i<=x<=7*i+6 for i,x in enumerate(w))
print("blocks ok",ok)
S=set(w); aps=[(a,b) for a in w for b in w if a<b and 2*b-a in S]
print("3APs",aps)
