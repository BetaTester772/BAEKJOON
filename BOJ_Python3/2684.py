def main():
    list3 = {"TTT": 0, "TTH": 0, "THT": 0, "THH": 0, "HTT": 0, "HTH": 0, "HHT": 0, "HHH": 0}
    keys = list(list3.keys())
    S = input()
    for i in range(38):
        # S[i:i+3]
        for j in range(8):
            if S[i:i + 3] == keys[j]:
                list3[keys[j]] += 1
    for i in list(list3.values()):
        print(i, end=' ')
    print()


if __name__ == '__main__':
    P = int(input())
    for _ in range(P):
        main()
