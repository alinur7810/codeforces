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
    l = 0
    u = 0
    for i in s:
        if i.lower() == i:
            l+=1
        elif i.upper() == i:
            u+=1
    if l < u:
        print(s.upper())
    else:
        print(s.lower())

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()