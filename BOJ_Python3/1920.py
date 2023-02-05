# 이진 탐색으로 풀어야 함
import sys


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


N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
B = list(map(int, sys.stdin.readline().split()))
A.sort()

for i in range(M):
    print(bin_search(A, N, B[i]))
