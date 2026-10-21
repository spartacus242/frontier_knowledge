# Which definition variant (or search shortcut) would reproduce BLR's printed M(3,4..6)=18,29,37 and G(3,6)=22?
import sys
sys.setrecursionlimit(10000)
def search(cands, first=None):
    best=[0]; X=[]; S=set()
    def rec(n):
        best[0]=max(best[0],n)
        for x in cands(n, X):
            if n==0 and first is not None and x!=first: continue
            if any((2*b-x) in S for b in X if 2*b-x>=0): continue
            X.append(x); S.add(x); rec(n+1); X.pop(); S.discard(x)
    rec(0); return best[0]+1
M=lambda s: (lambda n,X: range(n*s, n*s+s))
G=lambda s: (lambda n,X: [0] if n==0 else range(X[-1]+1, X[-1]+s+1))
Gs=lambda s: (lambda n,X: [0] if n==0 else range(X[-1]+1, X[-1]+s))      # gaps < s
Mo=lambda s: (lambda n,X: range(n*s+1, n*s+s+1))                         # blocks [(i-1)s+1, is]
Mx=lambda s: (lambda n,X: range(n*(s-1), n*(s-1)+s))                     # overlapping blocks
print("printed : M 7 11 18 29 37 | G 5 9 11 17 22")
print("M       :", [search(M(s)) for s in range(2,7)])
print("M x1=0  :", [search(M(s),first=0) for s in range(2,7)])
print("M x1=s-1:", [search(M(s),first=s-1) for s in range(2,7)])
print("G       :", [search(G(s)) for s in range(2,7)])
print("G gap<s :", [search(Gs(s)) for s in range(2,8)])
