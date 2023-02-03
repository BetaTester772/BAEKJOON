input()
nlist = list(map(int, input().split()))
M = nlist[0]
for i in range(1, len(nlist)):
    if nlist[i] > M:
        M = nlist[i]

n = 0
for i in range(len(nlist)):
    n += nlist[i] / M * 100

print(n / len(nlist))
