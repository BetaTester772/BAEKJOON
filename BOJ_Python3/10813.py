def main():
    N, M = map(int, input().split())
    nlist = list(range(1, N + 1))
    for _ in range(M):
        i, j = map(int, input().split())
        temp = nlist[i - 1]
        nlist[i - 1] = nlist[j - 1]
        nlist[j - 1] = temp
    for i in nlist:
        print(i, end=' ')


if __name__ == '__main__':
    main()
