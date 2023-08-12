def f(n):
    return a1 * n + a0


a1, a0 = map(int, input().split())
c = int(input())
n0 = int(input())

if a1 == c and a0 == 0 and a1 >= 0:
    print(1)
elif f(n0) <= c * n0:
    print(1)
else:
    print(0)
