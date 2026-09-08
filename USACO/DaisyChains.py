import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n=ii()
    v=li()
    ans=0
    for i in range(n):
        cur = 0
        
        for j in range(i, n):
            cur += v[j]
            cc = j-i+1
            if cur%cc==0:
                avg = cur//cc
                for l in range(i, j+1):
                    if v[l] == avg:
                        ans+=1
                        break
                        
    print(ans)

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()