from collections import defaultdict
import sys

N = int(sys.stdin.readline())
list1 = list(map(int, sys.stdin.readline().split()))

counter = defaultdict(int)
for num in list1:
    counter[num] += 1

M = int(sys.stdin.readline())
list2 = list(map(int, sys.stdin.readline().split()))

nlist = []
for num in list2:
    count = counter[num]
    nlist.append(count)

answer = " ".join(map(str, nlist))
print(answer)
