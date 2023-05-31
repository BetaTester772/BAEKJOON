slist = [[], [], [], [], [], [], [], [], [], [], [], [], [], [], []]

for _ in range(5):
    string = list(input())
    for i in range(len(string)):
        slist[i].append(string[i])

for i in slist:
    for j in i:
        print(j, end='')
    