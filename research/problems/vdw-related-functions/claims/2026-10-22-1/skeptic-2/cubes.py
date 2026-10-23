import sys,subprocess,os,time,itertools,random
s,n,pd=int(sys.argv[1]),int(sys.argv[2]),sys.argv[3]
limit=float(sys.argv[4]) if len(sys.argv)>4 else 1e9   # wall-clock budget for this invocation
shuffle=len(sys.argv)>5
log="cubes_%d_%d.log"%(s,n)
done=set()
if os.path.exists(log):
    for l in open(log):
        p=l.split("|"); 
        if len(p)>=3: done.add(p[0])
cubes=[]
for o1 in range(s):
  for o2 in range(s-o1):
    for a in range(s):
      for b in range(s):
        cubes.append([o1,(n-1)*s+o2,s+a,(n-2)*s+b])
if shuffle: random.Random(1).shuffle(cubes)
t0=time.time(); 
for c in cubes:
    key=" ".join(map(str,c))
    if key in done: continue
    if time.time()-t0>limit: print("budget reached"); break
    t=time.time()
    out=subprocess.run(["./prop.bin",str(s),str(n),pd]+list(map(str,c)),capture_output=True,text=True,timeout=1500).stdout.strip().split("\n")
    res=out[-1]
    with open(log,"a") as f: f.write("%s|%s|%.2f\n"%(key,res,time.time()-t))
    if res.startswith("SAT"):
        open("SAT_%d_%d.txt"%(s,n),"a").write(out[0]+"\n"); print("SAT found",out[0])
print("pass over; done",len(done),"of",len(cubes))
