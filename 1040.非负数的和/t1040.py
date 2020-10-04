n = int(input())
x = list(map(int, input().split()))
total = 0

for i in range(n):
    if x[i] < 0:
        break
    total = x[i] + total

print("{}".format(total))

#1040 水题，考一个循环结构加上break语句的运用。
