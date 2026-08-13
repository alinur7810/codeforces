import sys
from collections import Counter
def solve():
    n=int(sys.stdin.readline())
    l = list(map(int, sys.stdin.readline().split()))
    m = Counter(l)
    if (len(m)) > 2:
        print("NO")
    elif len(m)==1:
        print("YES")
    else:
        n1, n2 = m.values()
        if (abs(n1-n2) <= 1):
            print("YES")
        else:
            print("NO")
def main():  
    t=int(sys.stdin.readline())
    for i in range(t):
        solve()
if __name__ == '__main__':
    main()
