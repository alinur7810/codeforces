t = int(input())
all = []
if t >= 1 and t <=20:
    for _ in range(t):
        n = int(input())
        if n >=1 and n <=20:
            all.append(n)

    for n in all:
        print(*(range(1, n + 1)))