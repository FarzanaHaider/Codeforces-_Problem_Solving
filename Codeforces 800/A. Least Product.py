import math
t = int(input())

while t>0:
    t=t-1
    n=int(input())
    a=[]
    for i in range(0,n):
        a.append (int(input()))

    if math.prod(a)>0:
        print("1 0")
    else:
        print("0")


