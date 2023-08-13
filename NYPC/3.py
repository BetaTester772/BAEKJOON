N = int(input())
candidates = []
for _ in range(N):
    candidates.append(input())

K = int(input())
for _ in range(K):
    class_ = input()
    for candidate in candidates:
        if candidate == class_:
            candidates.remove(candidate)

print(len(candidates))
print(*candidates, sep='\n')
