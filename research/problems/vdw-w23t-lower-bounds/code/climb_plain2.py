# Non-palindromic extension with richer moves: insert a '1' at the start, the end, or a random interior position;
# after FAILS consecutive failures, trim TRIM bits from random ends of the last solution and re-extend (backtracking).
import subprocess, sys, time, os, random
t=int(sys.argv[1]); init=sys.argv[2]; budget=float(sys.argv[3]); flips=sys.argv[4]; cb=sys.argv[5]; tag=sys.argv[6]
FAILS=int(sys.argv[7]) if len(sys.argv)>7 else 4; TRIM=int(sys.argv[8]) if len(sys.argv)>8 else 6
out=f"runs4/t{t}_{tag}"; os.makedirs(out,exist_ok=True)
last=open(init).read().strip(); t0=time.time(); seed=random.randrange(10**9); best=len(last); fails=0
open(f"{out}/best.txt","w").write(last+"\n")
while time.time()-t0<budget:
    seed+=1
    if fails>=FAILS:
        a=random.randint(0,TRIM); last=last[a:len(last)-(TRIM-a)]; fails=0
        print(f"trim to {len(last)}",flush=True)
    mv=random.random()
    if mv<0.3: s="1"+last; how="start"
    elif mv<0.6: s=last+"1"; how="end"
    else:
        p=random.randint(1,len(last)-1); s=last[:p]+"1"+last[p:]; how=f"at{p}"
    n=len(s); open(f"{out}/init.txt","w").write(s+"\n")
    r=subprocess.run(["./ls",str(n),str(t),"0",str(seed),flips,cb,f"{out}/init.txt",f"{out}/cur.txt"],capture_output=True,text=True)
    print(f"[{time.time()-t0:7.0f}s] {how} {r.stdout.strip()}",flush=True)
    if r.stdout.startswith("SOLVED"):
        last=open(f"{out}/cur.txt").read().strip(); fails=0
        if n>best: best=n; open(f"{out}/best.txt","w").write(last+"\n"); open(f"{out}/n{n}.txt","w").write(last+"\n")
    else: fails+=1
print("BEST",t,best,flush=True)
