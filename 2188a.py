t = int(input())
answer = []
for i in range(t):
    n = int(input())
    ans = []
    for j in range(n):
        ans.append(j+1)
        ans.append(n-j)
    answer.append(ans[n:])
for i in answer:
    print(*i)

