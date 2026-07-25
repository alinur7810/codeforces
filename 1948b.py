t = int(input())
for _ in range(t):
    t = int(input())
    n = input().replace(" ", "")
    if sorted(list(n)) == list(n):
        print("YES")
    else:
        print("NO")