def F(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return F(n - 1) + F(n - 2)


n = int(input())
print(F(n))
