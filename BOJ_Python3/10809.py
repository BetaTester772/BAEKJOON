S = input()

slist = [-1 for _ in range(26)]

for i in range(len(S)):
    if slist[ord(S[i])-97] == -1:
        slist[ord(S[i])-97] = i
for i in slist:
    print(i, end=' ')
