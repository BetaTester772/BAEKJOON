# print(chr(ord('A') + 32))
N = int(input())
for i in range(N):
    S = list(input())
    for j in S:
        if ord(j) < 91:
            print(chr(ord(j) + 32), end='')
        else:
            print(j, end='')
    print()
