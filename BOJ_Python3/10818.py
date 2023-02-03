N = int(input())
nlist = list(map(int, input().split()))
M = nlist[0]
m = nlist[0]
for i in range(1, len(nlist)):
    if M < nlist[i]:
        M = nlist[i]
    if m > nlist[i]:
        m = nlist[i]
print(m, M)
