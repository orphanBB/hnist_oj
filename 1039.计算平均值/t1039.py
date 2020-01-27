n = int(input())
x = list(map(int, input().split()))
total = 0

for i in range(n):
    total = x[i] + total

print("{:.2f}".format(total / n))

#1039 水题，考一个循环结构。
