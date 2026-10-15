# Palindromic climbing with skipping (palindromic satisfiability is not monotone in n):
# on failure at n, try n+1, n+2, ... (up to SKIP) from the last solution with extra middle bits, before retrying n.
import subprocess, sys, time, os, random
t=int(sys.argv[1]); n=int(sys.argv[2]); budget=float(sys.argv[3]); flips=sys.argv[4]; cb=sys.argv[5]
init=sys.argv[6] if len(sys.argv)>6 else "-"; SKIP=int(sys.argv[7]) if len(sys.argv)>7 else 4
out=f"runs2/t{t}_"+(sys.argv[8] if len(sys.argv)>8 else "a"); os.makedirs(out,exist_ok=True)
t0=time.time(); seed=random.randrange(10**9); last=open(init).read().strip() if init!="-" else None
best=None; k=0
def grow(s,m):
    while len(s)<m:
        h=len(s)//2; s=s[:h]+"1"+s[h:]
    return s
while time.time()-t0<budget:
    seed+=1; m=n+k
    if last: open(f"{out}/init.txt","w").write(grow(last,m)+"\n"); ini=f"{out}/init.txt"
    else: ini="-"
    r=subprocess.run(["./ls",str(m),str(t),"1",str(seed),flips,cb,ini,f"{out}/n{m}.txt"],capture_output=True,text=True)
    print(f"[{time.time()-t0:7.0f}s] {r.stdout.strip()}",flush=True)
    if r.stdout.startswith("SOLVED"):
        last=open(f"{out}/n{m}.txt").read().strip(); best=m; n=m+1; k=0
    else:
        k=(k+1)%(SKIP+1)
print("BEST",t,best,flush=True)
