# nlist = []

def change(a, b):
    global nlist
    temp = nlist[a]
    nlist[a] = nlist[b]
    nlist[b] = temp
    return 0


def check():
    global nlist
    t = 0
    for i in range(length - 1):
        if nlist[i] % 2 != nlist[i + 1] % 2:
            t += 1
    return t


if __name__ == '__main__':
    length = int(input())
    nlist = list(map(int, input().split()))
    templ = []
    templ.extend(nlist)

    even_r = 0
    while True:
        for i in range(length - 1):
            if check() <= 1:
                break
            if nlist[i] % 2 == 0:  # even_r
                change(i, i + 1)
                even_r += 1
                # print(nlist)
        break

    nlist = []
    nlist.extend(templ)
    odd_r = 0
    while True:
        for i in range(length - 1):
            if check() <= 1:
                break
            if nlist[i] % 2 == 1:  # odd
                change(i, i + 1)
                odd_r += 1
                # print(nlist)
        break

    nlist = []
    nlist.extend(templ)
    even_l = 0
    while True:
        for i in range(length - 1, -1, -1):
            if check() <= 1:
                break
            if nlist[i] % 2 == 0:  # even_r
                change(i, i - 1)
                even_l += 1
                # print(nlist)
        break

    nlist = []
    nlist.extend(templ)
    odd_l = 0
    while True:
        for i in range(length - 1, -1, -1):
            if check() <= 1:
                break
            if nlist[i] % 2 == 1:  # odd
                change(i, i - 1)
                odd_l += 1
                # print(nlist)
        break

    print(min(even_r, odd_r, even_l, odd_l))
