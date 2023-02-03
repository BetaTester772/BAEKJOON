a, b, c = map(int, input().split())

result = 0

# 3개
if a == b == c:
    result = a * 1000 + 10000
# 2개
elif a == b and a != c:
    result = a * 100 + 1000
elif a == c and a != b:
    result = a * 100 + 1000
elif b == c and a != b:
    result = b * 100 + 1000
# 0개
elif a > b > c or a > c > b:
    result = a * 100
elif b > a > c or b > c > a:
    result = b * 100
elif c > a > b or c > b > a:
    result = c * 100

print(result)
