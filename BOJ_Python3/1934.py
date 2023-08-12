def Euclidean(a, b):
    r = b % a
    if r == 0:
        return a
    return Euclidean(r, a)


T = int(input())
for _ in range(T):
    A, B = map(int, input().split())
    n = Euclidean(A, B)

    print(n * (A // n) * (B // n))
