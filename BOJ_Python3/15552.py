import sys

input = sys.stdin.readline
print = sys.stdout.write

T = int(input().rstrip())

for i in range(T):
    a, b = map(int, input().split())
    print(str(a + b) + '\n')
