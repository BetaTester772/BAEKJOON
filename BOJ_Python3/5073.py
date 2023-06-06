def main():
    a, b, c = map(int, input().split())

    if a == b == c:
        if a == 0:
            exit()
        else:
            return 'Equilateral'
    # print(max([a, b, c]), (a + b + c) - max([a, b, c]))
    if max([a, b, c]) >= ((a + b + c) - max([a, b, c])):
        return 'Invalid'
    elif a == b or b == c or c == a:
        return 'Isosceles'
    elif a != b != c:
        return 'Scalene'


if __name__ == '__main__':
    while True:
        print(main())
