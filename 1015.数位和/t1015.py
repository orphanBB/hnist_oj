str = input()
num = []

for i in range(len(str)):
    num.append(ord(str[i]) - ord('0'))

print("{} {} {}\n{}".format(num[0], num[1], num[2], (num[0] + num[1] + num[2])))

#1015 这道题是一个字符和整型转化问题，把字符一个个提出来减去‘0’的ascii即可得出答案。
