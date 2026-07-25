n = int(input())
ans = 0
for i in range(n):
    a = input().replace("X", "")
    if a == "++":
        ans += 1
    elif a == "--":
        ans -= 1
    else:
        pass
print(ans)