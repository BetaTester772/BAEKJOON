import sys


def main():
    N = int(input())
    nlist = []
    for i in range(N):
        nlist.append(list(map(int, sys.stdin.readline().split())))
    nlist.sort(key=lambda x: (x[0], x[1]))
    for _ in nlist:
        print(_[0], end=' ')
        print(_[1])


if __name__ == '__main__':
    main()
