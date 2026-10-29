# Resumable cube-and-conquer SAT search for a good s-colouring of [1,n].
# Good = no 3-AP a,a+d,a+2d (d>=1) whose colours c1,c2,c3 satisfy c2-c1 == c3-c2
# (this includes monochromatic APs).  Symmetry group {id, reflection R, colour
# reversal C, RC} preserves goodness; we keep only colourings with
#   chi(1) <= ceil(s/2),  chi(1) <= chi(n),  chi(1)+chi(n) <= s+1
# (first-component relaxations of the lex-leader condition, valid for the group).
# Cubes = all surviving assignments of positions 1, n, 2, n-1 (K=4 ends).
# Each cube is solved with CaDiCaL under assumptions; "CUBE idx ... SAT/UNSAT t"
# lines are appended to the log and skipped on restart.  Run: python3 cube2.py n s log
import sys, time, os, itertools
from pysat.solvers import Cadical153
n=int(sys.argv[1]); s=int(sys.argv[2]); log=sys.argv[3]; K=int(sys.argv[4]) if len(sys.argv)>4 else 4
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
# symmetry breaking
for c in range((s+1)//2+1,s+1): cl.append([-var(1,c)])
for c1 in range(1,s+1):
    for cn in range(1,s+1):
        if not (c1<=cn and c1+cn<=s+1): cl.append([-var(1,c1),-var(n,cn)])
def good(assign):  # assign: dict pos->colour ; check all fully assigned APs
    ps=sorted(assign)
    for a in ps:
        for b in ps:
            if b>a and 2*b-a in assign and assign[b]-assign[a]==assign[2*b-a]-assign[b]: return False
    return True
cubepos=[1,n,2,n-1][:K]
cubes=[]
for cols in itertools.product(range(1,s+1),repeat=K):
    A=dict(zip(cubepos,cols))
    if A[1]>(s+1)//2 or A[1]>A[n] or A[1]+A[n]>s+1: continue
    if good(A): cubes.append(A)
done=set()
if os.path.exists(log):
    for line in open(log):
        p=line.split()
        if p and p[0]=="CUBE": done.add(int(p[1]))
print("n=%d s=%d cubes=%d already_done=%d"%(n,s,len(cubes),len(done))); sys.stdout.flush()
f=open(log,"a"); t0=time.time(); nsat=0
with Cadical153(bootstrap_with=cl) as S:
    for idx,A in enumerate(cubes):
        if idx in done: continue
        t=time.time()
        r=S.solve(assumptions=[var(p,c) for p,c in A.items()])
        line="CUBE %d %s %s %.2f"%(idx,",".join("%d=%d"%(p,A[p]) for p in cubepos),"SAT" if r else "UNSAT",time.time()-t)
        if r:
            nsat+=1
            m=set(v for v in S.get_model() if v>0)
            line+=" MODEL "+"".join(str(c) for i in range(1,n+1) for c in range(1,s+1) if var(i,c) in m)
        f.write(line+"\n"); f.flush()
f.write("ALLDONE n=%d s=%d cubes=%d sat_cubes_this_run=%d total_time_this_run=%.1f\n"%(n,s,len(cubes),nsat,time.time()-t0)); f.close()
print("finished")
