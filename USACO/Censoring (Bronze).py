import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")


def solve():
    s = si()
    t = si()
    while(s.find(t) != -1):
        for i in range(len(s)):
            n = s.find(t)
            if n==-1:
                print(s)
                break
            else:
                s = s[:n] + s[n+len(t):]


def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()