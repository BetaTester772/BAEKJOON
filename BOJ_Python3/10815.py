N = int(input())
list1 = list(map(int, input().split()))
list1.sort()
M = int(input())
list2 = list(map(int, input().split()))



def bin_search(key):
    pl = 0
    pr = N - 1

    while True:
        pc = (pl + pr) // 2
        if list1[pc] == key:
            return 1
        elif list1[pc] < key:
            pl = pc + 1
        else:
            pr = pc - 1

        if pl > pr:
            return 0


for i in list2:
    print(bin_search(i), end=' ')
