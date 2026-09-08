import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n, k = mi()
    v = [int(input()) for _ in range(n)]
    ans = -1e9
    for i in range(len(v)):
        lv = 0
        for j in range(len(v)):
            if v[i] <= v[j] and v[j] <= v[i]+k:
                lv+=1
        ans = max(ans, lv)
    print(ans)
    
def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()