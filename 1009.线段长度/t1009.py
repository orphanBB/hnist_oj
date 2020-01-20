xa,ya = map(float, input().split())
xb,yb = map(float, input().split())

print("{:.2f}".format(((ya-yb)*(ya-yb)+(xa-xb)*(xa-xb)) ** 0.5))

#1009 u1s1我有时候真的觉得这个oj扯得很。。照常水题，考一个浮点数平方和的平方根。
