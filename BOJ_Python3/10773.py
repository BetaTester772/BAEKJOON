K = int(input())
List = []

for i in range(K):
    N = int(input())

    if N == 0:
        List.pop(len(List) - 1)
    else:
        List.append(N)

S = 0
for i in range(len(List)):
    S += List[i]

print(S)
