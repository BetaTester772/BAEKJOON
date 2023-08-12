N, M = map(int, input().split())

dict1: dict[int, str] = {}
dict2: dict[str, int] = {}

for i in range(1, N+1):
    word = input()
    dict1[i] = word
    dict2[word] = i

for _ in range(M):
    word = input()
    if word.isdecimal():
        print(dict1[int(word)])
    else:
        print(dict2[word])
