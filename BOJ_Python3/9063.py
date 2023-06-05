N = int(input())

x, y = map(int, input().split())
x1 = x
x2 = x
y1 = y
y2 = y

for _ in range(N - 1):
    x, y = map(int, input().split())
    if x > x1:
        x1 = x
    if x < x2:
        x2 = x
    if y > y1:
        y1 = y
    if y < y2:
        y2 = y
print((x1 - x2) * (y1 - y2))
