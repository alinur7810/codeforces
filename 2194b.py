import sys
input = sys.stdin.readline
t=int(input())
ans = []
for i in range(t):
    ans1 = []
    n, x, y = map(int, input().split())
    a = list(map(int, input().split()))
    aa = []
    for i in a:
        v = (i//x)*y
        aa.append(v)
    tsum = sum(aa)
    for i in range(n):
        ans1.append(tsum-aa[i]+a[i])
    ans.append(max(ans1))
print(*ans, sep='\n')