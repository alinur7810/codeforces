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
    if n in [2, 3]:
        print("NO SOLUTION")
        return
    elif n == 1:
        print(1)
    else:
        for i in range(2, n+1, 2):
                    print(i, end=" ")
        for i in range(1, n+1, 2):
            print(i, end=" ")
        

        

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()