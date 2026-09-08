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
        sv, x, y = map(str, input().split()) 
        v.append([sv, int(x), int(y), 1e10, 1e10, False, i])
    v.sort(key=lambda x: (1 if x[0] =="E" else 0, x[2] if x[0] == "E" else x[1]) )
    for i in range(n):
        for j in range(n):
            if (v[i][0]=="E"):
                if (v[j][0]=="N" and v[i][1] <= v[j][1] and v[j][2] <= v[i][2]):
                    Ed = v[i][1]-v[j][1]
                    Nd = v[j][2] - v[i][2]
                    if (Ed == Nd):
                        pass
                    elif Ed > Nd:
                        v[i][5] = True
                    else:
                        v[j][5] = True
            elif (v[i][0]=="N"):
                if (v[j][0]=="E" and v[i][1] >= v[j][1] and v[j][2] >= v[i][2]):
                    Ed = v[j][1]-v[i][1]
                    Nd = v[i][2] - v[j][2]
                    if (Ed == Nd):
                        pass
                    elif Ed > Nd:
                        v[j][5] = True
                    else:
                        v[i][5] = True

    v.sort(key=lambda x: x[6])
    for i in v:
        for j in i:
            print(j, end=' ')
        print()

def main():
    t = 1
    for _ in range(t):
        solve()
if __name__ == "__main__":
    main()