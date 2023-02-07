A, B, V = map(int, input().split())

if (V - B) % (A - B) != 0:
    print(int((V - B) / (A - B) + 1))
else:
    print(int((V - B) / (A - B)))
