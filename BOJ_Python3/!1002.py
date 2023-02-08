from math import sqrt

T = int(input())

for _ in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())

    d = sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
    if x1 != x2 or y1 != y2:
        if r1 + r2 > d:
            print(2)
        elif r1 + r2 == d:
            print(1)
        elif r1 + r2 < d:
            print(0)
    elif r1 != r2:
        print(0)
    else:
        print(-1)
