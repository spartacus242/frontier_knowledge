# Incremental "lemma" strategy for: no good s-colouring of [1,n] exists.
#   Phase 1: for positions p ordered from the middle outwards, try to prove under a
#            conflict budget that chi(p) != special colour (default 3) -- i.e. solve
#            with assumption x_{p,3}; UNSAT => add unit clause -x_{p,3} (a theorem
#            about ALL good colourings satisfying the symmetry-breaking) and log it.
#            SAT => a good colouring exists (printed, refutes the claim).
#   Phase 2: final unbudgeted solve with all proven lemmas as units.
# Symmetry breaking: chi(1)<=ceil(s/2), chi(1)<=chi(n), chi(1)+chi(n)<=s+1
# (valid for the group {id, reflection, colour reversal, both}; the special colour
#  3 = (s+1)/2 is fixed by colour reversal so the lemmas commute with the group).
# Resumable: proven lemmas are re-read from the log at start.  Log lines:
#   LEMMA p  /  UNKNOWN p conflicts  /  SAT p MODEL ...  /  FINAL SAT|UNSAT time
# Usage: lemma.py n s log [solver] [conf_budget] [special_colour]
import sys, time, os
from pysat.solvers import Solver
n=int(sys.argv[1]); s=int(sys.argv[2]); log=sys.argv[3]
sname=sys.argv[4] if len(sys.argv)>4 else "cadical153"
budget=int(sys.argv[5]) if len(sys.argv)>5 else 2000000
special=int(sys.argv[6]) if len(sys.argv)>6 else (s+1)//2
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
for c in range((s+1)//2+1,s+1): cl.append([-var(1,c)])
for c1 in range(1,s+1):
    for cn in range(1,s+1):
        if not (c1<=cn and c1+cn<=s+1): cl.append([-var(1,c1),-var(n,cn)])
proven=set(); tried=set(); final_done=False
if os.path.exists(log):
    for line in open(log):
        p=line.split()
        if not p: continue
        if p[0]=="LEMMA": proven.add(int(p[1])); tried.add(int(p[1]))
        elif p[0]=="UNKNOWN": tried.add(int(p[1]))
        elif p[0]=="FINAL": final_done=True
if final_done: print("already final"); sys.exit(0)
for p in proven: cl.append([-var(p,special)])
m=(n+1)//2; order=[m]
for d in range(1,n):
    if m+d<=n: order.append(m+d)
    if m-d>=1: order.append(m-d)
f=open(log,"a"); T0=time.time()
f.write("START n=%d s=%d solver=%s budget=%d special=%d proven_before=%d time=%d\n"%(n,s,sname,budget,special,len(proven),int(T0))); f.flush()
def model_string(S):
    mm=set(v for v in S.get_model() if v>0)
    return "".join(str(c) for i in range(1,n+1) for c in range(1,s+1) if var(i,c) in mm)
with Solver(name=sname,bootstrap_with=cl) as S:
    for p in order:
        if p in tried: continue
        t=time.time(); S.conf_budget(budget)
        r=S.solve_limited(assumptions=[var(p,special)])
        if r is False:
            S.add_clause([-var(p,special)]); proven.add(p)
            f.write("LEMMA %d %.1f\n"%(p,time.time()-t))
        elif r is True:
            f.write("SAT %d MODEL %s\n"%(p,model_string(S))); f.flush(); print("good colouring found"); sys.exit(0)
        else:
            f.write("UNKNOWN %d %.1f\n"%(p,time.time()-t))
        f.flush()
    f.write("PHASE2 proven=%d of %d positions, elapsed=%.1f\n"%(len(proven),n,time.time()-T0)); f.flush()
    t=time.time(); r=S.solve()
    f.write("FINAL %s %.1f total_elapsed=%.1f%s\n"%("SAT" if r else "UNSAT",time.time()-t,time.time()-T0," MODEL "+model_string(S) if r else "")); f.flush()
print("done")
