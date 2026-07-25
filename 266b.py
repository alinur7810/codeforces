n, t =map(int, input().split())
que = list(input())

for _ in range(t):
    i = 0
    while i < len(que)-1:
        if que[i] == "B" and que[i+1] == "G":
            que[i], que[i+1] = que[i+1], que[i]
            i += 2
        else:
            i +=1
    
print("".join(que))
    