import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    b, r = mi()

    print((30-b)*(30-r))

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()