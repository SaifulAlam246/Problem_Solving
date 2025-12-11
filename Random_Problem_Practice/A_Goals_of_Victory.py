t=int(input())
while(t):
    n=int(input())
    arr=list(map(int,input().split()))
    print(-1*sum(arr))
    t-=1