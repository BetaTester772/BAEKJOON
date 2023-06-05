N = int(input())
nlist = list(map(int, input().split()))
slist = sorted(set(nlist))


def bin_search(N, key):
    pl = 0
    pr = N - 1

    while True:
        pc = (pl + pr) // 2
        if slist[pc] == key:
            return pc
        elif slist[pc] < key:
            pl = pc + 1
        else:
            pr = pc - 1


for i in nlist:
    print(bin_search(len(slist), i), end=' ')
