import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    x, y, m = mi()
    ans = -1e9
    n = m//min(x, y)
    for i in range(n):
        for j in range(n):
            if (i*y+j*x) <= m:
                ans = max(ans, i*y+j*x)
    print(ans)


def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()