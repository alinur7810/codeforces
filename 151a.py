import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def solve():
    v = li()
    drink = ((v[1]*v[2])//v[6])
    lime  =(v[3]*v[4])
    salt = (v[5]//v[7])
    print(min(drink, salt, lime)//v[0])

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()