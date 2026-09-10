import sys
input = lambda: sys.stdin.readline().rstrip()
n = int(input())
v=[]
for i in range(n):
    sv, x, y = map(str, input().split()) 
    v.append([sv, int(x), int(y), 1e10, 1e10, False, i])
v.sort(key=lambda x: (1 if x[0] =="E" else 0, x[2] if x[0] == "E" else x[1]) )
for i in range(n):
    for j in range(n):
        if (v[i][0]=="E"):
            if (v[j][0]=="N" and v[i][1] <= v[j][1] and v[j][2] <= v[i][2]):
                Ed = v[j][1]-v[i][1]
                Nd = v[i][2] - v[j][2]
                if Ed > Nd:
                    if v[j][3] > Ed:
                        v[i][5] = True
                        v[i][3] = min(v[i][3], Ed)
                elif Ed<Nd:
                    if v[i][3] > Nd:
                        v[j][5] = True
                        v[j][3] = min(v[j][3], Nd)


v.sort(key=lambda x: x[6])
for i in v:
    if i[5]:
        print(i[3])
    else:
        print('Infinity')