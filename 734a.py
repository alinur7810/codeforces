import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    n =ii()
    a= 'Anton'
    d = 'Danik'
    s=si()

    if s.count('D') > s.count('A'):
        print(d)
    elif s.count("A") > s.count("D"):
        print(a)
    else:
        print("Friendship")

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()