def first(array, i):
    t = array[i].pop(-1)
    array[i].insert(0, t)
    return array


def second(array, N):
    A = [[-1] * N for _ in range(N)]

    for i in range(N):
        for j in range(N):
            A[j][N - i - 1] = array[i][j]

    return A


def pretty_print(array):
    for row in array:
        print(*row)


def main():
    N = int(input())
    array = [list(map(int, input().split())) for _ in range(N)]
    Q = int(input())
    for _ in range(Q):
        command = input()
        if command[0] == "1":
            array = first(array, int(command[2]) - 1)
        elif command == "2":
            array = second(array, N)
    pretty_print(array)


main()
