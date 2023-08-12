input()
A = set()
B = set()

for i in map(int, input().split()):
    A.add(i)

for i in map(int, input().split()):
    B.add(i)

print(len(A | B) - len(A & B))
