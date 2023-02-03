import sys

N = int(sys.stdin.readline().strip())
nlist = []
for i in range(N):
    nlist.append(int(sys.stdin.readline().strip()))
nlist.sort()
for i in nlist:
    print(i)
