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
    v=[]
    for i in range(n):
        s, p = map(str, input().split()) 
        v.append((s, int(p)))

    
    ans=1e9
    for s1, p1 in v:
        cur=0
        for s2, p2 in v:
            if s2 =="G" and p1<p2:
                cur+=1
            elif s2 == "L" and p2<p1:
                cur+=1
        ans = min(ans, cur)
    print(ans)
                    

def main():

    t = 1
    # t = ii()

    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()