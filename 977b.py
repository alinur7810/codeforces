from collections import Counter
n = int(input())
s = list(input())
memlist= []
for i in range(len(s)-1):
    memlist.append(f"{s[i]+s[i+1]}")
counts = Counter(memlist)
result = max(counts, key=counts.get)
print(result)