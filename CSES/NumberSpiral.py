import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    y, x= mi()
    if max(y, x) %2==0:
        if max(x, y) == x:
            print((max(x, y)-1)**2 +y)
        else:
            print(max(x, y)**2 -x+1)
    else:
        if max(x, y) == x:
            print((max(x, y))**2 -y+1)
        else:
            print((max(x, y)-1)**2 +x)


def main():

    t = 1
    t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()