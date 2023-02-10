def main():
    T = int(input())

    for _ in range(T):
        x1, y1, r1, x2, y2, r2 = map(int, input().split())

        # d = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)  # 부동 소수점
        # print("d:", d)

        if x1 == x2 and y1 == y2:  # 두 중심이 일치
            if r1 == r2:
                print(-1)
            else:
                print(0)
        elif (x1 - x2) ** 2 + (y1 - y2) ** 2 < r1 ** 2:  # O1 안에 O2, r2 < r1, r1 - r2 > 0
            if (r1 - r2) ** 2 == (x1 - x2) ** 2 + (y1 - y2) ** 2:
                print(1)
            elif (r1 - r2) ** 2 < (x1 - x2) ** 2 + (y1 - y2) ** 2:
                print(2)
            else:
                print(0)
        elif (x1 - x2) ** 2 + (y1 - y2) ** 2 < r2 ** 2:  # O2 안에 O1
            if (r2 - r1) ** 2 == (x1 - x2) ** 2 + (y1 - y2) ** 2:
                print(1)
            elif (r2 - r1) ** 2 < (x1 - x2) ** 2 + (y1 - y2) ** 2:
                print(2)
            else:
                print(0)

        elif (r1 + r2) ** 2 > (x1 - x2) ** 2 + (y1 - y2) ** 2:
            print(2)
        elif (r1 + r2) ** 2 == (x1 - x2) ** 2 + (y1 - y2) ** 2:
            print(1)
        elif (r1 + r2) ** 2 < (x1 - x2) ** 2 + (y1 - y2) ** 2:
            print(0)


if __name__ == '__main__':
    main()
