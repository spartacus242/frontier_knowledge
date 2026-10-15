# Non-palindromic climbing: start from a (palindromic) solution, append a '1' at the end and re-solve without symmetry.
import subprocess, sys, time, os, random
t=int(sys.argv[1]); init=sys.argv[2]; budget=float(sys.argv[3]); flips=sys.argv[4]; cb=sys.argv[5]
out=f"runs3/t{t}_"+(sys.argv[6] if len(sys.argv)>6 else "a"); os.makedirs(out,exist_ok=True)
last=open(init).read().strip(); n=len(last)+1; t0=time.time(); seed=random.randrange(10**9); best=None
while time.time()-t0<budget:
    seed+=1
    s=last+"1"*(n-len(last)) if random.random()<0.5 else "1"*(n-len(last))+last
    open(f"{out}/init.txt","w").write(s+"\n")
    r=subprocess.run(["./ls",str(n),str(t),"0",str(seed),flips,cb,f"{out}/init.txt",f"{out}/n{n}.txt"],capture_output=True,text=True)
    print(f"[{time.time()-t0:7.0f}s] {r.stdout.strip()}",flush=True)
    if r.stdout.startswith("SOLVED"):
        last=open(f"{out}/n{n}.txt").read().strip(); best=n; n+=1
print("BEST",t,best,flush=True)
