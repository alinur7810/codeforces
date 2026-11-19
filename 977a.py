import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n, k =mi()
    while(k>0):
        if n %10 !=0:
            n-=1
            k-=1
        else:
            n//=10
            k-=1
    print(n)

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()