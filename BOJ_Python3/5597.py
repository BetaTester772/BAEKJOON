alist = list(range(1, 31))

for i in range(28):
    a = int(input())
    if a in alist:
        alist.pop(alist.index(a))
alist.sort()
print(alist[0])
print(alist[1])
