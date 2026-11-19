import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    a, b, c = mi()
    if (a+b+c)%3==0 and a+1 == b and c - 1 == b:
        yeah()
    else:
        nah()


def main():

    t = 1
    t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()