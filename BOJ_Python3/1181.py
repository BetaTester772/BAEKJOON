N = int(input())
slist = []

for i in range(N):
    s = input()
    if s not in slist:
        slist.append(s)

slist.sort()
slist.sort(key=lambda slist: len(slist))

for i in slist:
    print(i)
