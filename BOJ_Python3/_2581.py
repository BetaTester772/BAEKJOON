def check(a):
    for i in range(2, a):
        if a % i == 0:
            return 0
    return 1


M = int(input())
N = int(input())
nlist = []
min = 0

for i in range(M, N + 1):
    if check(i):
        nlist.append(i)
        if min == 0:
            min = i
if len(nlist):
    print(sum(nlist))
    print(min)
else:
    print(-1)
