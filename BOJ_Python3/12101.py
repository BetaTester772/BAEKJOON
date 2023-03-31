import sys


def dp(n, k):
    if k == a:
        return n
    if n == 1:
        return 1
    elif n == 2:
        return 2
    elif n == 3:
        return 4
    else:
        return f"{dp(n - 1, k + 1)} + {dp(n - 2, k + 1)} + {dp(n - 3, k + 1)}"

a = 1
n, k = map(int, input().split())
print(dp(n, a))
