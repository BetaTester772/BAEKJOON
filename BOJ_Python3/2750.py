def main():
    N = int(input())
    nlist = []
    for i in range(N):
        nlist.append(int(input()))
    nlist.sort()
    for i in range(N):
        print(nlist[i])


if __name__ == '__main__':
    main()
