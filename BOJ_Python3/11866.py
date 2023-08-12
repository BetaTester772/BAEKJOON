N, K = map(int, input().split())

queue = []
out = []

for _ in range(K):
    queue.extend(list(range(1, N + 1)))

for i in range(1, N):
    print(queue)
    print(queue.pop(i * K - i))
    # out.append(queue.pop(i * K - i))
#
# print("<", end='')
# for i in range(len(out) - 1):
#     print(out[i], end=', ')
# print(out[-1], end='>')
