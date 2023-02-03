def check():
    global temp
    for i in range(9):
        for j in range(9):
            for k in range(9):
                for l in range(9):
                    for m in range(9):
                        for n in range(9):
                            for o in range(9):
                                temp = [nlist[i], nlist[j], nlist[k], nlist[l], nlist[m], nlist[n], nlist[o]]
                                if len(temp) != len(set(temp)):
                                    continue
                                sum = 0
                                for t in temp:
                                    sum += t
                                if sum == 100:
                                    return 0


nlist = []
for i in range(9):
    nlist.append(int(input()))
nlist.sort()
temp = []
check()
temp.sort()
for i in temp:
    print(i)
