n, k = map(int, input().split())
places = list(map(int, input().split()))
if len(places) == n and 1 <=k<=n<=50:
    nextParts = 0
    for i in places:
        if i >= places[k-1] and i > 0:
            nextParts += 1
    
    print(nextParts)
