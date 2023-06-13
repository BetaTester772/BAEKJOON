n = int(input())
slist = []

for _ in range(n):
    S = list(input().split())
    if S[1] == 'enter':
        slist.append(S[0])
    elif S[1] == "leave":
        slist.remove(S[0])

for i in sorted(slist, reverse=True):
    print(i)
