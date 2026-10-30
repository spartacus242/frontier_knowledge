# redundant clauses: for every colour subset C, the positions coloured in C contain no L-term AP,
# where L = value for the induced problem (verified separately): induced problem depends only on the
# AP-structure of C as a set of integers.
from itertools import combinations
from enc import var
def aps(n,L):
    for d in range(1,n):
        if 1+(L-1)*d>n: break
        for a in range(0,n-(L-1)*d): yield [a+k*d for k in range(L)]
def redundant(n,s,table):
    cl=[]
    for C,L in table:
        comp=[c for c in range(s) if c not in C]
        for P in aps(n,L):
            cl.append([var(x,c,s) for x in P for c in comp])
    return cl
def table5():
    t=[]
    for C in combinations(range(5),2): t.append((C,9))          # 2 colours: only mono APs -> W(3;2)=9
    for C in combinations(range(5),3):
        d=sorted(C)
        if d[1]-d[0]==d[2]-d[1]: t.append((C,23))               # affine copy of {1,2,3}: w*(3;3)=23
        else: t.append((C,27))                                   # AP-free 3-set: only mono -> W(3;3)=27
    for C in combinations(range(5),4):
        d=sorted(C)
        if d==[0,1,3,4]: continue                                # would need W(3;4)=76 (not assumed)
        t.append((C,40))   # {1234},{2345}: w*(3;4)=40; {1235},{1345}: computed value 40 (encv.py)
    return t
