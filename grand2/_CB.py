import numpy as np


def optimize(array1):
    array2 = list(array1)
    average1 = np.average(array1)

    for i in range(len(array2)):
        while array2[i] * 2 < average1:
            array2[i] *= 2

    return array2


def main():
    input()
    list1 = list(map(int, input().split()))
    print(np.average(list1))
    print(optimize(list1))


if __name__ == '__main__':
    main()
