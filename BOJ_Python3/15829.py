N = int(input())
S = list(input())

H = 0
# ord()-96

for i in range(N):
    n = ord(S[i]) - 96
    H += n * 31 ** i

H %= 1234567891

print(H)