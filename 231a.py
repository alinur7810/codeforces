n = int(input())
ans = 0
for i in range(n):
    a = list(map(int, input().split()))
    if sum(a) >= 2:
        ans += 1
print(ans)
