def main():
    n = int(input())
    nlist = []
    num = 0

    if n == -1:
        exit()

    for i in range(1, n):
        if n % i == 0:
            num += i
            nlist.append(i)

    # print(nlist, n == num)
    if n == num:
        print(n, '=', end=' ')
        for i in range(len(nlist) - 1):
            print(nlist[i], end=' + ')
        print(nlist[-1])
    else:
        print(n, 'is NOT perfect.')


while True:
    main()
