import sys
xs=list(map(int,sys.stdin.readline().split())); s=int(sys.argv[1])
S=set(xs); assert all(i*s<=xs[i]<i*s+s for i in range(len(xs)))
assert not any(a<b and (a+b)%2==0 and (a+b)//2 in S for a in xs for b in xs); print("verified",len(xs))
