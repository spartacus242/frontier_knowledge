import sys
s=sys.argv[1].strip()
c=[int(ch) for ch in s]
n=len(c); print("length",n,"colours used",sorted(set(c)))
bad=[]
for a in range(n):
    for d in range(1,n):
        if a+2*d>=n: break
        if c[a+d]-c[a]==c[a+2*d]-c[a+d]: bad.append((a+1,d))
print("violations",len(bad),bad[:10])
