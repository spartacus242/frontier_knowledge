from check import *
import time
for s,n in ((6,37),(6,38),(7,48),(7,49)):
    t=time.time(); r,m=M_sat(n,s); print("M s=%d n=%d sat=%s %.0fs"%(s,n,r,time.time()-t),flush=True)
