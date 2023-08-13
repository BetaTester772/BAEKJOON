nlist = []

def main():
    global nlist
    N, M = map(int, input().split())
    nlist = list(range(1, N+1))
    for _ in range(M):
        i, j, k = map(int, input().split())
        change(i, j, k)

def change(i, j, k):
    global nlist
    temp = nlist[i - 1:j]
    for l in range(i-1, k - 1):
        nlist.insert(j, nlist[k - l])
    print(nlist)
    for l in range(i - 1, k - 1):
        nlist.pop(i - 1)
    print(nlist)


if __name__ == '__main__':
    main()