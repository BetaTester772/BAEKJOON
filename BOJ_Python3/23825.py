a, b = map(int, input().split())

a //= 2
b //= 2

if a <= b:
    print(a)
else:
    print(b)
