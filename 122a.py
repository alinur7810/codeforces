from itertools import product
n =input()
isYes = ""
lucky = []
for length in range(1, 4): 
    for p in product('47', repeat=length):
        lucky.append(int("".join(p)))
for i in lucky:
    if int(n) % i == 0:
        print("YES")
        break
else:
    for i in n:
        if i not in ['4', '7']:
            isYes = "NO"
            break
        else:
            isYes = "YES"
    print(isYes)
