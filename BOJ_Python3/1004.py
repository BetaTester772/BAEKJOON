def d(x, y, c_x, c_y):
    return ((x - c_x) ** 2 + (y - c_y) ** 2) ** (1 / 2)


T = int(input())
for i in range(T):
    sum = 0
    x1, y1, x2, y2 = map(int, input().split())
    n = int(input())
    arr = []
    for j in range(n):
        c_x, c_y, r = map(int, input().split())
        if d(x1, y1, c_x, c_y) < r:
            sum += 1
        if d(x2, y2, c_x, c_y) < r:
            sum += 1
        if d(x1, y1, c_x, c_y) < r and d(x2, y2, c_x, c_y) < r:
            sum -= 2
    print(sum)
