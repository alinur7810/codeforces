import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")


def iss(n):
    if len(list(str(n))) == len(set(list(str(n)))):
        return True

def solve():
    n=ii()
    for i in range(n+1, 10000):
        if iss(i):
            print(i)
            break

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()