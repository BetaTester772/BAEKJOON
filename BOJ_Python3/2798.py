N, M = map(int, input().split())
nlist = list(map(int, input().split()))

Max = 0

for i in nlist:
    for j in nlist:
        for k in nlist:

            n = i + j + k
            if M >= n > Max and len({i, j, k}) == 3:
                Max = n
print(Max)
