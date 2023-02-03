t = int(input())
i = 0
result = 0
while (i < t):
    n = 0
    result = 0
    arr = list(input())
    for j in range(len(arr)):
        if arr[j] == 'O':
            result += n + 1
            n += 1
        if arr[j] == 'X':
            n = 0
    i += 1
    print(result)