M, N = map(int, input().split())

alist = [2, 3, 5, 7]

for i in range(2, N + 1):
    a = False
    for j in alist:
        if i % j == 0:
            a = False
            break
        else:
            a = True
    if a:
        alist.append(i)


for i in alist:
    if i > M:
        print(i)
