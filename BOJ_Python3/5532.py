import sys


def main():
    L = int(sys.stdin.readline())
    A = int(sys.stdin.readline())
    B = int(sys.stdin.readline())
    C = int(sys.stdin.readline())
    D = int(sys.stdin.readline())

    n = A // C
    if A % C:
        n += 1
    m = B // D
    if B % D:
        m += 1

    L -= max(n, m)
    print(L)


if __name__ == '__main__':
    main()
