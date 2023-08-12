import sys

from math import sqrt
import sys


def is_prime(n):
    N = int(sqrt(n)) + 1
    for i in range(2, N + 1):
        if n % i == 0:
            return False
    return True


M, N = map(int, sys.stdin.readline().split())

for i in range(M, N + 1):
    if i == 1:
        continue
    if i == 2:
        print(2)
    if is_prime(i):
        print(i)
