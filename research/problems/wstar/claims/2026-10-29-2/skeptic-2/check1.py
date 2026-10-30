s="115442212114125512525422541445455112411544221211412551252542254144545511242"
c=[int(x) for x in s]; n=len(c); print("len",n,set(c))
bad=[(a,d) for a in range(n) for d in range(1,n) if a+2*d<n and c[a+d]-c[a]==c[a+2*d]-c[a+d]]
print("bad",bad)
# W(3;4)=76 relation: colours in {1,2,4,5} => no 3-AP in colour set, so monochrome only
print(sorted(set(c)))
