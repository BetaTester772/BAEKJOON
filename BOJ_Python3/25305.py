def main():
    N, k = map(int, input().split())
    nlist = list(map(int, input().split()))

    print(sorted(nlist)[N - k])


if __name__ == '__main__':
    main()
