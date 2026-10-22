w=list(map(int,"0 8 9 17 23 31 40 47 56 64 73 79 84 93 101 110 117 126 134 140 148 157 165 172 176 183 191 200 208 214 222 231 238 247 255 264 269 270 275 284 292 301 308 317 325 331 339 348".split()))
print(len(w),len(set(w)),w==sorted(w))
print(max(b-a for a,b in zip(w,w[1:])), min(b-a for a,b in zip(w,w[1:])))
S=set(w);aps=[(a,b) for a in w for b in w if b>a and 2*b-a in S]
print("3APs:",aps)
