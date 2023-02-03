List = []
N = int(input())

for i in range(N):
    S = input()
    if S[:4] == 'push':
        List.append(int(S[5:]))
    elif S == 'pop':
        if len(List) == 0:
            print(-1)
            continue
        print(List[len(List) - 1])
        List.pop(len(List) - 1)
    elif S == "size":
        print(len(List))
    elif S == 'empty':
        if len(List) == 0:
            print(1)
        else:
            print(0)
    elif S == 'top':
        if len(List) == 0:
            print(-1)
            continue
        print(List[len(List) - 1])
