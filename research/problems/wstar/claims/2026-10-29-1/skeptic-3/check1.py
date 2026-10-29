import sys
s="115442212114125512525422541445455112411544221211412551252542254144545511242"
c=[int(ch) for ch in s]
n=len(c)
print("length",n,"colours used",sorted(set(c)))
bad=0
for a in range(n):
    for d in range(1,n):
        if a+2*d>=n: break
        if c[a+d]-c[a]==c[a+2*d]-c[a+d]:
            bad+=1; print("BAD AP at positions",a+1,a+d+1,a+2*d+1,"colours",c[a],c[a+d],c[a+2*d])
print("violations:",bad)
