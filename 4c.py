import sys
input = sys.stdin.readline
n = int(input())
db = {}
ans = []

for i in range(n):
    name = input().strip()
    if name not in db:
        db[name] = 0
        ans.append("OK") 

    else:       
        if name in db:
            db[name] += 1
            ans.append(name+f"{db[name]}")

print(*ans, sep="\n")