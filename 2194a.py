t = int(input())
ans = []
for i in range(t):
    n, w = map(int, input().split())
    ans.append(n-(n//w))
for i in ans:
    print(i)