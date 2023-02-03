h, m = map(int, input().split())
t = int(input())

if m + t >= 60:
    h = h + t // 60
    m = m + t % 60

    if m >= 60:
        h += 1
        m -= 60
    if h >= 24:
        h -= 24

else:
    m = m + t
    if h >= 24:
        h -= 24

print(h, m)
