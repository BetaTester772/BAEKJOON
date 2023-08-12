import sys

n = int(sys.stdin.readline().rstrip())

num = (n - 1) * (n) * (n - 2) // 6

# for i in range(1, n - 1):
#     for j in range(i + 1, n):
#         num = 0
#         for k in range(j + 1, n + 1):
#             num += 1
#         print(num)

sys.stdout.write(f"{num}\n3")
