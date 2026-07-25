t = int(input())
answer = []
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    a[0] += 1
    ans = 1
    for i in range(len(a)):
        ans *= a[i]
    answer.append(ans)
print(*answer, sep='\n')