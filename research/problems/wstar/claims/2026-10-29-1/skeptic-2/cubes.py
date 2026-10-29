import sys,json,os,time
from pysat.solvers import Cadical153
n=int(sys.argv[1]); s=int(sys.argv[2]); out=f"res_{s}_{n}.jsonl"
v=lambda i,k:(i-1)*s+k
cl=[]
for i in range(1,n+1):
    cl.append([v(i,k) for k in range(1,s+1)])
    for k in range(1,s+1):
        for l in range(k+1,s+1): cl.append([-v(i,k),-v(i,l)])
for a in range(1,n+1):
    for d in range(1,n):
        c=a+2*d
        if c>n:break
        for x in range(1,s+1):
            for y in range(1,s+1):
                z=2*y-x
                if 1<=z<=s: cl.append([-v(a,x),-v(a+d,y),-v(c,z)])
done=set()
if os.path.exists(out):
    for L in open(out): done.add(tuple(json.loads(L)['cube']))
t0=time.time()
for a in range(1,(s+1)//2+1):       # chi(1)<=ceil(s/2) by complement symmetry
  for b in range(1,s+1):
    for e in range(1,s+1):
        cb=(a,b,e)
        if cb in done: continue
        S=Cadical153(bootstrap_with=cl)
        t=time.time(); r=S.solve(assumptions=[v(1,a),v(2,b),v(n,e)])
        rec={"cube":list(cb),"sat":r,"sec":round(time.time()-t,1)}
        if r:
            m=set(x for x in S.get_model() if x>0)
            rec["col"]="".join(str(k) for i in range(1,n+1) for k in range(1,s+1) if v(i,k) in m)
        S.delete()
        open(out,"a").write(json.dumps(rec)+"\n")
        print(rec,flush=True)
print("ALLDONE",time.time()-t0,flush=True)
