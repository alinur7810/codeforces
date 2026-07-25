m, n = map(int, input().split())
if (m*n) % 2 == 0:
    print(n*m//2)
else:
    print((n*m-1)//2)