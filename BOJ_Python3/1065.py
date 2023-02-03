N = int(input())


def hansoo(n):
    if len(n) == 1 or len(n) == 2:
        return 1
    elif len(n) == 3 and n[0] - n[1] == n[1] - n[2]:
        return 1
    elif len(n) == 4 and (n[0] - n[1] == n[1] - n[2] and n[1] - n[2] == n[2] - n[3]):
        return 1
    else:
        return 0


num = 0
for i in range(1, N + 1):
    num += hansoo(list(map(int, str(i))))

print(num)
