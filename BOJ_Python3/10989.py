nlist = [0] * 10002

N = int(input())
for _ in range(N):
    nlist[int(input())] += 1

for i in range(10002):
    for j in range(nlist[i]):
        print(i)
