N = int(input())
nlist = []
N_ = N + 1

while N > 1:
    for i in range(2, N_):
        if N % i == 0:
            N //= i
            nlist.append(i)
            break

for i in nlist:
    print(i)
