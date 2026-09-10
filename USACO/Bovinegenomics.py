import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n, m = mi()
    pyatna = [""]*m
    nepyatna = [""]*m
    for i in range(n):
        s =si()
        for j in range(m):
            pyatna[j] += s[j]
    for i in range(n):
        s =si()
        for j in range(m):
            nepyatna[j] += s[j]
    ans=0
    for i in range(m):
        iss = True
        for j in range(n):
            if pyatna[i][j] in nepyatna[i]:
                iss = False
                break
        if iss:
            ans+=1
    print(ans)

    

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()