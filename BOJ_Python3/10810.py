def main():
    N, M = map(int, input().split())
    nlist = [0 for _ in range(N)]
    for _ in range(M):
        i, j, k = map(int, input().split())
        for l in range(i - 1, j):
            nlist[l] = k
    for i in nlist:
        print(i, end=' ')


if __name__ == '__main__':
    main()
