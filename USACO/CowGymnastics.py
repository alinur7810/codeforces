import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    k, n = mi()
    m = [[0] * (n + 1) for _ in range(k)]
    ans=0
    for i in range(k):
        t=li()
        for j in range(n):
            c = t[j]
            m[i][c] = j

    for i in range(1, n+1):
        for j in range(1, n+1):
            if i==j: continue
            isb=True
            for b in range(k):
                if m[b][i] > m[b][j]:
                    isb = False
            if isb:
                ans+=1
    print(ans)


def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()