def 능력치(levels):
    능력치_ = 0
    for level in levels:
        if level >= 250:
            능력치_ += 5
        elif level >= 200:
            능력치_ += 4
        elif level >= 140:
            능력치_ += 3
        elif level >= 100:
            능력치_ += 2
        elif level >= 60:
            능력치_ += 1
    return 능력치_


def main():
    N = int(input())
    levels = [int(input()) for _ in range(N)]
    levels.sort(reverse=True)
    levels = levels[:42]
    print(sum(levels), 능력치(levels))


main()
