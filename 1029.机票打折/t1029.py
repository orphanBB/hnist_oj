x = int(input())

if x < 1000:
    if x >= 500:
        print("{:.2f}".format(x * 0.8))
    elif x >= 200:
        print("{:.2f}".format(x * 0.9))
    else:
        print("{:.2f}".format(x))
else:
    print("{:.2f}".format(x * 0.5))
