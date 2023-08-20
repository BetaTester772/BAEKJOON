out_table = {
        'A': 10,
        'B': 11,
        'C': 12,
        'D': 13,
        'E': 14,
        'F': 15,
        'G': 16,
        'H': 17,
        'I': 18,
        'J': 19,
        'K': 20,
        'L': 21,
        'M': 22,
        'N': 23,
        'O': 24,
        'P': 25,
        'Q': 26,
        'R': 27,
        'S': 28,
        'T': 29,
        'U': 30,
        'V': 31,
        'W': 32,
        'X': 33,
        'Y': 34,
        'Z': 35
}


def main():
    N: str
    N, B = input().split()
    B = int(B)

    if B < 10:
        return int(N, B)

    result = 0
    for i in range(0, len(N)):
        if N[i].isdecimal():
            a = int(N[i]) * B ** (len(N) - 1 - i)
        else:
            a = out_table[N[i]] * B ** (len(N) - 1 - i)
        result += a
    return result


print(main())
