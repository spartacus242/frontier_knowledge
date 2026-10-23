w=list(map(int,"6 11 20 22 30 39 44 52 59 63 73 78 89 92 103 108 118 122 129 137 142 151 159 161 174 175 188 190 198 207 212 220 227 231 241 246 257 260 271 276 286 290 297 305 310 319 327 329 338 343".split()))
assert len(w)==50
assert all(7*i<=w[i]<=7*i+6 for i in range(50))
S=set(w); assert len(S)==50
bad=[(a,b) for a in w for b in w if a<b and (a+b)%2==0 and (a+b)//2 in S]
print("blocks ok, APs found:",bad)
