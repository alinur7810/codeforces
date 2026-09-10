import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n = ii()
    x = li()
    y = li()
    ans = -1e9
    for i in range(n):
        for j in range(n):
            ans = max((x[i]-x[j])**2 + (y[i]-y[j])**2, ans)
    print(ans)

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()