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
    a=li()
    b=li()

    AnB=0
    while (a[AnB] == b[AnB]):
        AnB+=1
    isn = False
    while (a[AnB] != b[AnB]):
        if AnB != n-1 and a[AnB] == b[AnB+1]:
            AnB+=1
        else:
            AnB+=1
            isn = True
        if AnB == n-1:
            break
    while (AnB < n):
        AnB+=1
        if AnB == n-1:
            break
        
    if not isn:
        print('Yes')
    else:
        print('No')


def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()