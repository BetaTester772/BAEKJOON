xaxis = []
yaxis = []

for i in range(3):
    a, b = map(int, input().split())
    xaxis.append(a)
    yaxis.append(b)

xaxis.sort()
yaxis.sort()

if xaxis[0] == xaxis[1]:
    print(xaxis[2], end=' ')
else:
    print(xaxis[0], end=' ')

if yaxis[0] == yaxis[1]:
    print(yaxis[2])
else:
    print(yaxis[0])
