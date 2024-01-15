import sys

sys.setrecursionlimit(10 ** 6)


def input():
    return sys.stdin.readline().rstrip()


N = int(input())
M = int(input())
R = 1

E = [[] for _ in range(N)]

for _ in range(M):
    u, v = map(int, input().split())
    E[u - 1].append(v - 1)
    E[v - 1].append(u - 1)

V = [i for i in range(N)]
visited = [0 for _ in range(N)]


def dfs(V: list, E: list, R: int):
    global visited
    visited[R] = 1

    for x in E[R]:
        if visited[x] == 0:
            dfs(V, E, x)


dfs(V, E, R - 1)
print(visited.count(1) - 1)
