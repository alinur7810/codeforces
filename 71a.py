n = int(input())
ans = []
for i in range(n):
    a = input()
    if len(a) > 10:
        a = list(a)
        ans.append(str(a[0])+str((len(a)-2))+str(a[-1]))
    else:
        ans.append(a)
print(*ans, sep="\n")

