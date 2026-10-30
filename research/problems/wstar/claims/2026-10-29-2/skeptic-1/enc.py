from itertools import product
def var(i,c,s): return i*s+c+1   # i 0-based pos, c 0-based colour
def encode(n,s):
    cl=[]
    for i in range(n):
        cl.append([var(i,c,s) for c in range(s)])
        for c in range(s):
            for e in range(c+1,s): cl.append([-var(i,c,s),-var(i,e,s)])
    trip=[(a,b,c) for a,b,c in product(range(s),repeat=3) if b-a==c-b]
    for a in range(n):
        for d in range(1,n):
            if a+2*d>=n: break
            for (x,y,z) in trip:
                cl.append([-var(a,x,s),-var(a+d,y,s),-var(a+2*d,z,s)])
    return cl
def decode(model,n,s):
    m=set(v for v in model if v>0)
    return [next(c+1 for c in range(s) if var(i,c,s) in m) for i in range(n)]
