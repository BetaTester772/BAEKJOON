nlist = []
n = 0

for i in range(10):
    a = (int(input()) % 42)
    if a not in nlist:
        nlist.append(a)
        n += 1

print(n)
