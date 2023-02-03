N = int(input())
num = ((N // 10 + N % 10) % 10) + (N % 10) * 10
i = 1
while N != num:
    i += 1
    num = ((num // 10 + num % 10) % 10) + (num % 10) * 10
print(i)
