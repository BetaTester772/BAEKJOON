def Euclidean(a, b):
    r = b % a
    if r == 0:
        return a
    return Euclidean(r, a)


A1, B1 = map(int, input().split())
A2, B2 = map(int, input().split())

A = A1 * B2 + A2 * B1
B = B1 * B2

n = Euclidean(A, B)

print(A // n, B // n)
