x = int(input())

if x > 10:
    if x <= 20:
        print("{}".format((x - 10) * 7 + 60))
    else:
        print("{}".format((x - 20) * 10 + 130))
else:
    print("{}".format(x * 6))

#1030 水题，分支结构。
