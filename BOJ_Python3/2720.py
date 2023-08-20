def solve(n):
    Quarter = n // 25
    n %= 25
    Dime = n // 10
    n %= 10
    Nickel = n // 5
    n %= 5
    Penny = n // 1

    print(Quarter, Dime, Nickel, Penny)


def main():
    T = int(input())

    for _ in range(T):
        solve(int(input()))


main()
