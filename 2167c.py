t=int(input())
for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))
    count = 0
    for i in v:
        if i%2==0:
            count+=1
    if count == n:
        print(*v)
    else:    
        print(*sorted(v))