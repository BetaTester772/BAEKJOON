T = int(input())

for i in range(T):
    R, S = map(str, input().split())
    for j in range(len(S)):
        for k in range(int(R)):
            print(S[j], end='')
    print()
