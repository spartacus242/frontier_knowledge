# Resumable cube-and-conquer: enumerate good prefixes of length K (chi[1] <= ceil(s/2)
# by colour-reversal symmetry), solve each with CaDiCaL under assumptions, log results.
import sys, time, os
from pysat.solvers import Cadical153
n=int(sys.argv[1]); s=int(sys.argv[2]); K=int(sys.argv[3]); log=sys.argv[4]
def var(i,c): return (i-1)*s+c
cl=[]
for i in range(1,n+1):
    cl.append([var(i,c) for c in range(1,s+1)])
    for c in range(1,s+1):
        for c2 in range(c+1,s+1): cl.append([-var(i,c),-var(i,c2)])
triples=[(c1,c2,c3) for c1 in range(1,s+1) for c2 in range(1,s+1) for c3 in range(1,s+1) if c2-c1==c3-c2]
for a in range(1,n+1):
    d=1
    while a+2*d<=n:
        for (c1,c2,c3) in triples: cl.append([-var(a,c1),-var(a+d,c2),-var(a+2*d,c3)])
        d+=1
# enumerate good prefixes
pref=[]
def good_ext(chi,c):
    m=set()
    for d in range(1,(c-1)//2+1):
        v=2*chi[c-d]-chi[c-2*d]
        if 1<=v<=s: m.add(v)
    return m
def rec(chi,c):
    if c>K: pref.append(tuple(chi[1:])); return
    m=good_ext(chi,c); hi=(s+1)//2 if c==1 else s
    for v in range(1,hi+1):
        if v not in m: chi[c]=v; rec(chi,c+1)
rec([0]*(K+1),1)
done=set()
if os.path.exists(log):
    for line in open(log):
        p=line.split()
        if p and p[0]=="CUBE": done.add(int(p[1]))
print("n=%d s=%d K=%d cubes=%d already_done=%d"%(n,s,K,len(pref),len(done))); sys.stdout.flush()
f=open(log,"a"); t0=time.time(); nsat=0
with Cadical153(bootstrap_with=cl) as S:
    for idx,p in enumerate(pref):
        if idx in done: continue
        t=time.time()
        r=S.solve(assumptions=[var(i+1,c) for i,c in enumerate(p)])
        line="CUBE %d %s %s %.2f"%(idx,"".join(map(str,p)),"SAT" if r else "UNSAT",time.time()-t)
        if r:
            nsat+=1
            m=set(v for v in S.get_model() if v>0)
            line+=" MODEL "+"".join(str(c) for i in range(1,n+1) for c in range(1,s+1) if var(i,c) in m)
        f.write(line+"\n"); f.flush()
f.write("ALLDONE n=%d s=%d cubes=%d sat_cubes_this_run=%d total_time_this_run=%.1f\n"%(n,s,len(pref),nsat,time.time()-t0)); f.close()
print("finished")
