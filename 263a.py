matrix = []
for i in range(5):
    a = list(map(int, input().split()))
    matrix.append(a)
cords = ''
for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            cords = i, j
print(abs(cords[0]-2) + abs(cords[1]-2))