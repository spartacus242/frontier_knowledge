import sys
from sat import run
n=int(sys.argv[1]); r,m,t=run(n,5)
print(n,r,t)
if r:
    print("".join(map(str,m)))
    bad=[(a,d) for a in range(n) for d in range(1,n) if a+2*d<n and m[a+d]-m[a]==m[a+2*d]-m[a+d]]
    print("verify bad",bad)
