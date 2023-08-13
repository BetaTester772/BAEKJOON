import numpy as np

def optimize(array1, n):
    if n > len(array1) - 1:
        return array1

    array2 = list(array1)
    std1 = np.std(array1)

    array2[n] *= 2

    if np.std(array2) > std1:
        return optimize(array1, n + 1)
    else:
        return optimize(array2, n)


def main():
    input()
    list1 = list(map(int, input().split()))
    print(optimize(list1, 0))


if __name__ == '__main__':
    main()
