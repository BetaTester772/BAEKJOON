def main():
    N = int(input())
    num = 0
    for i in range(N):
        num += int(input())

    if num > 0:
        print('+')
    elif num < 0:
        print('-')
    else:
        print(0)


if __name__ == '__main__':
    for _ in range(3):
        main()
