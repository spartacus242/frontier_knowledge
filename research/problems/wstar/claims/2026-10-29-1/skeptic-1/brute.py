import itertools,sys
s,n=int(sys.argv[1]),int(sys.argv[2]); cnt=0
for c in itertools.product(range(1,s+1),repeat=n):
    if c[0]>(s+1)//2: continue
    if all(c[a+d]-c[a]!=c[a+2*d]-c[a+d] for a in range(n) for d in range(1,(n-1-a)//2+1)): cnt+=1
print(cnt)
