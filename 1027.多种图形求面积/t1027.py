a = []
a = list(map(int, input().split()))

if a[0] == 1:
    print("{:.0f}".format(a[1] * a[2]))
elif a[0] == 2:
    print("{:.0f}".format(a[1] * a[2] * 0.5))
else:
    print("{:.0f}".format(a[1] ** 2 * 3.1415926))

#1027 水题，还是一个很经典的分支结构。
