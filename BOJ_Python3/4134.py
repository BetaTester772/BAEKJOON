from math import sqrt
import sys


def is_prime(n):
    N = int(sqrt(n)) + 1
    for i in range(2, N + 1):
        if n % i == 0:
            return False
    return True


def minimum_prime(num):
    expect = {0: True, 1: True, 2: True}
    try:
        if expect[num]:
            return 2
    except KeyError:
        pass
    i = num
    while True:
        if is_prime(i):
            return i
        else:
            i += 1


def main():
    T = int(sys.stdin.readline())
    for _ in range(T):
        num = int(sys.stdin.readline())
        sys.stdout.write(str(minimum_prime(num)) + '\n')


# print(minimum_prime(1))
main()
