n, m = map(int, input().split())
prices = list(map(int, input().split()))
prices.sort()
earn = []
for i in range(m):
    if prices[i] < 0:
        earn.append(prices[i])