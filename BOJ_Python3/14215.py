a, b, c = map(int, input().split())

for i in range(a, 0, -1):
    for j in range(b, 0, -1):
        for k in range(c, 0, -1):
            if max([i, j, k]) < ((i + j + k) - max([i, j, k])):
                print(i + j + k)
                exit()
