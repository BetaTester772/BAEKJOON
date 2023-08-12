from datetime import datetime


def calc(now, times):
    n = 0
    for time in times:
        if time >= now:
            n += 1
    return n


def main():
    now = datetime.strptime(input(), '%Y-%m-%d')
    N = int(input())
    times = []
    for i in range(N):
        times.append(datetime.strptime(input(), '%Y-%m-%d'))

    print(calc(now, times))


main()
