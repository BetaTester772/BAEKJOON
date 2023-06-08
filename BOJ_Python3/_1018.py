N, M = map(int, input().split())
slist = []
nlist = []

for _ in range(N):
    slist.append(list(input()))

# 시작점 선택
for i in range(N - 7):
    for j in range(M - 7):
        print(i, j)
        print(slist[i][j])
        m = 0
        n = 0

        for k in range(i, i + 8):
            for l in range(j + (k % 2) - 1, j + 8, 2):
                if slist[i][j] == 'W':
                    if slist[k][l] != 'W':
                        n += 1
                else:
                    if slist[k][l] != 'B':
                        m += 1
                print(k, l, slist[k][l], n, m)
        print()
        for k in range(i, i + 8):
            for l in range(j - (k % 2) + 1, j + 8, 2):
                if slist[i][j] == 'W':
                    if slist[k][l] != 'B':
                        m += 1
                else:
                    if slist[k][l] != 'W':
                        n += 1
                print(k, l, slist[k][l], n, m)


        print(n, m)
        print()
        print()
        nlist.append(max([n, m]))

print(nlist)
print(min(nlist))
