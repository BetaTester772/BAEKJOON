def check():
    global nlist
    for i in range(M, N + 1):
        j = 2
        while j < i:
            if i % j == 0:
                break
            j += 1
        if j == i:
            nlist.append(i)


M = int(input())
N = int(input())
nlist = []

check()
if nlist:
    print(sum(nlist), nlist[0])
else:
    print(-1)
