N, X = map(int, input().split())
nlist = list(map(int, input().split()))
for i in range(len(nlist)):
    if nlist[i] < X:
        print(nlist[i], end=' ')
