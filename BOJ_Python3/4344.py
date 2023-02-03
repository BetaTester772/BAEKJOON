C = int(input())
for i in range(C):
    nlist = list(map(int, input().split()))
    nlist.pop(0)
    n = 0
    for j in range(len(nlist)):
        n += nlist[j]
    n /= len(nlist)
    m = 0
    for j in range(len(nlist)):
        if nlist[j] > n:
            m += 1
    S = (round(m / len(nlist) * 100, 3))
    print(format(S, ".3f") + '%')
