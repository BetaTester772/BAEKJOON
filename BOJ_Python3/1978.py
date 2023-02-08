N = int(input())
nlist = list(map(int, input().split()))
n = 0


def check(a):
    if a < 2:
        return 0
    for i in range(2, a):
        if a % i == 0:
            return 0
    return 1


for _ in range(N):
    n += check(nlist[_])

print(n)
