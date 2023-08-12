import sys
from collections import deque

N, M = map(int, sys.stdin.readline().split())
dict1 = {}

for _ in range(N):
    s = sys.stdin.readline()
    dict1[s] = True

slist = []

for _ in range(M):
    s = sys.stdin.readline()
    if dict1.get(s):
        slist.append(s)

slist.sort()
answer = ""
for i in slist:
    answer += i

sys.stdout.write(str(len(slist)) + '\n')
sys.stdout.write(answer)
