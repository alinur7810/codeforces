import sys
from collections import Counter
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n = ii()
    v=li()
    sum=0
    for i in v:
        if i>1:
            sum+=i
    if v[n-1] == 1:
        sum+=1
    print(sum)
def main():

    t = 1
    t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()