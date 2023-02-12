def bin_search(array, N, key):
    pl = 0
    pr = N - 1

    while True:
        pc = (pl + pr) // 2
        if array[pc] == key:
            return 1
        elif array[pc] < key:
            pl = pc + 1
        else:
            pr = pc - 1

        if pl > pr:
            return 0

def check(temp):
    global num
    # print(ban)
    for l in range(len(ban)):
        # if ban[l][0] in temp and ban[l][1] in temp:
        #     return 0
        if bin_search(temp, 3, ban[l][0]) == 1 and bin_search(temp, 3, ban[l][1]) == 1:
            return 0

    num += 1
    already.append(temp)
    # print(temp)
    # print(temp)


def main():
    for _ in range(M):
        ban.append(tuple(map(int, input().split())))
    for i in range(1, N + 1):
        for j in range(i + 1, N + 1):
            for k in range(j + 1, N + 1):
                temp = [i, j, k]
                # print(temp)
                check(temp)
    print(num)


if __name__ == '__main__':
    ban = []
    already = []
    num = 0
    N, M = map(int, input().split())
    main()
