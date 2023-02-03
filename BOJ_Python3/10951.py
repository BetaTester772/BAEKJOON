S = input()

while True:
    try:
        A, B = map(int, S.split())
        print(A + B)
        S = input()
    except EOFError:
        break
