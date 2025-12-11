t=int(input())
while(t):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    if k in arr: print("YES")
    else:print("NO")
    t-=1