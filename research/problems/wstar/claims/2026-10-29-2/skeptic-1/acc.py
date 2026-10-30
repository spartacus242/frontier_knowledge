# Adaptive, resumable cube-and-conquer for "no good s-colouring of [1,n]".
# State file: JSON {"open":[cube,...], "closed_unsat":int, "sat":[...], "log":...}; cube = list of (pos0,colour0)
# A cube is closed only when the solver proves the formula UNSAT under the cube's assumptions.
# Children of a split on position p are the cube + (p,c) for every colour c in p's propagated domain;
# colours outside the domain are refuted by unit propagation under the parent cube (sound: propagation is implied).
import sys,json,os,time
from pysat.solvers import Solver
from enc import encode,decode,var
from check import bad_aps
n,s=int(sys.argv[1]),int(sys.argv[2]); state=sys.argv[3]
budget=int(sys.argv[4]) if len(sys.argv)>4 else 20000
solver=sys.argv[5] if len(sys.argv)>5 else 'cadical153'
tmax=float(sys.argv[6]) if len(sys.argv)>6 else 1e18
if os.path.exists(state): st=json.load(open(state))
else: st={'open':[[[],1.0]],'unsat_leaves':0,'prop_refuted':0,'sat':[],'nodes':0,'cpu':0.0,'weight_closed':0.0}
def save():
    tmp=state+'.tmp'; json.dump(st,open(tmp,'w')); os.replace(tmp,state)
S=Solver(name=solver,bootstrap_with=encode(n,s))
T0=time.time(); lastsave=time.time()
def weight(c):  # crude coverage measure: product of 1/s per fixed position
    return s**(-len(c))
while st['open'] and time.time()-T0<tmax:
    cube,w=st['open'].pop()          # DFS order
    # colour-reversal symmetry c -> 6-c maps good colourings to good colourings, so the subtrees
    # chi(38) in {1,2} are images of chi(38) in {5,4}; skip them (only when root split is position 38).
    if n==76 and s==5 and len(cube)>=1 and cube[0] in ([37,0],[37,1]):
        st['sym_skipped']=st.get('sym_skipped',0.0)+w; st['weight_closed']+=w; continue
    assum=[var(p,c,s) for p,c in cube]
    t=time.process_time()
    S.conf_budget(budget); r=S.solve_limited(assumptions=assum)
    st['cpu']+=time.process_time()-t; st['nodes']+=1
    if r is False:
        st['unsat_leaves']+=1; st['weight_closed']+=w
    elif r is True:
        col=decode(S.get_model(),n,s); g=len(bad_aps(col))==0
        st['sat'].append({'cube':cube,'col':''.join(map(str,col)),'verified_good':g})
        print("SAT FOUND",col,g,flush=True); save()
        if g: break
    else:
        ok,imp=S.propagate(assumptions=assum)
        if not ok: st['unsat_leaves']+=1; st['weight_closed']+=w; continue
        m=set(l for l in imp if l>0); neg=set(-l for l in imp if l<0)
        fixed=set(p for p,_ in cube)
        best=None
        for p in range(n):
            if p in fixed: continue
            dom=[c for c in range(s) if var(p,c,s) not in neg]
            if any(var(p,c,s) in m for c in range(s)): dom=[c for c in range(s) if var(p,c,s) in m]
            key=(len(dom)<=1, len(dom), abs(p-(n-1)/2))
            if best is None or key<best[0]: best=(key,p,dom)
        if best is None or best[0][0]:
            # every free position is forced: this would be a full colouring; let solver decide without budget
            S.conf_budget(-1); r2=S.solve(assumptions=assum)
            if r2: st['open'].append([cube,w]); print("unexpected",flush=True); break
            st['unsat_leaves']+=1; st['weight_closed']+=w; continue
        _,p,dom=best
        st['prop_refuted']+= s-len(dom)
        for c in dom: st['open'].append([cube+[[p,c]],w/len(dom)])
    if time.time()-lastsave>30:
        save(); lastsave=time.time()
        print(f"nodes={st['nodes']} open={len(st['open'])} unsat={st['unsat_leaves']} cpu={st['cpu']:.0f}s depth={len(cube)} closed_weight={st['weight_closed']:.6f}",flush=True)
save()
print("FINISHED" if not st['open'] else "PAUSED", f"nodes={st['nodes']} open={len(st['open'])} unsat={st['unsat_leaves']} sat={len(st['sat'])} cpu={st['cpu']:.0f}s closed_weight={st['weight_closed']:.6f}",flush=True)
