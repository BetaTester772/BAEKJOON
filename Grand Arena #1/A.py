socks = []
for _ in range(5):
    socks.append(int(input()))

socks.sort()

while len(socks) > 1:
    for i in range(1, len(socks)):
        if socks[0] == socks[i]:
            socks.pop(i)
            socks.pop(0)
            break
        elif i == len(socks) - 1:
            print(socks[0])
            exit()
    # print(socks)

print(socks[0])
