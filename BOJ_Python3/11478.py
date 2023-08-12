S = input()
set1 = set()

for i in range(1, len(S) + 1):
    for j in range(len(S)):
        s = S[j:j + i]
        if len(s) < i:
            break
        else:
            set1.add(s)

print(len(set1))
