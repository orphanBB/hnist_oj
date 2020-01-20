a = []
a = map(float, input().split())
total = 0

for x in a:
    total = total + x

print("{:.1f}".format( total / 3 ))

#1013 题目输入量比较少，所以完全可以用3个变量来做，用数组可能会更好。。。吧。。
