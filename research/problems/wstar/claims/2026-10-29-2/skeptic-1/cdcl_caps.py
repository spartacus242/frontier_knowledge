# Decide the units abandoned by fc7 (node cap) with CaDiCaL under assumptions; resumable.
import sys,os,time
from pysat.solvers import Solver
from enc import encode,var,decode
from check import bad_aps
n,s=76,5
capf,outf=sys.argv[1],sys.argv[2]
done=set()
if os.path.exists(outf):
    for l in open(outf):
        p=l.split()
        if p: done.add(p[0])
S=Solver(name='cadical153',bootstrap_with=encode(n,s))
for l in open(capf):
    p=l.split()
    if not p or p[0] in done: continue
    assum=[var(int(a),int(b),s) for a,b in (x.split(':') for x in p[1:])]
    t=time.process_time(); r=S.solve(assumptions=assum); dt=time.process_time()-t
    extra=''
    if r:
        col=decode(S.get_model(),n,s); extra=' SAT '+''.join(map(str,col))+' good=%s'%(len(bad_aps(col))==0)
        print("FOUND",extra,flush=True)
    with open(outf,'a') as f: f.write(f"{p[0]} {'SAT' if r else 'UNSAT'} {dt:.2f}{extra}\n")
    done.add(p[0])
print("CAPS DONE",len(done),flush=True)
