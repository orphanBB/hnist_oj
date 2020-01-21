import math

alpha = float(input())
print("{:.2f}\n{:.2f}".format(math.sin(alpha * (math.pi / 180)), math.cos(alpha * (math.pi / 180))))

#1011 老水题，需要注意的是math.h库中三角函数函数中参数对应的是弧度而非角度。
