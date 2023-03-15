N, M = map(int, input().split())
nlist = list(map(int, input().split()))

Max = 0

for i in range(N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):

            n = nlist[i] + nlist[j] + nlist[k]
            if M >= n > Max:
                Max = n
print(Max)
