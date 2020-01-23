a, b, c = map(int, input().split())
p = float((a + b + c) / 2)

if((a + b <= c) or (a + c <= b) or (b + c <= a)):
    print("ERROR")
else:
    if ((a * a == b * b + c * c) or (b * b == a * a + c * c) or (c * c == b * b + a * a)):
        print("直角三角形")
    elif ((a * a > c * c + b * b) or (c * c > a * a + b * b) or (b * b > a * a + c * c)):
        print("钝角三角形")
    else:
        print("锐角三角形")
    print("{:.2f}".format((p * (p - a) * (p - b) * (p - c)) ** 0.5))

#1031 水题，分支结构，已知三角形三边长求面积可以使用海伦公式S=sqrt[p(p-a)(p-b)(p-c)]，其中p为三角形半周长。
