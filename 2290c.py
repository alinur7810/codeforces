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
    v=li()
    sv = sorted(v)
    m = [0] * n
    i=0
    j=n-1
    k=0
    if n!=1:
        while (i<j):
            m[i] = sv[k]
            k+=1
            m[j] = sv[k]
            k+=1
            i+=1
            j-=1
            if i == j:
                m[i]=sv[k]
    elif n==1:
        print(1)
        print(sv[0])
        return
    maxx = -1e9
    s = [0]*n
    for i in range(n):
        if m[i]>maxx:
            maxx=m[i]
            s[i]=1

    maxx = -1e9
    for i in range(n-1, -1, -1):
        if m[i] > maxx:
            maxx = m[i]
            s[i]=1
    print(sum(s))
    print(*m)

def main():

    t = 1
    t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()