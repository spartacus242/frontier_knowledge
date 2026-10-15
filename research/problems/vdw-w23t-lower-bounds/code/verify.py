import sys
def check(s,t):
    n=len(s); x=[None]+[int(c) for c in s]
    for d in range(1,n):
        for a in range(1,n-2*d+1):
            if x[a]==0 and x[a+d]==0 and x[a+2*d]==0: return f"3-AP in colour 0 at a={a},d={d}"
        for a in range(1,n-(t-1)*d+1):
            if all(x[a+j*d]==1 for j in range(t)): return f"{t}-AP in colour 1 at a={a},d={d}"
    return "OK"
s=open(sys.argv[1]).read().split()[0]; print(len(s), check(s,int(sys.argv[2])))
