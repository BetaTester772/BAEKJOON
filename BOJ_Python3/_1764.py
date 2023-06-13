import sys
from collections import deque

N, M = map(int, sys.stdin.readline().split())
list1 = deque()
list2 = deque()

for _ in range(N):
    list1.append(sys.stdin.readline())

for _ in range(M):
    list2.append(sys.stdin.readline())

slist = []
for i in list1:
    try:
        a = list2.index(i)
        slist.append(list2[a])
    except:
        pass

slist.sort(reverse=True)
answer = ""
for i in slist:
    answer += i

print(answer)
