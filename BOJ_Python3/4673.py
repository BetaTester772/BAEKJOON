def d(n):
    num = n
    while n > 0:
        num += n % 10
        n //= 10
    return num


nlist = []

for i in range(1, 10001):
    nlist.append(d(i))

for i in range(1, 10001):
    if i not in nlist:
        print(i)
