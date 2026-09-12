import sys
input = lambda: sys.stdin.readline().rstrip()

ii  = lambda: int(input())                       
mi  = lambda: map(int, input().split())          
li  = lambda: list(map(int, input().split()))    
si  = lambda: input()                            

yeah = lambda: print("YES")
nah  = lambda: print("NO")

def area(x1, y1, x2, y2, x3, y3):
    return (abs( x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) ))

def solve():
    n=ii()
    v=[]
    for i in range(n):
        x, y = mi()
        v.append([x, y])
    ans = 0
    
    for i in range(n):
        for j in range(n):
            for l in range(n):
                xx = v[l][1] == v[i][1] or v[l][1] == v[j][1] or v[i][1] == v[j][1]
                yy = v[l][0] == v[i][0] or v[l][0] == v[j][0] or v[i][0] == v[j][0]
                if xx and yy:
                    ans = max(ans, area(v[i][0], v[i][1], v[j][0], v[j][1], v[l][0], v[l][1]))
    print(ans)


def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()