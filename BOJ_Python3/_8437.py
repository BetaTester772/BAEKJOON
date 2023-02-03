a = int(input())
b = int(input())
if a % 2 == 0:
    print(int(a / 2 + b / 2))
    print(int(a / 2 - b / 2))
else:
    print(int(a / 2 + 1 + b / 2))
    print(int(a / 2 + 1 - b / 2))
