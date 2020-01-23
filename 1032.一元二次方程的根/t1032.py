a, b, c = map(int, input().split())
if (b ** 2 - 4 * a * c) < 0:
    print("error")
else:
    x1 = float(((-1 * b) - ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a))
    x2 = float(((-1 * b) + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a))

    if x1 == x2:
        print("{:.0f}".format(x1))
    elif x1 > x2:
        print("{:.0f} {:.0f}".format(x2, x1))
    else:
        print("{:.0f} {:.0f}".format(x1, x2))

#1032 求根公式的运用。
