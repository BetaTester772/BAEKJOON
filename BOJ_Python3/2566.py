nlist = []
M = -1
p = ()

for i in range(9):
    nlist.append(list(map(int, input().split())))

for i in range(9):
    for j in range(9):
        if nlist[i][j] > M:
            M = nlist[i][j]
            p = (i, j)

print(M)
print(p[0] + 1, p[1] + 1)
