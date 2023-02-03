nlist = []
for i in range(9):
    nlist.append(int(input()))
M = nlist[0]
for i in range(1, len(nlist)):
    if M < nlist[i]:
        M = nlist[i]
print(M)
print(nlist.index(M) + 1)
