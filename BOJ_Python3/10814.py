N = int(input())

slist = []

for i in range(N):
    slist.append(list(map(str, input().split())))
    slist[i][0] = int(slist[i][0])

slist.sort(key=lambda slist: slist[0])

for i in range(N):
    print(slist[i][0], slist[i][1])
