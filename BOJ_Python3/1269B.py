# TLE
input()
A = list(map(int, input().split()))
B = list(map(int, input().split()))

n = 0
for i in A + B:
    if i in A and i in B:
        n += 1

print(len(A) + len(B) - n)
