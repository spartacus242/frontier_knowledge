import sys
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
from itertools import combinations

def has3ap(S):
    s=set(S)
    L=sorted(s)
    return any((2*b-a) in s for a,b in combinations(L,2))

def M_sat(n,s,blocklen=None,off=0):
    bl = blocklen or s
    N=n*s+bl
    var=lambda x:x+1
    sol=Cadical153()
    for i in range(1,n+1):
        lo=(i-1)*s+off; hi=lo+bl-1
        sol.add_clause([var(x) for x in range(lo,hi+1)])
        # at-most-one only needed if blocks overlap; add anyway
    # a chosen set = vars true; any 3AP of true vars forbidden (superset-of-choice monotone: fine)
    for a in range(N):
        for d in range(1,(N-a)//2+1):
            if a+2*d<N: sol.add_clause([-var(a),-var(a+d),-var(a+2*d)])
    # block membership: vars outside blocks are false (blocks may not cover) 
    cover=set()
    for i in range(1,n+1):
        lo=(i-1)*s+off
        cover|=set(range(lo,lo+bl))
    for x in range(N):
        if x not in cover: sol.add_clause([-var(x)])
    r=sol.solve()
    m=[x for x in range(N) if r and sol.get_model()[x]>0] if r else None
    return r,m

def M_val(s,**kw):
    n=1
    while True:
        r,m=M_sat(n,s,**kw)
        if not r: return n
        n+=1

def G_sat(n,s):
    N=(n-1)*s
    a=lambda p:p+1
    t=lambda p:N+2+p
    top=2*N+3
    cl=[[a(0)]]
    for p in range(N+1):
        cl.append([-a(p),t(p)])
        cl.append([-t(p),a(p)]+([t(p+1)] if p<N else []))
    for p in range(N+1-s+1):
        # window p..p+s-1 empty while later element exists -> forbidden
        nxt = t(p+s) if p+s<=N else None
        c=[a(q) for q in range(p,p+s)]
        if nxt: cl.append(c+[-nxt])
    for x in range(N+1):
        for d in range(1,(N-x)//2+1):
            if x+2*d<=N: cl.append([-a(x),-a(x+d),-a(x+2*d)])
    card=CardEnc.atleast(lits=[a(p) for p in range(N+1)],bound=n,top_id=top,encoding=EncType.seqcounter)
    sol=Cadical153(bootstrap_with=cl+card.clauses)
    r=sol.solve()
    return r,([p for p in range(N+1) if sol.get_model()[p]>0] if r else None)

def G_val(s):
    n=2
    while True:
        r,m=G_sat(n,s)
        if not r: return n
        n+=1

if __name__=="__main__":
    # witnesses
    W={}
    W['M4']=(4,"2 4 11 12 19 23 24 30 32 38 43 47 50 55 59 61 66 69",'M')
    W['M5']=(5,"2 6 12 15 20 26 33 35 42 48 53 56 62 66 74 75 83 87 93 96 101 107 114 116 123 129 134 137 143 147",'M')
    W['M6']=(6,"4 11 13 19 24 31 40 47 52 59 65 68 74 79 88 95 98 103 113 115 121 130 133 140 148 155 160 164 169 176 184 191 194 203 209 210 216",'M')
    W['G6']=(6,"0 3 8 12 18 22 25 30 34 40 45 51 53 59 64 70 71 74 79 85 86 92",'G')
    for k,(s,txt,t) in W.items():
        x=list(map(int,txt.split()))
        ok=not has3ap(x) and x==sorted(set(x))
        if t=='M':
            ok=ok and all((i)*s<=x[i]<=(i+1)*s-1 for i in range(len(x)))
        else:
            ok=ok and all(x[i]-x[i-1]<=s for i in range(1,len(x)))
        print(k,len(x),"valid witness:",ok)
    for s in range(2,8):
        print("M(3,%d)="%s, M_val(s),flush=True)
    for s in range(2,9):
        print("G(3,%d)="%s, G_val(s),flush=True)
