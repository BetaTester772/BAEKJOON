N, M = map(int, input().split())
S = []
T = []

for _ in range(N):
    S.append(input())
for _ in range(M):
    T.append(input())
n = 0
for i in S:
    n += T.count(i)

print(n)