import sys

N = int(input())
slist = []
for i in range(N):
    slist.append(sys.stdin.readline())

slist.sort()
print(slist)
i = True
while i:
    for j in range(N - 1):
        if len(slist[j]) > len(slist[j + 1]):
            temp = slist[j]
            slist[j] = slist[j + 1]
            slist[j + 1] = temp
            break
        if j == N-2:
            i = False

already = []
for s in slist:
    if s not in already:
        already.append(s)
        print(s, end='')
