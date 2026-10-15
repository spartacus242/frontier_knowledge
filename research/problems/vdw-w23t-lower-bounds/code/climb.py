# Incremental climbing: palindromic (or plain) local search from n0 upward, inserting a middle bit.
import subprocess, sys, time, os, random
t=int(sys.argv[1]); n=int(sys.argv[2]); budget=float(sys.argv[3]); palin=int(sys.argv[4]); flips=sys.argv[5] if len(sys.argv)>5 else "50000000"
cb=sys.argv[6] if len(sys.argv)>6 else "2.3"
out=f"runs/t{t}_p{palin}_cb{cb}"; os.makedirs(out,exist_ok=True)
init=sys.argv[7] if len(sys.argv)>7 else "-"; t0=time.time(); best=None; seed=random.randrange(10**9)
while time.time()-t0<budget:
    seed+=1
    r=subprocess.run(["./ls",str(n),str(t),str(palin),str(seed),flips,cb,init,f"{out}/n{n}.txt"],capture_output=True,text=True)
    print(f"[{time.time()-t0:7.0f}s] {r.stdout.strip()}",flush=True)
    if r.stdout.startswith("SOLVED"):
        best=n; s=open(f"{out}/n{n}.txt").read().strip()
        h=len(s)//2; s2=s[:h]+"1"+s[h:]
        open(f"{out}/init.txt","w").write(s2); init=f"{out}/init.txt"; n+=1
print("BEST",t,best)
