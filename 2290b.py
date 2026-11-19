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
    s=si()

    ans=0
    if s[0]=="B":
        ans+=1
    for i in range(1, len(s)):
        if (s[i] == s[i-1]):
            ans += 1
    print(ans)

def main():

    t = 1
    t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()