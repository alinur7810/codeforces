n, m = map(int, input().split())
prices = sorted(map(int, input().split()))
negPrices = [x for x in prices if x < 0]
print(sum(map(abs, negPrices[:m])))