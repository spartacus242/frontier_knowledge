# enumerate all assignments to positions POS (1-based) consistent with AP constraints among POS
import sys,json
POS=[int(x) for x in sys.argv[1].split(',')]; s=5
P=set(POS); res=[]
def ok(asg):
    for a in asg:
        for b in asg:
            if b<=a: continue
            c=2*b-a
            if c in asg and asg[b]-asg[a]==asg[c]-asg[b]: return False
    return True
def rec(i,asg):
    if i==len(POS): res.append([asg[p] for p in POS]); return
    for c in range(1,s+1):
        asg[POS[i]]=c
        if ok(asg): rec(i+1,asg)
        del asg[POS[i]]
rec(0,{})
print(len(res),file=sys.stderr)
json.dump({'pos':POS,'cubes':res},open(sys.argv[2],'w'))
