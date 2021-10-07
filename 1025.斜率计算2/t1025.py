def zzxcf(a, b):
    a, b = abs(a), abs(b)
    if a > b:
        a, b = b, a
    while a != 0:
        a, b = b % a, a
    return b

x1, y1, x2, y2 = map(int, input().split())

deltaX, deltaY = (x1 - x2), (y1 - y2)

if deltaX == 0:
    print("-1")
else:
    if (deltaX > 0) ^ (deltaY > 0):
        print("-{:.0f}/{:.0f}".format(abs(deltaY) / zzxcf(deltaX, deltaY), abs(deltaX) / zzxcf(deltaX, deltaY)))
    else:
        print("{:.0f}/{:.0f}".format(abs(deltaY) / zzxcf(deltaX, deltaY), abs(deltaX) / zzxcf(deltaX, deltaY)))

#1025 这个题开始有点小小的难度了，最简分数要求一个约分问题，斜率不存在要求考虑特殊情况。
#     首先来考虑答案的符号问题。可以通过异或的形式编写判断表达式，即同号为正，异号为负。
#     然后是约分的问题。只要分数的分子分母同时除以二者绝对值的最大公约数即可，这里采用的是辗转相除法。
#     最后输出时记得采用分子分母的绝对值进行输出哦。
