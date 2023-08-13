N = int(input())

A = list(map(int, input().split()))


def check(array, i, j):
    multi = 1
    sum = 0
    for index in range(i, j + 1):
        sum += array[index]
        multi *= array[index]
    return multi == sum


result = 0
for i in range(N):
    for j in range(i, N):
        if check(A, i, j):
            result += 1
print(result)
