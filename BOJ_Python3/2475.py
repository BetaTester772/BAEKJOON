a, b, c, d, e = map(int, input().split())

a **= 2
b **= 2
c **= 2
d **= 2
e **= 2

n = (a + b + c + d + e) % 10
print(n)